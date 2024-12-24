#include <bits/stdc++.h>
using namespace std;

int main() {
    srand((int)time(NULL));
    int answer = (rand()%50) + 1;
    int Userguess;
    cout<<"Enter the answer between 1 to 50 :";
    cin>>Userguess;
    
    while(Userguess!=answer){

        if(Userguess>answer){
            cout<<"Enter the Smallest answer than Guess :";
        }

        else{
            cout<<"Enter the Biggest answer than Guess :";
        }
        
        cin>>Userguess; 
    };

    cout<<"You did it !!!, "<<answer<<" is correct Guess."<<endl;
    return 0;
}