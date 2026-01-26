#include <Exceptions4String$50.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$50_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$50, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$50, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$50_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"replaceFirst",
	"()V"
};

$InnerClassInfo _Exceptions4String$50_InnerClassesInfo_[] = {
	{"Exceptions4String$50", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$50_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$50",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$50_MethodInfo_,
	nullptr,
	&_Exceptions4String$50_EnclosingMethodInfo_,
	_Exceptions4String$50_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$50($Class* clazz) {
	return $of($alloc(Exceptions4String$50));
}

void Exceptions4String$50::init$() {
}

void Exceptions4String$50::run() {
	"foo"_s->replaceFirst(nullptr, "-"_s);
}

Exceptions4String$50::Exceptions4String$50() {
}

$Class* Exceptions4String$50::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$50, name, initialize, &_Exceptions4String$50_ClassInfo_, allocate$Exceptions4String$50);
	return class$;
}

$Class* Exceptions4String$50::class$ = nullptr;