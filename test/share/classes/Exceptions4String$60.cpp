#include <Exceptions4String$60.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$60_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$60, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$60, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$60_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"copyValueOf",
	"()V"
};

$InnerClassInfo _Exceptions4String$60_InnerClassesInfo_[] = {
	{"Exceptions4String$60", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$60_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$60",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$60_MethodInfo_,
	nullptr,
	&_Exceptions4String$60_EnclosingMethodInfo_,
	_Exceptions4String$60_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$60($Class* clazz) {
	return $of($alloc(Exceptions4String$60));
}

void Exceptions4String$60::init$() {
}

void Exceptions4String$60::run() {
	"foo"_s->copyValueOf(($chars*)nullptr, 1, 2);
}

Exceptions4String$60::Exceptions4String$60() {
}

$Class* Exceptions4String$60::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$60, name, initialize, &_Exceptions4String$60_ClassInfo_, allocate$Exceptions4String$60);
	return class$;
}

$Class* Exceptions4String$60::class$ = nullptr;