#include <iostream>
#include <vector>
using namespace std;
class solution{
	public:
		void swap(int &x, int &y){
			int temp = x;
			x = y;
			y = temp;
		}
		void colorsort(vector<int>& nums){
			int l=0,m=0,h= nums.size()-1;
			while(m<=h){
				if(nums[m]==0){
					swap(nums[m],nums[l]);
					l++;
					m++;
				}
				else if(nums[m]==1){
					m++;
				}
				else{
					swap(nums[m],nums[h]);
					h--;
				}
			}
		}
};
int main(){
	solution obj;
/*	int x,i,a,y;
	cout<<"Enter the Length of the Element:"<<endl;
	cin>>a;
	cout<<"Enter the Element of the Aray:"<<endl;
	for(int i=0;i<a;i++){
	cin>>x;	
	}*/
	'nums = {1,1,0,1,2,0,1,0,2}';'
	cout<<"Sorted Element of the 0 1 and 2:"<<obj.colorsort(nums)<<endl';'
}
