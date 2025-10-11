#include <p/three/internal/Q.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef Q

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace p {
	namespace three {
		namespace internal {

$MethodInfo _Q_MethodInfo_[] = {
	{"m", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Q_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"p.three.internal.Q",
	nullptr,
	nullptr,
	nullptr,
	_Q_MethodInfo_
};

$Object* allocate$Q($Class* clazz) {
	return $of($alloc(Q));
}

int32_t Q::m() {
	$throwNew($UnsupportedOperationException, "Q::m is in a non-exported package"_s);
	$shouldNotReachHere();
}

$Class* Q::load$($String* name, bool initialize) {
	$loadClass(Q, name, initialize, &_Q_ClassInfo_, allocate$Q);
	return class$;
}

$Class* Q::class$ = nullptr;

		} // internal
	} // three
} // p