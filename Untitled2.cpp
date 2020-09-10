#include<bits/stdc++.h>
#include<thread>
using namespace std;
int localval=11;
void func1(int value)
{
    cout <<"func1 "<<endl;
    cout << "val : " <<++value <<endl;
}
int main()
{

    thread t1(func1,localval);
    t1.join();
    //t1.detach();
    cout << "value in main "<<localval <<endl;


    return 0;
}
