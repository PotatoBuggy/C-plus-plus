/*

Name:      Myat Min Maung
StudentID: 915045370
Email:     mmaung@mail.sfsu.edu
Compilier: Dev C++
  
**/

#include "Link_list.h"
#include<iostream>

using namespace std;

//default constructor
Link_list::Link_list(): volume(0), head(NULL){
	
}

//destructor
Link_list::~Link_list(){
	
	Node *curr=head;
	
    while (curr!=NULL){
    	
        head = curr->next;
        delete curr; 
        curr = head;
    }
}

//copy constructor
Link_list::Link_list(const Link_list &list): volume(list.volume){
	
	if(list.head == NULL){
		
		head == NULL;
		volume =0;
	}else{
		
	    // copy first node
        head = new Node;
        head->item = list.head->item;

        // copy rest of list
        Node *newPtr = head;  // new list pointer
        // newPtr points to last node in new list
        // origPtr points to nodes in original list
        for (Node *origPtr = list.head->next;origPtr != NULL;
        origPtr = origPtr->next){  
		
		    newPtr->next = new Node;
            newPtr = newPtr->next;
            newPtr->item = origPtr->item;
        }  // end for

        newPtr->next = NULL;	
	}
}

//assignment operator
Link_list Link_list:: operator = (const Link_list &rhs){
	
    if(rhs.head == NULL){     
		
		head == NULL;
		volume=0;
	}else{
		
	    // copy first node
        head = new Node;
        head->item = rhs.head->item;

        // copy rest of list
        Node *newPtr = head;  // new list pointer
        // newPtr points to last node in new list
        // origPtr points to nodes in original list
        for (Node *origPtr = rhs.head->next;origPtr != NULL;
        origPtr = origPtr->next){  
		
		    newPtr->next = new Node;
            newPtr = newPtr->next;
            newPtr->item = origPtr->item;
        }  // end for

        newPtr->next = NULL;	
	} 	
	
}

//insert
void Link_list:: insert(int value){
	
	//creating a node
	Node *newNode= new Node;
	newNode->item = value;
	newNode->next = NULL;
	
	
	if(head == NULL){
		
		head= newNode;
		volume++;
		
	}else{
	    	
		newNode->next= head;
		head = newNode;
		volume++;
	}
}
		
//delete
void Link_list::deletes(int number){
	
	//look for a number
	Node *toDelete;
	Node *prev;
	Node *post;
	
	Node *newNode= head;
	int index=0;
	int prevIndex=0;
	int postIndex=0;
	while(newNode != NULL){
		
		if(number == newNode-> item){
			
			toDelete= newNode;
			prevIndex=index-1;	
			postIndex=index+1;
			break;
		}
		
		newNode= newNode->next;
		index++;
	}
	
		
	//get prev
    newNode=head;
    for( index=0; newNode!= NULL; newNode= newNode->next){
		
	    if(index== prevIndex){
			
	        prev= newNode;
		    break;	
	    }
	    index++;
    }
	
    //get post
    newNode=head;
    for( index=0; newNode!= NULL; newNode= newNode->next){
		
	    if(index== postIndex){
			
	        post= newNode;
		    break;	
    	}
	    index++;
    }
	
    //delete node
    prev->next=post;
    delete toDelete;
    volume--;
}
		
//search
void Link_list::search(int value){
	
	bool found=false;
	Node *newNode= head;
	while(newNode != NULL){
		
		if(value == newNode-> item){
			
			found=true;
			break;
		}
		newNode= newNode->next;
	}
	
	if(found){
		
		cout<<"The integer exists.\n";
	}else{
		
		cout<<"There is no such integer.\n";
	}
}
		
//size
int Link_list::size(){
	
	return volume;
}
		
//output operator
std::ostream& operator<< (std::ostream& outS, Link_list& p){
	
	Link_list::Node *temp = p.head;
    while (temp != NULL ) {
	
			outS << temp->item << endl;
			temp = temp->next;
		}
    
    return outS;

}

//reverse
void Link_list::reverse(){
	
    if(head == NULL) {
        return;
    }
    Node *prev = NULL, *current = NULL, *next = NULL;
    current = head;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
	
}
