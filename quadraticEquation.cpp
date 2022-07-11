#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	
//Declare the variables for the parameters of the quadratic equation
	int a,b,c;
//Declaring the roots of a quadratic equation
	float x1,x2;
//	Declare changes to the discriminant
	int d;
	
//Print text
	cout<<"Enter the sum of the parameters of the quadratic equation:"<<endl;
//Print text and input
	cout<<"a="; cin>>a;
//Print text and input
	cout<<"b="; cin>>b;
//Print text and input 
	cout<<"c="; cin>>c; cout<<endl;
//Print text and input
	cout<<"a="<<a<<" "<<"b="<<b<<" "<<"c="<<c<<endl;
//calculating the discriminant	
	d=b*b-4*a*c;
//Checking the discriminant for non-negativity
	if(d>0)
	{
//Calculation of õ1
		x1=(-b+sqrt(d))/(2*a);
//Calculation of õ2		
		x2=(-b-sqrt(d))/(2*a);
//Print the result for x1
		cout<<"The value of x1="<<x1<<endl;
//Print the result for x2
		cout<<"The value of x2="<<x2<<endl;
	}
//Checking that the discriminant is equal to zero
	else if(d==0)
	{
//Calculation of õ1/x2
		x1=(-b)/(2*a);
//Print the result for x1/x2
		cout<<"The value of x1="<<x1<<" and x2="<<x1<<endl;
	}
//Cases of the discriminant when it is negative	
	else
	{
//Print informational text
		cout<<"A quadratic equation has no real roots";
	}
}
