//#include <iostream>
//using namespace std;
//int sum(int x,int y)
//{
//	
//return x+y;
//	
//	
//}
//
//int main()
//{
//	int x,y;
//	cout<<"entre un nomber x=";
//	cin>>x;
//	cout<<"entre un nomber y=";
//	cin>>y;
//	cout<<"la somme de x+y=";
//	cout<<sum(x,y);
//
//}

                                   ///////// exercice pgcd ////////////////


//#include <iostream>
//using namespace std;
//
//
//	int pgcd(int a,int b){
//		
//		while (a!=b){
//			
//			if(a>b){
//				
//			a=a-b;	
//			}
//			else {
//			b=b-a;
//			}
//			
//			
//		}
//		return b;	
//	}

//int main(){
//	int a,b;
//	cout<<"entre un nomber a=";
//	cin>>a;
//	cout<<"entre un nomber b=";
//	cin>>b;
//	cout<<"pgcd a et b =";
//cout<<pgcd(a,b);	
//}

//exo 

//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
//int main(){
//	int i;
//	srand(time(0));
//	//20 40
//	for(i=0;i<10;i++){
//		cout<< 20+rand()%(40-20)<<endl;
//	}
//	
//	
//}
                         
                            //////// divisibilite de 2 ///////////

//#include <iostream>
//using namespace std;
//int div(int n){
//	int i=0;
//	int j;
//	while(n>2){
//		if(n%2==0){
//		 i=i+1;
//	}
//		n=n/2;
//		j=j+1;
//	}
//	return i;
//}
//int main(){
//	int n;
//	cin>>n;
//	cout<<div(n);
//	
//	 
//}
         
         
         
                                   /////// exercice tp3////////////

//#include <iostream>
//using namespace std;
//int fun(int n){
//	if(n==1 || n==0){
//		return 1;
//	}
//	else{
//		
//		return fun(n-2)+fun(n-1);
//	}
//}
//int main()	{
//	int n;
//	cout<<"entre un nomber "<<endl;
//	cin>>n;
//	cout<<"f= "<<fun(n);
//}


                                             ///// exrecice ////


//#include <iostream>
//using namespace std;
//#include<cmath>
//double UNE(int n)
//{
//		 if(n==0){
//	return pow(2,1/2);
//	}
//else if(n==1){
//		return 1;
//	}
//
//	else{
//		
//		return 2*UNE(n-1)+UNE(n-2);
//	}	
//}
//
//int main(){
//	int n;
//	cout<<"entre un nomber"<<endl;
//	cin>>n;
//	cout<<"u= "<<UNE(n);
//	
//	
//	
//}




         ///////// tp3 exercice 4 /////////////
         
//#include<iostream>
//using namespace std;
//
//double suite(int n)
//int u=n;
//if(n%2==0){
//	for(int i=1;i<n;i++){
//			u=u/2;
//	if(u==1){
//		return i;
//	}
//	}
//
//}
//else{
//	for(int i=1;i<n;i++){
//			u=3u+1;
//	if(u==1){
//		return i;
//	}
//	}
//}
//int main(){
//	int n;
//	cout<<"entre un nomber";
//	cin>>n;
//	
//	cout<<suit(n)
//}
         
         

                              ///////// devoire ///////////
//#include <iostream>
//using namespace std;
//int maxi(int n){
//	int max=0;
//for(int i=0;i<n;i++){
//	int n[i];
//		cout<<"T["<<i<<"]=";
//	cin>>n[i];
////	cout<<"T["<<i<<"]=";
//	if(n[i]>max){
//		max=n[i];
//	}
//
//}
//return max;	
//}
//int mini(int n)	{
//	int min=100;
//	for(int i=0;i<n;i++){
//		int n[i];
//			cout<<"T["<<i<<"]=";
////		cin>>n[i];
////			int min=n[i];
//		
//		if(min>n[i]){
//			min=n[i];
//		}
//		
//	}
//	
//	return min;
// }
//
//int main(){
//int n;
//cout<<"entre un nomber"<<endl;
//cin>>n;
//cout<<"max = "<<maxi(n);
//cout<<endl;
//	
////cout<<"min = "<<mini(n[i]);
//}

