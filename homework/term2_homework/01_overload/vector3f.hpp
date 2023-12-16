#include <iostream>
#include <cmath>
using std::cout, std::cin, std::endl;

struct Vector3f
{
	float x, y, z;
};

Vector3f operator+(const Vector3f& first, const Vector3f& second)
{
	Vector3f result = {first.x + second.x, first.y + second.y, first.z + second.z};
	return result;
}
Vector3f operator-(const Vector3f& first, const Vector3f& second)
{
	Vector3f result = {first.x - second.x, first.y - second.y, first.z - second.z};
	return result;
}
Vector3f operator*(float t, const Vector3f& vector)
{
	Vector3f result = {t * vector.x, t * vector.y, t * vector.z};
	return result;
}
Vector3f operator*(const Vector3f& vector, float t)
{
	Vector3f result = {t * vector.x, t * vector.y, t * vector.z};
	return result;
}
Vector3f operator/(const Vector3f& vector, float t)
{
	Vector3f result = {vector.x / t, vector.y / t, vector.z / t};
	return result;
}
float operator*(const Vector3f& first, const Vector3f second)
{
	float product = first.x * second.x + first.y * second.y + first.z * second.z;
	return product;
}
Vector3f operator+(const Vector3f& vector)
{
	return vector;
}
Vector3f operator-(const Vector3f& vector)
{
	Vector3f result = {-vector.x, -vector.y, -vector.z};
	return result;
}
bool operator==(const Vector3f& first, const Vector3f& second)
{
	if (first.x == second.x && first.y == second.y && first.z == second.z)
	{
		return true;
	}
	return false;
}
bool operator!=(const Vector3f& first, const Vector3f& second)
{
	if (first.x == second.x && first.y == second.y && first.z == second.z)
	{
		return false;
	}
	return true;
}
Vector3f operator+=(Vector3f& vector, Vector3f& add)
{
	vector.x += add.x;
	vector.y += add.y;
	vector.z += add.z;
	return vector;
}
Vector3f operator-=(Vector3f& vector, Vector3f& subt)
{
	vector.x -= subt.x;
	vector.y -= subt.y;
	vector.z -= subt.z;
	return vector;
}
Vector3f operator*=(Vector3f& vector, float t)
{
	vector.x *= t;
	vector.y *= t;
	vector.z *= t;
	return vector;
}
Vector3f operator/=(Vector3f& vector, float t)
{
	vector.x /= t;
	vector.y /= t;
	vector.z /= t;
	return vector;
}
std::ostream& operator<<(std::ostream& out, const Vector3f& vector)
{
	out << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
	return out;
}
std::istream& operator>>(std::istream& in, Vector3f& vector)
{
	in >> vector.x >> vector.y >> vector.z;
	return in; 
}
float squaredNorm(const Vector3f& vector)
{
	float sq_norm = vector.x * vector.x + vector.y * vector.y + vector.z * vector.z;
	return sq_norm;
}
float norm(const Vector3f& vector)
{
	float norm = std::sqrt(squaredNorm(vector));
	return norm;
}
void normalize(Vector3f& vector)
{
	float vnorm = norm(vector);
	vector.x /= vnorm;
	vector.y /= vnorm;
	vector.z /= vnorm;
}
