#include <iostream>

using namespace std;

//diambil dari coding pointer fundamental smt 2

void tukar(int &x, int &y ) //& untuk mengambil alamat  memori
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

float pembagian(float x, float y){
    return(x/y);
}
float x,y,z;

int main()
{
    int x = 4, y = 5;
    cout<<" Sebelum Ditukar : "<<endl;
    cin >>x;
    cin >> y;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<" Setelah Ditukar : "<<endl;
    cout << " " << x << " " << y << endl;

    cout<<"====================="<<endl;
    cout << " Inputkan Nilai 1 : ";
    cin >> x ;
    cout << " Inputkan Nilai 2 : ";
    cin >> y ;
    z=pembagian(x,y);
    cout<<" Output :  "<< z <<endl;

    return 0;
}
