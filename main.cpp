#include <iostream>

using namespace std;

double findFactorialRecursive(double num);
double findFactorialIterative(double num);

double findFactorialRecursive(double num) {
    if (num <= 1)
        return 1;
    return num * findFactorialRecursive(num - 1);
}

double findFactorialIterative(double num) {
    double answer = 1;
    if (num == 2) {
        answer = 2;
    }
    for (double i = 2; i <= num; i++)
        answer = answer * i;
    return answer;
}

int main(){
    
    double Recur = findFactorialRecursive(5);
    double Itera = findFactorialIterative(5);
    cout << Recur << endl;
    cout << Itera << endl;
    return 0;
}