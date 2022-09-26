#include <bits/stdc++.h>

using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
	int i = 0, n = nums.size();
	vector<string> s;
	while (i < n) {
		int start, end;
		start = nums[i];
		while (i + 1 < n && nums[i + 1] > nums[i]) ;
		end = nums[i];

		if (start == end)
			s.push_back(to_string(start));
		else
			s.push_back(to_string(start) + "->" + to_string(end));
	}
	return s;
}


int main() {
	vector<int> a = {0, 1, 2, 4, 5, 7} ;
	vector<string> s = summaryRanges(a);
	for (string str : s) {
		cout << str << endl;
	}
	return 0;
}