#include <Exceptions4String$2.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$2, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$2, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$2_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"string",
	"()V"
};

$InnerClassInfo _Exceptions4String$2_InnerClassesInfo_[] = {
	{"Exceptions4String$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$2_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$2_MethodInfo_,
	nullptr,
	&_Exceptions4String$2_EnclosingMethodInfo_,
	_Exceptions4String$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$2($Class* clazz) {
	return $of($alloc(Exceptions4String$2));
}

void Exceptions4String$2::init$() {
}

void Exceptions4String$2::run() {
	$new($String, "foo"_s);
}

Exceptions4String$2::Exceptions4String$2() {
}

$Class* Exceptions4String$2::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$2, name, initialize, &_Exceptions4String$2_ClassInfo_, allocate$Exceptions4String$2);
	return class$;
}

$Class* Exceptions4String$2::class$ = nullptr;