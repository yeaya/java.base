#include <Exceptions4String$45.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$45_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$45::*)()>(&Exceptions4String$45::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$45_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"lastIndexOf",
	"()V"
};

$InnerClassInfo _Exceptions4String$45_InnerClassesInfo_[] = {
	{"Exceptions4String$45", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$45_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$45",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$45_MethodInfo_,
	nullptr,
	&_Exceptions4String$45_EnclosingMethodInfo_,
	_Exceptions4String$45_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$45($Class* clazz) {
	return $of($alloc(Exceptions4String$45));
}

void Exceptions4String$45::init$() {
}

void Exceptions4String$45::run() {
	"foo"_s->lastIndexOf(($String*)nullptr);
}

Exceptions4String$45::Exceptions4String$45() {
}

$Class* Exceptions4String$45::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$45, name, initialize, &_Exceptions4String$45_ClassInfo_, allocate$Exceptions4String$45);
	return class$;
}

$Class* Exceptions4String$45::class$ = nullptr;