#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n = 0;
	vector <int> score;
	cin >> n;

	int temp = 0;
	for (int i = 0; i < n; i++) {
		temp = 0;
		cin >> temp;
		score.push_back(temp);
	}

	long sum = 0;
	long max = 0;

	for (int i = 0; i < n; i++) {
		if (score[i] > max) {
			max = score[i];
		}
		sum = sum + score[i];
	}

	double result = sum * 100.0 / max / n;
	cout << result << endl;
	return 0;
}
