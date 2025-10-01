#ifndef _java_util_TreeMap$PrivateEntryIterator_h_
#define _java_util_TreeMap$PrivateEntryIterator_h_
//$ class java.util.TreeMap$PrivateEntryIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class TreeMap;
		class TreeMap$Entry;
	}
}

namespace java {
	namespace util {

class $import TreeMap$PrivateEntryIterator : public ::java::util::Iterator {
	$class(TreeMap$PrivateEntryIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	TreeMap$PrivateEntryIterator();
	void init$(::java::util::TreeMap* this$0, ::java::util::TreeMap$Entry* first);
	virtual bool hasNext() override;
	::java::util::TreeMap$Entry* nextEntry();
	::java::util::TreeMap$Entry* prevEntry();
	virtual void remove() override;
	::java::util::TreeMap* this$0 = nullptr;
	::java::util::TreeMap$Entry* next$ = nullptr;
	::java::util::TreeMap$Entry* lastReturned = nullptr;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_TreeMap$PrivateEntryIterator_h_