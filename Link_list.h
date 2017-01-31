/*

Name:      Myat Min Maung
StudentID: 915045370
Email:     mmaung@mail.sfsu.edu
Compilier: Dev C++
  
**/

#ifndef Link_list_h
#define Link_list_h

#include<iostream>

class Link_list{
	private:
		
		//Node variable
		struct Node{
			
			int item;
			Node *next;
		};
		
		Node *head;
		int volume;
		
	public:
		//default contrustor
		Link_list();
		/*
		   @ Precondition: The default constructor takes private 
		                   variable.
		                   
		   
		   @ Postcondition:The private variable are set to zero and
		                   NULL.
		*/
		
		//** big 3
		//destructor
		~Link_list();
		/*
		   @ Precondition: The destructor takes private 
		                   variable.
		                   
		   
		   @ Postcondition:The private variable are set to zero and
		                   the pointer is deleted.
		*/
		
		//copy constructor
		Link_list(const Link_list &list);
		/*
		   @ Precondition: The copy constructor takes Link_list 
		                   object.
		                   
		   
		   @ Postcondition:The copy consturctor copy the node's of 
		                   the object and the node's value and size. 
		*/
		
		//assignment operator
		Link_list operator = (const Link_list &rhs);
		/*
		   @ Precondition: The copy constructor takes Link_list 
		                   object.
		                   
		   
		   @ Postcondition:The copy consturctor copy the node's of 
		                   the object and the node's value and size. 
		*/
		
		//insert
		void insert(int value);
		/*
		   @ Precondition: The function takes data (value 
		                   variable).
		                   
		   
		   @ Postcondition:The function inserts the value at the given at 
		                   the front of the link list.The function also 
						   resize the link list.
		*/
		
		//delete
		void deletes(int number);
		/*
		   @ Precondition: The function takes data (number 
		                   variable).
		                   
		   
		   @ Postcondition:The function looks for the number in the link
		                   list and delete the number.if the number is not
		                   in the list, the function will let the user know.
		*/
		
		//search
		void search(int value);
		/*
		   @ Precondition: The function takes data (value 
		                   variable).
		                   
		   
		   @ Postcondition:The function looks for the value in the list. the 
		                   function willanswer whether the value is found or 
						   not.
		*/
		
		//size
		int size();
		/*
		   @ Precondition: The function takes data nothing.
		                   
		   
		   @ Postcondition:The function return the size of the link list.
		*/
		
		//output operator
		friend std::ostream& operator<< (std::ostream& outS, Link_list& p);
		/*
            @ Precondition: The ostream object and Link_list's object are passed by 
                            references to the function.

            @ Postcondition:The ostream reference is returned from the function.
        */
		
		//reverse
		void reverse();
		/*
		   @ Precondition: The function takes nothing.
		                   
		                   
		   @ Postcondition:The function reverse the current link list.
		*/
};

#endif
