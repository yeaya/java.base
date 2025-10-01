#ifndef _sun_nio_ch_IOVecWrapper_h_
#define _sun_nio_ch_IOVecWrapper_h_
//$ class sun.nio.ch.IOVecWrapper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SIZE_IOVEC")
#undef SIZE_IOVEC
#pragma push_macro("BASE_OFFSET")
#undef BASE_OFFSET
#pragma push_macro("LEN_OFFSET")
#undef LEN_OFFSET

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class AllocatedNativeObject;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class IOVecWrapper : public ::java::lang::Object {
	$class(IOVecWrapper, 0, ::java::lang::Object)
public:
	IOVecWrapper();
	void init$(int32_t size);
	virtual void clearRefs(int32_t i);
	static ::sun::nio::ch::IOVecWrapper* get(int32_t size);
	virtual ::java::nio::ByteBuffer* getBuffer(int32_t i);
	virtual int32_t getPosition(int32_t i);
	virtual int32_t getRemaining(int32_t i);
	virtual ::java::nio::ByteBuffer* getShadow(int32_t i);
	virtual void putBase(int32_t i, int64_t base);
	virtual void putLen(int32_t i, int64_t len);
	virtual void setBuffer(int32_t i, ::java::nio::ByteBuffer* buf, int32_t pos, int32_t rem);
	virtual void setShadow(int32_t i, ::java::nio::ByteBuffer* buf);
	static const int32_t BASE_OFFSET = 0;
	static int32_t LEN_OFFSET;
	static int32_t SIZE_IOVEC;
	::sun::nio::ch::AllocatedNativeObject* vecArray = nullptr;
	int32_t size = 0;
	$Array<::java::nio::ByteBuffer>* buf = nullptr;
	$ints* position = nullptr;
	$ints* remaining = nullptr;
	$Array<::java::nio::ByteBuffer>* shadow = nullptr;
	int64_t address = 0;
	static int32_t addressSize;
	static ::java::lang::ThreadLocal* cached;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("SIZE_IOVEC")
#pragma pop_macro("BASE_OFFSET")
#pragma pop_macro("LEN_OFFSET")

#endif // _sun_nio_ch_IOVecWrapper_h_