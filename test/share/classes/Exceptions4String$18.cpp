#include <Exceptions4String$18.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$18_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$18::*)()>(&Exceptions4String$18::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$18_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArrayHiOffCount",
	"()V"
};

$InnerClassInfo _Exceptions4String$18_InnerClassesInfo_[] = {
	{"Exceptions4String$18", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$18_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$18",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$18_MethodInfo_,
	nullptr,
	&_Exceptions4String$18_EnclosingMethodInfo_,
	_Exceptions4String$18_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$18($Class* clazz) {
	return $of($alloc(Exceptions4String$18));
}

void Exceptions4String$18::init$() {
}

void Exceptions4String$18::run() {
	$init($Exceptions4String);
	$new($String, $Exceptions4String::b, 0, 0, $nc($Exceptions4String::b)->length + 1);
}

Exceptions4String$18::Exceptions4String$18() {
}

$Class* Exceptions4String$18::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$18, name, initialize, &_Exceptions4String$18_ClassInfo_, allocate$Exceptions4String$18);
	return class$;
}

$Class* Exceptions4String$18::class$ = nullptr;