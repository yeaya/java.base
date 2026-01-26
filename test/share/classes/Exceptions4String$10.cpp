#include <Exceptions4String$10.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$10_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$10, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$10, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$10_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"charArrayOffCount",
	"()V"
};

$InnerClassInfo _Exceptions4String$10_InnerClassesInfo_[] = {
	{"Exceptions4String$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$10_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$10",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$10_MethodInfo_,
	nullptr,
	&_Exceptions4String$10_EnclosingMethodInfo_,
	_Exceptions4String$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$10($Class* clazz) {
	return $of($alloc(Exceptions4String$10));
}

void Exceptions4String$10::init$() {
}

void Exceptions4String$10::run() {
	$init($Exceptions4String);
	$new($String, $Exceptions4String::c, $nc($Exceptions4String::c)->length + 1, 1);
}

Exceptions4String$10::Exceptions4String$10() {
}

$Class* Exceptions4String$10::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$10, name, initialize, &_Exceptions4String$10_ClassInfo_, allocate$Exceptions4String$10);
	return class$;
}

$Class* Exceptions4String$10::class$ = nullptr;