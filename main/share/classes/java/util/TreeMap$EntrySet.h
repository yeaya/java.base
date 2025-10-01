#ifndef _java_util_TreeMap$EntrySet_h_
#define _java_util_TreeMap$EntrySet_h_
//$ class java.util.TreeMap$EntrySet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
		class TreeMap;
	}
}

namespace java {
	namespace util {

class $export TreeMap$EntrySet : public ::java::util::AbstractSet {
	$class(TreeMap$EntrySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	TreeMap$EntrySet();
	void init$(::java::util::TreeMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::TreeMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_TreeMap$EntrySet_h_