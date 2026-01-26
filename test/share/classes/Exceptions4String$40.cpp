#include <Exceptions4String$40.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$40_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$40, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$40, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$40_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"startsWith",
	"()V"
};

$InnerClassInfo _Exceptions4String$40_InnerClassesInfo_[] = {
	{"Exceptions4String$40", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$40_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$40",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$40_MethodInfo_,
	nullptr,
	&_Exceptions4String$40_EnclosingMethodInfo_,
	_Exceptions4String$40_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$40($Class* clazz) {
	return $of($alloc(Exceptions4String$40));
}

void Exceptions4String$40::init$() {
}

void Exceptions4String$40::run() {
	"foo"_s->startsWith(nullptr, 1);
}

Exceptions4String$40::Exceptions4String$40() {
}

$Class* Exceptions4String$40::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$40, name, initialize, &_Exceptions4String$40_ClassInfo_, allocate$Exceptions4String$40);
	return class$;
}

$Class* Exceptions4String$40::class$ = nullptr;