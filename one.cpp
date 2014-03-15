#include <iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
#include<fstream>

using namespace std;

void dec_bin(int);
void main2();
void main3();

int bine[3];

int maincnt=0;
int tempcnt=0;
int greatt=0;
int row,col;

int main()
{


    main2();
    tempcnt=row*col;
    main3();


//---------------------------------------------------------------------------------------------------------------------
            return 0;
}





void dec_bin(int n)
{
    int m,j=2;
     while(j>=0)
            {
                m=n%2;
                n=n/2;
                bine[j]=m;
                j--;
            }
            bine[j]=n;
}







void main2()
{
    string t,line;
	string str,mike1;
	int n,bin[8];
	ifstream file,matfile;
	int thecount;

	matfile.open("E:\\CODES\\Newsteg\\cover.txt");
	matfile>>row;
	matfile>>col;
	matfile.close();

	thecount=row*col;


	file.open("E:\\CODES\\Newsteg\\message.txt");
	fstream inmessage("E:\\CODES\\Newsteg\\message.txt",ios::in);

    while(getline(inmessage,line))
        t=t+line+"\n";
    file.close();
    int no=0;


// --------------------------------------------------------------------------------------------------------------------

while(no<(t.length()-1))
{


        n=t[no];
        int j=7,m;
        while(j>=0)
        {
            m=n%2;                                                                 //CONVERT CHARACTERS TO BINARY NUMBER
            n=n/2;
            bin[j]=m;
            j--;
        }
            bin[j]=n;


 //---------------------------------------------------------------------------------------------------------------------




//----------------------------------------------------------------------------------------------------------------------

    for(int k=0;k<8;k++)
    {
            if(bin[k]==1)
                mike1.push_back('1');                                                                //COMPUTE THE BWT......
            else
                mike1.push_back('0');
    }







	int pos;


    vector <string> s;

    string temp;


    mike1.push_back('N');

    int len=mike1.length();

    str.clear();

    for(int i=0;i<len;i++)
    {
        temp=mike1.substr(len-i,i)+mike1.substr(0,len-i);
        s.push_back(temp);


    }


    sort(s.begin(),s.end());

    for(int i=0;i<len;i++)
    {
        temp=s[i];
        char a=temp[len-1];
        str.push_back(a);
    }


//---------------------------------------------------------------------------------------------------------------------



    string inp,aux;
    int zc=0,oc=0,npos,cont;
    vector <int> fin;
    int cons;
    char conschar;


    inp=str;

    int lent=inp.length();
    for(int i=0;i<lent;i++)
    {
        if(inp[i]=='1')
            oc++;
        else if(inp[i]=='0')
            zc++;
        else
            npos=i;
    }

    if(oc>=zc)
    {
        cons=0;
        conschar='0';
        cont=zc;
    }

    else if(zc>=oc)
    {
        cons=1;
        conschar='1';
        cont=oc;
    }

    fin.push_back(cons);
    dec_bin(cont);

    for(int k=0;k<3;k++)
        fin.push_back(bine[k]);


    dec_bin(npos);

    for(int k=0;k<3;k++)
        fin.push_back(bine[k]);

   for(int i=0;i<lent;i++)
   {
       if(inp[i]==conschar)
       {
           if(i<npos)
           {
              dec_bin(i);
                for(int k=0;k<3;k++)
                    fin.push_back(bine[k]);
           }
           else if(i>npos)
           {
                dec_bin(i-1);

                for(int k=0;k<3;k++)
                    fin.push_back(bine[k]);
           }
           else if(i==npos)
                continue;
       }
   }
        maincnt=maincnt+fin.size();

no++;


//---------------------------------------------------------------------------------------------------------------------

mike1.clear();
s.clear();
temp.clear();                                             //------------CLEAR ALL CONTAINERS---------------------//
str.clear();
inp.clear();
aux.clear();
fin.clear();


//---------------------------------------------------------------------------------------------------------------------


}



}












void main3()
{
    string t,line;
	string str,mike1;
	int n,bin[8];
	ifstream file,matfile;
	int row,col,thecount;

	matfile.open("E:\\CODES\\Newsteg\\cover.txt");
	matfile>>row;
	matfile>>col;
	matfile.close();

	thecount=row*col;


	file.open("E:\\CODES\\Newsteg\\message.txt");
	fstream inmessage("E:\\CODES\\Newsteg\\message.txt",ios::in);

    while(getline(inmessage,line))
        t=t+line+"\n";
    file.close();
    int no=0;


// --------------------------------------------------------------------------------------------------------------------

while(no<(t.length()-1)&&greatt==0)
{


        n=t[no];
        int j=7,m;
        while(j>=0)
        {
            m=n%2;                                                                 //CONVERT CHARACTERS TO BINARY NUMBER
            n=n/2;
            bin[j]=m;
            j--;
        }
            bin[j]=n;


 //---------------------------------------------------------------------------------------------------------------------




//----------------------------------------------------------------------------------------------------------------------

    for(int k=0;k<8;k++)
    {
            if(bin[k]==1)
                mike1.push_back('1');                                                                //COMPUTE THE BWT......
            else
                mike1.push_back('0');
    }







	int pos;


    vector <string> s;

    string temp;


    mike1.push_back('N');

    int len=mike1.length();

    str.clear();

    for(int i=0;i<len;i++)
    {
        temp=mike1.substr(len-i,i)+mike1.substr(0,len-i);
        s.push_back(temp);


    }


    sort(s.begin(),s.end());

    for(int i=0;i<len;i++)
    {
        temp=s[i];
        char a=temp[len-1];
        str.push_back(a);
    }



    string inp,aux;
    int zc=0,oc=0,npos,cont;
    vector <int> fin;
    int cons;
    char conschar;


    inp=str;

    int lent=inp.length();
    for(int i=0;i<lent;i++)
    {
        if(inp[i]=='1')
            oc++;
        else if(inp[i]=='0')
            zc++;
        else
            npos=i;
    }

    if(oc>=zc)
    {
        cons=0;
        conschar='0';
        cont=zc;
    }

    else if(zc>=oc)
    {
        cons=1;
        conschar='1';
        cont=oc;
    }

    fin.push_back(cons);
    dec_bin(cont);

    for(int k=0;k<3;k++)
        fin.push_back(bine[k]);


    dec_bin(npos);

    for(int k=0;k<3;k++)
        fin.push_back(bine[k]);

   for(int i=0;i<lent;i++)
   {
       if(inp[i]==conschar)
       {
           if(i<npos)
           {
              dec_bin(i);
                for(int k=0;k<3;k++)
                    fin.push_back(bine[k]);
           }
           else if(i>npos)
           {
                dec_bin(i-1);

                for(int k=0;k<3;k++)
                    fin.push_back(bine[k]);
           }
           else if(i==npos)
                continue;
       }
   }


        //tempcnt=tempcnt-fin.size();

    tempcnt=tempcnt-fin.size();

    if(tempcnt>=0)
    {
       for(int k=0;k<fin.size();k++)
           cout<<fin[k];


    }
    else
        greatt=1;








no++;


//---------------------------------------------------------------------------------------------------------------------

mike1.clear();
s.clear();
temp.clear();                                             //------------CLEAR ALL CONTAINERS---------------------//
str.clear();
inp.clear();
aux.clear();
fin.clear();


//---------------------------------------------------------------------------------------------------------------------


}



}
