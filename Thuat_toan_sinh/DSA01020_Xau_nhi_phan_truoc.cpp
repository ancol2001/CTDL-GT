// #include<stdio.h>
// #include<string.h>
// #include <stdlib.h>
// #define MAX 1005

// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	getchar();
// 	while(t--){
// 		int tmp = 1;
// 		char a[MAX];
// 		fgets(a,sizeof(a), stdin);
// //		printf("%c\n",a[strlen(a)-2]);
// 		for(int i=strlen(a)-2; i>=0; i--){
// 			// printf("%c ",a[i]);
// 			if (tmp == 1)
// 			{
// 				if (a[i]=='0')
// 				{
// 					a[i]='1';
// 					tmp=1;
// 				}else{
// 					a[i]='0';
// 					tmp=0;
// 				}	
// 			}
			
// 		}
// 		printf("%s",a);
// 	}
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	string s;
	while (t--)
	{
		cin >> s;
		int tmp=1;
		for (int i = s.length()-1; i >=0; i--)
		{
			// cout << s[i];
			if (tmp == 1)
			{
				if(s[i]=='0'){
					s[i]='1'; tmp=1;
				}else{
					s[i]='0'; tmp=0;
				}
			}
			
		}
		cout << s << "\n";
		
	}
	
}