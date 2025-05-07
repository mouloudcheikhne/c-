//#include<iostream>
//using namespace std;
//int main(){
//	
//	int n,i,j,k,l;
//	cout<<"entre un nomber ";
//	cin>>n;
//	for(i=0;i<n;i++){
//		for(j=1;j<=n*2-1;j++){		
//	
//		if(j>=n-i && j<=n+i){
//			
//			cout<<"*";
//		}
//		else {
//				cout<<" ";
//		}
//	}
//			cout<<endl;
//		}
//	
//	for(k=n;k>=0;k--){
//		for(l=n*2-1;l>=1;l--){
//			if(l>=n-k && l<=n+k){
//				cout<<"*";
//			}
//			else {
//				cout<<" ";
//			}
//		}
//		cout<<endl; 
//		
//	}
//}


//////////////////////////////// exercice tableau mabgi chi mahou vyhe ///////

//#include<iostream>
//#include<string>
//using namespace std;
//int maxi(int t[],int n){
//	
//	int max=t[0];
//	for(int j=0;j<n;j++){
//		if(t[j]>max){
//			max=t[j];
//		}
//		
//	}
//	return max;
//	
//}
//int mini(int t[],int n){
//	int min=t[0];
//	for(int k=0;k<n;k++){
//		if(t[k]<min){
//			min=t[k];
//		}
//		
//	}
//	return min;
//		
//}
//int somme(int t[],int n){
//	int s=0;
//	for(int l=0;l<n;l++){
//		s=s+t[l];
//	}
//	
//return s;	
	
//}



//int main(){
//	
//	int n,i,o;
//	cout<<"ebtre nomber de colone : ";
//	cin>>n;
//	int t[n];
//	for(i=0;i<n;i++){
//		cout<<"le nombre "<<i+1<<" : ";
//		cin>>t[i]; 
//	if(t[i]<-100 || t[i]>100)  {
//			cin>>t[i];
//
//		}      
//	}
//	
//
//cout<<"max="<<maxi(t,n);
//cout<<endl;
//cout<<"min ="<<mini(t,n);
//cout<<endl;
//cout<<"somme ="<<somme(t,n);
//cout<<endl;
//cout<<"addition min="<<somme(t,n)-maxi(t,n);
//cout<<endl;
//cout<<"addition max="<<somme(t,n)-mini(t,n);
//}




                 /////////////////////////// bezyde////////////
                 
                 
//#include<iostream>
//using namespace std;
//int main(){
//	int n,i,j;
//	cout<<"entre nomber de colone"<<endl;
//	cin>>n;
//	int T[n];
//	for(i=0;i<n;i++){
//		cout<<"T["<<i<<"]=";
//		cin>>T[i];
//	}
//	cout<<" da5al numero 2ly dur netyjtu ";
//	cin>>j;
//
//		cout<<"T["<<j<<"]="<<T[j];
//		
//}




                       /////////////////////////////// parfait //////////

//#include<iostream>
//using namespace std;
//int main(){
//	int n,i,s=0;
//	cout<<"da5al ra9me"<<endl;
//	cin>>n;
//	int k=n;
//	for(i=1;i<n;i++){
//	if(n%i==0){
//		s=s+i;
//		
//}
//	
//}
//if(s==k){
//			cout<<"parfait";
//		}
//			else {
//		cout<<"no parfait";
//	}
////cout<<"s="<<s;	
//}

//#include<iostream>
//using namespace std;
//int da7se(int n){
//	int k,i=0; 
//	while(n!=0){
//			n=n/10;	
//			i++;	
//	}
//	return i;	
//}
//int main(){
//	int n;
//	cout<<"da5ale ra9me"<<endl;
//	cin>>n;
//	cout<<"3ade lr9ame= "<<da7se(n);	
//}



