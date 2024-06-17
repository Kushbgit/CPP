#include <iostream>
using namespace std;
class Media
{
public:
    virtual void play()
    {
        cout << "Playing....\n";
    }
};
class Audio : public Media
{
public:
    void play()
    {
        cout << "playing audio....\n";
    }
};
class Vide6o:public Media{
    public:
    void play(){
        cout<<"playing video....\n"
    }
}
int main()
{
    Media *base,u;
    Audio a;
    Video v;
    base-&u();
    base->play();
}