//////////////////////////////////////////////////////////////


//#include<iostream>
//using namespace std;
//void matrcice(int T[][],int n, int m){
//	
//
//		for(in i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//	       cout<<T[i][j]<<" ";
//		}
//		cout<<endl;
//		
//	}
//	
//	
//}
//
//int main(){
//	
//	int n,m;
//	cout<<"entre nomber de ligne= ";
//	cin>>n;
//	cout<<"entre nomber de colone= ";
//	cin>>m;
//	int T[n][m];
//		for(in i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout<<"T["<<i<<"]["<<j<<"]= ";
//			cin>>T[i][j];
//			cout<<endl;
//		}
//		
//	}
//	
//	matrice(T,n,m);
//	
//	
//	
//}

 
             ///////////////// //////////////////////////////

//#include<iostream>
//using namespace std;
//void tableau(int T[],int n,int j){
//	
////	if(n==0){
////		cout<<" ";
////	}
////	else{
////		cout<<tableau(T[n],n-1);
////	}
//	
////	
////}
////cout<<T[1];
//
//cout<<T[j];
//
//}
//int main(){
//	int n,i,j;
//	cout<<"entre un nomber de colon= ";
//	cin>>n;
//	cout<<"j=";
//	cin>>j; 
//	int T[n];
//	for(i=0;i<n;i++){
//		cout<<"T["<<i<<"]=";
//		cin>>T[i];
//		cout<<endl;
//	
//	}
//	tableau(T,n,j);
//	
//	
//}



//#include<iostream>
//using namespace std;
//
//void matrice(int n,int m){
//	int T[n][m];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout<<"T["<<i<<"]["<<j<<"]= ";
//			cin>>T[i][j];
//			
//		}
//	}
//	cout<<endl;
//		for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout<<T[i][j]<<" ";
//	
//        }
//        cout<<endl;
//      }
//  }
//
//int main(){
//	int n,m;
//	cout<<"entre un nomber de ligne= ";
//	cin>>n;
//		cout<<"entre un nomber de colone= ";
//	cin>>m;
//	matrice(n,m);
//	
//	
//	
//}


//#include<iostream>
//using namespace std;
//
//void affiche(int T[],int n){
	
//int K[n];
//for(int i=0;i<n;i++){
//	K[i]=T[i];
////	cout<<"K["<<i<<"]="<<K[i]<<endl;
//}
// int lwl=K[0],bedl=0;
//for(int i=1;i<n;i++){
//	for(int j=0;j<i;j++){
//		if(lwl>K[i]){
//			bedl=K[i];
//			K[i]=lwl;
//			lwl=bedl;
//		}
//	}
//	cout<<"bes="<<bedl<<endl;
//	cout<<"lwl= "<<lwl;
//	
//	
//	cout<<endl;
//}
//for(int i=0;i<n;i++){
//	cout<<"K["<<i<<"]="<<K[i]<<endl;
//}
int bedl=0;
for(int i=0;i<4;i++){
	
	for(int j=0;j<16;j++){
		if(T[j]>T[j+1]){
		bedl=T[j+1];
		T[j+1]=T[j];
		T[j]=bedl;
		}
	}
}
	
for(int i=0;i<n;i++)
{
	cout<<"T["<<i<<"]= "<<T[i]<<endl;
//	cout<<"max1= "<<T[0];
//cout<<"max2= "<<T[1];
//cout<<"max3= "<<T[2];
	
//	}	
//
//	
//}


//int main(){
//	int n,i;
//	cout<<"entre un nomber de colone= ";
////	cin>>n;
//	int T[4];
//	for(i=0;i<4;i++){
//		cout<<"T["<<i<<"]= ";
//		cin>>T[i];
//	}
//	cout<<"hjsjf="<<endl;
//
//	affiche(T,4);
//		
//}







  




