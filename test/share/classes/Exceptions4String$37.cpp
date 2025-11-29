#include <Exceptions4String$37.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$37_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$37::*)()>(&Exceptions4String$37::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$37_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"compareToIgnoreCase",
	"()V"
};

$InnerClassInfo _Exceptions4String$37_InnerClassesInfo_[] = {
	{"Exceptions4String$37", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$37_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$37",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$37_MethodInfo_,
	nullptr,
	&_Exceptions4String$37_EnclosingMethodInfo_,
	_Exceptions4String$37_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$37($Class* clazz) {
	return $of($alloc(Exceptions4String$37));
}

void Exceptions4String$37::init$() {
}

void Exceptions4String$37::run() {
	"foo"_s->compareToIgnoreCase(($String*)nullptr);
}

Exceptions4String$37::Exceptions4String$37() {
}

$Class* Exceptions4String$37::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$37, name, initialize, &_Exceptions4String$37_ClassInfo_, allocate$Exceptions4String$37);
	return class$;
}

$Class* Exceptions4String$37::class$ = nullptr;