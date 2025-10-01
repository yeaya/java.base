#ifndef _java_util_WeakHashMap$ValueIterator_h_
#define _java_util_WeakHashMap$ValueIterator_h_
//$ class java.util.WeakHashMap$ValueIterator
//$ extends java.util.WeakHashMap$HashIterator

#include <java/util/WeakHashMap$HashIterator.h>

namespace java {
	namespace util {
		class WeakHashMap;
	}
}

namespace java {
	namespace util {

class WeakHashMap$ValueIterator : public ::java::util::WeakHashMap$HashIterator {
	$class(WeakHashMap$ValueIterator, $NO_CLASS_INIT, ::java::util::WeakHashMap$HashIterator)
public:
	WeakHashMap$ValueIterator();
	void init$(::java::util::WeakHashMap* this$0);
	virtual $Object* next() override;
	::java::util::WeakHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_WeakHashMap$ValueIterator_h_