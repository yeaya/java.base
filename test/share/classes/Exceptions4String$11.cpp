#include <Exceptions4String$11.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$11_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$11::*)()>(&Exceptions4String$11::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$11_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"charArrayOffCount",
	"()V"
};

$InnerClassInfo _Exceptions4String$11_InnerClassesInfo_[] = {
	{"Exceptions4String$11", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$11_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$11",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$11_MethodInfo_,
	nullptr,
	&_Exceptions4String$11_EnclosingMethodInfo_,
	_Exceptions4String$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$11($Class* clazz) {
	return $of($alloc(Exceptions4String$11));
}

void Exceptions4String$11::init$() {
}

void Exceptions4String$11::run() {
	$init($Exceptions4String);
	$new($String, $Exceptions4String::c, 0, $nc($Exceptions4String::c)->length + 1);
}

Exceptions4String$11::Exceptions4String$11() {
}

$Class* Exceptions4String$11::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$11, name, initialize, &_Exceptions4String$11_ClassInfo_, allocate$Exceptions4String$11);
	return class$;
}

$Class* Exceptions4String$11::class$ = nullptr;