/////////////////////////////// 2njume ////////////////////
//#include<iostream>
//using namespace std;
//int main(){
//	int n,i,j,k;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n-i;j++){
//			cout<<" ";
//		}
//		for(k=0;k<2*i-1;k++)
//		cout<<"*";
//		
//		cout<<endl;		
//	}
//	for(i=n;i>=1;i--){
//		for(j=n-i;j>=1;j--){
//			cout<<" ";
//		}
//			for(k=2*i;k>1;k--){
//				cout<<"*";
//			}
//		cout<<endl;	
//		
//	}
//}

     ///////////////// triangl inv ////////////
//#include<iostream>
//using namespace std;
//int main(){
//	int n,i,j,k;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n-i;j++){
//			cout<<" ";
//		}
//		for(int k=1;k<=i;k++){
//			cout<<"*";
//		}
//		cout<<endl;
//
//}
//}


                /////////////////////// tp3 ex05////////////////

//#include<iostream>
//#include<ctype.h>
//#include<cctype>
//using namespace std;
//bool alph(string chain){
//	int b=chain.size();
//	for(int i=0;i<b;i++){
//		if(!isalpha(chain[i]))
//		{
//			return false;
//			break;
//		}
//	}
//	
//    return true;	
//}
//bool kl(string chain){
//	int b=chain.size();
//	for(int j=0;j<b;j++){
//		if(!isupper(chain[j])){
//			return false;
//			break;
//		}
//		
//	}
//	return true;
//	
//}
//
//int main(){
//	string chain;
//	bool vra=true;
//	int s;
//     
//	
//	cout<<"entre un chain"<<endl;
//	cin>>chain;
//	s=chain.size();
//	cout<<s<<endl;
//
//	cout<<alph(chain);
//	
//	cout<<endl;
//	
//	cout<<kl(chain);
//	while(alph(chain)==false ||  kl(chain)==true){
//		cin>>chain;
//	}
//
//	for(int h=0;h<s;h++){
//		if(chain[h]!=chain[s-h-1]){
//			vra=false;
//			cout<<"no paln";
//			break;
//		}
//		
//	}
//	if(vra==true){
//		cout<<"palindrom";
//	}
//	
//	
//}


               //////////// tp4  ex2  //////////////////




//#include<iostream>
//#include<ctype.h>
//using namespace std;
//
//int mouloud( string chain ){
//	int j=0;
//	char h ='c';
//	int b=chain.size();
//	for( int i=0;i<b;i++){
//		if(chain[i]==h){
//			j=j+1;
//		}
//	}
//	return j;
//}
//int melike(string chain){
//	char v=' ';
//	int k=0;
//	
//	int b=chain.size();
//	for(int s=0;s<b;s++){
//		if(chain[s]==v){
//			k=k+1;
//		}	
//	}
//	return k;
//}

//	int main(){
//	string chain;
//	cout<<"entre chain"<<endl;
//getline (cin, chain);
//cout<<mouloud(chain)<<endl;
//cout<<melike(chain);
//	
//	}





                      /////////////tp4 exo1 /////////
                      

//#include<iostream>
//using namespace std;
//
//bool premier(int j){
//	bool pre =true;
//	for(int l=2;l<j;l++){
//		if(j%l==0)
//		{
//			pre=false;
//				return false;
////			break;
//		
//		}
//		
//	}
//	if(pre=true){
//		return true;
//	}
//
//
//
//	
//}
//
//
//
//int main(){
//	int n,k=0,j;
////	cout<<"entre un nomber "<<endl;
////	cin>>n;
////	cout<<premier(n);
//
//	for( j=2;j<1000;j++){
////	cout<<premier(j);
////	cout<<endl;
//if( premier(j)==true){
////	k++;
//cout<<"j="<<j<<endl;
//}
//	}
//
////cout<<"k="<<k;
//	
//	
//}


   ///////////////////// tp4 ex3 ///////////

