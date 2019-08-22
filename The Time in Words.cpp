#include <iostream>
using namespace std;
int main(){
    int h,m,n;
    cin>>h>>m;
    n=m;
    if(m>30&&m<60){
        h++;
        m=60-m;
    }
    if(h>12){
        h=h-12;
    }
    switch(m/10){
        case 2:
            cout<<"twenty ";
            break;
        case 3:
            cout<<"half";
            break;
    }
    if(m/10!=1){
        switch(m%10){
            case 1:
                cout<<"one";
                break;
            case 2:
                cout<<"two";
                break;
            case 3:
                cout<<"three";
                break;
            case 4:
                cout<<"four";
                break;  
            case 5:
                cout<<"five";
                break;
            case 6:
                cout<<"six";
                break;
            case 7:
                cout<<"seven";
                break;
            case 8:
                cout<<"eight";
                break;
            case 9:
                cout<<"nine";
                break;
        }
    }
    else if(m/10==1){
        switch(m){
            case 10:
                cout<<"ten";
                break;
            case 11:
                cout<<"eleven";
                break;
            case 12:
                cout<<"twelve";
                break;
            case 13:
                cout<<"thirteen";
                break;
            case 14:
                cout<<"fourteen";
                break;
            case 15:
                cout<<"quarter";
                break;
            case 16:
                cout<<"sixteen";
                break;
            case 17:
                cout<<"seventeen";
                break;
            case 18:
                cout<<"eighteen";
                break;
            case 19:
                cout<<"nineteen";
        }
    }
    if(m!=15&&m!=30&&m!=00){
        cout<<" minutes";
    }
    if(n>0&&n<=30) {
        cout<<" past ";
    }
    else if(n>30&&n<60){
        cout<<" to ";
    }
    switch(h){
        case 1:
            cout<<"one";
            break;
        case 2:
            cout<<"two";
            break;
        case 3:
            cout<<"three";
            break;
        case 4:
            cout<<"four";
            break;  
        case 5:
            cout<<"five";
            break;
        case 6:
            cout<<"six";
            break;
        case 7:
            cout<<"seven";
            break;
        case 8:
            cout<<"eight";
            break;
        case 9:
            cout<<"nine";
            break;
        case 10:
            cout<<"ten";
            break;
        case 11:
            cout<<"eleven";
            break;
        case 0&&12:
            cout<<"twelve";
            break;
    }
    if(m==0||m==00){
        cout<<" o' clock";
    }
    
    return 0;
}