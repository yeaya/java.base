#ifndef _java_util_LinkedHashSet_h_
#define _java_util_LinkedHashSet_h_
//$ class java.util.LinkedHashSet
//$ extends java.util.HashSet

#include <java/util/HashSet.h>

namespace java {
	namespace util {
		class Collection;
		class Spliterator;
	}
}

namespace java {
	namespace util {

class $export LinkedHashSet : public ::java::util::HashSet {
	$class(LinkedHashSet, $PRELOAD | $NO_CLASS_INIT, ::java::util::HashSet)
public:
	LinkedHashSet();
	void init$(int32_t initialCapacity, float loadFactor);
	void init$(int32_t initialCapacity);
	void init$();
	void init$(::java::util::Collection* c);
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::HashSet::toArray;
	static const int64_t serialVersionUID = (int64_t)0xD86CD75A95DD2A1E;
};

	} // util
} // java

#endif // _java_util_LinkedHashSet_h_