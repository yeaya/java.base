#ifndef _java_util_WeakHashMap$WeakHashMapSpliterator_h_
#define _java_util_WeakHashMap$WeakHashMapSpliterator_h_
//$ class java.util.WeakHashMap$WeakHashMapSpliterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class WeakHashMap;
		class WeakHashMap$Entry;
	}
}

namespace java {
	namespace util {

class $export WeakHashMap$WeakHashMapSpliterator : public ::java::lang::Object {
	$class(WeakHashMap$WeakHashMapSpliterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WeakHashMap$WeakHashMapSpliterator();
	void init$(::java::util::WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);
	int64_t estimateSize();
	int32_t getFence();
	::java::util::WeakHashMap* map = nullptr;
	::java::util::WeakHashMap$Entry* current = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t est = 0;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_WeakHashMap$WeakHashMapSpliterator_h_