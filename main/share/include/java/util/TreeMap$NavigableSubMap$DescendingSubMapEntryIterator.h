#ifndef _java_util_TreeMap$NavigableSubMap$DescendingSubMapEntryIterator_h_
#define _java_util_TreeMap$NavigableSubMap$DescendingSubMapEntryIterator_h_
//$ class java.util.TreeMap$NavigableSubMap$DescendingSubMapEntryIterator
//$ extends java.util.TreeMap$NavigableSubMap$SubMapIterator

#include <java/util/TreeMap$NavigableSubMap$SubMapIterator.h>

namespace java {
	namespace util {
		class TreeMap$Entry;
		class TreeMap$NavigableSubMap;
	}
}

namespace java {
	namespace util {

class $import TreeMap$NavigableSubMap$DescendingSubMapEntryIterator : public ::java::util::TreeMap$NavigableSubMap$SubMapIterator {
	$class(TreeMap$NavigableSubMap$DescendingSubMapEntryIterator, $NO_CLASS_INIT, ::java::util::TreeMap$NavigableSubMap$SubMapIterator)
public:
	TreeMap$NavigableSubMap$DescendingSubMapEntryIterator();
	void init$(::java::util::TreeMap$NavigableSubMap* this$0, ::java::util::TreeMap$Entry* last, ::java::util::TreeMap$Entry* fence);
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::TreeMap$NavigableSubMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_TreeMap$NavigableSubMap$DescendingSubMapEntryIterator_h_