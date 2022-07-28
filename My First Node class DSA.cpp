// NODE.cpp
#include <iostream>
using namespace std;
class Node{
   private: 
   int data;
   Node* next;
   public:
  
   Node(int data,Node* next=NULL){
       setData(data);
       setNext( next);
   }
   void setData(int data){
       this->data=data;
   }
   int getData(){
       return this-> data;
   }
   void setNext(Node* next){
       this-> next=next;
   }
   Node*  getNext(){  
       return this-> next;
}
};
main()
{
    Node n1(5),n2(10);
    n1.setNext(&n2);
    n2.setNext(NULL);
    cout<<"n1 "<<"="<<n1.getData()<<endl;
    cout<<"n2"<<"="<<n2.getData()<<endl;
  
    
    
}