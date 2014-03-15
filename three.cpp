#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;





int main()
{
    int row,col,orgrow,orgcol;


    ifstream matfile,orgmat;

    matfile.open("E:\\CODES\\NewSteg\\stego.txt");

    matfile>>row;
    matfile>>col;

    int mat[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            matfile>>mat[i][j];
    }

    matfile.close();

    orgmat.open("E:\\CODES\\Newsteg\\cover.txt");

    orgmat>>orgrow;
    orgmat>>orgcol;

    int omat[orgrow][orgcol];

    for(int i=0;i<orgrow;i++)
    {
        for(int j=0;j<orgcol;j++)
            orgmat>>omat[i][j];
    }

    orgmat.close();

    int i=0,j=0;

while((j<=col-1)&&(i<=row-1))
{
    int cnt=7,no,npos;
    int vals[7],pent=0;
    char thestring[9];




    while((cnt>0)&&(j<=(orgcol-1))&&(i<=(orgrow-1)))
    {
        vals[pent]=mat[i][j]-omat[i][j];

            if(j==orgcol-1)
            {
                j=0;
                i++;
            }
            else
            {
                    j++;
            }

        cnt--;
        pent++;
    }

    if(vals[0]==1)
    {
        for(int p=0;p<9;p++)
            thestring[p]='0';
    }
    else
    {
        for(int p=0;p<9;p++)
            thestring[p]='1';
    }

    no=(vals[1]*4)+(vals[2]*2)+(vals[3]);
    npos=(vals[4]*4)+(vals[5]*2)+(vals[6]);

    thestring[npos]='N';

    cnt=0;

    while((cnt<(no*3))&&(j<=(orgcol-1))&&(i<=(orgrow-1)))
    {
        int m=4,temp1=0,temp;
        for(int k=0;k<3;k++)
        {
            temp=(mat[i][j]-omat[i][j])*m;
            temp1=temp1+temp;
            m=m/2;

            if(j==col-1)
            {
                j=0;
                i++;
            }
            else
            {
                    j++;
            }
        }


        if(temp1>=npos)
        {
            if(vals[0]==1)
                thestring[temp1+1]='1';
            else
                thestring[temp1+1]='0';
        }

        else
        {
            if(vals[0]==1)
                thestring[temp1]='1';
            else
                thestring[temp1]='0';
        }

        cnt=cnt+3;
    }

        for(int p=0;p<9;p++)
            cout<<thestring[p];
}
    return 0;
}






