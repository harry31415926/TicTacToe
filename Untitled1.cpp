#include<bits/stdc++.h>
using namespace std;

bool IsWin(char map[3][3])
{
    for(int i=0;i<3;i++)
        if(map[i][0]!=' '&&map[i][0]==map[i][1]&&map[i][1]==map[i][2])
            return true;
    for(int i=0;i<3;i++)
        if(map[0][i]!=' '&&map[0][i]==map[1][i]&&map[1][i]==map[2][i])
            return true;
    if(map[0][0]!=' '&&map[0][0]==map[1][1]&&map[1][1]==map[2][2])
        return true;
    if(map[0][2]!=' '&&map[0][2]==map[1][1]&&map[1][1]==map[2][0])
        return true;
    return false;
}

void show(char map[3][3])
{
    for(int i=0;i<3;i++)
    {
        cout<<" �СССССССС�"<<endl;
        for(int j=0;j<3;j++)
        {
            cout<<"|  "<<map[i][j]<<"  ";
        }
        cout<<"|"<<endl;
    }
    cout<<" �СССССССС�"<<endl;
}

bool IsOk(int n,char map[3][3],char Player='O')
{
    if(n<=3)
    {
        if(map[0][n-1]!=' ')
            return false;
        else
        {
            map[0][n-1]=Player;
            return true;
        }
    }
    else if(n<=6)
    {
        if(map[1][n-4]!=' ')
            return false;
        else
        {
            map[1][n-4]=Player;
            return true;
        }
    }
    else if(n<=9)
    {
        if(map[2][n-7]!=' ')
            return false;
        else
        {
            map[2][n-7]=Player;
            return true;
        }
    }
    else
        return false;
}

int main()
{
    char Player='O',Cpu='X';
    char map[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int n;

    while(true)
    {
        show(map);
        cout<<"�]�����h�X�A�Ʀr���ӤE�c��^"<<endl;
        cin>>n;
        if(!IsOk(n,map,Player))
        {
            cout<<"�����F�� ��ڧA�O���m���H"<<endl;
            _sleep(1500);
            system("cls");
            continue;
        }
        else
        {

        }
        system("cls");
    }


    return 0;
}
