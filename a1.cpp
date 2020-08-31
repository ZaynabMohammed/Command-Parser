
#include<iostream>
#include<cstring>
#include <cstdlib> 
using namespace std;

int main(int argc ,char* argv[])

{
    if (argc==1)
      {
        cout<<"Incorrect Number of Arguments";
        return 0;
      }

string comm_print ("print");
string comm_reverse("reverse");
string comm_upper("upper");
string comm_shuffle_word("shuffle");
string comm_shuffle_statement("shuffleStatement");
string comm_delete("delete");
string comm_middle("middle");
string comm_add("add");
string comm_random("random");


//__________print__________
if(argv[1]==comm_print)
  {
    if ((argc-1)==1)
     {
       cout<<"Incorrect Number of Arguments";
       return 0;
     }
     for(int i=2;i<=argc;i++)
       cout<<argv[i]<<" ";

      cout<<endl;
  }


//__________reverse___________
else if(argv[1]==comm_reverse)
 {
   if ((argc-1)==1)
     {
       cout<<"Incorrect Number of Arguments";
       return 0;
     }

   char* temp [argc];
   for (int i = 0; i < argc / 2; i++) 
     { 
      // swap(argv[i], argv[argc-i-1] ); 
      temp[i] = argv[i];
      argv[i] = argv[argc-1-i];
      argv[argc-1-i] = temp[i];
     }

  for(int j=0;j<argc-2;j++)
    {
      cout<<argv[j]<<" ";
    }

 }


//___________upper_______________
 else if(argv[1]==comm_upper)
{
    if ((argc-1)==1)
     {
       cout<<"Incorrect Number of Arguments";
       return 0;
     }  
      char *s[argc];
 for (int i=2;i<argc;i++)
  {   
       s[i]=argv[i];

      for(int j=0;j<=strlen(argv[i]);j++)
        {
            if(s[i][j]>=97 && s[i][j]<=122)

               {
		s[i][j]=s[i][j]-32;
               }
        }

      cout<<argv[i]<<" ";

  }
}

//___________shuffle word_______________

else if(argv[1]==comm_shuffle_word)
 {
   if ((argc-1)==1)
    {
      cout<<"Incorrect Number of Arguments";
	return 0;
    }
   if ((argc-2)>1)
    {
      cout<<"Incorrect Number of Arguments";
       return 0;
    }
       char* temp[argc];

       for(int j=0;j<((strlen(argv[2]))-1);j+=2)
       {
           // swap(argv[2][j], argv[2][j+1] ); 
               temp[2][j] = argv[2][j];
               argv[2][j] = argv[2][j+1];
               argv[2][j+1] = temp[2][j];     
       }

     cout<<argv[2]<<endl;

 }

//___________shuffle statement_____________

else if(argv[1]==comm_shuffle_statement)
 { 
   if ((argc-1)==1)
    {
      cout<<"Incorrect Number of Arguments";
	return 0;
    }
   
     char* temp[argc];

    for(int j=2;j<(argc-1);j+=2)
       {
           // swap(argv[j], argv[j+1] ); 
               temp[j] = argv[j];
               argv[j] = argv[j+1];
               argv[j+1] = temp[j];     
       }

      for(int j=2;j<argc;j++)
    {
      cout<<argv[j]<<" ";
    }
 }

//_______________delete_________________

else if(argv[1]==comm_delete)
 {
   if ((argc-1)==1 || (argc-1)==2)
     {
       cout<<"Incorrect Number of Arguments";
	return 0;
     }

	int g=atoi(argv[2])+2;
	 if (g>(argc-1))
       {
	 cout<<"Incorrect Number of Arguments";
	 return 0;
       }
	 if ((g-2)<0)
        {
	  cout<<"Incorrect Data Type";
	  return 0;
         }
     if(atoi(argv[2])==0)
      {
        for(int i=3; i<argc; i++)
          cout<<argv[i]<<" ";
          return 0;
		             
       }
      
        
   int index=(argv[2][0])-48;

   for(int i=2; i<argc; i++)
        {
	  if(argv[i]==argv[index+2])
		{
		   for(int j=i; j<(argc-1); j++)
			{
				argv[j]=argv[j+1];
			}
			break;
		}
	}
	 
	for(int i=3; i<(argc-1); i++)
          cout<<argv[i]<<" ";
		               
 }

//______________middle_______________

else if(argv[1]==comm_middle)
 {
   if ((argc-1)==1)
    {
       cout<<"Incorrect Number of Arguments";
        return 0;
    }
   int index;
   
     if (argc%2!=0)
      {
        index=argc/2;
       cout<<argv[index+1];
      }
   else if(argc%2==0)
      {
        index=argc/2;
       cout<<argv[index]<<" "<<argv[index+1]<<endl;
      }
 }

//__________________add_____________________

else if(argv[1]==comm_add)
 {
  if ((argc-1)==1)
  {
    cout<<"Incorrect Number of Arguments";
    return 0;
  }
 for (int i=2;i<argc;i++)
  {
   for (int j=0;j<strlen(argv[i]);j++)
       {
        int y=argv[i][j]-48;
         if ((y==-5||y==-3) && j==0 && strlen(argv[i])>1)
           {
           }
         else if((y>9)||(y<0))
           {
             cout<<"Incorrect Data Type";
 	      return 0;
           }
       }
  }
   double sum=0; int x;

   for(int i=2; i<argc; i++)
     {
       sum=sum+atof( argv[i]);

    }
     x=sum*10;
     if(x%10==0)
       { 
       cout<<sum<<endl;
       }
     else
     cout<<"Incorrect Data Type"<<endl;



 }

//_______________random______________
 
else if(argv[1]==comm_random)
 {
   int x=argc-1;
   if (x<5||x>5)
     {
       cout<<"Incorrect Number of Arguments";
       return 0;
     }
   int seq_len=atoi(argv[2]);
   int min=atoi(argv[3]);
   int max=atoi(argv[4]);
   int seed_value=atoi(argv[5]);
   if ( (min>=max) || (seq_len<=0) )
     {
        cout<<"Incorrect_Data_Type";
	 return 0;
     }
for (int i=2;i<argc;i++)
  {
   for (int j=0;j<strlen(argv[i]);j++)
       {
        int y=argv[i][j]-48;
         if((y>9)||(y<0))
           {
             cout<<"Incorrect Data Type";
 	      return 0;
           }
       }
  }

  srand(seed_value);

  for ( int i=0 ; i<seq_len ; i++ )
     {
        cout<<(rand()%(max+1-min)+min)<<" ";
      }

 }
else
 {
  cout<<"undefined command"<<endl;
   return 0;

 }

}


