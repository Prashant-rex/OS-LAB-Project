#include<iostream>
using namespace std;

void Details();
void Check(int,int,int); 

int CalculateIngredients(int process, int need) 
{ 
	int Required_Ingredients = 0; 
	Required_Ingredients = process*(need-1)+1; 
	return Required_Ingredients; 
} 

int chef, Ingredient_needed,Ingredient_limit,Chef_limit,reqf;

int main() 
{ 
	cout<<"Enter the maximum number of Chefs that can work in the kitchen : ";
	cin>>Chef_limit;
	cout<<"\n";
	cout<<"Enter the maximum number of resorces that can be kept in the kitchen : ";
	cin>>Ingredient_limit;
	cout<<"\n";
    Details();
    reqf=CalculateIngredients(chef, Ingredient_needed);
	cout << "Number of Ingredients required so that each Chef can make his dish without getting struck in a deadlock should be : "<<reqf;
	return 0; 
} 

void Details()
{
	cout<<"Enter The Number of working Chefs: ";
	cin>>chef;
	cout<<"\n";
	cout<<"Enter The Number of Ingredients needed by Each Chef to make their respective dish: ";
	cin>>Ingredient_needed;
	cout<<"\n";	
	Check(chef,Ingredient_needed);	
}

void Check(int x,int y)
{
if(x<=0 || y<=0)
    {
    	cout<<"Invalid, please enter a valid entry.\n";
    	Details();	
	}
if(y>Ingredient_limit)
	{
		cout<<"Overflow, The kitchen can't have this many resources.\n";
		cout<<"\n";
		Details();
	}
if(x>Chef_limit)
	{
		cout<<"Overflow, The kitchen can't have this many chefs.\n";
		cout<<"\n";
		Details();
	}

}
