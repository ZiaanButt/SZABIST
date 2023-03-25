#include<iostream>
#include<string>
using namespace std;
int main()
{
	//-----------------------------ZIAAN BUTT-2280322-------------------------//
    
	float total_marks=500, eng, FoP, Calculus, physics, itc, obt_marks;
	float eng_ch, fop_ch, calc_ch, phy_ch, itc_ch, total_credit;
	float credit_point=4, percentage, GPA;
	cout<<"Enter the marks of English: "<<endl;
	cin>>eng;
	cout<<"Enter the credit hours of English: "<<endl;
	cin>>eng_ch;
	cout<<"Enter the marks of FoP: "<<endl;
	cin>>FoP;
	cout<<"Enter the credit hours of FoP: "<< endl;
	cin>>fop_ch;
	cout<<"Enter the marks of Calculus: "<<endl;
	cin>>Calculus;
	cout<<"Enter the credit hours of Calculus: "<< endl;
	cin>>calc_ch;
	cout<<"Enter the marks of physics: "<<endl;
	cin>>physics;
	cout<<"Enter the credit hours of Physics: "<< endl;
	cin>>phy_ch;
	cout<<"Enter the marks of itc: "<<endl;
	cin>>itc;
	cout<<"Enter the credit hours of ITC: "<< endl;
	cin>>itc_ch;
	obt_marks = eng + FoP + Calculus + physics + itc;
	percentage = (obt_marks/total_marks)*100;
    cout<<"The percentage is: "<<percentage<<endl;

}
