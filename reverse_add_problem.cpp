#include <iostream>
// Function to reverse a given number
int reverseNumber(int num) {
int reversed = 0;
while (num > 0) {
reversed = reversed * 10 + num % 10;
num /= 10;
}
return reversed;
}
// Function to check if a number is a palindrome
bool isPalindrome(int num) {
int reversed = reverseNumber(num);
return num == reversed;
}
// Function to perform reverse and add operation
void reverseAndAdd(int num) {
int iterations = 0;
while (!isPalindrome(num)) {
int reversed = reverseNumber(num);
num += reversed;
iterations++;
}
std::cout << iterations << " " << num << std::endl;
}
int main() {
int n;
std::cout << "Enter the number of test cases: ";
std::cin >> n;
for (int i = 0; i < n; i++) {
int num;
std::cout << "Enter the number for test case " << (i + 1) << ": ";
std::cin >> num;
reverseAndAdd(num);
}
return 0;
}