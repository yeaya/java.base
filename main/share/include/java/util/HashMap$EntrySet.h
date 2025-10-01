#ifndef _java_util_HashMap$EntrySet_h_
#define _java_util_HashMap$EntrySet_h_
//$ class java.util.HashMap$EntrySet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

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

class $import HashMap$EntrySet : public ::java::util::AbstractSet {
	$class(HashMap$EntrySet, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	HashMap$EntrySet();
	void init$(::java::util::HashMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::HashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_HashMap$EntrySet_h_