//#include<iostream>
//using namespace std;
//
//void permitation(int a,int b){
//	cout<<a<<endl;
//	cout<<b<<endl;
//	int c;
//	c=a;
//	a=b;
//	b=c;
//	cout<<a<<endl;
//	cout<<b;
//	
//}
//int main(){
//	int a,b;
//	cout<<"entre un nomber a=";
//	cin>>a;
//	cout<<"entre un nombre  b= ";
//	cin>>b;
//	 permitation(a,b);	
//}	


       /////////////////////  tp4 exo4 ///////////

//#include<iostream>
//using namespace std;
//int some(int n){
//	if(n==0){
//		return 0;
//	}
//	else{
//			return n+some(n-1);	
//	}
//}
//
//int puissance (int n,int x){
//	
//	if(n==1){
//		return x;
//	}
//	else{
//	return x* puissance(n-1,x);
//	}
//	
//	
//	
//}
//int main(){
//	int n,x;
//	cout<<"entre un nomber"<<endl;
//	cin>>n;
//	cout<<"entre x=";
//	cin>>x;
//	cout<< some(n); 
//	cout<<endl;
//cout<<puissance(n,x);
//	
//}
	
	
	
	//////////////////// tp4 exo5 //////////////
	
	
//	#include<iostream>
//	using namespace std;
//	int pgcd(int a,int b){
//		int i;
//		int r,q;
//		r=a%b;
//		if(a>b){
//			while(r!=0){
//		      q=a/b;
//		      	r=a%b;
//		      a=b;
//		      b=r;	
//			}
//				return a;
//		}
//			
//	}
//	
//	int main(){
//		int a,b;
//		cin>>a;s
//		cin>>b;
//		cout<< pgcd(a,b);

//	}





              ////////////////// tp4 exo6//////////////////
//#include<iostream>
//using namespace std;
////
//void affichage(int T[], int n){
//	int max=0;
// for(int j=0;j<n;j++){
//// 	int max=T[0];
// 	if(T[j]>max){
// 		max=T[j];
//	 }
// }
//cout<<"max="<<max;
//cout<<endl;
//	

//	int min=T[0];
//for(int l=0;l<n;l++){
////	int min=T[0];
//if(T[l]<min){
//	min=T[l];
//    }
// 
//  }
//  cout<<"min="<<min;
//  
//  
//}
//
//
//int main(){
//	int n;
//	cout<<"entre nomber de colone"<<endl;
//	cin>>n;
//	int T[n];
//	for(int i=0;i<n;i++){
//		cout<<"T["<<i<<"]=";
//		cin>>T[i];
//		if(T[i]<-100 || T[i]>100){
//			cin>>T[i];
//		}
//		
////		 cout<<"T["<<i<<"]="<<T[i]<<endl;
//	
//    }
//    
//affichage(T,n);
//
//}




//////////////////////////////////////




//#include<iostream>
//using namespace std;
//
//int affi(int T[], int n){
//	int max=0;
//	for(int i=0;i<n;i++){
//		
//		if(T[i]>max){
//			max=T[i];
//		}
//	}
//	return max;
//	
//}
//
//
//
//int main(){
//	
//	int T[4]={1,2,4,6};
//	int n;
//	n=4;
//	cout<<affi(T,n);
//}

                             /////////// INV TABLEAU /////


//#include<iostream>
//using namespace std;
//int main(){
//	
//	int n,i,j;
//	cout<<"entre nomber de colone"<<endl;
//	cin>>n;
//	int T[n];
//	for(i=0;i<n;i++){
//		cout<<"T["<<i<<"]=";
//		cin>>T[i];
//		
//		
//	}
//	cout<<endl;
//	int k[n];
//	for(j=0;j<n;j++){
//		cout<<"T["<<j<<"]=";
//		k[j]=T[n-1-j];
//		cout<<k[j];
//		cout<<endl;
//	}
//}
  
      //// ////////////////////////inv chain caracteur////////
      

