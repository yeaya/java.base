#include <Exceptions4String$20.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$20_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$20::*)()>(&Exceptions4String$20::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$20_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArrayHi",
	"()V"
};

$InnerClassInfo _Exceptions4String$20_InnerClassesInfo_[] = {
	{"Exceptions4String$20", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$20_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$20",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$20_MethodInfo_,
	nullptr,
	&_Exceptions4String$20_EnclosingMethodInfo_,
	_Exceptions4String$20_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$20($Class* clazz) {
	return $of($alloc(Exceptions4String$20));
}

void Exceptions4String$20::init$() {
}

void Exceptions4String$20::run() {
	$new($String, ($bytes*)nullptr, 0);
}

Exceptions4String$20::Exceptions4String$20() {
}

$Class* Exceptions4String$20::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$20, name, initialize, &_Exceptions4String$20_ClassInfo_, allocate$Exceptions4String$20);
	return class$;
}

$Class* Exceptions4String$20::class$ = nullptr;