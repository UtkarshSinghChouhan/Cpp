#include<iostream>
using namespace std;

int volume(int r,int h){
    return (3.14*r*r*h);
}
int volume(int l,int b,int h){
    return l*b*h;
}

int volume(int a){
    return a*a*a;
}

int main(){

    int a,b,c,d,e,f;

    cout<<"Enter the radius r and height h of the cylinder : "<<endl;
    cin>>a>>b;
    cout<<"The volume of the cylinder is = "<<volume(a,b)<<endl;

    cout<<"Enter the value of the length l,breadth b and height h of the cuboid : "<<endl;
    cin>>c>>d>>e;
    cout<<"The volume of the cuboid is = "<<volume(c,d,e)<<endl;

    cout<<"Enter the value of the side a of the cube : "<<endl;
    cin>>f;
    cout<<"The volume of the cube is = "<<volume(f)<<endl;

    return 0;

}
