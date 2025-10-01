#ifndef _java_util_ArrayList$SubList$1_h_
#define _java_util_ArrayList$SubList$1_h_
//$ class java.util.ArrayList$SubList$1
//$ extends java.util.ListIterator

#include <java/util/ListIterator.h>

namespace java {
	namespace util {
		class ArrayList$SubList;
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

class ArrayList$SubList$1 : public ::java::util::ListIterator {
	$class(ArrayList$SubList$1, $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	ArrayList$SubList$1();
	void init$(::java::util::ArrayList$SubList* this$0, int32_t val$index);
	virtual void add(Object$* e) override;
	void checkForComodification();
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(Object$* e) override;
	::java::util::ArrayList$SubList* this$0 = nullptr;
	int32_t val$index = 0;
	int32_t cursor = 0;
	int32_t lastRet = 0;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_ArrayList$SubList$1_h_