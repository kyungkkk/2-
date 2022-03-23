#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

int n=0;
int random=0;
int Stu[24]={};
srand((unsigned int)time(NULL));

cin >> n;

for(int i=0;i<n;i++){
random=rand()%24;
Stu[random]+=1;
}

for(int j=0;j<24;j++){
    cout << Stu[j] << endl;
}
}