//#include<iostream> 
//using namespace std	;
//
//int main(){
//		 string chain;
//	cout<<"entre un chain = ";
// cin>>chain;
//
//// cout<<inv(chain);
//	 int b=chain.size();
////	 cout<<b<<endl;
//	 string kj;
//	 
//
//
//	 for(int i=0;i<b;i++){
//	 kj[i]=chain[b-1-i];
////	 	cout<<"kj["<<i<<"]="<<kj[i];
//      cout<<kj[i];
//	 }
//	
////cout<<"kj="<<kj; 
//}


 ///////////////////////////////////// letre maj et min////
//#include<iostream>
//#include<ctype.h>
//using namespace std;
//bool alf(string phrase){
//	int n=phrase.size();
//	bool vrai=true;
//	for(int i=0;i<n;i++){
//		if(isalpha(phrase[i])==false){
//			vrai=false;
//			return false;
//		}
//	}
//	if(vrai==true){
//		return true;
//	}
//}
//int fonct(string phrase){
//	int b=phrase.size();
//	int j=0,k=0;
//	for(int i=0;i<b;i++){
//		if(isupper(phrase[i])==true){
//			j++;
//		}
//	}
//	return j;
//
//}
//int main(){
//	string phrase;
//	cout<<" entre phrase =";
//	getline(cin,phrase);
//	int o=phrase.size(),i=0;
//	cout<<"o="<<o<<endl;
//
//
//while(alf(phrase)==false||o<10){
//	getline(cin,phrase);
////cin>>phrase;
//	o=phrase.size();
////	cout<<"o="<<o;
//	i++;
//}
//	cout<< "letre maj= "<<fonct(phrase)<<endl;
//	cout<<"letre mins= "<<o-fonct(phrase);
//}
                          
	
	
	///////////// inv par recurcivite

//	#include<iostream>
//using namespace std;
//void fh(string chain,int b,int n){
//	string inv;
//	if(n==b){
//		cout<<" ";
//	}
//	else{
//		fh(chain,b,n+1);
//		cout<<chain[n]<<endl;
//	}
//for(int i=0;i<b;i++){
//	inv=inv+chain[n];
//}
//cout<<"inv= "<<inv;
//	
//}
//int main(){ 
//	string chain;
//	cout<<"entre chain= ";
//	cin>>chain;
//	int b=chain.size(),n=0;
//	fh(chain,b,n);
//	string chain1;
//	for(int j=0;j<b;j++){
//		chain1=chain1 + fh(chain,b,n);
//	}
//chain1=fh(chain,b,n);
//cout<<"chain1= "<<chain1;
//
//chain1=fh(chain,b,n);
//cout<<"inv= "<<fh(chain,b,n);
//}


//	#include<iostream>
//using namespace std;
//int pal(int n,int i){
//	if(n==0 ){
//	return 0;
//	}
//	else{
//		return (n%10)*(10^i)+pal(n/10,i+1);
//
//	}
//}
//int main(){
//	
//	int n,i=1;
//	cout<<"n= ";
//	cin>>n;
//cout<<pal(n,i);
//	
//}

//	#include<iostream>
//using namespace std;
//void pal(int t[],int n,int b){
//	if(b==n-1){
//		cout<<"";
//	}
//	else{
//		pal(t,n,b+1);
//		cout<<t[b+1];
//	}
//		
//}
//int main(){
//	
//	int n,i=1;
//	cout<<"n= ";
//	cin>>n;
//	int b=-1;
//	int t[n];
//	for(int i=0;i<n;i++){
//		cout<<"T["<<i<<"]=";
//		cin>>t[i];
//	}
//pal(t,n,b);
//	
//}

//////////// le3dad

//	#include<iostream>
//using namespace std;
//int som(int n){
//	if(n==0){
//		return 0;
//	}
//	else{
//		return 1+som(n/10);
//	}
//}
//int main(){
//		int n;
//	cout<<"n= ";
//	cin>>n;
//	
//	cout<<som(n);
//}


//////////////////////// some de chiffer

