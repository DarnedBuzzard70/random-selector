#include<bits/stdc++.h>
using namespace std;
inline int read_int() {
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9') {
		if(ch=='-') {
			w=-1;
		}
		ch=getchar();
	}
	while(ch>='0'&&ch<='9') {
		s=10*s+ch-'0';
		ch=getchar();
	}
	return s*w;
}
const int MAXN=32768;
string zyclist[MAXN];
int number_list=0;
int main() {
	srand(time(0));
	freopen("list_number.txt","r",stdin);
	number_list=read_int();
	freopen("list.txt","r",stdin);
	for(int i=0;i<number_list;i+=1){
		cin>>zyclist[i];
	}
	int hl=32767%number_list;
	int rd=rand();
	while(rd>32767-hl){
		rd=rand();
	}
	rd%=number_list;
	freopen("result.txt","w",stdout);
	cout<<zyclist[rd];
	return 0;
}
