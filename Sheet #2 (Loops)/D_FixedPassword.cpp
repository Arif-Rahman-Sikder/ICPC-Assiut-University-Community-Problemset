#include<bits/stdc++.h>
using namespace std;
int main (){
    int value=0;
 
        while(cin>>value){
        
        if(value==1999){
            cout<<"Correct"<<endl;
            break;
        }else cout<<"Wrong"<<endl;
    }
     return 0;
}

// 2nd method

#include<bits/stdc++.h>
using namespace std;

int main(){
    int c;
    for (int i= 1000 ; i<=9999 ; i++){
        cin>>c ;
    
        if ( c == 1999){
            cout<<"Correct"<<endl;
            break;
        }else cout<<"Wrong" <<endl;
    }
    return 0;
}