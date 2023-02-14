#include<iostream>
using namespace std;

int main(){
	char eshan;
	float num1,num2,num3;
	
	cout<<"Enter one Operator you want +  -  *  / :";
	cin>>eshan;
	cout<<"Enter First Number Space and Enter Second Number:";
	cin>>num1>>num2,num3;
	
	switch(eshan)
	{
	 case'+':
	 	cout<<num1+num2;
	 	break;
	case'-':
	    cout<<num1-num2;
	    break;
	case'*':
	    cout<<num1*num2;
	    break;
	case'/':
	    cout<<num1/num2;
		break;

return 0;
		 		
	}
}
