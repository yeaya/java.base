#ifndef _java_util_IdentityHashMap$EntryIterator_h_
#define _java_util_IdentityHashMap$EntryIterator_h_
//$ class java.util.IdentityHashMap$EntryIterator
//$ extends java.util.IdentityHashMap$IdentityHashMapIterator

#include <java/util/IdentityHashMap$IdentityHashMapIterator.h>

namespace java {
	namespace util {
		class IdentityHashMap;
		class IdentityHashMap$EntryIterator$Entry;
	}
}

namespace java {
	namespace util {

class IdentityHashMap$EntryIterator : public ::java::util::IdentityHashMap$IdentityHashMapIterator {
	$class(IdentityHashMap$EntryIterator, $NO_CLASS_INIT, ::java::util::IdentityHashMap$IdentityHashMapIterator)
public:
	IdentityHashMap$EntryIterator();
	void init$(::java::util::IdentityHashMap* this$0);
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::IdentityHashMap* this$0 = nullptr;
	::java::util::IdentityHashMap$EntryIterator$Entry* lastReturnedEntry = nullptr;
};

	} // util
} // java

#endif // _java_util_IdentityHashMap$EntryIterator_h_