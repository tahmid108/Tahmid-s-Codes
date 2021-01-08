#include<stdio.h>

int main(){
	int total_case;
	scanf("%d",&total_case);
	
	int k = 0, ans =0;
	while(k<total_case){
		int n;
		scanf("%d",&n);
		char a[n];
		int i =0;
		char temp;
		scanf("%c",&temp);
		for(i=0;i<n;i++){
			scanf("%c",&a[i]);
		//	printf("%d\n",a[i]-65);
		}
		
		for(i=0;i<n;i++){
			ans+= a[i]-65 + k + i;
		}
		k++;
	}
	printf("%d\n",ans);
}
