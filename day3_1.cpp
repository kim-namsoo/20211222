#include <iostream>

using namespace std;

int main()
{
	float Height = 0.0f;
	float Base = 0.0f;
	float Area = 0.0f;

	cin >> Height;
	cin >> Base;

	Area = (Height * Base) / 2.0f;
	Area = (static_cast<float>(Height) * static_cast<float>(Base)) / 2.0f;

	cout << Area << endl;

	return 0;
}