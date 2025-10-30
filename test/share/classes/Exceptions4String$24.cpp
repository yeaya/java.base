#include <Exceptions4String$24.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$24_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$24::*)()>(&Exceptions4String$24::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$24_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArrayOffLength",
	"()V"
};

$InnerClassInfo _Exceptions4String$24_InnerClassesInfo_[] = {
	{"Exceptions4String$24", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$24_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$24",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$24_MethodInfo_,
	nullptr,
	&_Exceptions4String$24_EnclosingMethodInfo_,
	_Exceptions4String$24_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$24($Class* clazz) {
	return $of($alloc(Exceptions4String$24));
}

void Exceptions4String$24::init$() {
}

void Exceptions4String$24::run() {
	$init($Exceptions4String);
	$new($String, $Exceptions4String::b, 0, -1);
}

Exceptions4String$24::Exceptions4String$24() {
}

$Class* Exceptions4String$24::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$24, name, initialize, &_Exceptions4String$24_ClassInfo_, allocate$Exceptions4String$24);
	return class$;
}

$Class* Exceptions4String$24::class$ = nullptr;