#include<bits/stdc++.h>
#include<thread>
#include<unistd.h>
using namespace std;
int x;
int foo(int x)
{
  // do stuff...
  cout << "foo is \n";
  sleep(1000);
  x++;
  cout <<"X: "<<x <<endl;
  return x;

}

int bar(int x)
{
  cout <<"bar" <<endl;
  x++;
  cout <<"X: " <<x<<endl;
  return x;
}

int main()
{


  thread first (foo,9);     // spawn new thread that calls foo()
  thread second (bar,9);  // spawn new thread that calls bar(0)

  cout << "main, foo and bar now execute concurrently...\n";

  // synchronize threads:
  first.join();                // pauses until first finishes
  second.join();               // pauses until second finishe
  cout << "foo and bar completed.\n";
  cout << x <<endl;

  return 0;
}
