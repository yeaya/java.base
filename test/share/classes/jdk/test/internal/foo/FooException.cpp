#include <jdk/test/internal/foo/FooException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace jdk {
	namespace test {
		namespace internal {
			namespace foo {

$MethodInfo _FooException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FooException::*)()>(&FooException::init$))},
	{}
};

$ClassInfo _FooException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.test.internal.foo.FooException",
	"java.lang.RuntimeException",
	nullptr,
	nullptr,
	_FooException_MethodInfo_
};

$Object* allocate$FooException($Class* clazz) {
	return $of($alloc(FooException));
}

void FooException::init$() {
	$RuntimeException::init$();
}

FooException::FooException() {
}

FooException::FooException(const FooException& e) {
}

FooException FooException::wrapper$() {
	$pendingException(this);
	return *this;
}

void FooException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* FooException::load$($String* name, bool initialize) {
	$loadClass(FooException, name, initialize, &_FooException_ClassInfo_, allocate$FooException);
	return class$;
}

$Class* FooException::class$ = nullptr;

			} // foo
		} // internal
	} // test
} // jdk