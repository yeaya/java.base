#ifndef _java_util_Collections$CheckedList$1_h_
#define _java_util_Collections$CheckedList$1_h_
//$ class java.util.Collections$CheckedList$1
//$ extends java.util.ListIterator

#include <java/util/ListIterator.h>

namespace java {
	namespace util {
		class Collections$CheckedList;
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

class Collections$CheckedList$1 : public ::java::util::ListIterator {
	$class(Collections$CheckedList$1, $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	Collections$CheckedList$1();
	void init$(::java::util::Collections$CheckedList* this$0, ::java::util::ListIterator* val$i);
	virtual void add(Object$* e) override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(Object$* e) override;
	::java::util::Collections$CheckedList* this$0 = nullptr;
	::java::util::ListIterator* val$i = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedList$1_h_