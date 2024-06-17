

class parent{
    void privatef()
    {cout<<"This is Private Memmber ";}
public:
void publicf()
{cout<<"This is Public Memmber ";
}
protected: 
void protectedf()
{cout<<"This is Protected Memmber";}
};
class child: public parent{
    public: void f(){
        protectedf();
    }
};
int main(){
 child c;
    c.f();
};