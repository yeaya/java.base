#ifndef _java_util_IdentityHashMap$EntrySet_h_
#define _java_util_IdentityHashMap$EntrySet_h_
//$ class java.util.IdentityHashMap$EntrySet
//$ extends java.util.AbstractSet

#include <java/lang/Array.h>
#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Collection;
		class IdentityHashMap;
		class Iterator;
		class Spliterator;
	}
}

namespace java {
	namespace util {

class IdentityHashMap$EntrySet : public ::java::util::AbstractSet {
	$class(IdentityHashMap$EntrySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	IdentityHashMap$EntrySet();
	void init$(::java::util::IdentityHashMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractSet::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	::java::util::IdentityHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_IdentityHashMap$EntrySet_h_