#ifndef _jdk_internal_jimage_ImageBufferCache_h_
#define _jdk_internal_jimage_ImageBufferCache_h_
//$ class jdk.internal.jimage.ImageBufferCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DECREASING_CAPACITY_NULLS_LAST")
#undef DECREASING_CAPACITY_NULLS_LAST
#pragma push_macro("LARGE_BUFFER")
#undef LARGE_BUFFER
#pragma push_macro("CACHE")
#undef CACHE
#pragma push_macro("MAX_CACHED_BUFFERS")
#undef MAX_CACHED_BUFFERS

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
namespace java {
	namespace util {
		class Comparator;
		class Map$Entry;
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class ImageBufferCache : public ::java::lang::Object {
	$class(ImageBufferCache, 0, ::java::lang::Object)
public:
	ImageBufferCache();
	void init$();
	static ::java::nio::ByteBuffer* allocateBuffer(int64_t size);
	static ::java::nio::ByteBuffer* getBuffer(int64_t size);
	static ::java::nio::ByteBuffer* getByteBuffer(::java::util::Map$Entry* e);
	static int32_t getCapacity(::java::util::Map$Entry* e);
	static ::java::util::Map$Entry* newCacheEntry(::java::nio::ByteBuffer* bb);
	static void releaseBuffer(::java::nio::ByteBuffer* buffer);
	static const int32_t MAX_CACHED_BUFFERS = 3;
	static const int32_t LARGE_BUFFER = 0x00010000;
	static ::java::lang::ThreadLocal* CACHE;
	static ::java::util::Comparator* DECREASING_CAPACITY_NULLS_LAST;
};

		} // jimage
	} // internal
} // jdk

#pragma pop_macro("DECREASING_CAPACITY_NULLS_LAST")
#pragma pop_macro("LARGE_BUFFER")
#pragma pop_macro("CACHE")
#pragma pop_macro("MAX_CACHED_BUFFERS")

#endif // _jdk_internal_jimage_ImageBufferCache_h_