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

    cout << "���ϴ� ����� �Է��ϼ��� :\n";
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
    cout << "==== �޴� ====\n";
    cout << "1. �л� ���� �Է�\n";
    cout << "2. ��ü �л� ���� ����\n";
    cout << "3. ���α׷� ����\n\n";
}

void one_menu(Student Std1,Student Std2){
    
    for(int i=1;i++;i<3)
    {
    cout << "*%d���� �л� �̸��� �й��� �Է��ϼ���.\n",i;
    cout << "�̸� :\n";
    cin >> Std1.StdName;
    cout << "�й� :\n";
    cin >> Std2.Hakbun;
    cout << "\n\n";
    cout << "* ������ ���� 3���� �� ��������� �������� �������� �Է��ϼ���.\n";
    for(int j=0;j++;j<3){
    cout << "������� :\n";
    cin >> Std1.Sub[j]->SubName;
    cout << "���������� :\n";
    cin >> Std1.Sub[j]->Hakjum;
    cout << "������<A+~F> :\n";
    cin >> *Std1.Sub[j]->Grade;
    cout << "\n\n";
    }

    }
}

void two_menu(Student Std1,Student Std2){

    cout << "\t\t��ü �л� ���� ����\n";
    cout << "===========================================\n";
    
    cout << "�̸� : %c",Std1.StdName;
    cout << "�й� : %d",Std1.Hakbun;
    cout << "===========================================\n";
    cout << "\t\t\t����� �������� ������ ��������\n :";
    cout << "===========================================\n";
    cout << "\t\t%c    %d       %c       %f\n",Std1.Sub->SubName,Std1.Sub->Hakjum,Std1.Sub->Grade,Std1.Sub->GPA;
    cout << "\t\t%c    %d       %c       %f\n",B.SubName,B.Hakjum,B.Grade,B.GPA;
    cout << "\t\t%c    %d       %c       %f\n",C.SubName,C.Hakjum,C.Grade,C.GPA;
    cout << "===========================================\n";
    cout << "                      �������     %f\n",Std1.AveGPA;               
}