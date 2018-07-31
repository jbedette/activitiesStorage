#include "header.h"


activity::activity(){
    typeActivity[0] = '\0';
    descriptionActivity = '\0';
    seasonActivity[0] = '\0';
    toBringActivity[0] = '\0';
}
void activity::activity(char inputType[], char inputDesc[],char inputSeason[], char inputBring[]){
    //vars
    char option = ' ';
    //gooey function deliciousness
    cout << ">> What type of activity are you adding?" << "\n\n";
    cin.get(typeActivity,30,'\n');
    get.ignore(100,'\n');


    cout << ">> Please write a short description of your activity." << "\n\n";
    cin.get(descriptionActivity,280,'\n');
    get.ignore(100,'\n');
    cout << ">> What season is this activity best in?" << "\n\n";


    cout << ">> [S]ummer" << '\n' << ">> [W]inter" << '\n' << ">> S[p]ring" << '\n' << ">> [F]all" << "\n\n";
    cin >> option;
    get.ignore(100,'\n');
    option = tolower(option);
    if(option == 's'){
        seasonActivity = "Summer";
    }else if(option == 'w'){
        seasonActivity = "Winter";
    }else if (option == 'p'){
        seasonActivity = "Spring";
    }else if(option == 'f'){
        seasonActivity = "Fall";
    }


    cout << ">> What should you bring to this activity?"<< '\n' << ">> Please enter two word items like \"Beach Towel\" as \"Beach_Towel\"." << "\n\n";
    cin.get(toBringActivity, 280, '\n');
    cin.ignore(100,'\n');

}
void activity::searchActivity(){

}
void display:: displayActivity(){

}
