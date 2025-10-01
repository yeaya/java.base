#ifndef _sun_nio_fs_NativeBuffers_h_
#define _sun_nio_fs_NativeBuffers_h_
//$ class sun.nio.fs.NativeBuffers
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEMP_BUF_POOL_SIZE")
#undef TEMP_BUF_POOL_SIZE

namespace java {
	namespace lang {
		class ThreadLocal;
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
		namespace fs {
			class NativeBuffer;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class NativeBuffers : public ::java::lang::Object {
	$class(NativeBuffers, 0, ::java::lang::Object)
public:
	NativeBuffers();
	void init$();
	static ::sun::nio::fs::NativeBuffer* allocNativeBuffer(int32_t size);
	static ::sun::nio::fs::NativeBuffer* asNativeBuffer($bytes* cstr);
	static void copyCStringToNativeBuffer($bytes* cstr, ::sun::nio::fs::NativeBuffer* buffer);
	static ::sun::nio::fs::NativeBuffer* getNativeBuffer(int32_t size);
	static ::sun::nio::fs::NativeBuffer* getNativeBufferFromCache(int32_t size);
	static void releaseNativeBuffer(::sun::nio::fs::NativeBuffer* buffer);
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* unsafe;
	static const int32_t TEMP_BUF_POOL_SIZE = 3;
	static ::java::lang::ThreadLocal* threadLocal;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("TEMP_BUF_POOL_SIZE")

#endif // _sun_nio_fs_NativeBuffers_h_