#include <Exceptions4String$13.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$13_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$13::*)()>(&Exceptions4String$13::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$13_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArrayHiOffCount",
	"()V"
};

$InnerClassInfo _Exceptions4String$13_InnerClassesInfo_[] = {
	{"Exceptions4String$13", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$13_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$13",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$13_MethodInfo_,
	nullptr,
	&_Exceptions4String$13_EnclosingMethodInfo_,
	_Exceptions4String$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$13($Class* clazz) {
	return $of($alloc(Exceptions4String$13));
}

void Exceptions4String$13::init$() {
}

void Exceptions4String$13::run() {
	$init($Exceptions4String);
	$new($String, $Exceptions4String::b, -1, 4, 4);
}

Exceptions4String$13::Exceptions4String$13() {
}

$Class* Exceptions4String$13::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$13, name, initialize, &_Exceptions4String$13_ClassInfo_, allocate$Exceptions4String$13);
	return class$;
}

$Class* Exceptions4String$13::class$ = nullptr;