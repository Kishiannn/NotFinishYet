#include <iostream>
using namespace std;
using std::cout;
using std::endl;

int main()
{
  int myNum;
  string response;
  
  cout << "Enter a number you want: " << endl;
  cin >> myNum; 

  srand(time(0));

  int theNum = rand() % 100 + 1;

  do{
    if(theNum > myNum){
      cout << "The Number I Choose is: " << theNum << endl;
      cout << " The Number i Choose is too high\n" << endl;
      cout << "\n The Number Real Number is: " << myNum << endl;
    }if(theNum < myNum){
      cout << "The Number I Choose is: " << theNum << endl;
      cout << " The Number i Choose is too low\n" << endl;
      cout << "\n The Number Real Number is: " << myNum << endl;
    }if(theNum == myNum){
      cout << "The Number I Choose is: " << theNum << endl;
      cout << " The Number Real Number is: " << myNum << "\n" << endl;
      cout << "\nYeyyyy i Guess it" << endl;
    }
  }
  while(theNum == !myNum);
  }
