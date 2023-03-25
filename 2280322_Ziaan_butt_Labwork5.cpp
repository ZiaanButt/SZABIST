#include <iostream>
using namespace std;

int main() 
{
	//----------------ZIAAN BUTT 2280322------------//
	
	//--QUESTION 1---//
	
	int i=5, j=10, k=15;
	
	//---------------------//
	
	if(i==k/j){cout<<i<<"=="<<k<<"/"<<j<<" [i is equal to k/j (TRUE) ]"<<endl;}
	else{cout<<i<<"=="<<k<<"/"<<j<<" [i is not equal to k/j (FALSE) ]"<<endl;}
	
	//-----------------------// 
	
	if(i>j){cout<<i<<">"<<j<<" [i is greater than j (TRUE) ]"<<endl;}
	else{cout<<i<<">"<<j<<" [i is not greater than j (FALSE) ]"<<endl;}
	
	//-----------------------//
	
	if(j<k){cout<<j<<"<"<<k<<" [j is less than k (TRUE) ]"<<endl;}
	else{cout<<j<<"<"<<k<<" [j is not less than k (FALSE) ]"<<endl;}
	
	//-----------------------//
	
	if(i<=k){cout<<i<<"<="<<k<<" [i is less than or equal to k (TRUE) ]"<<endl;}
	else{cout<<i<<"<="<<k<<" [i is not less than or equal to k (FALSE) ]"<<endl;}
	
	//---------------------//
	
	if(j>=k){cout<<i<<">="<<k<<" [j is greater than or equal to k (TRUE) ]"<< endl;}
	else{cout<<i<<">="<<k<<" [j is not greater than or equal to k (FALSE) ]"<< endl;}
	
	//----------------------//
	
	if(i!=k){cout<<i<<"!="<<k<<" [i is not equal to k (TRUE) ]"<< endl;}
	else{cout<<i<<"!="<<k<<" [i is equal to k (FALSE) ]"<< endl;}
	
	//----------------------//
	
	//---QUESTION 2------//
	
	if(k%i<k/i){cout<<k<<"%"<<i<<"<"<<k<<"/"<<i<<" [TRUE]"<<endl;}
	else{cout<<k<<"%"<<i<<"<"<<k<<"/"<<i<<" [FALSE]"<< endl;}
	
	//-------------------------//
	
    if(k%i>k/i){cout<<k<<"%"<<i<<">"<<k<<"/"<<i<<" [TRUE]"<<endl;}
	else{cout<<k<<"%"<<i<<">"<<k<<"/"<<i<<" [FALSE]"<< endl;}
	
	//---------------------------//

	if(k%i==k/i){cout<<k<<"%"<<i<<"=="<<k<<"/"<<i<<" [TRUE]"<<endl;}
	else{cout<<k<<"%"<<i<<"=="<<k<<"/"<<i<<" [FALSE]"<< endl;}
	
	//----------------------------//
	
	if(k%i<=k/i){cout<<k<<"%"<<i<<"<="<<k<<"/"<<i<<" [TRUE]"<<endl;}
	else{cout<<k<<"%"<<i<<"<="<<k<<"/"<<i<<" [FALSE]"<< endl;}
	
	//----------------------------//
	
	if(k%i>=k/i){cout<<k<<"%"<<i<<">="<<k<<"/"<<i<<" [TRUE]"<<endl;}
	else{cout<<k<<"%"<<i<<">="<<k<<"/"<<i<<" [FALSE]"<< endl;}
	
	//----------------------------//
	
	if(k%i!=k/i){cout<<k<<"%"<<i<<"!="<<k<<"/"<<i<<" [TRUE]"<<endl;}
	else{cout<<k<<"%"<<i<<"!="<<k<<"/"<<i<<" [FALSE]"<< endl;}
	
	//----------------------------END----------------------------//
	
	system("pause");
	return 0;
}



