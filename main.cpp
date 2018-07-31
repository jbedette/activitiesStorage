#include "header.h"

//prototypes
void menu(index[]);


//main
int main(){ 

    //vars
    activity index[21];

    //intro
    cout << ">> Welcome to my activity... recorder.. thing..." << "\n\n";   

    menu(index); 

    return 0;
}


//flow funcs
void menu(){
    //vars
    char option = ' ';

    //meaty menu goodness

    cout << ">> Would you like to:" << '\n';
    cout << ">> [A]dd an activity?" << '\n';
    cout << ">> [S]earch for an activity by type" << '\n';
    cout << ">> [D]isplay all activitites" << '\n';
    cout << ">> [Q]uit" << '\n';
    cin >> option;
    cin.ignore(100,'\n');
    option = tolower(option);

    while(option != 'q'){
        if(option == 'a'){
            activityAdd();
        }else if(option == 's'){
            activitySearch();
        }else if(option == 'd'{
            activityDisplay();   
        }else{
            cout << ">> Goodbye" << "\n\n";
        }

    }
    
}
