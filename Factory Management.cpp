#include <iostream>
#include <string>
using namespace std ;
int main() 
{
	struct informations{
    int salary , age;
	string name;
	char gender;	   
    };
    int operation , employee = 0;
	informations arr[200];
    while(true)
{
	cout<<"Enter your choice.\n\n";
    cout<<"1)Add new employee. \n\n";
    cout<<"2)Print all employees. \n\n";
	cout<<"3)Delete by age. \n\n";
	cout<<"4)update salary by name.\n\n";
	cout<<"5)Exit.\n";	
    cin >> operation ;	
    if(operation==1)
	{
        cout<<"Enter name: ";
	    cin >> arr[employee].name;
		cout<<"Enter age: ";
		cin >> arr[employee].age;
		cout<<"Enter salary: ";	
		cin >> arr[employee].salary;
		cout<<"Enter gender (M/F): ";
		cin >> arr[employee].gender;
		cout<<"\n";	
		employee++;							 
	}
    if(operation==2)
	{
		cout<<"*************************\n";
		for(int i = 0 ;  i < employee ; i++){
			cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].salary<<" "<<arr[i].gender<<"\n\n";
	    }
	}	
	if(operation==3)
	{
		int start_age , end_age;
		cout<<"Enter start and end age\n";
		cin>>start_age>>end_age;			
		for(int i = 0 ; i < employee ; i++ ){
			if(arr[i].age >= start_age && arr[i].age <= end_age ){
				employee = employee - 1;
				for(int j = i ; j < employee ; j++){
					arr[j] = arr[j+1];
					i--;	   	 		  		   		
				}		  	 	
			}		
		}			
	}
	if(operation==4)
	{
		string na ;
		int sa ;	   
		cout<<"Enter the name and salary\n";
		cin >> na >> sa ;
		bool k = false ;	
		for(int i = 0 ; i < employee ; i++ ){
					if(arr[i].name==na){
						arr[i].salary=sa;
						k = true ;			   	   	   	
					}
		}
		if(k==0){
			cout<<"\nthis employee is not found!!\n\n";	 	
		}		
	}
	if(operation==5)
	{
		return 0 ;
	}
}
    return 0;
}