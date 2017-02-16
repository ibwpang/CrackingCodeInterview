#include<vector>
#include<iostream> 
#include<algorithm>

using namespace std;

int findMinGates(vector<int> arrivals, vector<int> departures, int flights){
	
	sort(arrivals.begin(),arrivals.end());
	sort(departures.begin(),departures.end());
	
	int res = 1;
	int max = 1;
	int i=1;
	int j=0;
	
	while(i<flights&&j<flights){
		if(arrivals[i]<=departures[j]){
			res++;
			if(res>max){
				max = res;
			}
			i++;
		}
		else{
			res--;
			j++;
		}
	}
	return max;
}

int main(){
	vector<int> arr = {900,940,950,1100,1500,1800};
	vector<int> dep = {910,1200,1120,1130,1900,2000};
	int t = findMinGates(arr,dep,6);
	cout<<t;
}
