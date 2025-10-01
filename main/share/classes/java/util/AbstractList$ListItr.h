#ifndef _java_util_AbstractList$ListItr_h_
#define _java_util_AbstractList$ListItr_h_
//$ class java.util.AbstractList$ListItr
//$ extends java.util.AbstractList$Itr
//$ implements java.util.ListIterator

#include <java/util/AbstractList$Itr.h>
#include <java/util/ListIterator.h>

namespace java {
	namespace util {
		class AbstractList;
	}
}

namespace java {
	namespace util {

class AbstractList$ListItr : public ::java::util::AbstractList$Itr, public ::java::util::ListIterator {
	$class(AbstractList$ListItr, $NO_CLASS_INIT, ::java::util::AbstractList$Itr, ::java::util::ListIterator)
public:
	AbstractList$ListItr();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::AbstractList* this$0, int32_t index);
	virtual void add(Object$* e) override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(Object$* e) override;
	virtual $String* toString() override;
	::java::util::AbstractList* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_AbstractList$ListItr_h_