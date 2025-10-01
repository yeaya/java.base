#ifndef _java_util_WeakHashMap$KeySet_h_
#define _java_util_WeakHashMap$KeySet_h_
//$ class java.util.WeakHashMap$KeySet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
		class WeakHashMap;
	}
}

namespace java {
	namespace util {

class WeakHashMap$KeySet : public ::java::util::AbstractSet {
	$class(WeakHashMap$KeySet, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	WeakHashMap$KeySet();
	void init$(::java::util::WeakHashMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::WeakHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_WeakHashMap$KeySet_h_