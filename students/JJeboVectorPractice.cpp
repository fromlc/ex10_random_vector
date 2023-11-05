#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	vector<int> vi;

// LRC added code
	vi.push_back(17);
	vi.push_back(18);

	for (int i = 5; i < 26; i++) {
		vi[i] = i + 1;
	}

	for (int j = 5; j < 25; j++) {
		cout << vi[j] << endl;
	}
}
