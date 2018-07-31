#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

//John Bedette, cs162
//activity storage product


class activity{
    public:
        activity();//constructor
        void activity(char typeActivity[],char descriptionActivity[],char seasonActivity[],char toBringActivity[]);//read in data

        void setActivity(char[],char[],char[],char[]);

        void searchActivity();//search by activity type

        void displayActivity(char activityType[]);//display all activities
    private:
        char typeActivity[30];
        char descriptionActivity[280];
        char seasonActivity[7];
        char toBringActivity[280];
};
class type{
    public:
        type();
        type(char actType[], int length, char des[]);
        void addType(activity &
