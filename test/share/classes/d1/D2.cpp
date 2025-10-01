#include <d1/D2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace d1 {

$MethodInfo _D2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(D2::*)()>(&D2::init$))},
	{}
};

$ClassInfo _D2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"d1.D2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_D2_MethodInfo_
};

$Object* allocate$D2($Class* clazz) {
	return $of($alloc(D2));
}

void D2::init$() {
}

D2::D2() {
}

$Class* D2::load$($String* name, bool initialize) {
	$loadClass(D2, name, initialize, &_D2_ClassInfo_, allocate$D2);
	return class$;
}

$Class* D2::class$ = nullptr;

} // d1