typedef int Data;
class RealSafe {
public:
	Data *pData, *pData2, data3;
	void swap(RealSafe &&obj) noexcept {
		std::swap(pData, obj.pData);
		std::swap(pData2, obj.pData2);
		data3 = std::move(obj.data3);
	}
	RealSafe& operator=(const RealSafe& obj) {
		RealSafe copy(obj);
		// std::swap(*this, copy);  // BAD!! Infinite loop occurs!
		swap(std::move(copy));
		return *this;
	}
};