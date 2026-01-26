#include <Exceptions4String$15.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$15_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$15, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$15, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$15_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArrayHiOffCount",
	"()V"
};

$InnerClassInfo _Exceptions4String$15_InnerClassesInfo_[] = {
	{"Exceptions4String$15", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$15_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$15",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$15_MethodInfo_,
	nullptr,
	&_Exceptions4String$15_EnclosingMethodInfo_,
	_Exceptions4String$15_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$15($Class* clazz) {
	return $of($alloc(Exceptions4String$15));
}

void Exceptions4String$15::init$() {
}

void Exceptions4String$15::run() {
	$init($Exceptions4String);
	$new($String, $Exceptions4String::b, 0, -1, 4);
}

Exceptions4String$15::Exceptions4String$15() {
}

$Class* Exceptions4String$15::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$15, name, initialize, &_Exceptions4String$15_ClassInfo_, allocate$Exceptions4String$15);
	return class$;
}

$Class* Exceptions4String$15::class$ = nullptr;