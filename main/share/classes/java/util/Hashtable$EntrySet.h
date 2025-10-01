#ifndef _java_util_Hashtable$EntrySet_h_
#define _java_util_Hashtable$EntrySet_h_
//$ class java.util.Hashtable$EntrySet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Hashtable;
		class Iterator;
		class Map$Entry;
	}
}

namespace java {
	namespace util {

class Hashtable$EntrySet : public ::java::util::AbstractSet {
	$class(Hashtable$EntrySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	Hashtable$EntrySet();
	void init$(::java::util::Hashtable* this$0);
	virtual bool add(::java::util::Map$Entry* o);
	virtual bool add(Object$* o) override;
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::Hashtable* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_Hashtable$EntrySet_h_