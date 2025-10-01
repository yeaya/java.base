#ifndef _java_util_SortedSet$1_h_
#define _java_util_SortedSet$1_h_
//$ class java.util.SortedSet$1
//$ extends java.util.Spliterators$IteratorSpliterator

#include <java/util/Spliterators$IteratorSpliterator.h>

namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class SortedSet;
	}
}

namespace java {
	namespace util {

class SortedSet$1 : public ::java::util::Spliterators$IteratorSpliterator {
	$class(SortedSet$1, $NO_CLASS_INIT, ::java::util::Spliterators$IteratorSpliterator)
public:
	SortedSet$1();
	void init$(::java::util::SortedSet* this$0, ::java::util::Collection* collection, int32_t characteristics);
	virtual ::java::util::Comparator* getComparator() override;
	::java::util::SortedSet* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_SortedSet$1_h_