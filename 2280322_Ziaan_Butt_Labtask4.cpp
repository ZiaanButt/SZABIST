#include<iostream>
#include<string>
using namespace std;
int main()
{
	//-----ZIAAN BUTT-2280322 LAB-TASK 4 HOME-ACTIVITY------//
	//--------------------------TASK 1---------------------//
	string Name;
	float Sub_1, Sub_2, Sub_3, Sub_4, Sub_5, Total_marks;
	float Aggregate, Percentage;
	cout<<"Enter your name: ";
	cin>> Name;
	cout<<"Enter the marks of the first Subject: ";
	cin>> Sub_1;
	cout<<"Enter the marks of the second Subject: ";
	cin>> Sub_2;
	cout<<"Enter the marks of the third Subject: ";
	cin>> Sub_3;
	cout<<"Enter the marks of the fourth Subject: ";
	cin>> Sub_4;
	cout<<"Enter the marks of the fifth Subject: ";
	cin>> Sub_5;
	Total_marks = 500;
	Aggregate=(Sub_1 + Sub_2 + Sub_3 + Sub_4 + Sub_5)/Total_marks;
	cout<<"The total aggregate of "<<Name<< " is "<<Aggregate<< endl;
	Percentage=Aggregate*100;
	cout<<"The percentage of "<<Name<<" is "<<Percentage<<" %"<< endl;
//--------------------------------END------------------------------//
//------------------------------TASK 2----------------------------//
    int base, height, a, b, c, perimeter;
    float area;
    string end_program;
    cout<<"Enter the base of the Triangle: ";
    cin>> base;
    cout<<"Enter the vertical height of the triangle: ";
    cin>> height;
    area=(base*height)/2;
    cout<<"The Area of the triangle is: "<<area<< endl;
    cout<<"Enter the value a: ";
    cin>> a;
    cout<<"Enter the value b: ";
    cin>> b;
    cout<<"Enter the value c: ";
    cin>> c;
    perimeter=a+b+c;
    cout<<"The perimeter of triangle with sides "<<a<<", "<<b<<" & "<<c<<" is: "<<perimeter<< endl;
    cout<<"Type 'End' to end the application: "<< endl;
    cin>>end_program;
	return 0;
}
