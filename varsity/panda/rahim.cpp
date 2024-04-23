#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a[3];
    cin>>a[0]>>a[1]>>a[2];
    string concat=a[0]+a[1]+a[2];
    if(concat=="vertebradoavecarnivoro"){
        cout<<"aguia"<<endl;
    }
    
    else if(concat=="vertebradoaveonivoro"){
        cout<<"pomba"<<endl;
    }
    else if(concat=="vertebradomamiferoonivoro"){
        cout<<"homem"<<endl;
    }
    else if(concat=="vertebradomamiferoherbivoro"){
        cout<<"vaca"<<endl;
    }   
    else if(concat=="invertebradoinsetohematofago"){
        cout<<"pulga"<<endl;
    }   
    else if(concat=="invertebradoinsetoherbivoro"){
        cout<<"lagarta"<<endl;
    } 
    else if(concat=="invertebradoanelideohematofago"){
        cout<<"sanguessuga"<<endl;
    }
    else if(concat=="invertebradoanelideoonivoro"){
        cout<<"minhoca"<<endl;
    }
    

    return 0;
}