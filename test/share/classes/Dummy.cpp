#include <Dummy.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Dummy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Dummy, init$, void)},
	{}
};

$ClassInfo _Dummy_ClassInfo_ = {
	$ACC_SUPER,
	"Dummy",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Dummy_MethodInfo_
};

$Object* allocate$Dummy($Class* clazz) {
	return $of($alloc(Dummy));
}

void Dummy::init$() {
}

Dummy::Dummy() {
}

$Class* Dummy::load$($String* name, bool initialize) {
	$loadClass(Dummy, name, initialize, &_Dummy_ClassInfo_, allocate$Dummy);
	return class$;
}

$Class* Dummy::class$ = nullptr;