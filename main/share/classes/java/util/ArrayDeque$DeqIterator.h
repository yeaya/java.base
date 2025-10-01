#ifndef _java_util_ArrayDeque$DeqIterator_h_
#define _java_util_ArrayDeque$DeqIterator_h_
//$ class java.util.ArrayDeque$DeqIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class ArrayDeque;
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

class ArrayDeque$DeqIterator : public ::java::util::Iterator {
	$class(ArrayDeque$DeqIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ArrayDeque$DeqIterator();
	void init$(::java::util::ArrayDeque* this$0);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void postDelete(bool leftShifted);
	virtual void remove() override;
	::java::util::ArrayDeque* this$0 = nullptr;
	int32_t cursor = 0;
	int32_t remaining = 0;
	int32_t lastRet = 0;
};

	} // util
} // java

#endif // _java_util_ArrayDeque$DeqIterator_h_