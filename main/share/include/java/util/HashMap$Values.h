#ifndef _java_util_HashMap$Values_h_
#define _java_util_HashMap$Values_h_
//$ class java.util.HashMap$Values
//$ extends java.util.AbstractCollection

#include <java/lang/Array.h>
#include <java/util/AbstractCollection.h>

namespace java {
	namespace util {
		class HashMap;
		class Iterator;
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

class $import HashMap$Values : public ::java::util::AbstractCollection {
	$class(HashMap$Values, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractCollection)
public:
	HashMap$Values();
	void init$(::java::util::HashMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractCollection::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	::java::util::HashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_HashMap$Values_h_