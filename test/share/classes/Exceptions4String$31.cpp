#include <Exceptions4String$31.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$31_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$31, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$31, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$31_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"getChars",
	"()V"
};

$InnerClassInfo _Exceptions4String$31_InnerClassesInfo_[] = {
	{"Exceptions4String$31", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$31_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$31",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$31_MethodInfo_,
	nullptr,
	&_Exceptions4String$31_EnclosingMethodInfo_,
	_Exceptions4String$31_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$31($Class* clazz) {
	return $of($alloc(Exceptions4String$31));
}

void Exceptions4String$31::init$() {
}

void Exceptions4String$31::run() {
	"foo"_s->getChars(1, 2, nullptr, 1);
}

Exceptions4String$31::Exceptions4String$31() {
}

$Class* Exceptions4String$31::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$31, name, initialize, &_Exceptions4String$31_ClassInfo_, allocate$Exceptions4String$31);
	return class$;
}

$Class* Exceptions4String$31::class$ = nullptr;