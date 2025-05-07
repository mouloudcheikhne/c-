
  /////////////// chain de caracteur nb mot phra ///////

//#include<iostream>
//#include<ctype.h>
//using namespace std;
//int letter(string chain){
//   int b=chain.size();
//   char c=' ';
//   int j=0;
//   for(int i=0;i<b;i++){
//   	if(chain[i]!=c){
//   		j++;
//	   }
//   }
//
//return j;
//}
//int mot(string chain){
//   int b=chain.size();
//   char c=' ';
//   int l=0;
//   for(int i=0;i<b;i++){
//   	if(chain[i]==c){
//   		l++;
//	   }
//   }
//
//return l;
//}
//
//int phrase(string chain){
//   int b=chain.size();
//   char c=',';
//   char h='.';
//   int k=0;
//   for(int i=0;i<b;i++){
//   	if(chain[i]==c ||chain[i]==h){
//   		k++;
//	   }
//   }
//return k;
//}
//
//
//int main(){
//	string chain;
//	cout<<"entre un chain de caracteur = ";
//	getline(cin,chain);
//	cout<<" nomber de letter="<<letter(chain);
//	cout<<endl;
//	cout<<" nomber de mot ="<<mot(chain);
//		cout<<endl;
//	cout<<" nomber de phrase ="<<phrase(chain);
//		
//}


 ////////////////////// tableau t3agb oo ////


//#include<iostream>
//using namespace std;
//int main(){
//	int n ,gh=0;
//	cout<<"entre nomber de colon = ";
//	cin>>n;
//	int T[n];
//		for(int i=0;i<n;i++){
//		cout<<"T["<<i<<"]=";
//		cin>>T[i];
//	}
//	cout<<endl;
//	for(int i=0;i<n;i++){
//	for(int j=0;j<n-1;j++){
//
//		if(T[j]==0){
//			gh=T[j];
//			T[j]=T[j+1];
//			T[j+1]=gh;
//		}
//			}
//	}
//	for(int i=0;i<n;i++){
//		cout<<"T["<<i<<"]= "<<T[i]<<endl;
//	}
//	
//}


   ////////////////////// sorti tableau max 3 //////

//#include<iostream>
//using namespace std;
//int main(){
//	int n ,gh=0;
//	cout<<"entre nomber de colon = ";
//	cin>>n;
//	
//	int T[n];
//		for(int i=0;i<n;i++){
//		cout<<"T["<<i<<"]=";
//		cin>>T[i];
//	}
//	cout<<endl;
//	
//		for(int i=0;i<n;i++){
//	for(int j=0;j<n-1;j++){
//	if(T[j]>T[j+1]){
//		gh=T[j];
//		T[j]=T[j+1];
//		T[j+1]=gh;
//	}
//	
//	}
//}
//		for(int i=0;i<n;i++){
//		cout<<"T["<<i<<"]= "<<T[i]<<endl;
//
//	
//	}
//	cout<<endl;
//	cout<<"max 1= "<<T[n-3]<<endl;
//
//		cout<<"max 2= "<<T[n-2]<<endl;
//			cout<<"max 3= "<<T[n-1];
//	}

  
  
  
            ///////////////  KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK 
            
            
//#include<iostream>
//#include<ctype.h>
//using namespace std;
//bool alf(string chain ){
//	
//	int b=chain.size();
//	for(int i=0;i<b;i++){
//		if(isalpha(chain[i])==false){
//			return false;
//		}
//	}
//
//		return true;
//
//	
//}
//int main(){
//	
//	string chain;
//	cout<<"entre un chaine de caracteur = ";
//	getline(cin,chain);
//	int h=chain.size();
//	int i;
////	cout<<"h = "<<h<<endl;
//	
////	cout<<"alfa= "<<alf(chain);
//	while(alf(chain)==false || h<10){
//		cin>>chain;
//		i++;
//		cout<<"i ="<<i;S
//	}
//	cout<<"nbvv";	
//}




                /////////////////////// devoir tableau ///////////////
                
