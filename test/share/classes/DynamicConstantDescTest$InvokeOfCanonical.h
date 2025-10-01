#ifndef _DynamicConstantDescTest$InvokeOfCanonical_h_
#define _DynamicConstantDescTest$InvokeOfCanonical_h_
//$ class DynamicConstantDescTest$InvokeOfCanonical
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace lang {
		namespace constant {
			class DirectMethodHandleDesc;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class DynamicConstantDescTest$InvokeOfCanonical : public ::java::util::concurrent::Callable {
	$class(DynamicConstantDescTest$InvokeOfCanonical, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	DynamicConstantDescTest$InvokeOfCanonical();
	void init$(::java::util::concurrent::CountDownLatch* latch);
	static ::java::lang::constant::DirectMethodHandleDesc* boostrapMethodForEnumConstant();
	virtual $Object* call() override;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
};

#endif // _DynamicConstantDescTest$InvokeOfCanonical_h_