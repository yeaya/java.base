#ifndef _java_util_stream_AbstractSpinedBuffer_h_
#define _java_util_stream_AbstractSpinedBuffer_h_
//$ class java.util.stream.AbstractSpinedBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MIN_CHUNK_SIZE")
#undef MIN_CHUNK_SIZE
#pragma push_macro("MAX_CHUNK_POWER")
#undef MAX_CHUNK_POWER
#pragma push_macro("MIN_SPINE_SIZE")
#undef MIN_SPINE_SIZE
#pragma push_macro("MIN_CHUNK_POWER")
#undef MIN_CHUNK_POWER

namespace java {
	namespace util {
		namespace stream {

class AbstractSpinedBuffer : public ::java::lang::Object {
	$class(AbstractSpinedBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbstractSpinedBuffer();
	void init$();
	void init$(int32_t initialCapacity);
	virtual int32_t chunkSize(int32_t n);
	virtual void clear() {}
	virtual int64_t count();
	virtual bool isEmpty();
	static const int32_t MIN_CHUNK_POWER = 4;
	static const int32_t MIN_CHUNK_SIZE = 16; // 1 << MIN_CHUNK_POWER
	static const int32_t MAX_CHUNK_POWER = 30;
	static const int32_t MIN_SPINE_SIZE = 8;
	int32_t initialChunkPower = 0;
	int32_t elementIndex = 0;
	int32_t spineIndex = 0;
	$longs* priorElementCount = nullptr;
};

		} // stream
	} // util
} // java

#pragma pop_macro("MIN_CHUNK_SIZE")
#pragma pop_macro("MAX_CHUNK_POWER")
#pragma pop_macro("MIN_SPINE_SIZE")
#pragma pop_macro("MIN_CHUNK_POWER")

#endif // _java_util_stream_AbstractSpinedBuffer_h_