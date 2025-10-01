#ifndef _java_util_WeakHashMap$Values_h_
#define _java_util_WeakHashMap$Values_h_
//$ class java.util.WeakHashMap$Values
//$ extends java.util.AbstractCollection

#include <java/util/AbstractCollection.h>

namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
		class WeakHashMap;
	}
}

namespace java {
	namespace util {

class WeakHashMap$Values : public ::java::util::AbstractCollection {
	$class(WeakHashMap$Values, $NO_CLASS_INIT, ::java::util::AbstractCollection)
public:
	WeakHashMap$Values();
	void init$(::java::util::WeakHashMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractCollection::toArray;
	::java::util::WeakHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_WeakHashMap$Values_h_