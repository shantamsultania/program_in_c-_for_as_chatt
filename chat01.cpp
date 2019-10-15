#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    int i,n;
    string name,stream;
    ofstream fout;
    fout.open("clint.txt");
    ofstream fou;
    fou.open("server.txt");

    cout<<"enter the limit for chat";
    cin>>n;
    cout<<"the file is opened "<<endl;
    cout<<"chat takeing place  "<<endl;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"person 1 :-  ";
        cin>>name;
        cout<<"person 2 :-  ";
        cin>>stream;
        fout <<"person 1:- " <<name<<endl;
        cout<<endl;
        fou <<"person 2 :- " <<stream<<endl;
    }
    fout.close();
    fou.close();

    cout<<"printing takeing place"<<endl;
    ifstream fin;
    fin.open("clint.txt");
    ifstream fi;
    fi.open("server.txt");
    char ch,c;
    while(!fin.eof())
    {
         fin.get(c);
         cout<<c;
    }
     while(!fi.eof())
    {
        fi.get(ch);
         cout << ch;
    }

    fin.close();
    fi.close();

    return 0;
}
