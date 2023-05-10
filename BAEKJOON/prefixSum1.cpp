/* 시도했던 코드
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	int n;
	int m;
	vector <int> data;
	vector <int> sum;

	cin >> n >> m;
	int temp = 0;
	data.push_back(0);
	sum.push_back(0);

	for (int i = 1; i <=n; i++) {
		cin >> temp;
		data.push_back(temp);
		sum.push_back(data[i] + sum[i-1]);
	}

	int start, end;

	for (int i = 0; i < 3; i++) {
		cin >> start >> end;
		cout << sum[end] - sum[start - 1] << endl;
	}

	return 0;
}
*/





// 수정한 코드

#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int suNo, quizNo;
	cin >> suNo >> quizNo;
	int S[100001] = {};

	for (int i = 1; i <= suNo; i++) {
		int temp;
		cin >> temp;
		S[i] = S[i - 1] + temp;
	}

	for (int i = 0; i < quizNo; i++) {
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << "\n";

	}
}
