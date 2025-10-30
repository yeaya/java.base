#include <Exceptions4String$28.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$28_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$28::*)()>(&Exceptions4String$28::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$28_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArray",
	"()V"
};

$InnerClassInfo _Exceptions4String$28_InnerClassesInfo_[] = {
	{"Exceptions4String$28", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$28_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$28",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$28_MethodInfo_,
	nullptr,
	&_Exceptions4String$28_EnclosingMethodInfo_,
	_Exceptions4String$28_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$28($Class* clazz) {
	return $of($alloc(Exceptions4String$28));
}

void Exceptions4String$28::init$() {
}

void Exceptions4String$28::run() {
	$new($String, ($bytes*)nullptr);
}

Exceptions4String$28::Exceptions4String$28() {
}

$Class* Exceptions4String$28::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$28, name, initialize, &_Exceptions4String$28_ClassInfo_, allocate$Exceptions4String$28);
	return class$;
}

$Class* Exceptions4String$28::class$ = nullptr;