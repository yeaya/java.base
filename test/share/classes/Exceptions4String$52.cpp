#include <Exceptions4String$52.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$52_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$52, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$52, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$52_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"replaceAll",
	"()V"
};

$InnerClassInfo _Exceptions4String$52_InnerClassesInfo_[] = {
	{"Exceptions4String$52", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$52_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$52",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$52_MethodInfo_,
	nullptr,
	&_Exceptions4String$52_EnclosingMethodInfo_,
	_Exceptions4String$52_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$52($Class* clazz) {
	return $of($alloc(Exceptions4String$52));
}

void Exceptions4String$52::init$() {
}

void Exceptions4String$52::run() {
	"foo"_s->replaceAll(nullptr, "-"_s);
}

Exceptions4String$52::Exceptions4String$52() {
}

$Class* Exceptions4String$52::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$52, name, initialize, &_Exceptions4String$52_ClassInfo_, allocate$Exceptions4String$52);
	return class$;
}

$Class* Exceptions4String$52::class$ = nullptr;