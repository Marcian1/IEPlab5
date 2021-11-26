#include <utility>
typedef int Data;

class RealSafe {
public:
	Data *pData, *pData2;
	void swap(RealSafe &&obj) {
		std::swap(pData, obj.pData);
		std::swap(pData2, obj.pData2);
		
	}
	RealSafe& operator=(const RealSafe& obj) {
		RealSafe copy(obj);
		swap(std::move(copy));
		return *this;
	}
};