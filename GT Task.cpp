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

    Singer d1("Sandy",21,"Soppranno");
    Dancer d2("Snoop",53,"Cripwalk");
    d1.sing();
    d2.dance();
    

    return 0;
}
