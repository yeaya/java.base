#ifndef _java_util_ArrayList$ListItr_h_
#define _java_util_ArrayList$ListItr_h_
//$ class java.util.ArrayList$ListItr
//$ extends java.util.ArrayList$Itr
//$ implements java.util.ListIterator

#include <java/util/ArrayList$Itr.h>
#include <java/util/ListIterator.h>

namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace java {
	namespace util {

class ArrayList$ListItr : public ::java::util::ArrayList$Itr, public ::java::util::ListIterator {
	$class(ArrayList$ListItr, $NO_CLASS_INIT, ::java::util::ArrayList$Itr, ::java::util::ListIterator)
public:
	ArrayList$ListItr();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::ArrayList* this$0, int32_t index);
	virtual void add(Object$* e) override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(Object$* e) override;
	virtual $String* toString() override;
	::java::util::ArrayList* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_ArrayList$ListItr_h_