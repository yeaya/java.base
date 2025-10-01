#ifndef _java_util_WeakHashMap$KeyIterator_h_
#define _java_util_WeakHashMap$KeyIterator_h_
//$ class java.util.WeakHashMap$KeyIterator
//$ extends java.util.WeakHashMap$HashIterator

#include <java/util/WeakHashMap$HashIterator.h>

namespace java {
	namespace util {
		class WeakHashMap;
	}
}

namespace java {
	namespace util {

class WeakHashMap$KeyIterator : public ::java::util::WeakHashMap$HashIterator {
	$class(WeakHashMap$KeyIterator, $NO_CLASS_INIT, ::java::util::WeakHashMap$HashIterator)
public:
	WeakHashMap$KeyIterator();
	void init$(::java::util::WeakHashMap* this$0);
	virtual $Object* next() override;
	::java::util::WeakHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_WeakHashMap$KeyIterator_h_