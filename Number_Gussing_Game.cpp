#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    // seed the random  number generator with the current time.
    srand(static_cast < unsigned int >(std::time(nullptr)));

    //Generator a random numberbetween 1 to 100
    int secertNumber = rand() % 100 +1;

    int guess;
    int attempt= 0;

    cout<<"welcome to the number Gussing Game "<<endl;

    while(true){
        cout<<"Enter your guess (betwwen 1 to 100):";
        cin >> guess;
        attempt++;
        
        if (guess < 1 || guess > 100 ){
            cout<<"Miss Match "<<endl;
            cout<<"Please enter the valid number  between 1 to 100"<<endl;
            continue;
        }

        if(guess < secertNumber){
            cout<< "TOO Low!  Try Again."<<endl;
        }else if(guess > secertNumber){
            cout<<"TOO High!  Try Again."<<endl;
        }else{
            cout<<"Congratulations! YOU GUSSED THE CORRECT NUMBER (" <<secertNumber <<") in "<<attempt<<"attempts."<<endl;
            break;
        }
    }
return 0;
}