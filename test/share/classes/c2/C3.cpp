#include <c2/C3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace c2 {

$MethodInfo _C3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(C3::*)()>(&C3::init$))},
	{}
};

$ClassInfo _C3_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"c2.C3",
	"java.lang.Object",
	nullptr,
	nullptr,
	_C3_MethodInfo_
};

$Object* allocate$C3($Class* clazz) {
	return $of($alloc(C3));
}

void C3::init$() {
}

C3::C3() {
}

$Class* C3::load$($String* name, bool initialize) {
	$loadClass(C3, name, initialize, &_C3_ClassInfo_, allocate$C3);
	return class$;
}

$Class* C3::class$ = nullptr;

} // c2