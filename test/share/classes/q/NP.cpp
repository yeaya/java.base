#include <q/NP.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef NP

using $ClassInfo = ::java::lang::ClassInfo;

namespace q {

$ClassInfo _NP_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"q.NP"
};

$Object* allocate$NP($Class* clazz) {
	return $of($alloc(NP));
}

$Class* NP::load$($String* name, bool initialize) {
	$loadClass(NP, name, initialize, &_NP_ClassInfo_, allocate$NP);
	return class$;
}

$Class* NP::class$ = nullptr;

} // q