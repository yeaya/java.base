#include <p/two/A.h>

#include <jcpp.h>

#undef A

using $ClassInfo = ::java::lang::ClassInfo;

namespace p {
	namespace two {

$ClassInfo _A_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"p.two.A"
};

$Object* allocate$A($Class* clazz) {
	return $of($alloc(A));
}

$Class* A::load$($String* name, bool initialize) {
	$loadClass(A, name, initialize, &_A_ClassInfo_, allocate$A);
	return class$;
}

$Class* A::class$ = nullptr;

	} // two
} // p