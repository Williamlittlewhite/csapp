#include "thread.h"
//该程序不能使用g++编译 有些特殊的c库特性的！
void Ta() {while(1){printf("a");}}
void Tb() {while(1){printf("b");}}

int main()
{
 create(Ta);
 create(Tb);
}

