#include<iostream>
using namespace std;
int lengthOFLTI(int nums[],int len){
	int dp[]={1,1,1,1,1};
	for(int i=0;i<len;i++){
		for(int j=0;j<i;j++){
			if(nums[i]>nums[j]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	int res=0;
	for(int i=0;i<len;i++){
		res=max(res,dp[i]);
	}
	return res;
}

int main(){
	int array[]={1,2,3,4,5,6,7};
	int len=sizeof(array)/sizeof(array[0]);
	int k=lengthOFLTI(array,len);
	cout<<k<<endl;
	return 0;
}


