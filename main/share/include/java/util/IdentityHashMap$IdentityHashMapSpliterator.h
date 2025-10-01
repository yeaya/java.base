#ifndef _java_util_IdentityHashMap$IdentityHashMapSpliterator_h_
#define _java_util_IdentityHashMap$IdentityHashMapSpliterator_h_
//$ class java.util.IdentityHashMap$IdentityHashMapSpliterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class IdentityHashMap;
	}
}

namespace java {
	namespace util {

class $import IdentityHashMap$IdentityHashMapSpliterator : public ::java::lang::Object {
	$class(IdentityHashMap$IdentityHashMapSpliterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IdentityHashMap$IdentityHashMapSpliterator();
	void init$(::java::util::IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);
	int64_t estimateSize();
	int32_t getFence();
	::java::util::IdentityHashMap* map = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t est = 0;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_IdentityHashMap$IdentityHashMapSpliterator_h_