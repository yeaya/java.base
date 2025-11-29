#include <Exceptions4String$9.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$9::*)()>(&Exceptions4String$9::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$9_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"charArrayOffCount",
	"()V"
};

$InnerClassInfo _Exceptions4String$9_InnerClassesInfo_[] = {
	{"Exceptions4String$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$9_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$9",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$9_MethodInfo_,
	nullptr,
	&_Exceptions4String$9_EnclosingMethodInfo_,
	_Exceptions4String$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$9($Class* clazz) {
	return $of($alloc(Exceptions4String$9));
}

void Exceptions4String$9::init$() {
}

void Exceptions4String$9::run() {
	$init($Exceptions4String);
	$new($String, $Exceptions4String::c, 1, -1);
}

Exceptions4String$9::Exceptions4String$9() {
}

$Class* Exceptions4String$9::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$9, name, initialize, &_Exceptions4String$9_ClassInfo_, allocate$Exceptions4String$9);
	return class$;
}

$Class* Exceptions4String$9::class$ = nullptr;