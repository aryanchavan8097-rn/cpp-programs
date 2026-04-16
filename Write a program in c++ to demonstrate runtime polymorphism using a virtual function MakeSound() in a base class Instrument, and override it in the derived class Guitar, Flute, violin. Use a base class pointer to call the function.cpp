#include <iostream> 
using namespace std ;

class instrument{
    public:
    
     virtual void makesound(){
        cout<<"instrument create so many type of sound";
    }
};
class guitar :public instrument{
    public :
    void makesound(){
        cout<<"guitar create  nice sound  "<<endl;
    }
};
class flute :public instrument{
    public :
    void makesound(){
        cout<<" i like sound of flute "<<endl;
    }
};
class voilin :public instrument {
    public :
    void makesound(){
        cout<<" i dont like voilin sound "<<endl;
    }
};

int main (){
    instrument*ptr;
    
    guitar g;
    flute f;
    voilin v;
    
    ptr=&g;
    ptr->makesound();
    //in this code uses consept of function overrinding 
    
    
    ptr=&f;
    ptr->makesound();
    
    ptr=&v;
    ptr->makesound();
    
    return 0;
    
}
    
