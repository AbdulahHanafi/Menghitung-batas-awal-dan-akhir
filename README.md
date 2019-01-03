# Menghitung-batas-awal-dan-akhir

codingan program lengkap

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


hasil program

![img](https://github.com/AbdulahHanafi/Menghitung-batas-awal-dan-akhir/blob/master/batas%20awal%20batas%20akhir.png?raw=true)
