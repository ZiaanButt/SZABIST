#include<iostream>
using namespace std;

int main()
{  

    //-------------Program 1----------------//
	char name[50];
	int age;
	cout<< "Please enter your name : "<< endl;
	cin >> name ;
	cout<< "Please enter your age : " << endl;
	cin>> age ;
	cout<<"Your name is: "<< name<< endl;
	cout<<"Your age is: "<< age << endl;

//-------------------Program 2-------------//
    int n1, n2, add, sub, mul ;
    float div;
	cout<<"Enter the first number: "<< endl;
	cin >> n1;
	cout<<"Enter the second number: "<< endl;
	cin>> n2;
	add = n1+n2;
	sub = n1-n2;
	mul = n1*n2;
	div = n1/n2;
	cout<<"The sum of "<<n1<<" and "<< n2<<" is : "<<add<< endl;
    cout<<"The Subtraction of "<<n1<<" and "<< n2<<" is : "<<sub<< endl;
	cout<<"The product of "<<n1<<" and "<< n2<<" is : "<<mul<< endl;
	cout<<"The division of "<<n1<<" and "<< n2<<" results in : "<<div<< endl;	
	return 0;
	
}


