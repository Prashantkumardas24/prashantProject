#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"\n\t\t\t\t\t----------Welcome to Tic Tac Toe Game----------\n"<<endl;
	
	//designing the game
	
	cout<<"   |   |   "<<endl;
	cout<<"-----------"<<endl;
	cout<<"   |   |   "<<endl;
	cout<<"-----------"<<endl;
	cout<<"   |   |   "<<endl;
	
	//printing graphics
	bool flag = false; 
	char prashant[3][3] = {'\0'}; 
	char first,second,ans;
	cout<<"Enter First PLayer ( X/O )  : ";
	cin>>first;
	cout<<"Enter Second Player ( X/O ) : ";
	cin>>second;
	for(int i=1;i<=9;i++){
		int a,b;
		char x;
		if(i%2==1) x = first;
		else x = second;
		cout<<"Enter Row (1-3) and Column (1-3) for Player '"<<x<<"' : ";
		cin>>a>>b;
		cout<<"Current Board : "<<endl;
		a-=1;b-=1;
		if(i%2==1) prashant[a][b] = first;
		else prashant[a][b] = second;
		
		cout<<" "<<prashant[0][0]<<" | "<<prashant[0][1]<<" | "<<prashant[0][2]<<" "<<endl;
		cout<<"-----------"<<endl;
		cout<<" "<<prashant[1][0]<<" | "<<prashant[1][1]<<" | "<<prashant[1][2]<<" "<<endl;
		cout<<"-----------"<<endl;
		cout<<" "<<prashant[2][0]<<" | "<<prashant[2][1]<<" | "<<prashant[2][2]<<" "<<endl;
		
		//finding winner
		
		if(prashant[0][0]==prashant[0][1] && prashant[0][1]==prashant[0][2] && prashant[0][0]!='\0'){
			ans = prashant[0][0];
			flag = true;
		}
		else if(prashant[1][0]==prashant[1][1] && prashant[1][1]==prashant[1][2] &&prashant[1][0]!='\0'){
			ans = prashant[1][0];
			flag = true;
		}
		else if(prashant[2][0]==prashant[2][1] && prashant[2][1]==prashant[2][2] && prashant[2][0]!='\0'){
			ans = prashant[2][0];
			flag = true;
		}
		else if(prashant[0][0]==prashant[1][0] && prashant[1][0]==prashant[2][0] && prashant[0][0]!='\0'){
			ans = prashant[0][0];
			flag = true;
		}
		else if(prashant[0][1]==prashant[1][1] && prashant[1][1]==prashant[2][1] && prashant[0][1]!='\0'){
			ans = prashant[0][1];
			flag = true;
		}
		else if(prashant[0][2]==prashant[1][2] && prashant[1][2]==prashant[2][2] && prashant[0][2]!='\0'){
			ans = prashant[0][0];
			flag = true;
		}
		else if(prashant[0][0]==prashant[1][1] && prashant[1][1]==prashant[2][2] && prashant[0][0]!='\0'){
			ans = prashant[0][0];
			flag = true;
		}
		else if(prashant[0][2]==prashant[1][1] && prashant[1][1]==prashant[2][0] && prashant[0][2]!='\0'){
			ans = prashant[0][2];
			flag = true;
		}
		if(flag==true){
			cout<<"GAME OVER!"<<endl;
			cout<<"The winner is Player '"<<ans<<"'."<<endl;
			break;
		}
	}
	if(flag == false){
		cout<<"GAME OVER!"<<endl;
		cout<<"Match got Drawn!"<<endl;
	}
	return 0;
}
