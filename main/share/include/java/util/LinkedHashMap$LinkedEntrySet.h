#ifndef _java_util_LinkedHashMap$LinkedEntrySet_h_
#define _java_util_LinkedHashMap$LinkedEntrySet_h_
//$ class java.util.LinkedHashMap$LinkedEntrySet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class LinkedHashMap;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class $import LinkedHashMap$LinkedEntrySet : public ::java::util::AbstractSet {
	$class(LinkedHashMap$LinkedEntrySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	LinkedHashMap$LinkedEntrySet();
	void init$(::java::util::LinkedHashMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::LinkedHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_LinkedHashMap$LinkedEntrySet_h_