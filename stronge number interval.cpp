/* program to calculate the logic of interval of stronge number by using reference */
#include<iostream>
using namespace std;
int factorial(int number);
int isStrong(int &number);
int printStronge(int &start, int &end);
int main() {
	int st_number,end_number;
	cout<<"Enter the Starting number: ";
	cin>>st_number;
	cout<<"Enter the Ending number: ";
	cin>>end_number;
	cout<<"The Interval of "<<st_number<<" to "<<end_number<<" is = ";
	printStronge(st_number,end_number);
}
int factorial(int number) {
	int fact = 1;
	for(int i=1; i<=number; i++) {
		fact *= i;
	}
	number = fact;
	return number;
}
int isStronge(int &number) {
	int sum=0,result;
	int temp,i,remainder;
	temp = number;
	while(temp != 0) {
		remainder = temp%10;
		result = factorial(remainder);
		sum += result;
		temp /= 10;
	}
	if(sum == number) {
		return 1;
	}
	else {
		return 0;
	}
}
int printStronge(int &start, int &end) {
	while(start <= end) {
		if(isStronge(start)) {
			cout<<start<<", ";
		}
		start++;
	}
	return 0;
}
