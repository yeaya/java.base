#ifndef _java_util_IdentityHashMap$KeyIterator_h_
#define _java_util_IdentityHashMap$KeyIterator_h_
//$ class java.util.IdentityHashMap$KeyIterator
//$ extends java.util.IdentityHashMap$IdentityHashMapIterator

#include <java/util/IdentityHashMap$IdentityHashMapIterator.h>

namespace java {
	namespace util {
		class IdentityHashMap;
	}
}

namespace java {
	namespace util {

class IdentityHashMap$KeyIterator : public ::java::util::IdentityHashMap$IdentityHashMapIterator {
	$class(IdentityHashMap$KeyIterator, $NO_CLASS_INIT, ::java::util::IdentityHashMap$IdentityHashMapIterator)
public:
	IdentityHashMap$KeyIterator();
	void init$(::java::util::IdentityHashMap* this$0);
	virtual $Object* next() override;
	::java::util::IdentityHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_IdentityHashMap$KeyIterator_h_