#include <Exceptions4String$47.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$47_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$47, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$47, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$47_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"concat",
	"()V"
};

$InnerClassInfo _Exceptions4String$47_InnerClassesInfo_[] = {
	{"Exceptions4String$47", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$47_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$47",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$47_MethodInfo_,
	nullptr,
	&_Exceptions4String$47_EnclosingMethodInfo_,
	_Exceptions4String$47_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$47($Class* clazz) {
	return $of($alloc(Exceptions4String$47));
}

void Exceptions4String$47::init$() {
}

void Exceptions4String$47::run() {
	"foo"_s->concat(nullptr);
}

Exceptions4String$47::Exceptions4String$47() {
}

$Class* Exceptions4String$47::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$47, name, initialize, &_Exceptions4String$47_ClassInfo_, allocate$Exceptions4String$47);
	return class$;
}

$Class* Exceptions4String$47::class$ = nullptr;