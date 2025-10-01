#ifndef _java_util_IdentityHashMap$IdentityHashMapIterator_h_
#define _java_util_IdentityHashMap$IdentityHashMapIterator_h_
//$ class java.util.IdentityHashMap$IdentityHashMapIterator
//$ extends java.util.Iterator

#include <java/lang/Array.h>
#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class IdentityHashMap;
	}
}

namespace java {
	namespace util {

class IdentityHashMap$IdentityHashMapIterator : public ::java::util::Iterator {
	$class(IdentityHashMap$IdentityHashMapIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	IdentityHashMap$IdentityHashMapIterator();
	void init$(::java::util::IdentityHashMap* this$0);
	virtual bool hasNext() override;
	virtual int32_t nextIndex();
	virtual void remove() override;
	::java::util::IdentityHashMap* this$0 = nullptr;
	int32_t index = 0;
	int32_t expectedModCount = 0;
	int32_t lastReturnedIndex = 0;
	bool indexValid = false;
	$ObjectArray* traversalTable = nullptr;
};

	} // util
} // java

#endif // _java_util_IdentityHashMap$IdentityHashMapIterator_h_