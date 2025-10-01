#ifndef _java_util_TreeMap$NavigableSubMap$SubMapIterator_h_
#define _java_util_TreeMap$NavigableSubMap$SubMapIterator_h_
//$ class java.util.TreeMap$NavigableSubMap$SubMapIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class TreeMap$Entry;
		class TreeMap$NavigableSubMap;
	}
}

namespace java {
	namespace util {

class $import TreeMap$NavigableSubMap$SubMapIterator : public ::java::util::Iterator {
	$class(TreeMap$NavigableSubMap$SubMapIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	TreeMap$NavigableSubMap$SubMapIterator();
	void init$(::java::util::TreeMap$NavigableSubMap* this$0, ::java::util::TreeMap$Entry* first, ::java::util::TreeMap$Entry* fence);
	virtual bool hasNext() override;
	::java::util::TreeMap$Entry* nextEntry();
	::java::util::TreeMap$Entry* prevEntry();
	void removeAscending();
	void removeDescending();
	::java::util::TreeMap$NavigableSubMap* this$0 = nullptr;
	::java::util::TreeMap$Entry* lastReturned = nullptr;
	::java::util::TreeMap$Entry* next$ = nullptr;
	$Object* fenceKey = nullptr;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_TreeMap$NavigableSubMap$SubMapIterator_h_