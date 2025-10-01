#ifndef _sun_nio_ch_PollArrayWrapper_h_
#define _sun_nio_ch_PollArrayWrapper_h_
//$ class sun.nio.ch.PollArrayWrapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FD_OFFSET")
#undef FD_OFFSET
#pragma push_macro("SIZE_POLLFD")
#undef SIZE_POLLFD
#pragma push_macro("EVENT_OFFSET")
#undef EVENT_OFFSET

namespace sun {
	namespace nio {
		namespace ch {
			class AllocatedNativeObject;
			class SelectionKeyImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class PollArrayWrapper : public ::java::lang::Object {
	$class(PollArrayWrapper, 0, ::java::lang::Object)
public:
	PollArrayWrapper();
	void init$(int32_t newSize);
	virtual void addWakeupSocket(int32_t fdVal, int32_t index);
	virtual void free();
	virtual int32_t getDescriptor(int32_t i);
	virtual int32_t getEventOps(int32_t i);
	virtual void grow(int32_t newSize);
	virtual void putDescriptor(int32_t i, int32_t fd);
	virtual void putEntry(int32_t index, ::sun::nio::ch::SelectionKeyImpl* ski);
	virtual void putEventOps(int32_t i, int32_t event);
	virtual void replaceEntry(::sun::nio::ch::PollArrayWrapper* source, int32_t sindex, ::sun::nio::ch::PollArrayWrapper* target, int32_t tindex);
	::sun::nio::ch::AllocatedNativeObject* pollArray = nullptr;
	int64_t pollArrayAddress = 0;
	static const int16_t FD_OFFSET = 0;
	static const int16_t EVENT_OFFSET = 4;
	static int16_t SIZE_POLLFD;
	int32_t size = 0;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("FD_OFFSET")
#pragma pop_macro("SIZE_POLLFD")
#pragma pop_macro("EVENT_OFFSET")

#endif // _sun_nio_ch_PollArrayWrapper_h_