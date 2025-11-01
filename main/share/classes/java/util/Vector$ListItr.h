#ifndef _java_util_Vector$ListItr_h_
#define _java_util_Vector$ListItr_h_
//$ class java.util.Vector$ListItr
//$ extends java.util.Vector$Itr
//$ implements java.util.ListIterator

#include <java/util/ListIterator.h>
#include <java/util/Vector$Itr.h>

namespace java {
	namespace util {
		class Vector;
	}
}

namespace java {
	namespace util {

class $export Vector$ListItr : public ::java::util::Vector$Itr, public ::java::util::ListIterator {
	$class(Vector$ListItr, $NO_CLASS_INIT, ::java::util::Vector$Itr, ::java::util::ListIterator)
public:
	Vector$ListItr();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Vector* this$0, int32_t index);
	virtual void add(Object$* e) override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(Object$* e) override;
	virtual $String* toString() override;
	::java::util::Vector* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_Vector$ListItr_h_