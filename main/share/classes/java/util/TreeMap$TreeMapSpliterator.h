#ifndef _java_util_TreeMap$TreeMapSpliterator_h_
#define _java_util_TreeMap$TreeMapSpliterator_h_
//$ class java.util.TreeMap$TreeMapSpliterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class TreeMap;
		class TreeMap$Entry;
	}
}

namespace java {
	namespace util {

class $export TreeMap$TreeMapSpliterator : public ::java::lang::Object {
	$class(TreeMap$TreeMapSpliterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TreeMap$TreeMapSpliterator();
	void init$(::java::util::TreeMap* tree, ::java::util::TreeMap$Entry* origin, ::java::util::TreeMap$Entry* fence, int32_t side, int32_t est, int32_t expectedModCount);
	int64_t estimateSize();
	int32_t getEstimate();
	::java::util::TreeMap* tree = nullptr;
	::java::util::TreeMap$Entry* current = nullptr;
	::java::util::TreeMap$Entry* fence = nullptr;
	int32_t side = 0;
	int32_t est = 0;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_TreeMap$TreeMapSpliterator_h_