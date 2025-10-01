#ifndef _java_util_LinkedHashMap$LinkedValues_h_
#define _java_util_LinkedHashMap$LinkedValues_h_
//$ class java.util.LinkedHashMap$LinkedValues
//$ extends java.util.AbstractCollection

#include <java/lang/Array.h>
#include <java/util/AbstractCollection.h>

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

class $import LinkedHashMap$LinkedValues : public ::java::util::AbstractCollection {
	$class(LinkedHashMap$LinkedValues, $NO_CLASS_INIT, ::java::util::AbstractCollection)
public:
	LinkedHashMap$LinkedValues();
	void init$(::java::util::LinkedHashMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractCollection::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	::java::util::LinkedHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_LinkedHashMap$LinkedValues_h_