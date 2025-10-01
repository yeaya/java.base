#ifndef _java_util_ArrayDeque$DescendingIterator_h_
#define _java_util_ArrayDeque$DescendingIterator_h_
//$ class java.util.ArrayDeque$DescendingIterator
//$ extends java.util.ArrayDeque$DeqIterator

#include <java/util/ArrayDeque$DeqIterator.h>

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

class ArrayDeque$DescendingIterator : public ::java::util::ArrayDeque$DeqIterator {
	$class(ArrayDeque$DescendingIterator, $NO_CLASS_INIT, ::java::util::ArrayDeque$DeqIterator)
public:
	ArrayDeque$DescendingIterator();
	void init$(::java::util::ArrayDeque* this$0);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual $Object* next() override;
	virtual void postDelete(bool leftShifted) override;
	::java::util::ArrayDeque* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_ArrayDeque$DescendingIterator_h_