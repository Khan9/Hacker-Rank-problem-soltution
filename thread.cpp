#include<bits/stdc++.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

void  threadFunc1(int arg)
{
    cout << ++arg <<endl;

}
void * threadFunc2(void *arg)
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("%s\n",(char*)arg);
    }

}


int main(void)
{
    pthread_t thread1;
    pthread_t thread2;
    char * message1 = "thread 1";
    char * message2 = "Thread 2";
    int arg = 1;


    pthread_create(thread1,NULL,threadFunc1,(int)arg);

    return 0;
}
