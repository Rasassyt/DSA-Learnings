#include <iostream>
using namespace std;
int findFact(int X){
    int fact = 1;
    for(int i = 2; i <= X; i++){
        fact=fact*i;
    }
    return fact;
};
int main(){
    int X;
    cout << "enter a digit:";
    cin >> X;
    cout << "Factorial of x is :" << findFact(X) << endl;
    return 0;
}