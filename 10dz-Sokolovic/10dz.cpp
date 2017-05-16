#include<iostream>
using namespace std;

int main()
{
    string artikl;
    int n,c;
    cout<<"Upisite koliko ce te artikla unijeti: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Unesi ime artikla ";
    getline(cin,artikl);
        cout<<endl<<artikl;
        cin>>artikl;
        cout<<"Cijena artikla: "<<endl;
        cin>>c;
    }
    return 0;
}
