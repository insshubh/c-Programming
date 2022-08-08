 #include<iostream>
 using namespace std;

long long int factorial(int num) {
    long long int fact = 1;
    for(int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int number ;
    cout << "Enter a number to print factorial --> ";
    cin >> number;
    cout << endl << "Factorial of "<<number <<" is "<<factorial(number);
    return 0;
}