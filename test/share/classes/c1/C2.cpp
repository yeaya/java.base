#include <c1/C2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace c1 {

$MethodInfo _C2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(C2::*)()>(&C2::init$))},
	{}
};

$ClassInfo _C2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"c1.C2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_C2_MethodInfo_
};

$Object* allocate$C2($Class* clazz) {
	return $of($alloc(C2));
}

void C2::init$() {
}

C2::C2() {
}

$Class* C2::load$($String* name, bool initialize) {
	$loadClass(C2, name, initialize, &_C2_ClassInfo_, allocate$C2);
	return class$;
}

$Class* C2::class$ = nullptr;

} // c1