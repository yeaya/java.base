#ifndef _sun_nio_ch_Util_h_
#define _sun_nio_ch_Util_h_
//$ class sun.nio.ch.Util
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_CACHED_BUFFER_SIZE")
#undef MAX_CACHED_BUFFER_SIZE
#pragma push_macro("TEMP_BUF_POOL_SIZE")
#undef TEMP_BUF_POOL_SIZE

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace lang {
		class Runnable;
		class ThreadLocal;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
		class MappedByteBuffer;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $import Util : public ::java::lang::Object {
	$class(Util, 0, ::java::lang::Object)
public:
	Util();
	void init$();
	static int8_t _get(int64_t a);
	static void _put(int64_t a, int8_t b);
	static void checkBufferPositionAligned(::java::nio::ByteBuffer* bb, int32_t pos, int32_t alignment);
	static void checkChannelPositionAligned(int64_t position, int32_t alignment);
	static void checkRemainingBufferSizeAligned(int32_t rem, int32_t alignment);
	static void erase(::java::nio::ByteBuffer* bb);
	static void free(::java::nio::ByteBuffer* buf);
	static int64_t getMaxCachedBufferSize();
	static ::java::nio::ByteBuffer* getTemporaryAlignedDirectBuffer(int32_t size, int32_t alignment);
	static ::java::nio::ByteBuffer* getTemporaryDirectBuffer(int32_t size);
	static void initDBBConstructor();
	static void initDBBRConstructor();
	static bool isBufferTooLarge(int32_t size);
	static bool isBufferTooLarge(::java::nio::ByteBuffer* buf);
	static ::java::nio::MappedByteBuffer* newMappedByteBuffer(int32_t size, int64_t addr, ::java::io::FileDescriptor* fd, ::java::lang::Runnable* unmapper, bool isSync);
	static ::java::nio::MappedByteBuffer* newMappedByteBufferR(int32_t size, int64_t addr, ::java::io::FileDescriptor* fd, ::java::lang::Runnable* unmapper, bool isSync);
	static void offerFirstTemporaryDirectBuffer(::java::nio::ByteBuffer* buf);
	static void offerLastTemporaryDirectBuffer(::java::nio::ByteBuffer* buf);
	static int32_t pageSize();
	static void releaseTemporaryDirectBuffer(::java::nio::ByteBuffer* buf);
	static $Array<::java::nio::ByteBuffer>* subsequence($Array<::java::nio::ByteBuffer>* bs, int32_t offset, int32_t length);
	static ::java::util::Set* ungrowableSet(::java::util::Set* s);
	static ::jdk::internal::misc::Unsafe* unsafe();
	static bool $assertionsDisabled;
	static int32_t TEMP_BUF_POOL_SIZE;
	static int64_t MAX_CACHED_BUFFER_SIZE;
	static ::java::lang::ThreadLocal* bufferCache;
	static ::jdk::internal::misc::Unsafe* unsafe$;
	static int32_t pageSize$;
	static $volatile(::java::lang::reflect::Constructor*) directByteBufferConstructor;
	static $volatile(::java::lang::reflect::Constructor*) directByteBufferRConstructor;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("MAX_CACHED_BUFFER_SIZE")
#pragma pop_macro("TEMP_BUF_POOL_SIZE")

#endif // _sun_nio_ch_Util_h_