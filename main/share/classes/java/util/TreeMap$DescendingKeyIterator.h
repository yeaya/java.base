#ifndef _java_util_TreeMap$DescendingKeyIterator_h_
#define _java_util_TreeMap$DescendingKeyIterator_h_
//$ class java.util.TreeMap$DescendingKeyIterator
//$ extends java.util.TreeMap$PrivateEntryIterator

#include <java/util/TreeMap$PrivateEntryIterator.h>

namespace java {
	namespace util {
		class TreeMap;
		class TreeMap$Entry;
	}
}

namespace java {
	namespace util {

class $export TreeMap$DescendingKeyIterator : public ::java::util::TreeMap$PrivateEntryIterator {
	$class(TreeMap$DescendingKeyIterator, $NO_CLASS_INIT, ::java::util::TreeMap$PrivateEntryIterator)
public:
	TreeMap$DescendingKeyIterator();
	void init$(::java::util::TreeMap* this$0, ::java::util::TreeMap$Entry* first);
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::TreeMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_TreeMap$DescendingKeyIterator_h_