//	#include<iostream>
//using namespace std;
//int some(int n){
//	if(n==0){
//		return 0;
//	}
//	else{
//		return n%10+some(n/10);
//	}
//}
//int main(){
//	
//		int n;
//	cout<<"n= ";
//	cin>>n;
//	cout<<some(n);
//}

///////////////


//	#include<iostream>
//using namespace std;
//int u(int n,int i){
//	int k=0;
//	if(n==0){
//		return n;
//	}
//	else{
//		if(n%2==0){
//		return	u(n-1,i+1)/2;
//
//			if(u(n-1,i+1)==1){
//			return i;
//			}
//		}
//		else{
//		return	3*u(n-1,i+1);
//				if(3*u(n-1,i)==1){
//			return i;
//			}
//		}
//	}	
//}
//int main(){
//	
//			int n,i=-1;
//	cout<<"n= ";
//	cin>>n;
//cout<<u(n,i);
//}


/////////////////// inv table void 


//#include<iostream>
//using namespace std;
//
//void fon(int T[],int n,int p,int b){
//	if(n==b){
//		cout<<"";
//	}
//	else{
//		fon(T,n,p,b+1);
//		cout<<T[b];
//	}
//	
//}
//
//int main(){
//	int n,b=0,p;
//	cout<<"n ";
//	cin>>n;
//	p=n;
//
//	int T[n];
//	for(int i=0;i<n;i++){
//		cout<<"T["<<i<<"]= ";
//		cin>>T[i];
//		
//	}
//	 fon(T,n,p,b);
//	
//	
//}

////////////////////////////////// sou9ra6e////

//#include<iostream>
//using namespace std;
//int main(){
//	int k=0,j;
//	string chain;
//	cout<<"chain= ";
//	cin>>chain;
//	int n=chain.size();
//	for(int i=0;i<n;i++){
//
//		for(j=i+1;j<n;j++){
//			if(chain[i]==chain[j]){
//				k++;	
//			}
//
//		}
//			cout<<"i["<<chain[i]<<"]"<<k<<endl;
//			k=0;
//		
//		
//		if(chain[i]==chain[i+1]){
//			i++;
//		}
//		
//		}
//	
//	}
	
	
	
	
//	#include<iostream>
//using namespace std;
//int main(){
//	int k=0,j;
//	string chain;
//	cout<<"chain= ";
//	cin>>chain;
//	int n=chain.size();
//	for(int i=0;i<n;i++){
//
//		for(j=i+1;j<n;j++){
//			
//			if(chain[i]==chain[j]){
//				k++;
//					
//			}
//
//		}
//			cout<<"i["<<chain[i]<<"]"<<k<<endl;
//			k=0;
//		
//		
//		if(chain[i]==chain[i+1]){
//			i++;
//		}
//		
//		}
//	
//	}






 
//#include<iostream>
//#include<ctype.h>
//using namespace std;
//int main(){
//	string chain;
//	string mot;
//	int k=0,i=0,r=0;
//	bool vrai=true;
//	cout<<" entre un chain= ";
////	cin>>chain;
//getline(cin,chain);
//	int b=chain.size();
//	cout<<"b= "<<b<<endl;
//	cout<<"entre un mot = ";
//	cin>>mot;
//	int a=mot.size();
//
//	cout<<"a="<<a<<endl;
//	while(i<b){
//
//
//		for(int j=0;j<a;j++){
//			if(chain[r]!=mot[j]){
//				vrai=false;
//				cout<<"false"<<endl; 
//				break;
//			}
//r++;
//		}
//		if(vrai==true){
////				cout<<"true";
//            k++;
////				break;
//			}
////cout<<i<<endl;
//i=i+a;
//	}
//		cout<<"k= "<<k;
//		
//		}



//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			if (i==1 || i==n || j==1 || j==n){
//				cout<<" * ";
//			}
//			else{
//				cout<<"   ";
//			}
//		}
//		cout<<endl;
//	}	
//}


