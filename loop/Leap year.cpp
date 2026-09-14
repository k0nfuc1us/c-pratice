#include <iostream>
using namespace std;

int main() {
	int year;
	cout<<"Enter year : \n";
	cin>>year;
	cout<<"You have inputted \n \t"<<year;
	
	if(year%4==0){
	    if(year%100==0){
	        if(year%400==0){
	            cout<<"\n";
	            cout<<year<<" is leap year";
	        }
	        else {
	            cout<<year<<" is not leap year";
	        }
	    }
	    else {
	        cout<<"\n";
	        cout<<year<<" is leap year";
	    }
	}
}
