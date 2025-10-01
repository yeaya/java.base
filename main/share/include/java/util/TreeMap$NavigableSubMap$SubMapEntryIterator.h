#ifndef _java_util_TreeMap$NavigableSubMap$SubMapEntryIterator_h_
#define _java_util_TreeMap$NavigableSubMap$SubMapEntryIterator_h_
//$ class java.util.TreeMap$NavigableSubMap$SubMapEntryIterator
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

class $import TreeMap$NavigableSubMap$SubMapEntryIterator : public ::java::util::TreeMap$NavigableSubMap$SubMapIterator {
	$class(TreeMap$NavigableSubMap$SubMapEntryIterator, $NO_CLASS_INIT, ::java::util::TreeMap$NavigableSubMap$SubMapIterator)
public:
	TreeMap$NavigableSubMap$SubMapEntryIterator();
	void init$(::java::util::TreeMap$NavigableSubMap* this$0, ::java::util::TreeMap$Entry* first, ::java::util::TreeMap$Entry* fence);
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::TreeMap$NavigableSubMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_TreeMap$NavigableSubMap$SubMapEntryIterator_h_