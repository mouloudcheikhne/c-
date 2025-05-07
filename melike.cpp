//#include<iostream>
//using namespace std;
//int main(){
//int n,i;
//cout<<"entre un nomber"<<endl	;
//cin>>n;
//for(i=0;i<n;i++){
//	cout<<" * ";
//}
//cout<<endl;
//for(i=0;i<n-2;i++){
//	cout<<" * "<<endl;
//}
//for(i=0;i<n;i++){
//	cout<<" * ";
//}
//	
//	
//	
//}
//exo2
//#include<iostream>
//using namespace std;
//int main(){
//	
//int n,u=6,i;
//cout<<"entre un nomber"	;
//cin>>n;
//for(i=0;i<n;i++){
//	u=4*u+10;
//}
//cout<<"afficher u= "<<u;	
//	
//}
//exo4
//#include<iostream>
//using namespace std;
//int main(){
//	
//int n,i,r;
//cout<<"entre un nomber"	<<endl;
//cin>>n;
//while(n!=0){
//n=n/10;
//i=i+1;		
//}
//cout<<"afficher nomber de chiffres ="<<i;
//}
//ex03
//#include<iostream>
//using namespace std;
//int main(){
//	int n,inv,r,s;
//	cout<<"entre un nomber"<<endl;
//	cin>>n;
//	s=n;
//	while(n!=0){
//		r=n%10;
//		inv=inv*10+r;
//		n=n/10;
//	}
////	cout<<inv;
//	
//	if(s!=inv){
//		cout<<" nom palindrome";
//	}
//	else{
//	
//		cout<<"palindrome";
//	}
//	
//}

//#include<iostream>
//using namespace std;
//int main(){
//	
//	int r,b,j=0,i=0,n;
//	cout<<"entre un nomber"<<endl;
//	cin>>n;
//	while(n!=0){
//		r=n%10;
//		n=n/10;
//		i=i+1;	
//	}
//	b=i/2;
//	for(j=0;j<=b;j++){
//		if(n[j]!=n[i-1-j]){
//			cout<<"nom pal";
//		}
//	}
//	else{
//		cout<<"pal";
//	}
//	
//}

//ex02tp2


//#include<iostream>
//using namespace std;
//int main(){
//	
//	int x,i,fact=1,p=1,r,n;
//  double s=1.0;
//	cout<<"entre un nomber"<<endl;
//	cin>>x;
//
//	cout<<"entre n=";
//	cin>>n;
//	for(i=1;i<=n;i++){
//		fact=fact*i;
//		//cout<<fact<<endl;
//		p=p*x;
//	//	cout<<p<<endl;
//		s=s+(p/fact);
//	
//	}
//	cout<<s;	
//}


//#include<iostream>
//using namespace std;
//int main(){
//int n,s=0,i=0,moy;
//cout<<"entre un nomber"<<endl;
//cin>>n;
//while(n>0){
//	
//	s=s+n;
//	cin>>n;
//	i++;
//}
//
//moy=s/i;
//cout<<moy;
//
//
//}

//exo5 tp
//
//#include<iostream>
//using namespace std;
//int main(){
//
//int n,i;
//cout<<"entre un nomber"<<endl;
//cin>>n;
//while(n<1 || n>3){
//	
//	cin>>n;
//i++;	
//}
//
//}


//#include<iostream>
//using namespace std;
//int main(){
//	
//	int n,i,j;
//	cout<<"entre un nomber "<<endl;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++){
//			cout<<"*";
//		}
//		cout<<endl;	
//	}
//		
//}


//#include<iostream>
//using namespace std;
//int main(){
//	
//	int n,i,j;
//	cout<<"entre un nomber "<<endl;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//			cout<<" * ";
//		}
//		cout<<endl;	
//	}
//		
//}



//#include<iostream>
//using namespace std;
//int main(){
//	
//	int n,i;
//	bool pre=true;
//	cout<<"entre un nomber"<<endl;
//	cin>>n;
//	while(i<n && !pre){
//		if(n%i==0){
//		
//		}
//			pre=false;
//		i++;	
//	}
//	
//	cout<<"premier";	
//}



//#include<iostream>
//using namespace std;
//int main(){
//	string mouloud;
//	int b,j,i;
//	char letter=' ';
//	cin>>mouloud;
//	b=mouloud.size();
//	for(i=0;i<b;i++){
//	
//		if(mouloud[i]!=letter){
//			j=j+1;
//		}
//	}
//	cout<<j;		
//}

                 


//#include<iostream>
//using namespace std;
//int main(){
//	
//int n,i;
//cin>>n;
//bool is_premier=true;
//for(i=2;i<n;i++){
//	if(n%i==0){
//		is_premier=false;
//		cout<<n<<"n est pas nbr premier";
//	}
//}
//

