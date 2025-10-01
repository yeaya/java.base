#ifndef _java_util_TreeMap$Values_h_
#define _java_util_TreeMap$Values_h_
//$ class java.util.TreeMap$Values
//$ extends java.util.AbstractCollection

#include <java/util/AbstractCollection.h>

namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
		class TreeMap;
	}
}

namespace java {
	namespace util {

class $export TreeMap$Values : public ::java::util::AbstractCollection {
	$class(TreeMap$Values, $NO_CLASS_INIT, ::java::util::AbstractCollection)
public:
	TreeMap$Values();
	void init$(::java::util::TreeMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractCollection::toArray;
	::java::util::TreeMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_TreeMap$Values_h_