#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    int even = 0 ,odd = 0;
    while(num != 0){
        if(num%2 == 0){
           even++; 
        }else{
            odd++;
        }
        cout << "Enter an integer: ";
        cin >> num;
    }
    
    cout << "#Even numbers = " << even <<"\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
