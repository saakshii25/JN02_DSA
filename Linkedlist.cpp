/******************************************************************************
Program to demonstrate Linked List

*******************************************************************************/
#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    public:
     Node(int no){
         data=no;
         next=NULL;
     }
};

class LinkedList{
    Node *head;
    public :
    LinkedList()
    {
        head=NULL;
    }
    void create(){
        int no;
        Node *newnode,*t;
        cout<<"Enter the number upto 999 : ";
        cin>>no;
        while(no!=999){
            newnode=new Node(no);
            if(head==NULL)
                head=newnode;
            else{
                t=head;
                while(t->next!=NULL){
                    t=t->next;
                    t->next=newnode;
                }
            }
             cin>>no;
           
        }
        
    }
    
    void display(){
        Node *t=head;
        if (head==NULL)
            cout<<"List is Empty !!!";
        while(t!=NULL)
        {
            cout<<t->data<<"->";
            t=t->next;
        }
    }
    
    void insertFirst(int no)
    {
        Node *newnode;
        newnode=new Node(no);
        newnode->next=head;
        head=newnode;
    }
    
     
    void insertLast(int no)
    {
        Node *newnode,*t;
        newnode=new Node(no);
        t=head;
        while(t->next!=NULL)
            t=t->next;
        t->next=newnode;
    }
    
    void deleteFirst()
    {
        Node *t;
        t=head;
        head=head->next;
        delete t;
        
    }
    
    void deleteLast()
    {
       Node *p,*t;
       t=head;
       p=t;
       while(t->next!=NULL)
       {
           p=t;
           t=t->next;
       }
       p->next=NULL;
       delete t;
    }
    
    void insertAfterGivenNode(int no,int n)
    {
       Node *newnode,*t;
       newnode=new Node(no);
       if(head==NULL)
            head=newnode;
       else
       {
           t=head;
           while(t->data!=n && t!=NULL)
           {
               t=t->next;
           }
           if (t==NULL)
           
               cout<<"Element not present in List !!! ";
           else
           {
               newnode->next=t->next;
               
           }
       }
    }
};

int main()
{
    cout<<"------- Singly Linked List -------"<<endl;
    LinkedList ls;
    ls.create();
    cout<<"List is as follows : ";
    ls.display();
    ls.insertFirst(20);
    ls.display();

    return 0;
}