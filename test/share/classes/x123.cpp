#include <x123.h>

#include <InitArg.h>
#include <jcpp.h>

using $InitArg = ::InitArg;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _x123_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(x123, init$, void)},
	{}
};

$ClassInfo _x123_ClassInfo_ = {
	$ACC_SUPER,
	"x123",
	"java.lang.Object",
	nullptr,
	nullptr,
	_x123_MethodInfo_
};

$Object* allocate$x123($Class* clazz) {
	return $of($alloc(x123));
}

void x123::init$() {
}

void clinit$x123($Class* class$) {
	{
		$init($InitArg);
		$InitArg::x123Initialized = true;
	}
}

x123::x123() {
}

$Class* x123::load$($String* name, bool initialize) {
	$loadClass(x123, name, initialize, &_x123_ClassInfo_, clinit$x123, allocate$x123);
	return class$;
}

$Class* x123::class$ = nullptr;