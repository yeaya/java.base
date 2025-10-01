#ifndef _java_util_TreeMap$KeyIterator_h_
#define _java_util_TreeMap$KeyIterator_h_
//$ class java.util.TreeMap$KeyIterator
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

class $import TreeMap$KeyIterator : public ::java::util::TreeMap$PrivateEntryIterator {
	$class(TreeMap$KeyIterator, $NO_CLASS_INIT, ::java::util::TreeMap$PrivateEntryIterator)
public:
	TreeMap$KeyIterator();
	void init$(::java::util::TreeMap* this$0, ::java::util::TreeMap$Entry* first);
	virtual $Object* next() override;
	::java::util::TreeMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_TreeMap$KeyIterator_h_