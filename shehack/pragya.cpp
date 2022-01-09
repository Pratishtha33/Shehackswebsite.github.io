#include<iostream>
#include<stdio.h>
using namespace std;
struct info
{
    char player_name;
    char team_name;
    int avg;
};
int main ()
{
struct info arr[50];
int i;
cout<< "enter the details of player" << endl;
for (i=0; i<50; i++)
{
	cin >>  arr[i].player_name >>arr[i].team_name>>  arr[i].avg;
	fflush(stdin);
}
for (i=0; i<50; i++)
{
cout << "name:" << arr->player_name << endl;
cout << "team_name:" << arr->player_name<< endl;
cout<< "average:" << arr->team_name<< endl;
}
return 0;
}