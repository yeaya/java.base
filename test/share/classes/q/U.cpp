#include <q/U.h>

#include <jcpp.h>

#undef U

using $ClassInfo = ::java::lang::ClassInfo;

namespace q {

$ClassInfo _U_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"q.U"
};

$Object* allocate$U($Class* clazz) {
	return $of($alloc(U));
}

$Class* U::load$($String* name, bool initialize) {
	$loadClass(U, name, initialize, &_U_ClassInfo_, allocate$U);
	return class$;
}

$Class* U::class$ = nullptr;

} // q