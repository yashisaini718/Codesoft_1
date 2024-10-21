#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"\t\t\t\tWELCOME TO NUMBER GUESSING GAME !"<<endl;
    cout<<"\t\tInstructions:"<<endl;
    cout<<"\t\t You have to guess anumber between 1 and 100 ."<<endl;
    cout<<"\t\t You'll have limited choices based on the level you choose ."<<endl;
    while(true){
        cout<<"\n Enter the difficulty level:\n";
        cout<<"1 for easy !\n";
        cout<<"2 for medium !\n";
        cout<<"3 for difficulty !\n";
        cout<<"0 for ending the game !\n"<<endl;

        //select the difficulty level
        int choice ;
        cout<<"Enter the number for the difficulty level :";
        cin>>choice;

        //generating the secret number 
        srand(time(0));
        int secret = 1+(rand()%100);
        int guess;

        //difficulty level : Easy
        if(choice==1){
            cout<<"You have 10 choices to guess the correct number !"<<endl;
            int guessesleft = 10;
            for(int i=0;i<10;i++){
                cout<<"Enter your choice :  ";
                cin>>guess;
                if (guess==secret){
                    cout<<"\n\t\tWell Played !"<<endl;
                    cout<<"\t"<<guess<<" is the correct choice !"<<endl;
                    break;
                }
                else if (guess>secret){
                    cout<<"Nope ! Your guess is too high !";
                }
                else{
                    cout<<"Nope ! Your guess is too low !";
                }
                guessesleft--;
                cout<<"\nGuesses Left :"<<guessesleft<<endl;
                if(guessesleft==0){
                    cout<<"You couldn't find the correct number ; "<<secret<<" was the correct answer !"<<endl;
                    cout<<"Play again to win !"<<endl;
                }
            }
        }

        //difficulty level: Medium
        else if(choice ==2){
            cout<<"You have 7 choices to guess the correct number !"<<endl;
            int guessesleft = 7;
            for(int i=0;i<7;i++){
                cout<<"Enter your choice :  ";
                cin>>guess;
                if (guess==secret){
                    cout<<"\n\t\tWell Played !"<<endl;
                    cout<<guess<<" is the correct choice !"<<endl;
                    break;
                }
                else if (guess>secret){
                    cout<<"Nope! Your guess is too high !";
                }
                else{
                    cout<<"Nope ! Your guess is too low !";
                }
                guessesleft--;
                cout<<"\nGuesses Left :"<<guessesleft<<endl;
                if(guessesleft==0){
                    cout<<"You couldn't find the correct number ; "<<secret<<" was the correct answer !"<<endl;
                    cout<<"Play again to win !"<<endl;
                }
            }
        }

        //difficulty level : Hard
        else if(choice ==3){
            cout<<"You have 5 choices to guess the correct number !"<<endl;
            int guessesleft = 5;
            for(int i=0;i<5;i++){
                cout<<"Enter your choice :  ";
                cin>>guess;
                if (guess==secret){
                    cout<<"\n\t\tWell Played !"<<endl;
                    cout<<guess<<" is the correct choice !"<<endl;
                    break;
                }
                else if (guess>secret){
                    cout<<"Nope! Your guess is too high !";
                }
                else{
                    cout<<"Nope ! Your guess is too low !";
                }
                guessesleft--;
                cout<<"\nGuesses Left :"<<guessesleft<<endl;
                if(guessesleft==0){
                    cout<<"You couldn't find the correct number ; "<<secret<<" was the correct answer !"<<endl;
                    cout<<"Play again to win !"<<endl;
                }
            }
        }
        //to end the game
        else if (choice == 0){
            exit(0);
        }
        else{
            cout<<"Enter a valid choice (0,1,2,3)"<<endl;
        }
    }
    return 0 ;
}   