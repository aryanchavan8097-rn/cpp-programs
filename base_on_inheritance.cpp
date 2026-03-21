#include <iostream>
using namespace std ;

class topper{
    public:
    int age ;
    int mark ;
    int total;
    
    void getdata(){
        cout<<"enter age "<<endl;
        cout<<"enter mark"<<endl;
        cout<<"enter total"<<endl;
        cin>>age;
        
        cin>>mark;
        cin>>total;
        
        
    }
    void display(){
    cout<<"your age is" <<age<<endl;
    cout<<"your mark is"<<mark<<endl;
    cout<<"your total mark"<<total<<endl;
        
}
};

 class data:public topper{
     public:
    string name;
    
    void  getdata(){
        topper::getdata();
        cout<<"enter name ";
        cin>>name;
        
        
    }
    void display(){
        topper::display();
        cout<<"his name is "<<name<<endl;
    }
 };
 int main (){
     data info;
     info.getdata();
     info.display();
 }
        
