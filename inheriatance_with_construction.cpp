#include <iostream>
 using namespace std ;
 class person{
     public:
     string name ;
     int age;
     
     person( string n, int a){
         name=n;
         age=a;
     }
     
     void  display(){
        cout<<" my name is "<<name<<endl;
        cout<<"age is "<<age<<endl;
     }
     };
     class student:public person{
         public:
         int id;
         
         student(int i,string n ,int a):person(n,a){
    
             id=i;
         }
         
         void display(){
             person::display();
             cout<<"id is "<<id <<endl;
         }
     };
     
     int main(){
         student data(10,"aryan",10109);
         data.display();
         
         return 0;
     }
