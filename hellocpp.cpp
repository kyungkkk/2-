#include <iostream>
using namespace std;

struct Subject //a,b,c
    {
char SubName[30];
int Hakjum;
char Grade[10];
float GPA;
};

struct Student //std1,std2
{
char StdName[30];
int Hakbun;
Subject Sub[3];
float AveGPA;
};

void print_menu();
void one_menu(Student Std1,Student Std2);
void two_menu();


int main()
{
    Subject a,b,c = {0};
    Student std1,std2 = {0};

    int num=0;
    print_menu();

    cout << "원하는 기능을 입력하세요 :\n";
    cin >> num;
    
    if(num==1){
        one_menu(std1,std2);
    }
    else if(num==2){
        two_menu(std1,std2);
    }
    else
    return 0;

return 0;
}

void print_menu(){
    cout << "==== 메뉴 ====\n";
    cout << "1. 학생 성적 입력\n";
    cout << "2. 전체 학생 성적 보기\n";
    cout << "3. 프로그램 종료\n\n";
}

void one_menu(Student Std1,Student Std2){
    
    for(int i=1;i++;i<3)
    {
    cout << "*%d번쨰 학생 이름과 학번을 입력하세요.\n",i;
    cout << "이름 :\n";
    cin >> Std1.StdName;
    cout << "학번 :\n";
    cin >> Std2.Hakbun;
    cout << "\n\n";
    cout << "* 수강한 과목 3개와 각 교과목명을 과목학점 과목등급을 입력하세요.\n";
    for(int j=0;j++;j<3){
    cout << "교과목명 :\n";
    cin >> Std1.Sub[j]->SubName;
    cout << "과목학점수 :\n";
    cin >> Std1.Sub[j]->Hakjum;
    cout << "과목등급<A+~F> :\n";
    cin >> *Std1.Sub[j]->Grade;
    cout << "\n\n";
    }

    }
}

void two_menu(Student Std1,Student Std2){

    cout << "\t\t전체 학생 성적 보기\n";
    cout << "===========================================\n";
    
    cout << "이름 : %c",Std1.StdName;
    cout << "학번 : %d",Std1.Hakbun;
    cout << "===========================================\n";
    cout << "\t\t\t과목명 과목학점 과목등급 과목평점\n :";
    cout << "===========================================\n";
    cout << "\t\t%c    %d       %c       %f\n",Std1.Sub->SubName,Std1.Sub->Hakjum,Std1.Sub->Grade,Std1.Sub->GPA;
    cout << "\t\t%c    %d       %c       %f\n",B.SubName,B.Hakjum,B.Grade,B.GPA;
    cout << "\t\t%c    %d       %c       %f\n",C.SubName,C.Hakjum,C.Grade,C.GPA;
    cout << "===========================================\n";
    cout << "                      평균평점     %f\n",Std1.AveGPA;               
}