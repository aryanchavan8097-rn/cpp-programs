#include <iostream> 
using namespace std ;


class person{
    public:
    string name;
    int age ;
    
    
    void getStudentData(){
        cout<<"ENTER NAME:";
        cin>>name ;
        cout<<"enter age";
        cin>>age;
    }
    
    void display(){
        cout<<"my name is "<<name<<endl;
        cout<<"my age is "<<age<<endl;
    }
};

class student :public person{
    public:
    int roll;
    
    void getStudentData(){
        person::getStudentData();
        cout<<"enter your roll number";
        cin>>roll;
        
        
    }
    void display(){
        person::display();
        cout<<"my roll numer is "<<roll<<endl;
        
    }
};
int main(){
    
    student s1;
    s1.getStudentData();
    s1.display();
    
    return 0;
}
