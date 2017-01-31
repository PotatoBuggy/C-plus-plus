/*

Name:      Myat Min Maung
StudentID: 915045370
Email:     mmaung@mail.sfsu.edu
Compilier: Dev C++
  
**/

#include "Link_list.h"
#include <iostream>

using namespace std;

int main(){
	
	Link_list list;
	
	//insert
	cout<<"Nodes are inserted.\n";
	list.insert(2);
	list.insert(3);
	list.insert(4);
	list.insert(5);
	list.insert(6);
	//display
	cout<<"Nodes are: \n";
    cout << list;
    //size
    cout<<"\nSize of the Node: "<< list.size()<<endl;
    
	//search
	cout<<"\nLooking for 2 in the list.\nThe result is: ";
	list.search(2);
	cout<<"\nLooking for 1 in the list.\nThe result is: ";
	list.search(1);
	
	//delete
	cout<<"\nDelete number 3.\n";
    list.deletes(3);

    //display
	cout<<"Nodes are: \n";
    cout << list;
    //size
    cout<<"\nSize of the Node: "<< list.size()<<endl;
    
    //reverse
    cout<<"Reverse the node.\n";
    list.reverse();
	//display
	cout<<"Nodes are: \n";
    cout << list;
    //size
    cout<<"\nSize of the Node: "<< list.size()<<endl;
    
    
	
	return 0;
}
