#ifndef _java_util_Collections$UnmodifiableList$1_h_
#define _java_util_Collections$UnmodifiableList$1_h_
//$ class java.util.Collections$UnmodifiableList$1
//$ extends java.util.ListIterator

#include <java/util/ListIterator.h>

namespace java {
	namespace util {
		class Collections$UnmodifiableList;
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

class Collections$UnmodifiableList$1 : public ::java::util::ListIterator {
	$class(Collections$UnmodifiableList$1, $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	Collections$UnmodifiableList$1();
	void init$(::java::util::Collections$UnmodifiableList* this$0, int32_t val$index);
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
	::java::util::Collections$UnmodifiableList* this$0 = nullptr;
	int32_t val$index = 0;
	::java::util::ListIterator* i = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$UnmodifiableList$1_h_