#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 40; i++)
    {
        /* code */
        
        if (i==3){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}