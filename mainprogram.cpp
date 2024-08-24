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
        cout<<" －－－－－－－－－"<<endl;
        for(int j=0;j<3;j++)
        {
            cout<<"|  "<<map[i][j]<<"  ";
        }
        cout<<"|"<<endl;
    }
    cout<<" －－－－－－－－－"<<endl;
}

bool IsOk(int n,char map[3][3],char Player='O')
{
    if(n<=3)
    {
        if(map[2][n-1]!=' ')
            return false;
        else
        {
            map[2][n-1]=Player;
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
        if(map[0][n-7]!=' ')
            return false;
        else
        {
            map[0][n-7]=Player;
            return true;
        }
    }
    else
        return false;
}

void Computer(char map[3][3],char Cpu = 'X',char Player = 'O')
{
    _sleep(1000);
    for(int i = 0;i < 3;i++)
        if(map[i][0]==Cpu&&map[i][0]==map[i][1]&&map[i][2]==' ')
        {
            map[i][2] = Cpu;
            return;
        }
    for(int i = 0;i < 3;i++)
        if(map[i][1]==Cpu&&map[i][1]==map[i][2]&&map[i][0]==' ')
        {
            map[i][0] = Cpu;
            return;
        }
    for(int i = 0;i < 3;i++)
        if(map[0][i]==Cpu&&map[0][i]==map[1][i]&&map[2][i]==' ')
        {
            map[2][i] = Cpu;
            return;
        }
    for(int i = 0;i < 3;i++)
        if(map[1][i]==Cpu&&map[1][i]==map[2][i]&&map[0][i]==' ')
        {
            map[0][i] = Cpu;
            return;
        }
    for(int i = 0;i < 3;i++)
        if(map[i][0]==Cpu&&map[i][0]==map[i][2]&&map[i][1]==' ')
        {
            map[i][1] = Cpu;
            return;
        }
    for(int i = 0;i < 3;i++)
        if(map[0][i]==Cpu&&map[0][i]==map[2][i]&&map[1][i]==' ')
        {
            map[1][i] = Cpu;
            return;
        }
    if(map[0][0]==Cpu&&map[1][1]==Cpu&&map[2][2]==' ')
    {
        map[2][2] = Cpu;
        return;
    }
    if(map[0][2]==Cpu&&map[1][1]==Cpu&&map[2][0]==' ')
    {
        map[2][0] = Cpu;
        return;
    }
    if(map[1][1]==Cpu&&map[2][2]==Cpu&&map[0][0]==' ')
    {
        map[0][0] = Cpu;
        return;
    }
    if(map[2][0]==Cpu&&map[1][1]==Cpu&&map[0][2]==' ')
    {
        map[0][2] = Cpu;
        return;
    }
    if(map[0][0]==Cpu&&map[2][2]==Cpu&&map[1][1]==' '||map[0][2]==Cpu&&map[2][0]==Cpu&&map[1][1]==' ')
    {
        map[1][1] = Cpu;
        return;
    }

//------------------------------------------------------------------------------------------------------

    for(int i = 0;i < 3;i++)
        if(map[i][0]==Player&&map[i][0]==map[i][1]&&map[i][2]==' ')
        {
            map[i][2] = Cpu;
            return;
        }
    for(int i = 0;i < 3;i++)
        if(map[i][1]==Player&&map[i][1]==map[i][2]&&map[i][0]==' ')
        {
            map[i][0] = Cpu;
            return;
        }
    for(int i = 0;i < 3;i++)
        if(map[0][i]==Player&&map[0][i]==map[1][i]&&map[2][i]==' ')
        {
            map[2][i] = Cpu;
            return;
        }
    for(int i = 0;i < 3;i++)
        if(map[1][i]==Player&&map[1][i]==map[2][i]&&map[0][i]==' ')
        {
            map[0][i] = Cpu;
            return;
        }
    for(int i = 0;i < 3;i++)
        if(map[i][0]==Player&&map[i][0]==map[i][2]&&map[i][1]==' ')
        {
            map[i][1] = Cpu;
            return;
        }
    for(int i = 0;i < 3;i++)
        if(map[0][i]==Player&&map[0][i]==map[2][i]&&map[1][i]==' ')
        {
            map[1][i] = Cpu;
            return;
        }
    if(map[0][0]==Player&&map[1][1]==Player&&map[2][2]==' ')
    {
        map[2][2] = Cpu;
        return;
    }
    if(map[0][2]==Player&&map[1][1]==Player&&map[2][0]==' ')
    {
        map[2][0] = Cpu;
        return;
    }
    if(map[1][1]==Player&&map[2][2]==Player&&map[0][0]==' ')
    {
        map[0][0] = Cpu;
        return;
    }
    if(map[2][0]==Player&&map[1][1]==Player&&map[0][2]==' ')
    {
        map[0][2] = Cpu;
        return;
    }
    if(map[0][0]==Player&&map[2][2]==Player&&map[1][1]==' '||map[0][2]==Player&&map[2][0]==Player&&map[1][1]==' ')
    {
        map[1][1] = Cpu;
        return;
    }

//------------------------------------------------------------------------------------------------------

    if(map[1][0]==Cpu&&map[0][1]==Cpu&&map[0][0]!=' ')
    {
        map[0][0] = Cpu;
        return;
    }
    else if(map[0][1]==Cpu&&map[1][2]==Cpu&&map[0][2]!=' ')
    {
        map[0][2] = Cpu;
        return;
    }
    else if(map[2][1]==Cpu&&map[1][0]==Cpu&&map[2][0]!=' ')
    {
        map[2][0] = Cpu;
        return;
    }
    else if(map[2][1]==Cpu&&map[1][2]==Cpu&&map[2][2]!=' ')
    {
        map[2][2] = Cpu;
        return;
    }
    else if(map[0][0]==Cpu&&map[2][2]==Cpu&&map[0][2]==' ')
    {
        map[0][2] = Cpu;
        return;
    }
    else if(map[0][0]==Cpu&&map[2][2]==Cpu&&map[2][0]==' ')
    {
        map[2][0] = Cpu;
        return;
    }
    else if(map[0][0]==Cpu&&map[2][2]==Cpu&&map[0][2]==' ')
    {
        map[0][2] = Cpu;
        return;
    }
    else if(map[0][2]==Cpu&&map[2][0]==Cpu&&map[0][0]==' ')
    {
        map[0][0] = Cpu;
        return;
    }
    else if(map[0][2]==Cpu&&map[2][0]==Cpu&&map[2][2]==' ')
    {
        map[2][2] = Cpu;
        return;
    }

//------------------------------------------------------------------------------------------------------

    if(map[1][0]==Player&&map[0][1]==Player&&map[0][0]==' ')
    {
        map[0][0] = Cpu;
        return;
    }
    else if(map[0][1]==Player&&map[1][2]==Player&&map[0][2]==' ')
    {
        map[0][2] = Cpu;
        return;
    }
    else if(map[2][1]==Player&&map[1][0]==Player&&map[2][0]==' ')
    {
        map[2][0] = Cpu;
        return;
    }
    else if(map[2][1]==Player&&map[1][2]==Player&&map[2][2]==' ')
    {
        map[2][2] = Cpu;
        return;
    }
    else if(map[0][0]==Player&&map[2][2]==Player&&map[0][1]==' ')
    {
        map[0][1] = Cpu;
        return;
    }
    else if(map[0][0]==Player&&map[2][2]==Player&&map[1][0]==' ')
    {
        map[1][0] = Cpu;
        return;
    }
    else if(map[0][2]==Player&&map[2][0]==Player&&map[1][0]==' ')
    {
        map[1][0] = Cpu;
        return;
    }


//------------------------------------------------------------------------------------------------------

    if(map[1][1]==' ')
    {
        map[1][1] = Cpu;
        return;
    }

//------------------------------------------------------------------------------------------------------

    if(map[0][0]==' ')
    {
        map[0][0] = Cpu;
        return;
    }
    else if(map[0][2]==' ')
    {
        map[0][2] = Cpu;
        return;
    }
    else if(map[2][0]==' ')
    {
        map[2][0] = Cpu;
        return;
    }
    else if(map[2][2]==' ')
    {
        map[2][2] = Cpu;
        return;
    }

//------------------------------------------------------------------------------------------------------

    if(map[0][1]==' ')
    {
        map[0][1] = Cpu;
        return;
    }
    else if(map[1][0]==' ')
    {
        map[1][0] = Cpu;
        return;
    }
    else if(map[1][2]==' ')
    {
        map[1][2] = Cpu;
        return;
    }
    else if(map[2][1]==' ')
    {
        map[2][1] = Cpu;
        return;
    }

}

int main()
{
    char Player='O',Cpu='X';
    char map[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int n,round=0;

    while(round<5)
    {
        show(map);

        if(IsWin(map))
        {
            cout<<"電腦贏了\n";
            return 0;
        }

        cout<<"（數字鍵比照九宮格）"<<endl;
        cin>>n;
        if(!IsOk(n,map,Player))
        {
            cout<<"按錯了啦 蛤啊你是目洨膩？"<<endl;
            _sleep(1500);
            system("cls");
            continue;
        }
        else
        {
            system("cls");
            show(map);

            if(IsWin(map))
            {
                cout<<"你贏了\n";
                return 0;
            }

            Computer(map,Cpu,Player);
        }
        system("cls");
        round++;
    }

    cout<<"滿圖，不分勝負\n";
    return 0;
}
