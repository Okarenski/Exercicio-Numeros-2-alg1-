#include <iostream>

using namespace std;

int main()
{
    float n1,n2,n3;
    cout<<"digite tres numeros: "<<endl;
    cin>>n1>>n2>>n3;

    if        (n1 > n2 && n3 < n1)
    {
        cout<<"o maior numero e "<<n1<<endl;

    }
    else if (n2 > n1 && n3 <n2)
    {
         cout<<"o maior numero e "<<n2<<endl;
    }
            else if (n3 > n1 && n2 <n3)
    {
          cout<<"o maior numero e "<<n3<<endl;
    }
    return 0;
}
