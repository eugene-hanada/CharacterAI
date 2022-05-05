#pragma once
#include "Vector2.h"

namespace Math
{
	template<Vec2C T>
	constexpr Vector2Tmp<T> zeroVector2{ static_cast<T>(0),static_cast<T>(0) };

	template<Vec2C T>
	constexpr Vector2Tmp<T> upVector2{ static_cast<T>(0),static_cast<T>(-1) };

	template<Vec2C T>
	constexpr Vector2Tmp<T> downVector2{ static_cast<T>(0),static_cast<T>(1) };

	template<Vec2C T>
	constexpr Vector2Tmp<T> rightVector2{ static_cast<T>(1),static_cast<T>(0) };

	template<Vec2C T>
	constexpr Vector2Tmp<T> leftVector2{ static_cast<T>(-1),static_cast<T>(0) };

	/// <summary>
	/// ��悷��
	/// </summary>
	/// <param name="val"> ��悵�����l </param>
	/// <returns> ��悵���l </returns>
	template<Vec2C T>
	constexpr T Square(T val)
	{
		return val * val;
	}

	/// <summary>
	/// ����(Vector2�p)
	/// </summary>
	/// <param name="lVec"></param>
	/// <param name="rVec"></param>
	/// <returns></returns>
	template<Vec2C T>
	constexpr T Dot(const Vector2Tmp<T>& lVec, const Vector2Tmp<T>& rVec)
	{
		return lVec.x * rVec.x + lVec.y * rVec.y;
	}


	/// <summary>
	/// �O��(Vector2�p)
	/// </summary>
	/// <param name="lVec"></param>
	/// <param name="rVec"></param>
	/// <returns></returns>
	template<Vec2C T>
	constexpr T Cross(const Vector2Tmp<T>& lVec, const Vector2Tmp<T>& rVec)
	{
		return lVec.x * rVec.y - lVec.y * rVec.x;
	}


	// �~����
	template<Vec2C T>
	constexpr T pi = static_cast<T>(3.1415926535897932384626433832795);

	// �~����*2
	template<Vec2C T>
	constexpr T pi2 = pi<T> * static_cast<T>(2.0);

	/// <summary>
	/// �x���@���ʓx�@�ɂ���
	/// </summary>
	/// <param name="deg"> �ϊ��������x���@�̒l </param>
	/// <returns>  </returns>
	template<Vec2C T>
	constexpr T Deg2Rad(const T& deg)
	{
		return deg * (pi<T> / static_cast<T>(180));
	}

	/// <summary>
	/// �ʓx�@��x���@�ɂ���
	/// </summary>
	/// <param name="rad"></param>
	/// <returns></returns>
	template<Vec2C T>
	constexpr T Rad2Deg(const T& rad)
	{
		return rad * (static_cast<T>(180) / pi<T>);
	}

	/// <summary>
	/// �p�x���w��͈͂ɐ��K������
	/// </summary>
	/// <param name="angle"> �ϊ�����l </param>
	/// <param name="valMin"> �ŏ��l(�f�t�H���g=0) </param>
	/// <param name="valMax"> �ő�l(�f�t�H���g=pi2) </param>
	/// <returns></returns>
	float GetNormalizedAngle(float angle, float valMin = 0.0f, float valMax = pi2<float>);

	double GetNormalizedAngle(double angle, double valMin = 0.0f, double valMax = pi2<double>);
	
}

