#include <iostream>
#include "Book.h"
#include "PrintBook.h"
#include "Shelf.h"
#include "BShelf.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int mode = -1;
	while(mode !=0){
		cout<<"Menu"<<endl;
		cout<<"1. Add Bookshelf."<<endl;
		cout<<"2.Add a shelf to the bookshelf."<<endl;
		cout<<"3.Add book."<<endl;
		cout<<"0.Exit."<<endl;
		cin>>mode;
		switch(mode){
			case 0: continue;
			case 1:
				Bookshekf bs:
			    bshelfs.push_back(bs);
			    cout<<"Bookshelf  added"<<endl<<endl;
			    break;
			case 2
			   if(bshelf.size()>0){
			   	cout<<"Available"<<bshelf.size()<<"bookshelfs";
			   	cout<<"Add number of bookshelfs (from 1 to "<<bshelfs.size()<<")";
			   	int n = 0;
			   	cin<<n;
			   	if(n<=bshelfs.size()){
			   		bshelfs[n-1].addShelf();
			   		cout<<"Self added."
				   }else{
				   	cout<<"Error in number of bookshlef.Return"<<endl<<endl;
				   }
			   }else{
			   	cout<<"Available bookshelfs absent"<<endl<<endl;
			   } 
			   break:
			case 3:
			
		         break;      
		}
	}
	cout<<"Bye!"
	return 0;
}
