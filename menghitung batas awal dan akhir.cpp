#include<iostream>
using namespace std;

int main ()
{
    int x,y,i,c;
    cout<<"masukan batas awal :";
    cin>>x;
    cout<<"masukan batas akhir :";
    cin>>y;
    for (i=x;i<=y;i++){
        c=i%2;
        if (c==0)
            cout<<i<<",";
    }
    return 0;
}
