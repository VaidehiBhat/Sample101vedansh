#include <iostream>

using namespace std;

int main()
{
   cout<<"try to guess the mystery number in 3 guesses"<<endl;
    cout<<"enter a guessed number"<<endl;
    int i=1;
    int num;
    cin>>num;

        do {
            if (num!=78) {
                    cout<<"You're wrong, enter another number"<<endl;
            cin>>num;
            i=i+1;

            } else {
            cout<<"You're right!"<<endl;

            break;}

        } while (i<3);
        if (num==78 && i==3){
            cout<<"You're right!"<<endl;

        } else if (num!=78 && i==3) {
        cout<<"you're wrong, game over!"<<endl;}

 return 0;
}
