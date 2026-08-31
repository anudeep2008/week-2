#include<iostream>
using namespace std;


int area(int side)
{
    return side*side ;


}
int area (double L,double B)
{
    return L*B;
}   

int area1 (int Height ,int Base)
{
    return 0.5*Height*Base;

}
int main()
{
    int side;
    cout<<"Enter side of square"<<endl;
    cin>>side;
    cout<<"Area of square is "<<area(side)<<endl;
    

  int L ,B;
    cout<<"Enter length and breadth of rectangle"<<endl;
    cin>>L>>B;
    cout<<"Area of rectangle is "<<area(L,B)<<endl;
    

    int Height , Base;
    cout<<"enter the height and base of the traingle"<<endl;
    cin>>Height >>Base;
    cout<<"area of triangle "<<area1(Height,Base)<<endl;

return 0;

}