#include <iostream>
#include "vec3.h"

using namespace std;

int main() {

	Vec3<int> v1(0, 1, 2), v2(2, 3, 4);
	cout << "Vectors: " << endl<<"v1 = (" << v1.coords[0] << " , " << v1.coords[1] << " , " << v1.coords[2] << ")" << endl<< "v2 = (" << v2.coords[0] << " , " << v2.coords[1] << " , " << v2.coords[2] << ")" << endl << endl;

	Vec3<int> v3 = v1 + v2;
	cout << "Sum: v3=v1+v2 = (" << v3.coords[0] << " , " << v3.coords[1] << " , " << v3.coords[2] << ")" << endl;

	Vec3<int> v4 = v1 - v2;
	cout << "Subtraction: v4=v1-v2 = (" << v4.coords[0] << " , " << v4.coords[1] << " , " << v4.coords[2] << ")" << endl;

	//v1 += v2;
	//cout << "v1 += v2 = (" << v1.coords[0] << " , " << v1.coords[1] << " , " << v1.coords[2] << ")" << endl;

	v1.coords[0] = 0;
	v1.coords[1] = 1;
	v1.coords[2] = 2;

	/*v1 -= v2;
	cout << "v1 -= v2 = (" << v1.coords[0] << " , " << v1.coords[1] << " , " << v1.coords[2] << ")" << endl;*/

	int num=0;
	Vec3<float> v5(1.1, 2.2, 3.3);
	cout << "v5 = (" << v5.coords[0] << " , " << v5.coords[1] << " , " << v5.coords[2] << ")" << endl << "Give a number ";
	cin >> num;
	Vec3<float> v6 = v5*num;
	cout << "v5 * " << num << " = (" << v6.coords[0] << ", " << v6.coords[1] << ", " << v6.coords[2] << ")" << endl;

	v1.zero();
	cout << "v1 to 0: = (" << v1.coords[0] << " , " << v1.coords[1] << " , " << v1.coords[2] << ")" << endl << endl;


	system("pause");
	return 0;
}