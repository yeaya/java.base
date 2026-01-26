#include <Exceptions4String$14.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$14_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$14, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$14, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$14_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArrayHiOffCount",
	"()V"
};

$InnerClassInfo _Exceptions4String$14_InnerClassesInfo_[] = {
	{"Exceptions4String$14", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$14_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$14",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$14_MethodInfo_,
	nullptr,
	&_Exceptions4String$14_EnclosingMethodInfo_,
	_Exceptions4String$14_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$14($Class* clazz) {
	return $of($alloc(Exceptions4String$14));
}

void Exceptions4String$14::init$() {
}

void Exceptions4String$14::run() {
	$new($String, ($bytes*)nullptr, 0, 0, 0);
}

Exceptions4String$14::Exceptions4String$14() {
}

$Class* Exceptions4String$14::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$14, name, initialize, &_Exceptions4String$14_ClassInfo_, allocate$Exceptions4String$14);
	return class$;
}

$Class* Exceptions4String$14::class$ = nullptr;