//#include<iostream>
//using namespace std;
// int prem(int T[],int n,int x){
// bool vrai =false;
// 	for(int j=0;j<n;j++){
// 		if(T[j]==x){
// 				return j;
// 			vrai=true;
// 		
//		 }
//	 }
// 	if(vrai==false){
// 		return -1;
//	 }
// 	
// 	
// 	
// }
//int den(int T[],int n,int x){
//	int j;
//	for(j=n;j>0;j--){
//		if(T[j]==x){
//			return j;
//		}
//     }
//	}
//	
//	bool une(int T[],int n,int x){
//		
//		if(prem(T,n,x)==1 || den(T,n,x)==1){
//			return true;
//		}
//	}
//
//
//int main(){
//	int n,x;
//	cout<<"entre nomber de colone = ";
//	cin>>n;
//	int T[n];
//	for(int i=0;i<n;i++ ){
//		cout<<"T["<<i<<"]= ";
//		cin>>T[i];
//		
//	}
//	cout<<endl;
//	cout<<"x= ";
//	cin>>x;
//	cout<<"premier occurence=  "<<prem(T,n,x);
//	cout<<endl;
//cout<< "dernier occurence = "<<den(T,n,x);
//	cout<<endl;
//	cout<<"hgk= "<<une(T,n,x);	
//}    
         
		 
		 //////  parie 1 de exo tableau        
                
//#include<iostream>
//using namespace std;
//int inte(int T[],int n){
//	for(int j=0;j<n;j++){
//		cin>>T[j];
//		return T[j];
//	}
//}
//
//int main(){
//	
//	int n;
//	cout<<"entre un nomber de colon =";
//	cin>>n;
//	int T[n];
//	
////	cout<<inte(T,n);
//	for(int i=0;i<n;i++){
//		cout<<"T["<<i<<"]= "<<inte(T,n);
//	}
//	
//	
//}



                       ///////////////////// matrice symetrique //////
                       
                       
//#include<iostream>
//using namespace std;
//int main(){
//	int n,m;
//	cout<<"entre nomber de ligne et nomber de colone  = ";
//	cin>>n;
//	int T[n][n];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			cout<<"T["<<i<<"]["<<j<<"]= ";
//			cin>>T[i][j];
//		}
//	}
//	
//	cout<<endl;
//		for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			cout<<T[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	bool vrai =true;
//	
//		for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//		if(T[i][j]!=T[j][i]){
//			vrai=false;
//				
//			cout<<" no symetique";
//			break;
//		}
//		}
//	}
//	if(vrai==true){
//		cout<<"symetrique";
//	}	
//}

                
                
                /////////////////  mouktar /////////////
                
//#include<iostream> 
//using namespace std;
//int main() {
//	
//	int n,m,i,j;
//	cout<<"entre nomber de ligne = ";
//	cin>>n;
//	
//	cout<<"entre nomber de colone = ";
//	cin>>m;
//	int T[n][m];
//		for(i=0;i<n;i++){
//		for(j=0;j<m;j++){
//			cout<<"T["<<i<<"]["<<j<<"]= ";
//			cin>>T[i][j];
//		}
//	}
//	cout<<endl;
//	 for(i=0;i<n;i++){
//	 	for(j=0;j<m;j++){
//	 		T[j][i]=T[i][j];
//	 		if(i==j){
//	 			T[i][j]=1;
//			 }
//
//
////	 		break;
//		 }
//	 }
//
//	
////	cout<<endl;
//	for(i=0;i<n;i++){
//		for(j=0;j<m;j++){
//			cout<<T[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}          
                
                
                
                
                
                
                     /////////// MATRICE MEME DIAGONALE //////////////
                
// #include<iostream> 
// #include<stdlib.h>
// #include<ctime>
//using namespace std;
//int main() {
//	
//	int n,m,i,j;
//	cout<<"entre nomber de ligne et colon = ";
//	cin>>n;  
//	srand(time(0)) ; 
//	int T[n][n] ;     
//                
//    
//		for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			T[i][j]=rand()%10;
//		
//		}
//	
//}
//	cout<<endl;
//	
//                
//       	 for(i=0;i<n;i++){
//	 	for(j=0;j<n;j++){
//	 		T[j][i]=T[i][j];
//	 		if(i==j){
//	 			T[i][j]=1;
//			 }
////	 		T[i+1][j+1]=1;
//
////	 		break;
//		 }
//	 }
//
//	
////	cout<<endl;
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			cout<<T[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}

                
                
                ///////////////////////////////  some de diagonal dans MATRICE /////////// 
                
