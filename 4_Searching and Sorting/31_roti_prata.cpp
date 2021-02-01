#include<iostream>
using namespace std;

bool isPossible(int chef, int prata, int chefs[], int max) {
	int cnt = 0;
	for (int i = 0; i < chef; i++) {
		int c = 0;
		int time = max;
		int perpratas = chefs[i];
		while (time > 0) {
			time -= perpratas;
			if (time >= 0) {
				cnt++;
				perpratas += chefs[i];
			}
		}
		cnt += c;
		if (cnt >= prata)
			return true;
	}
	return false;
}

int main() {

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int prata, chef;
		cin >> prata;
        cin >> chef;
		int chefs[chef];
		for (int i = 0; i < chef; i++) {
			cin >> chefs[i];
		}
		//if fastest cook,cooks all the roti
		int max_time;
		for (int i = 1; i <= prata; i++) {
			max_time += chefs[0] * i;
		}
		int s = 0;
		int e = max_time;
		int ans = -1;
		while (s <= e) {
			int mid = (s + e) / 2;
			if (isPossible(chef, prata, chefs, mid)) {
				ans = mid;
				e = mid - 1;
			}
			else
				s = mid + 1;
		}
		cout << ans << endl;
	}
	return 0;
}
