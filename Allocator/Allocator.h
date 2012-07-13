

template < class T >
class Allocator
{
	#define i_STD_SIZE 32

protected:
	size_t m_iCapacity;
	size_t m_iAllocated;
	size_t m_iBASE_SIZE;
	shared_ptr < T > m_pData;

	Allocator() : m_iBASE_SIZE(i_STD_SIZE), data(new T[i_STD_SIZE])
	{
	
	}

}