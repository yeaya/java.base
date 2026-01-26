#include <Exceptions4String$59.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$59_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$59, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$59, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$59_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"valueOf",
	"()V"
};

$InnerClassInfo _Exceptions4String$59_InnerClassesInfo_[] = {
	{"Exceptions4String$59", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$59_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$59",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$59_MethodInfo_,
	nullptr,
	&_Exceptions4String$59_EnclosingMethodInfo_,
	_Exceptions4String$59_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$59($Class* clazz) {
	return $of($alloc(Exceptions4String$59));
}

void Exceptions4String$59::init$() {
}

void Exceptions4String$59::run() {
	$String::valueOf(($chars*)nullptr, 1, 2);
}

Exceptions4String$59::Exceptions4String$59() {
}

$Class* Exceptions4String$59::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$59, name, initialize, &_Exceptions4String$59_ClassInfo_, allocate$Exceptions4String$59);
	return class$;
}

$Class* Exceptions4String$59::class$ = nullptr;