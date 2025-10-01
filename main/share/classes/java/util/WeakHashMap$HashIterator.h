#ifndef _java_util_WeakHashMap$HashIterator_h_
#define _java_util_WeakHashMap$HashIterator_h_
//$ class java.util.WeakHashMap$HashIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class WeakHashMap;
		class WeakHashMap$Entry;
	}
}

namespace java {
	namespace util {

class WeakHashMap$HashIterator : public ::java::util::Iterator {
	$class(WeakHashMap$HashIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	WeakHashMap$HashIterator();
	void init$(::java::util::WeakHashMap* this$0);
	virtual bool hasNext() override;
	virtual ::java::util::WeakHashMap$Entry* nextEntry();
	virtual void remove() override;
	::java::util::WeakHashMap* this$0 = nullptr;
	int32_t index = 0;
	::java::util::WeakHashMap$Entry* entry = nullptr;
	::java::util::WeakHashMap$Entry* lastReturned = nullptr;
	int32_t expectedModCount = 0;
	$Object* nextKey = nullptr;
	$Object* currentKey = nullptr;
};

	} // util
} // java

#endif // _java_util_WeakHashMap$HashIterator_h_