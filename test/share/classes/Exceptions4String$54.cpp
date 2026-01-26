#include <Exceptions4String$54.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$54_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$54, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$54, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$54_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"split",
	"()V"
};

$InnerClassInfo _Exceptions4String$54_InnerClassesInfo_[] = {
	{"Exceptions4String$54", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$54_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$54",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$54_MethodInfo_,
	nullptr,
	&_Exceptions4String$54_EnclosingMethodInfo_,
	_Exceptions4String$54_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$54($Class* clazz) {
	return $of($alloc(Exceptions4String$54));
}

void Exceptions4String$54::init$() {
}

void Exceptions4String$54::run() {
	"foo"_s->split(nullptr);
}

Exceptions4String$54::Exceptions4String$54() {
}

$Class* Exceptions4String$54::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$54, name, initialize, &_Exceptions4String$54_ClassInfo_, allocate$Exceptions4String$54);
	return class$;
}

$Class* Exceptions4String$54::class$ = nullptr;