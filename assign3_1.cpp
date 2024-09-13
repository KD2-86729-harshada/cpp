#include<iostream>
using namespace std;
class volume
{
    float len;
    float wid;
    float hei;
public: 
    volume()
    {
        len = 5;
        wid = 2;
        hei = 3;
    }

    volume(int value):len(value),wid(value),hei(value)
    {

    }
    volume(int len,int wid,int hei)
    {
        this->len=len;
        this->wid=wid;
        this->hei=hei;
    }
 
    void acceptVolume()
    {
        len * wid * hei;
    }
    void printVolume()
    {
        cout<<"Volume of box="<<len * wid * hei<<endl;
    }
    void displayArea()
    {
        cout<<"area of box = "<<2*(len*wid+len*hei+wid*hei);
    }
};
int main()
{
    volume v1;
    v1.printVolume();
    volume v2(4);
    v2.printVolume();
    volume v3(5,4,5);
    v3.printVolume();
    volume v4(2,2,2);
    v4.displayArea();
    return 0;
}