#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>


using namespace std;

void invbwt();

string str;

int main()
{
    ifstream file;

    file.open("E:\\CODES\\Newsteg\\three.txt");

    char j;
    while(file.good())
    {
        str.clear();
        for(int i=0;i<9;i++)
        {
                file>>j;
                str.push_back(j);
        }


        invbwt();

        //cout<<"\n"<<str;
    }

    file.close();

    return 0;
}

void invbwt()
{
    int len=9;
    string strings[len];

    string jinx,temp;

    for(int i=0;i<len;i++)
    {
        strings[i]=str[i];

    }

    sort(strings,strings+len);

    int cnt=len-2;

    while(cnt>=0)
    {
        for(int i=0;i<len;i++)
        {
            strings[i]=str[i]+strings[i];

        }


        sort(strings,strings+len);



        cnt--;
    }

    //for(int i=0;i<len;i++)
      //      cout<<"\n"<<strings[i];












    temp=strings[len-1];
    temp=temp.substr(1,len-1);

   // cout<<"\n"<<temp;


    int m=128,val=0;
    for(int j=0;j<9;j++)
    {
        if(temp[j]=='1')
        {
            val=val+m;
        }
        m=m/2;
    }

    char ch;
    ch=val;
   cout<<ch;
}
