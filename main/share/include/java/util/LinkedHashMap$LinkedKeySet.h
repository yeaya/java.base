#ifndef _java_util_LinkedHashMap$LinkedKeySet_h_
#define _java_util_LinkedHashMap$LinkedKeySet_h_
//$ class java.util.LinkedHashMap$LinkedKeySet
//$ extends java.util.AbstractSet

#include <java/lang/Array.h>
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

class $import LinkedHashMap$LinkedKeySet : public ::java::util::AbstractSet {
	$class(LinkedHashMap$LinkedKeySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	LinkedHashMap$LinkedKeySet();
	void init$(::java::util::LinkedHashMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* key) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractSet::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	::java::util::LinkedHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_LinkedHashMap$LinkedKeySet_h_