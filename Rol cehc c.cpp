#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

return randnum()
{
  int rolls;
  int random;
  int min = 1;
  int max = 20;
 
  cout << "Enter the number of d20 rolls" << endl;
  cin >> rolls;
  cout << "Your " << rolls << " dice rolls are " << endl;
  srand(time(NULL));
  for(int i=0;i<rolls;i++)
  {
    random=rand()%max + min;
    cout<<random<<endl;
  }
}
int main()
{
  randnum();
  return 0;
}



