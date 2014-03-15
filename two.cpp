#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int row,col,tmp,val,k=0,l=0;
    ifstream file;
    ifstream matfile;

    matfile.open("E:\\CODES\\Newsteg\\cover.txt");
    matfile>>row;
    matfile>>col;



    int mat[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            matfile>>mat[i][j];
        }

    }




    matfile.close();

    file.open("E:\\CODES\\Newsteg\\final.txt");

    char a;

    int number;

while(k<=row-1&&l<=col-1&&file.good())
{
    a=file.get();

    if(a=='1')
        val=1;
    else
        val=0;

            mat[k][l]=mat[k][l]+val;

            if(l==col-1)
            {
                l=0;
                k++;
            }
            else
            {
                    l++;
            }

            number++;
}

    file.close();

ofstream stego("E:\\CODES\\Newsteg\\stego.txt");

stego<<row<<"\t"<<col<<"\n";
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
        stego<<mat[i][j]<<"\t";

    stego<<"\n";
}





    return 0;
}