//#include<iostream>
//using namespace std;
//int main(){
//	
//		int n,m,i,j,s=0;
//	cout<<"entre nomber de ligne et colon  = ";
//	cin>>n;
//	
//
//	int T[n][n];
//		for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			cout<<"T["<<i<<"]["<<j<<"]= ";
//			cin>>T[i][j];
//		}
//	}
//	
//	
//			for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(i==j){
//				s=s+T[i][j];
//			}
//		
//		}
//	}
//		cout<<endl;
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			cout<<T[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<endl;
//	cout<<"some de diagonal = "<<s;
//}



////////////////////////////////// MAX Dans MATRICE ///////////////

                
//  #include<iostream>
//using namespace std;
//int main(){
//	
//		int n,m,i,j,s=0;
//	cout<<"entre nomber de ligne et colon  = ";
//	cin>>n;
//	
//
//	int T[n][n];
//		for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			cout<<"T["<<i<<"]["<<j<<"]= ";
//			cin>>T[i][j];
//		}
//	}  
//	int max=T[0][0];
//	
//		for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//	if(T[i][j]>max){
//		max=T[i][j];
//	}
//         }
//	}  
//	
//		cout<<endl;
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			cout<<T[i][j]<<" ";
//		}
//		cout<<endl;
//	} 
//	cout<<endl;
//	cout<<"max = "<<max;
//}


 ////////////////////////////////////// LE MINE DANS MATRICE ///////////
 
 
 
 
//   #include<iostream>
//using namespace std;
//int main(){
//	
//		int n,m,i,j,s=0;
//	cout<<"entre nomber de ligne et colon  = ";
//	cin>>n;
//	
//
//	int T[n][n];
//		for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			cout<<"T["<<i<<"]["<<j<<"]= ";
//			cin>>T[i][j];
//		}
//	} 
//
//int min=T[0][0];
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(T[i][j]<min){
//				min=T[i][j];
//			}
//		}
//	}
//
//		cout<<endl;
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			cout<<T[i][j]<<" ";
//		}
//		cout<<endl;
//	} 
//cout<<endl;
//cout<<"min = "<<min;
//
//
//
//}



                        ////////////////// triangle pascale /////////////
                        
// #include<iostream>
//using namespace std;
//int main(){
//	
//		int n,i,j;
//	cout<<"entre nomber de ligne et colon  = ";
//	cin>>n;
//	
//	int T[n][n];
//	for(i=0;i<n;i++){
//		for(int j=0;j<(i+1);j++){
////			cout<<i+1<<endl;
//			T[i][0]=1;
////			T[i][i]=1;
////			if(!T[i-1][j-1] || T[i-1][j-1] == 0)
////				T[i-1][j-1] = 0;
//			
//			T[i][j]=T[i-1][j-1]+T[i-1][j];
//			T[i][i]=1;
//			
//			 
//		}
//		
//	}
//	
//	
//			cout<<endl;
//			
//	for(i=0;i<n;i++){
//		for(j=0;j<=i;j++){
////			if(T[i][j])
//			cout<<T[i][j]<<"   ";
//		}
//		cout<<endl;
//	} 
//	
//
//}

//////////////////////////////////////////// da7se ////////////


//#include<iostream>
//using namespace std;
//int main(){
//	int a,b,c;
//	cout<<"entre un a= ";
//	cin>>a;
//    cout<<"entre un b= ";
//	cin>>b;
//	cout<<"entre un c= ";
//	cin>>c;
//	if(a>0 && a<15 && b>0 && b<15  && c>0 && c<15){
//		
////		if(a>b && b>c){
//			for(int i=0;i<a;i++){
//				cout<<"A ";
////				cout<<endl;
//			}
//			cout<<endl;
//			for(int j=0;j<b;j++){
//				cout<<"B ";
////						cout<<endl;
//			}
//			cout<<endl;
//			for(int k=0;k<c;k++){
//				cout<<"c ";
////						cout<<endl;
//			}
////		}
//		
//	}
//	
//	
//}


            //////////////////// some de deux matrice //////////

//#include<iostream>
//using namespace std;
//int main(){
//	
//	int n ,i,j;
//	cout<<"entre un nomber n=";
//	cin>>n;
//	int T[n][n];
//	int K[n][n];
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			cout<<"T["<<i<<"]["<<j<<"]=";
//			cin>>T[i][j];
//		}
////			cout<<endl;
//	}
//		cout<<endl;
//		cout<<"matrice 1  =";
//			cout<<endl;
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			cout<<T[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//
//		for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			cout<<"k["<<i<<"]["<<j<<"]= ";
//			cin>>K[i][j];
//		}
////			cout<<endl;
//	}
//		cout<<endl;
//		cout<<"matrice2 =";
//			cout<<endl;
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			cout<<K[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	cout<<endl;
//	int h[n][n];
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			h[i][j]=T[i][j]+K[i][j];
//		}
//		
//	}
//		cout<<endl;
//		cout<<"matrice3 =";
//			cout<<endl;
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			cout<<h[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	
//	
//}



////////////////////////////////////////////////  exo matrice moukhar ////////////////////////////////



//#include<iostream>
//#include<stdlib.h>
//#include<ctime>
//using namespace std;
//int main(){
//	
//	int n,i,j;
//	
//	cout<<"entre nomber de ligne colone = ";
//	cin>>n;
//	int T[n][n];
//	
//	srand(time(0));
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			T[i][j]=rand()%10;
//		}
//	}
//	
//	
//		for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//		cout<<T[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	int max=T[0][0];
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(T[i][j]>max){
//				max=T[i][j];
//			}
//		}
//	}
//	
//	
//	cout<<"max= "<<max;
//	cout<<endl;
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(T[i][j]==max){
//			cout<<"i= "<<i;
//			cout<<endl;
//			cout<<"j= "<<j;
//			break;
//			}
//			
//		}
//	}
//	cout<<endl;
//	int min=T[0][0];
//		for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(T[i][j]<min){
//				min=T[i][j];
//			}
//		}
//	}
//	cout<<"min= "<<min;
//	cout<<endl;
//		for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(T[i][j]==min){
//			cout<<"i= "<<i;
//			cout<<endl;
//			cout<<"j= "<<j;
//			break;
//			}
//	
//		}
//	}
//	
//}



///////////////////////////////////devoir suite retuecive  ///////////////////         
//#include<iostream>
//#include<cmath>
//using namespace std;
//int suit(int n){
//	
//	if(n==0){
//		return sqrt(2);
//	}
//	if(n==1){
//		return 1;
//	}
//	else{
//		return 2*suit(n-1)+suit(n-2);
//	}
//	
//	
//}
//int main(){
//	
//	int n;
//	cout<<"entre un nomber n= ";
//	cin>>n;
//	
//	cout<< "suit ="<<suit(n);
//	
//	
//}


////////////////////////////////////////////  babe zer6e ////////////

//#include<iostream>
//using namespace std;
//int main(){
//	int k=0;
//	string chain1,chain2;
//	cout<<"entre chain1= ";
//	cin>>chain1;
//	cout<<"entre chain2 = ";
//	cin>>chain2;
//	bool vrai=true;
//	int n=chain1.size();
//	int m=chain2.size();
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++)
//		if(chain1[i]==chain2[j]){
////			cout<<"vrai";
////			cout<<endl;
//
//       k++;
//       break;
//
//		} 
//	
//	}
//	if(k==n){
//		cout<<"angramme";
//	}
//	else{
//		cout<<" non angramme";
//	}
//  
//}



//////////////////////////////////////////



////////////////////////////////// permitation ////////////////

//#include<iostream>
//using namespace std;
//int main(){
//
//int n,bn=0,i;
//cout<<"entre n= ";
//cin>>n;
//int T[n];
//for( i=0;i<n;i++){
//	cout<<"T["<<i<<"]= ";
//	cin>>T[i];
//}
//cout<<endl;
//cout<<"permitation= "<<endl;
////for(int h=0;h<6;h++){
//for(i=0;i<n;i++){
//	for(int j=0;j<n-1;j++){
//	bn=T[j];
//	T[j]=T[j+1]	;
//	T[j+1]=bn;
//	for(int k=0;k<n;k++){
//		cout<<"T["<<k<<"]= ";
//		cout<<T[k];
//		cout<<endl;
//	}
//	cout<<endl;
//		cout<<" prt"<<j;
////	cout<<endl;
////	cout<<" prt"<<i;
//	cout<<endl;
//	}
//}
//
////}
//
//}

///////////////////////////////////////

//#include<iostream>
//using namespace std;
//int main(){
//	int j,i;
//	string chain;
//	char n;
//	cout<<"entre chain = ";
//	cin>>chain;
//	int b=chain.size();
//	for( i=0;i<b;i++){
//		for( j=0;j<b-1;j++){
//			n=chain[j];
//			chain[j]=chain[j+1];
//			chain[j+1]=n;
//
//		
//		cout<<endl;
//		cout<<"permitation= "<<endl;
//	cout<<"pre= "<<j<<endl;
//	cout<<chain;
//	cout<<endl;	
//	}
//	
//		
//}
//}


//////////////////////////// 
//#include<iostream>
//#define MAX 100
//using namespace std;
//void affiche(int T[MAX][MAX],int n){
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
////			cout<<"T["<<i<<"]["<<j<<"]= ";
//			cout<<T[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}
//int main(){
//		int T[MAX][MAX];
//	int n;
//	
//	cout<<"entre n= ";
//	cin>>n;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			cout<<"T["<<i<<"]["<<j<<"]= ";
//			cin>>T[i][j];
//		}
//	}
//	
//	affiche(T,n);
//}

////////////////////////////////////////////// taleb
//#include<iostream>
//using namespace std;
//void tabl(int T[], int n){
//	cout<<T[n];
//	if(n!=0){
//		tabl(T,n-1);
//	}
//}
//int main(){
//	int n;
//	cout<<"entre nomber de colone n=";
//	cin>>n;
//	int T[n];
//	for(int i=0;i<n;i++){
//		cout<<"T["<<i<<"]= ";
//		cin>>T[i];
//	}
//	
//	tabl(T,n);
//}
//////////////////////////////////// tableau recercuve /////////////////

//#include<iostream>
//using namespace std;
//void tabl(int T[], int n){
//	if(n==0){
//		cout<<" ";
//	}
//	else{
//		tabl(T,n-1);
//		cout<<T[n-1];
//	}
//	
//}
//
//int main(){
//	int n;
//	cout<<"entre nomber de colone n=";
//	cin>>n;
//	int T[n];
//	for(int i=0;i<n;i++){
//		cout<<"T["<<i<<"]= ";
//		cin>>T[i];
//	}
//	
//	tabl(T,n);
//}

/////////////////

//#include<iostream>
//using namespace std;
//int main(){
//	
//	int n;
//	cout<<"entre un nombee n= ";
//	cin>>n;
//	int T[n];
//	for(int i=0;i<n;i++){
//		cout<<"T["<<i<<"]= ";
//		cin>>T[i];
//	
//	}
//	int jk;
//	for(int i=0;i<n;i++){
//
//	for(int j=0;j<n;j++){
//		jk=T[j];
//		T[j]=T[n-1-j];
//		T[n-1-j]=jk;
//		cout<<T[j];
//	}
//		}
//		for(int i=0;i<n;i++){
//		cout<<"T["<<i<<"]= "<<T[i];
//	cout<<endl;
//	
//	}
//}


///////////////////////////////////////////////// matrice diference entre deux diagonal ////////////

//#include<iostream>
//using namespace std;
//int main(){
//	
//		int n,j,s1=0,s=0,s2=0;
//	
//	cout<<"entre n= ";
//	cin>>n;
//	int T[n][n];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			cout<<"T["<<i<<"]["<<j<<"]= ";
//			cin>>T[i][j];
//		}
//	}
//		cout<<endl;
//	for(int i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(i==j){
//				s1=s1+T[i][j];
//			}
//		}
//	}
//	
//	cout<<endl;
//	s=T[n-1][0]+T[0][n-1];
//	cout<<"s fg="<<s;
//	for(int i=1;i<=n-2;i++){
//		for(j=0;j<n;j++){
//			if(i==j){
//				s=s+T[i][n-i-1];
////					cout<<"s= "<<s;
//			}
//		}
//	}
//cout<<endl;
//for(int i=0;i<n;i++){
//	for(j=0;j<n;j++){
//		cout<<T[i][j]<<" ";
//	}
//	cout<<endl;
//}
//s2=s1-s;
//if(s2<0){
//	s2=-s2;
//}
//	cout<<endl;
//	cout<<"s1= "<<s1<<endl;
//	cout<<"s= "<<s<<endl;
//	cout<<" s-s1="<<s2;
//	
//	
//}

///////////////
//#include<iostream>
//using namespace std;
//int div(int n){
//	int i=0,j=0;
//	while(n!=0){
//		if(n%2==0){
//			i++;
//		} 
//		n=n/2;
//		j++;
//		
//	}
//	return i;
//}
//int main(){
//	
//	
//	int n;
//	cout<<"entre n= ";
//	cin>>n;
//	cout<<div(n);
//	
//}

//////////////////
//#include<iostream>
//using namespace std;
//int div(int n){
//	int j=0;
//	for(int i=2;i<n;i++){
//		if(n%i==0){
//			j++;
//		}
//	}
//	
//	return j;
//}
//	
//	int main(){
//			int n;
//	cout<<"entre n= ";
//	cin>>n;
//	cout<<div(n);
//	}


///////////////////////  ggh //////////

//#include<iostream>
//using namespace std;
//void f(int i,int n){
//cout<<n-i<<endl;
//if(i>=0 && i<10){
//	i++;
//	f(i,n);
////	cout<<"i="<<i;
//}
//}
//int main(){
//	int i=0;
//	int n;
//	cin>>n;
//	f(i,n);
//	
//	
//}

//////// some de carre par rucercive ////
//#include<iostream>
//using namespace std;
//int some(int n){
//	if(n==1){
//		return 1;
//	}
//	else{
//		return n*n+some(n-1);
//	}
//}
//int main(){
//	int n;
//	cout<<"n= ";
//	cin>>n;
//	cout<<some(n);
//}

