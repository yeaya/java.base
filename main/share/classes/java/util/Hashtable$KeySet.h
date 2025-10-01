#ifndef _java_util_Hashtable$KeySet_h_
#define _java_util_Hashtable$KeySet_h_
//$ class java.util.Hashtable$KeySet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Hashtable;
		class Iterator;
	}
}

namespace java {
	namespace util {

class Hashtable$KeySet : public ::java::util::AbstractSet {
	$class(Hashtable$KeySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	Hashtable$KeySet();
	void init$(::java::util::Hashtable* this$0);
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

#endif // _java_util_Hashtable$KeySet_h_