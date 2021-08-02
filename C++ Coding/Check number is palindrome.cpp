#include<iostream>
using namespace std;
int main()
{
    int no,num,digit,rev=0;
    cout <<"Enter a number to be checked "<<endl;
    cin>>num;

    no=num; // after reversing the number we will compare.

    do{
        digit=num%10; 
        rev=rev*10+digit;
        num/=10;
    }while(num!=0);

    cout<<"The reverse of the number is "<<rev<<endl;

    if (no==rev)
    cout<<"The number is palindrome "<<endl;
    else 
    cout << "The number is not palindrome "<<endl;

    return 0; 

}