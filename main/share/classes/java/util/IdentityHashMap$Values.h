#ifndef _java_util_IdentityHashMap$Values_h_
#define _java_util_IdentityHashMap$Values_h_
//$ class java.util.IdentityHashMap$Values
//$ extends java.util.AbstractCollection

#include <java/lang/Array.h>
#include <java/util/AbstractCollection.h>

namespace java {
	namespace util {
		class IdentityHashMap;
		class Iterator;
		class Spliterator;
	}
}

namespace java {
	namespace util {

class IdentityHashMap$Values : public ::java::util::AbstractCollection {
	$class(IdentityHashMap$Values, $NO_CLASS_INIT, ::java::util::AbstractCollection)
public:
	IdentityHashMap$Values();
	void init$(::java::util::IdentityHashMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractCollection::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	::java::util::IdentityHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_IdentityHashMap$Values_h_