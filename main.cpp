#include <iostream>
#include <string>
using namespace std;

//below I declare a struct that contains Players name, number, and score
struct Player
{
string name ;
int number ;
int score ;

};
//below I declared a void func that finds the highest score among players
void highest_score (Player member []);


int main()
{
int total_points{0};
 
Player member[12];//here I declared an array of 12 elements. Each element is a Player structure

Player temp[12];// this array I need just for the data validation 

for (int i{0}; i < 12;i++){//for loop that asks for data for each player
    cout << "Player #" << i + 1 << endl;
    cout << "---------\n";
    cout << "Player name: ";
    cin >> member[i].name;
    
    cout << "Player's number: ";
    cin >> temp[i].number;
    while (temp[i].number < 0) {//data validation
    cout << "No negative numbers please:\n";
    cin >> temp[i].number;
        }
    member[i].number = temp[i].number;// after i validated the data , the  array accepts it

    cout << "Points scored: ";
    cin >> temp[i].score;
    while (temp[i].score < 0) {//data validation
    cout << "No negative numbers please:\n";
    cin >> temp[i].score;
        }
    member[i].score = temp[i].score;// after i validated the data , the  array accepts it
    cout << endl;
    
total_points += member[i].score;
};

cout << "NAME" <<"\t\t\t"  << "NUMBER" << "\t\t" << "POINTS SCORED" << endl;//the following statements display the table of data fo
for (int i{0}; i < 12;i++){                                             // for each player
cout <<member[i].name <<"\t\t\t" ;
cout << member[i].number << "\t\t" ;
cout << member[i].score << "\t\t"<< endl;

};
cout << endl;
cout << "------------------------------------------------------------------\n";
cout << "TOTAL POINTS: " << total_points << endl;
cout << "------------------------------------------------------------------\n";
highest_score(member);//Here I call function that performs the finding of the highest score, and displays it
cout << "------------------------------------------------------------------\n";

system("pause");
return 0;
}

