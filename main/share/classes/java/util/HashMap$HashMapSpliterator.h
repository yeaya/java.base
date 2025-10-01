#ifndef _java_util_HashMap$HashMapSpliterator_h_
#define _java_util_HashMap$HashMapSpliterator_h_
//$ class java.util.HashMap$HashMapSpliterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class HashMap;
		class HashMap$Node;
	}
}

namespace java {
	namespace util {

class $export HashMap$HashMapSpliterator : public ::java::lang::Object {
	$class(HashMap$HashMapSpliterator, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	HashMap$HashMapSpliterator();
	void init$(::java::util::HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);
	int64_t estimateSize();
	int32_t getFence();
	::java::util::HashMap* map = nullptr;
	::java::util::HashMap$Node* current = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t est = 0;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_HashMap$HashMapSpliterator_h_