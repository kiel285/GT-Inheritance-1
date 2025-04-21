#include <iostream>
using namespace std;

class Performer{
private:
    string name;
    int age;
public:
    Performer(string name, int age): name(name), age(age){}
    string getName(){return name;}
    int getAge(){return age;}
};
class Singer : public Performer {
    private:
    string vocalRange;
    public:
    Singer(string name, int age, string vocalRange): Performer(name, age),vocalRange(vocalRange){}
    string getvocalRange(){return vocalRange;}
    void sing(){cout<<getName()<<" is singing with a "<<getvocalRange()<<" range"<<endl;}
};
class Dancer : public Performer {
    private:
    string danceStyle;
    public:
    Dancer(string name, int age, string danceStyle): Performer(name, age), danceStyle(danceStyle){}
    string getdanceStyle(){return danceStyle;}
    void dance(){cout<<getName()<<" is performing "<<getdanceStyle()<<" dance"<<endl;}
};
int main(){
    string iname;
    int iage;
    string ivocalrange;
    string idancestyle;
    string occupation;
    cout<<"Singer Or Dancer"<<endl;
   
while(true){
    cin>>occupation;
    if (occupation == "Singer" ||occupation == "singer"){
        cout<<"Singer Details:"<<endl;
        cout<<"input Name"<<endl;
        cin>>iname; 
        cout<<"input Age"<<endl;
        cin>>iage;
        cout<<"input Vocal Range"<<endl;
        cin>>ivocalrange;
        cout<<"Printing"<<endl;
        Singer S1(iname,iage,ivocalrange);
        S1.sing();
        cout<<"Type exit to Terminate Program"<<endl;
        cout<<"Singer or Dancer"<<endl;
    }else if(occupation == "Dancer" ||occupation == "dancer"){
        cout<<"Dancer Details:"<<endl;
        cout<<"input Name"<<endl;
        cin>>iname; 
        cout<<"input Age"<<endl;
        cin>>iage;
        cout<<"input Dance Style"<<endl;
        cin>>idancestyle;
        Dancer S2(iname,iage,idancestyle);
        S2.dance();
        cout<<"Type exit to Terminate Program"<<endl;
        cout<<"Singer or Dancer"<<endl;
    }else if(occupation=="Exit"||occupation=="exit"){
        return 0;
    }else{
    cout<<"invalid input Type Exit to exit"<<endl;
    cout<<"Singer or Dancer"<<endl;
    }
}
}
