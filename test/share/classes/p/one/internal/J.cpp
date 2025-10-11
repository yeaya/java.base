#include <p/one/internal/J.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef J

using $ClassInfo = ::java::lang::ClassInfo;

namespace p {
	namespace one {
		namespace internal {

$ClassInfo _J_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"p.one.internal.J"
};

$Object* allocate$J($Class* clazz) {
	return $of($alloc(J));
}

$Class* J::load$($String* name, bool initialize) {
	$loadClass(J, name, initialize, &_J_ClassInfo_, allocate$J);
	return class$;
}

$Class* J::class$ = nullptr;

		} // internal
	} // one
} // p