//	if(is_premier==true){
//	cout<<n<<" est nbr premier";
//}
//else{
//	cout<<n<<"n est pas nbr premier";
//}
	
//}
	
	




//#include<iostream>
//using namespace std;
//int main(){
//	int n,i=0,j=0,k;
//	cin>>n;
//	
//	while(n>=2){
//		k=n%2;
//		if(k==0){
//			i=i+1;
//		}
//		n=n/2;
//		j=j+1;
//	}
//	cout<<i;
//	
//}
/////// tableau/////////
//#include<iostream>
//using namespace std;
//int main(){
//	int i;
//	for(i=0;i<3;i++){
//
//	int n[i];
//	cin>>n[i];	
//		cout<<i<<" ="<<n[i]<<endl;
//	}	
//}
	                                        //////// palindrom metode 2 ////////////
	                                        
	
	
	
//#include<iostream>
//using namespace std;
//int main()	{
//	string chain,inv ,stok;
//	int i;
//	cin>>chain;
//	stok=chain;
////	cout<<stok;
//	
//	int b=chain.size();
//	for(i=b;i>=0;i--){
//		inv=inv+chain[i];
//
//	}
//	cout<<"inv="<<inv<<endl;
////	cout<<"chain= "<<stok<<endl;
//	if(inv==stok){
//		cout<<"palin";
//	}
//	else {
//		cout<<"no palin";
//	}
//	
//
//}




////////////////////////////////////////////////////////////////////////


//#include<iostream>
//using namespace std;
//int main(){
//	int i,j;
//	for(i=0;i<3;i++){
//		
//		for(j=0;i<3;j++){
//			int n[i][j];
//			cin>>n[i][j];
//			cout<< i,j<<n[i][j];
//		}
//		cout<<endl;	
//	}	
//}
///////////////////////////////////////////////////////////////////////


///// tp3 binaire///////

//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(){
//	int n,b=0,i=0,r,p;
//	cout<<"entre un nomber un decimal"<<endl;
//	cin>>n;
//	while(n!=0){
//		
//		r=n%2;
//		cout<<"r= "<<r<<endl;
//		p=pow(10,i);
//		cout<<"p= "<<p<<endl;
//		b=b+r*p; 
//		cout<<"b= "<<endl;
//		
//		i=i+1;
//			n=n/2;
//	
//	
//	}
//	cout<<"b= "<<b;
//	
//}



                      //////////// tp3 exrcice 4 /////////////////
                    
// #include<iostream>
// using namespace std;
// int main(){
// 	
// 	int n,i;
// 	cout<<"entre un nomber";
// 	cin>>n;
// 	int u=n;
// 	for(i=1;i<n;i++){
// 		if(n%2==0){
// 			u=u/2;
// 			if(u==1){
// 				cout<<i;
//			 }
//			 else{
//			 	u=3u+1;
//			 	if(u==1){
//			 		cout<<i;
//				 }
//			 }
//		 }
// 		
// 		
//	 }
// 	
// 
// }

                      /////////// tp3 exercice 1 ////////////////
                      
//  #include<iostream>
//  #include<cmath>
//  using namespace std; 
//  int main(){
//  	int ax,ay,bx,by,cx,cy;
//  	float ab,bc,ac;
//  	cout<<"entre le coordone de pt a"<<endl;
//  	cin>>ax;
//  	cin>>ay;
//  	while(ax<0 || ax>100 || ay<0 || ay>100){
//  		cin>>ax>>ay; 
//	  }
//	  cout<<endl;
//	  cout<<"entre le cordonne de b"<<endl;
//	  cin>>bx;
//	  cin>>by;
//	  while(bx<0 ||bx>100 || by<0 || by>100){
//	  	cin>>bx>>by;
//	  }
//	  cout<<endl;
//	  	while(bx==ax && by==ay){
//	 	cin>>ax;
//	  	cin>>ay;
//	  	cin>>bx;
//	  	cin>>by;
//	  }
//	  
//	  
//	  cout<<"entre le cordonne de c"<<endl;
//	  cin>>cx;
//	  cin>>cy;
//	  while(cx<0 || cx>100 || cy<0 || cy>100){
//	  	cin>>cx>>cy;
//	
//	  }
//	  while(bx==cx && by==cy){
//	 	cin>>bx;
//	  	cin>>by;
//	  	cin>>cx;
//	  	cin>>cy;
//	  }
//	  ab=sqrt(pow(bx-ax,2)+pow(by-ay,2));
//	  cout<<"la distance de AB= "<<ab;
//	  
//	  bc=sqrt(pow(cx-bx,2)+pow(cy-by,2));
//	  cout<<"distance bc = "<<bc;
//	  
//	  ac=sqrt(pow(cx-ax,2)+pow(cy-ay,2));
//	  cout<<"distance ac = "<<ac;	  
//}

  	
  	
  	////////////////////////////////// 
  	
  	
