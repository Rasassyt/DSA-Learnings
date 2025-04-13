#include <iostream>
using namespace std;

bool isPalindrome(int N){
    int digit,rev=0,original = N;
    while(N>0){
        digit=N%10;
        rev=(rev*10)+digit;
        N/=10;
    }
    return original == rev;
};
int main(){
    int N;
    cout<<"Enter a number: ";
    cin>>N;
     cout << "isPalindrome:" << (isPalindrome(N) ? "true":"false")<<endl;
     return 0;

}