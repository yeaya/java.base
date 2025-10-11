#include <p2/internal/X.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef X

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p2 {
	namespace internal {

$MethodInfo _X_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X::*)()>(&X::init$))},
	{}
};

$ClassInfo _X_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p2.internal.X",
	"java.lang.Object",
	nullptr,
	nullptr,
	_X_MethodInfo_
};

$Object* allocate$X($Class* clazz) {
	return $of($alloc(X));
}

void X::init$() {
}

X::X() {
}

$Class* X::load$($String* name, bool initialize) {
	$loadClass(X, name, initialize, &_X_ClassInfo_, allocate$X);
	return class$;
}

$Class* X::class$ = nullptr;

	} // internal
} // p2