#include <Exceptions4String$48.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$48_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$48::*)()>(&Exceptions4String$48::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$48_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"matches",
	"()V"
};

$InnerClassInfo _Exceptions4String$48_InnerClassesInfo_[] = {
	{"Exceptions4String$48", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$48_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$48",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$48_MethodInfo_,
	nullptr,
	&_Exceptions4String$48_EnclosingMethodInfo_,
	_Exceptions4String$48_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$48($Class* clazz) {
	return $of($alloc(Exceptions4String$48));
}

void Exceptions4String$48::init$() {
}

void Exceptions4String$48::run() {
	"foo"_s->matches(nullptr);
}

Exceptions4String$48::Exceptions4String$48() {
}

$Class* Exceptions4String$48::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$48, name, initialize, &_Exceptions4String$48_ClassInfo_, allocate$Exceptions4String$48);
	return class$;
}

$Class* Exceptions4String$48::class$ = nullptr;