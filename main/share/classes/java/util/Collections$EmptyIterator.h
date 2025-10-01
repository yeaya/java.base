#ifndef _java_util_Collections$EmptyIterator_h_
#define _java_util_Collections$EmptyIterator_h_
//$ class java.util.Collections$EmptyIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

#pragma push_macro("EMPTY_ITERATOR")
#undef EMPTY_ITERATOR

namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class Collections$EmptyIterator : public ::java::util::Iterator {
	$class(Collections$EmptyIterator, 0, ::java::util::Iterator)
public:
	Collections$EmptyIterator();
	void init$();
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	static ::java::util::Collections$EmptyIterator* EMPTY_ITERATOR;
};

	} // util
} // java

#pragma pop_macro("EMPTY_ITERATOR")

#endif // _java_util_Collections$EmptyIterator_h_