void highest_score (Player member[]){
for(int i {0}; i < 12; i++){ 
    if(i == 0){
        if( 
        member[i].score > member[i+1].score && 
        member[i].score > member[i+2].score && 
        member[i].score > member[i+3].score &&
        member[i].score > member[i+4].score &&
        member[i].score > member[i+5].score &&
        member[i].score > member[i+6].score &&
        member[i].score > member[i+7].score &&
        member[i].score > member[i+8].score &&
        member[i].score > member[i+9].score &&
        member[i].score > member[i+10].score &&
        member[i].score > member[i+11].score
 )
        cout << "The player who scored the most points is: " << member[i].name << endl;
    }
    else if ( i == 1){
      if( 
        member[i].score > member[i-1].score &&
        member[i].score > member[i+1].score && 
        member[i].score > member[i+2].score && 
        member[i].score > member[i+3].score &&
        member[i].score > member[i+4].score &&
        member[i].score > member[i+5].score &&
        member[i].score > member[i+6].score &&
        member[i].score > member[i+7].score &&
        member[i].score > member[i+8].score &&
        member[i].score > member[i+9].score &&
        member[i].score > member[i+10].score)
        cout << "The player who scored the most points is: " << member[i].name << endl;  
    }
    else if ( i == 2){
        if( 
        member[i].score > member[i-2].score &&
        member[i].score > member[i-1].score &&
        member[i].score > member[i+1].score && 
        member[i].score > member[i+2].score && 
        member[i].score > member[i+3].score &&
        member[i].score > member[i+4].score &&
        member[i].score > member[i+5].score &&
        member[i].score > member[i+6].score &&
        member[i].score > member[i+7].score &&
        member[i].score > member[i+8].score &&
        member[i].score > member[i+9].score 
        )
        cout << "The player who scored the most points is: " << member[i].name << endl;
    }
    else if ( i == 3){
        if( 
        member[i].score > member[i-3].score &&
        member[i].score > member[i-2].score &&
        member[i].score > member[i-1].score && 
        member[i].score > member[i+1].score &&
        member[i].score > member[i+2].score && 
        member[i].score > member[i+3].score &&
        member[i].score > member[i+4].score &&
        member[i].score > member[i+5].score &&
        member[i].score > member[i+6].score &&
        member[i].score > member[i+7].score &&
        member[i].score > member[i+8].score &&
        member[i].score > member[i+9].score )
        cout << "The player who scored the most points is: " << member[i].name << endl;
    }
    else if ( i == 4){
        if( 
        member[i].score > member[i-4].score &&
        member[i].score > member[i-3].score &&
        member[i].score > member[i-2].score && 
        member[i].score > member[i-1].score &&
        member[i].score > member[i+1].score &&
        member[i].score > member[i+2].score && 
        member[i].score > member[i+3].score &&
        member[i].score > member[i+4].score &&
        member[i].score > member[i+5].score &&
        member[i].score > member[i+6].score &&
        member[i].score > member[i+7].score)
        cout << "The player who scored the most points is: " << member[i].name << endl;
    }
    else if ( i == 5){
        if( 
        member[i].score > member[i-5].score &&
        member[i].score > member[i-4].score &&
        member[i].score > member[i-3].score && 
        member[i].score > member[i-2].score &&
        member[i].score > member[i-1].score && 
        member[i].score > member[i+1].score &&
        member[i].score > member[i+2].score &&
        member[i].score > member[i+3].score &&
        member[i].score > member[i+4].score &&
        member[i].score > member[i+5].score &&
        member[i].score > member[i+6].score )
        cout << "The player who scored the most points is: " << member[i].name << endl;
    }
    else if ( i == 6){
        if( 
        member[i].score > member[i-6].score &&
        member[i].score > member[i-5].score &&
        member[i].score > member[i-4].score && 
        member[i].score > member[i-3].score &&
        member[i].score > member[i-2].score && 
        member[i].score > member[i-1].score &&
        member[i].score > member[i+1].score &&
        member[i].score > member[i+2].score &&
        member[i].score > member[i+3].score &&
        member[i].score > member[i+4].score &&
        member[i].score > member[i+5].score )
        cout << "The player who scored the most points is: " << member[i].name << endl;
    }
    else if ( i == 7){
        if( 
        member[i].score > member[i-7].score &&
        member[i].score > member[i-6].score &&
        member[i].score > member[i-5].score && 
        member[i].score > member[i-4].score &&
        member[i].score > member[i-3].score && 
        member[i].score > member[i-2].score &&
        member[i].score > member[i-1].score &&
        member[i].score > member[i+1].score &&
        member[i].score > member[i+2].score &&
        member[i].score > member[i+3].score &&
        member[i].score > member[i+4].score )
        cout << "The player who scored the most points is: " << member[i].name << endl;
    }
    else if ( i == 8){
        if( 
        member[i].score > member[i-8].score &&
        member[i].score > member[i-7].score &&
        member[i].score > member[i-6].score && 
        member[i].score > member[i-5].score &&
        member[i].score > member[i-4].score && 
        member[i].score > member[i-3].score &&
        member[i].score > member[i-2].score &&
        member[i].score > member[i-1].score &&
        member[i].score > member[i+1].score &&
        member[i].score > member[i+2].score &&
        member[i].score > member[i+3].score )
        cout << "The player who scored the most points is: " << member[i].name << endl;
    }
    else if ( i == 9){
        if( 
        member[i].score > member[i-9].score &&
        member[i].score > member[i-8].score &&
        member[i].score > member[i-7].score && 
        member[i].score > member[i-6].score &&
        member[i].score > member[i-5].score && 
        member[i].score > member[i-4].score &&
        member[i].score > member[i-3].score &&
        member[i].score > member[i-2].score &&
        member[i].score > member[i-1].score &&
        member[i].score > member[i+1].score &&
        member[i].score > member[i+2].score )
        cout << "The player who scored the most points is: " << member[i].name << endl;
    }
    else if ( i == 10){
        if( 
        member[i].score > member[i-10].score &&
        member[i].score > member[i-9].score &&
        member[i].score > member[i-8].score && 
        member[i].score > member[i-7].score &&
        member[i].score > member[i-6].score && 
        member[i].score > member[i-5].score &&
        member[i].score > member[i-4].score &&
        member[i].score > member[i-3].score &&
        member[i].score > member[i-2].score &&
        member[i].score > member[i-1].score &&
        member[i].score > member[i+1].score )
        cout << "The player who scored the most points is: " << member[i].name << endl;
    }
    else if ( i == 11){
        if( 
        member[i].score > member[i-11].score &&
        member[i].score > member[i-10].score &&
        member[i].score > member[i-9].score && 
        member[i].score > member[i-8].score &&
        member[i].score > member[i-7].score && 
        member[i].score > member[i-6].score &&
        member[i].score > member[i-5].score &&
        member[i].score > member[i-4].score &&
        member[i].score > member[i-3].score &&
        member[i].score > member[i-2].score &&
        member[i].score > member[i-1].score)
        cout << "The player who scored the most points is: " << member[i].name << endl;
    }
    }
}