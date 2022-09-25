#include"thread.h"

int x = 0;

void Thello(int id)
{
    printf("Thread id : %d \n",id);
    usleep(id*100000);
    printf("Hello from thread %c\n","123456789ABCDEFG"[x++]);
}

int main()
{
    for(int i = 0; i<10; i++)
        create(Thello);
}
