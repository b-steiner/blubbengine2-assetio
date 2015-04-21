#pragma once

#include "../dllconfig.hpp"

namespace AssetIO
{
	int IDX2(int _column, int _row);

	class _AIO_DECLSPEC AIOMatrix4
	{
	public:
		AIOMatrix4();
		AIOMatrix4(const float* _values);
		AIOMatrix4(const AIOMatrix4& _other);
		~AIOMatrix4();

		float* Values() const;

		AIOMatrix4& operator=(const AIOMatrix4& _other);

	private:
		float values[16];
	};
}