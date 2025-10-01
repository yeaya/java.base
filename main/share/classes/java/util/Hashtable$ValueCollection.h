#ifndef _java_util_Hashtable$ValueCollection_h_
#define _java_util_Hashtable$ValueCollection_h_
//$ class java.util.Hashtable$ValueCollection
//$ extends java.util.AbstractCollection

#include <java/util/AbstractCollection.h>

namespace java {
	namespace util {
		class Hashtable;
		class Iterator;
	}
}

namespace java {
	namespace util {

class Hashtable$ValueCollection : public ::java::util::AbstractCollection {
	$class(Hashtable$ValueCollection, $NO_CLASS_INIT, ::java::util::AbstractCollection)
public:
	Hashtable$ValueCollection();
	void init$(::java::util::Hashtable* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	using ::java::util::AbstractCollection::toArray;
	::java::util::Hashtable* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_Hashtable$ValueCollection_h_