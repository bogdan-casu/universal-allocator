#include <iostream>
#include <memory>
#include <exception>

#define i_STD_SIZE 32

template <class T>
class Allocator
{

protected:
	size_t m_iCapacity;
	size_t m_iBASE_SIZE;
	std::tr1::shared_ptr<T> m_pData;

	Allocator() : m_iBASE_SIZE(i_STD_SIZE), m_pData(new T[i_STD_SIZE])
	{
	}

public:

	Allocator(int baseSize) : m_iBASE_SIZE(baseSize), m_pData(new T[baseSize])
	{
	}

	T& operator[] (size_t index)
	{
		if (index < m_iCapacity)
		{
			return  *m_pData.get();
		}
		else
		{
			throw -1;
		}
	}

	const T& operator[](size_t index) const
	{
		if (index < m_iCapacity)
		{
			return m_pData[index];
		}
		else
		{
			throw -1;
		}
	}

};