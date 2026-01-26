#include <e1/E2.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace e1 {

$MethodInfo _E2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(E2, init$, void)},
	{}
};

$ClassInfo _E2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"e1.E2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_E2_MethodInfo_
};

$Object* allocate$E2($Class* clazz) {
	return $of($alloc(E2));
}

void E2::init$() {
}

E2::E2() {
}

$Class* E2::load$($String* name, bool initialize) {
	$loadClass(E2, name, initialize, &_E2_ClassInfo_, allocate$E2);
	return class$;
}

$Class* E2::class$ = nullptr;

} // e1