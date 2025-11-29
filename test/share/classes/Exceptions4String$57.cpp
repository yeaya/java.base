#include <Exceptions4String$57.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$57_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$57::*)()>(&Exceptions4String$57::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$57_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"valueOf",
	"()V"
};

$InnerClassInfo _Exceptions4String$57_InnerClassesInfo_[] = {
	{"Exceptions4String$57", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$57_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$57",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$57_MethodInfo_,
	nullptr,
	&_Exceptions4String$57_EnclosingMethodInfo_,
	_Exceptions4String$57_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$57($Class* clazz) {
	return $of($alloc(Exceptions4String$57));
}

void Exceptions4String$57::init$() {
}

void Exceptions4String$57::run() {
	$String::valueOf(($Object*)nullptr);
}

Exceptions4String$57::Exceptions4String$57() {
}

$Class* Exceptions4String$57::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$57, name, initialize, &_Exceptions4String$57_ClassInfo_, allocate$Exceptions4String$57);
	return class$;
}

$Class* Exceptions4String$57::class$ = nullptr;