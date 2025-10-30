#include <Exceptions4String$1.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$1::*)()>(&Exceptions4String$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$1_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"noArgs",
	"()V"
};

$InnerClassInfo _Exceptions4String$1_InnerClassesInfo_[] = {
	{"Exceptions4String$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$1_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$1_MethodInfo_,
	nullptr,
	&_Exceptions4String$1_EnclosingMethodInfo_,
	_Exceptions4String$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$1($Class* clazz) {
	return $of($alloc(Exceptions4String$1));
}

void Exceptions4String$1::init$() {
}

void Exceptions4String$1::run() {
	$new($String);
}

Exceptions4String$1::Exceptions4String$1() {
}

$Class* Exceptions4String$1::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$1, name, initialize, &_Exceptions4String$1_ClassInfo_, allocate$Exceptions4String$1);
	return class$;
}

$Class* Exceptions4String$1::class$ = nullptr;