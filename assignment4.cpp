#include<iostream>
using namespace std;
    int main() {
    int num[10];
    int temp;
    for(int i = 0; i < 10; i++) {
    cout << "Enter a number: ";
    cin >> num[i];
}
    for (int i = 0 ; i < 9; i++) {
    for (int j = i + 1; j < 10; j++) {
    if (num[i] > num[j]) {
    temp = num[j];
    num[j] = num[i];
    num[i] = temp;
}
}
}
    for(int i = 0; i < 10; i++) {
    cout << num[i] << endl;
}
}