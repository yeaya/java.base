#ifndef _java_util_WeakHashMap$EntryIterator_h_
#define _java_util_WeakHashMap$EntryIterator_h_
//$ class java.util.WeakHashMap$EntryIterator
//$ extends java.util.WeakHashMap$HashIterator

#include <java/util/WeakHashMap$HashIterator.h>

namespace java {
	namespace util {
		class WeakHashMap;
	}
}

namespace java {
	namespace util {

class WeakHashMap$EntryIterator : public ::java::util::WeakHashMap$HashIterator {
	$class(WeakHashMap$EntryIterator, $NO_CLASS_INIT, ::java::util::WeakHashMap$HashIterator)
public:
	WeakHashMap$EntryIterator();
	void init$(::java::util::WeakHashMap* this$0);
	virtual $Object* next() override;
	::java::util::WeakHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_WeakHashMap$EntryIterator_h_