//#include<iostream>
//using namespace std;
//
//int u(int n){
//	if(n==2){
//		return n;
//	}
//	else if(n%2==0){
////		return 2*u(n-1)+1;
//return u(n-1)/2;
//	}
//	else{
//		return 3*u(n-1)+1; 
//	}
//	
//	
//}
//
//int main(){
//	int n;
//	cout<<"entre un nomber";
//	cin>>n;
//	
//	cout<<"u="<<u(n);
//  }
  	
  	
     
                      
              ///////////////////////////
              
//#include<iostream> 
// using namespace std;
//
//void affi(int t, int 3)
//{
//	int max=0,min=t[0];
//for(int i=0;i<3;i++){
//	if(t[i]>max){
//		max=t[i];
//	}
//}
//cout<<max;
//
//for(int i=0;i<3;i++){
//	if(t[i]<min){
//	min=t[i];
//	}
//}
//cout<<min;
//
//
//}
//
//
//int main(){
//	
//	int t[3]={2,6,9};
//	
//	affi(t ,3);
//	
//}
      
	  
	  /////// pgcd avec recercive ///////
	          


//  #include<iostream> 
// using namespace std;
// int pg(int a,int b){
// 	
// 	if(b==0){
//	 return a;
//	 }
// 	else{
// 		return pg(b,a%b);
//	 }
// 	
// }
//  
//	int main(){
//		int a,b;
//     cout<<"entre un nomber a=";
//		cin>>a;
//		   cout<<"entre un nomber b=";
//		cin>>b;
//		cout<<pg(a,b);
//		
//		
//	}



////////////////////////// le3be /////////


//#include<iostream>
// #include<stdlib.h>
// #include<ctime>
//using namespace std;
//int main(){
//	int s,n,i=0;
//	srand(time(0));
//	s=10+rand()%200;
//	cout<<"la valeur entre par ordinateur = "<<s;
//	cout<<endl;
//	cout<<"entre un nomber =" ;
//	cin>>n;
//	
//	while(i<5){
//	if(s==n){
//		cout<<"bravo";
//		break;
//	}
//	if(n>s)	{
//		cout<<"plue grand ";
//		cin>>n;
//	}
//	else{
//		cout<<"plue petite";
//		cin>>n;
//	}
//		
//		i++;
//	
//	
//	}
	
	
	
//}
	
	///////////////////////// febonn
	
//	#include<iostream>
// #include<stdlib.h>
// #include<ctime>
//	using namespace std;
//	int f(int n){
//		if(n==0 || n==1){
//			return 1;	
//		}
//		else{
//			return f(n-2)+f(n-1);
//		}
//	}
//	int main(){
////		
//		int n;
//		srand(time(0));
//		n=rand()%100;
////	cout<<"n= "<<n;
//	
//		cout<<f(n);	
//	}
	

	

//#include<iostream>
//#include<ctype.h>
//using namespace std;
//void gh(string chain,int n){
//	
//	char c=' ';
//	char m='_';
//	if(n==0){
//		cout<<" ";
//	}
//	else{
//		 gh(chain,n-1);
//		if(chain[n-1]==c){
//			chain[n-1]=m;
//		}
//		cout<<chain[n-1];
//	}
//}
//
//
//int main(){
//	
//	string chain;
//	cout<<"entre un chain= ";
//getline(cin,chain);
//int n=chain.size();
//
//gh(chain,n);
//
//}


//#include<iostream>
//#include<ctype.h>
//using namespace std;
//string gh(string chain,int n){
//	
//	char c=' ';
//	char m='_';
//	if(n==0){
//		return " ";
//	}
//	else{
//		
//		 gh(chain,n-1);
//		if(chain[n-1]==c){
//			chain[n-1]=m;
//		}
//		return chain[n-1];
//	}
//}
//
//
//int main(){
//	
//	string chain;
//	cout<<"entre un chain= ";
//getline(cin,chain);
//int n=chain.size(); 
//cout<<gh(chain,n);
//
//}



#include<iostream>
#include<ctype.h>
using namespace std;
int u(int n){
	int j=0;
	while(j<=n){	
		if(n==0){
			return n;
		}
		else{
			if(n%2==0){
		return 	u(n-1)/2;
			if(u(n-1)/2==1){
				return j;
			}
		}
			else{
				return 3*u(n-1)+1;
			}		
	}	
}
j++;
}
int main(){
	int n;
	cout<<"n= ";
	cin>>n;
	cout<<u(n);
}








