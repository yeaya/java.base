#include <p/one/I.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef I

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {
	namespace one {

$MethodInfo _I_MethodInfo_[] = {
	{"m", "()I", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _I_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"p.one.I",
	nullptr,
	nullptr,
	nullptr,
	_I_MethodInfo_
};

$Object* allocate$I($Class* clazz) {
	return $of($alloc(I));
}

int32_t I::m() {
	return 1;
}

$Class* I::load$($String* name, bool initialize) {
	$loadClass(I, name, initialize, &_I_ClassInfo_, allocate$I);
	return class$;
}

$Class* I::class$ = nullptr;

	} // one
} // p