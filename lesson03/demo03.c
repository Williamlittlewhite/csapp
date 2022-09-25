#include"thread.h"
__thread char* base,*cur;
__thread int id;

void stackoverflow(int n)
{
    cur  = (char*)&n;
    if(n%1024 == 0){
        int sz = base - cur;
        printf("Stack size of T%d >= %d KB\n",id,sz/1024);
    }
    stackoverflow(n+1);
}

void Tprobe(int tid)
{
    id = tid;
    base = (char *)&tid;
    stackoverflow(0);
}
int main()
{
    setbuf(stdout,NULL);
    for(int i=0;i<4;i++)
        create(Tprobe);

}
