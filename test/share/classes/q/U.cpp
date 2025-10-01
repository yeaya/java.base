#include <q/U.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

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