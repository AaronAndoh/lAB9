#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


	
	

	
	void populateArray(int A[101][101],int N)
	{
	
		
		srand(time(0));
	
		
		
					for(int r=0; r < N; r++)
				{	
					int i= (rand() % 100);
					int j= (rand() % 100);
					
					cout<<i<< " " <<j<<endl;
					if(A[i][j]=0){
						A[i][j]=1;
						
						
					}
					else{
						A[i][j]=A[i][j]+1;
					}
					
	
	
			
			}
			
					
}
	
	void SearchesValidEnteries(int A[101][101], int XL, int YL,  int XH, int YH){
		cout<<endl;
		for(int e=XL; e<=XH;e++){
			for(int q=YL;q<=YH;q++){
				if (A[e][q]>0)
				{
					cout <<e<< " "<<q<<" " <<A[e][q]<<endl; 
					
				}
		}
	}
}	

int main()
{	
	int E[101][101]={0};
	
	populateArray(E,50);	
	 SearchesValidEnteries(E,80,1,100,10);
}
