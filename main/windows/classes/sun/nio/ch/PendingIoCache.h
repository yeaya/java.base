#ifndef _sun_nio_ch_PendingIoCache_h_
#define _sun_nio_ch_PendingIoCache_h_
//$ class sun.nio.ch.PendingIoCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SIZEOF_OVERLAPPED")
#undef SIZEOF_OVERLAPPED

namespace java {
	namespace util {
		class Map;
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
			class PendingFuture;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class PendingIoCache : public ::java::lang::Object {
	$class(PendingIoCache, 0, ::java::lang::Object)
public:
	PendingIoCache();
	void init$();
	virtual int64_t add(::sun::nio::ch::PendingFuture* result);
	void clearPendingIoMap();
	virtual void close();
	static int32_t dependsArch(int32_t value32, int32_t value64);
	virtual ::sun::nio::ch::PendingFuture* remove(int64_t overlapped);
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int32_t addressSize;
	static int32_t SIZEOF_OVERLAPPED;
	bool closed = false;
	bool closePending = false;
	::java::util::Map* pendingIoMap = nullptr;
	$longs* overlappedCache = nullptr;
	int32_t overlappedCacheCount = 0;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("SIZEOF_OVERLAPPED")

#endif // _sun_nio_ch_PendingIoCache_h_