#include<iostream>
using namespace std;

void Details();
void Check(int,int); 

int CalculateIngredients(int process, int need) 
{ 
	int Required_Ingredients = 0; 
	Required_Ingredients = process*(need-1)+1; 
	return Required_Ingredients; 
} 

int chef, Ingredient_needed;

int main() 
{ 

    Details();
	cout << "Number of Ingredients required so that each Chef can make his dish without getting struck in a deadlock should be : "<<CalculateIngredients(chef, Ingredient_needed);
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
}


