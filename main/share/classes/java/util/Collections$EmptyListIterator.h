#ifndef _java_util_Collections$EmptyListIterator_h_
#define _java_util_Collections$EmptyListIterator_h_
//$ class java.util.Collections$EmptyListIterator
//$ extends java.util.Collections$EmptyIterator
//$ implements java.util.ListIterator

#include <java/util/Collections$EmptyIterator.h>
#include <java/util/ListIterator.h>

#pragma push_macro("EMPTY_ITERATOR")
#undef EMPTY_ITERATOR

namespace java {
	namespace util {

class Collections$EmptyListIterator : public ::java::util::Collections$EmptyIterator, public ::java::util::ListIterator {
	$class(Collections$EmptyListIterator, 0, ::java::util::Collections$EmptyIterator, ::java::util::ListIterator)
public:
	Collections$EmptyListIterator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void add(Object$* e) override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(Object$* e) override;
	virtual $String* toString() override;
	static ::java::util::Collections$EmptyListIterator* EMPTY_ITERATOR;
};

	} // util
} // java

#pragma pop_macro("EMPTY_ITERATOR")

#endif // _java_util_Collections$EmptyListIterator_h_