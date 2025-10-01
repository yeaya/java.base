#ifndef _java_util_WeakHashMap$EntrySet_h_
#define _java_util_WeakHashMap$EntrySet_h_
//$ class java.util.WeakHashMap$EntrySet
//$ extends java.util.AbstractSet

#include <java/lang/Array.h>
#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class List;
		class Spliterator;
		class WeakHashMap;
	}
}

namespace java {
	namespace util {

class WeakHashMap$EntrySet : public ::java::util::AbstractSet {
	$class(WeakHashMap$EntrySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	WeakHashMap$EntrySet();
	void init$(::java::util::WeakHashMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	::java::util::List* deepCopy();
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractSet::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	::java::util::WeakHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_WeakHashMap$EntrySet_h_