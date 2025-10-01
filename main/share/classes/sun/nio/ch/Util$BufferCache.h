#ifndef _sun_nio_ch_Util$BufferCache_h_
#define _sun_nio_ch_Util$BufferCache_h_
//$ class sun.nio.ch.Util$BufferCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Util$BufferCache : public ::java::lang::Object {
	$class(Util$BufferCache, 0, ::java::lang::Object)
public:
	Util$BufferCache();
	void init$();
	virtual ::java::nio::ByteBuffer* get(int32_t size);
	virtual bool isEmpty();
	int32_t next(int32_t i);
	virtual bool offerFirst(::java::nio::ByteBuffer* buf);
	virtual bool offerLast(::java::nio::ByteBuffer* buf);
	virtual ::java::nio::ByteBuffer* removeFirst();
	static bool $assertionsDisabled;
	$Array<::java::nio::ByteBuffer>* buffers = nullptr;
	int32_t count = 0;
	int32_t start = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Util$BufferCache_h_