#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> manacher(string s) {
	string t;
	int s_len = s.size();
	t += "^"; // 전처리 과정
	for (int i = 0; i < s_len; i++) {
		t += "#";
		t += s.at(i);
	}
	t += "#$";

	int t_len = t.size();
	vector<int> p(t_len); // P배열 초기화
	int c = 0, r = 0; // c,r초기화 c는 찾은 가장 긴 팰린드롬의 중심, r가장 긴 팰린드롬의 은 오른쪽 끝

	for (int i = 1; i < t_len - 1; i++) { //전처리 문자열 때문에 1부터 n-1까지 반복이라고 하네요
		int mirror = 2*c-i; // 찾은 팰린드롬 내에서 반대편에 위치하는 값의 인덱스

		if (i <= r) { // i가 찾은 팰린드롬수의 오른쪽 끝+1보다 작을때, 즉 팰린드롬 내부일때
			p[i] = min(p[mirror], r - i);
		}
		while (t[i - 1 - p[i]] == t[i + 1 + p[i]]) // 양쪽으로 넓혀나가며 p를 늘림
			p[i]++; // 넓은 경우에는 범위 1 확장
		if (r < i + p[i]) {//오른쪽 끝이 현재 팰린드롬 안에 있는 경우
			c = i;
			r = i + p[i]; // 오른쪽 끝 갱신
		}
	}
	return p;
}

int main() {
	string s;
	cin >> s;
	vector<int> p = manacher(s);
	long long sum = 0;
	int p_len = p.size();
	for (int i = 0; i < p_len; i++)
		sum += (p[i]+1) / 2; //1더하고 2로 나눠주는 이유 -> #도 포함해서 문자 길이가 2배가 되니까 저렇게 2로 나눔 거기다 팰린드롬의 중심은 따지지 않으니 1 더해줌

	cout << sum;
}