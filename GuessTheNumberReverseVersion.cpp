#include <iostream>
using namespace std;
using std::cout;
using std::endl;

int main()
{
  int myNum;

    cout << "Enter a number you want: " << endl;
    cin >> myNum; 

  do{
    srand(time(0));
    int theNum = rand();


    int num = (theNum % 10) + 1;

    if(num == myNum)
    cout << "The Number I Choose is: " << num << endl;
    cout << "\nYeyyyy i Guess it" << endl;
  }
  while(num != myNum);
  return 0;
}
