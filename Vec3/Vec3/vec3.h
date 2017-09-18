#ifndef vec3
#define vec3

template <typename Type>

class Vec3 {

private:

public:

	Type coords[3];

	Vec3(const Type x, const Type y, const Type z) {
		this->coords[0] = x;
		this->coords[1] = y;
		this->coords[2] = z;
	}

	~Vec3(){}

	void setX(Type x) {
		this->coords[0] = x;
	}
	void setY(Type y){
		this->coords[1] = y;
	}

	void setZ(Type z){
		this->coords[2] = z;
	}

	Vec3 operator+ (const Vec3& p) const {
		Vec3 result(this->coords[0] + p.coords[0], this->coords[1] + p.coords[1], this->coords[2] + p.coords[2]);

		return result;
	}

	Vec3 operator- (const Vec3& p) const {
		Vec3 result(this->coords[0] - p.coords[0], this->coords[1] - p.coords[1], this->coords[2] - p.coords[2]);

		return result;
	}

	//Vec3 operator+= (const Vec3& p) const {
	//	Vec3 result(this->coords[0] += p.coords[0], this->coords[1] += p.coords[1], this->coords[2] += p.coords[2]);

	//	return result;
	//}

	//Vec3 operator-= (const Vec3& p) const {
	//	Vec3 result(this->coords[0] -= p.coords[0], this->coords[1] -= p.coords[1], this->coords[2] -= p.coords[2]);

	//	return result;
	//}

	Vec3 operator* (Type k) const {
		Vec3 result(this->coords[0] * k, this->coords[1] * k, this->coords[2] * k);

		return result;
	}

	void zero() {
		this->coords[0] = 0;
		this->coords[1] = 0;
		this->coords[2] = 0;
	}



};

#endif //vec3