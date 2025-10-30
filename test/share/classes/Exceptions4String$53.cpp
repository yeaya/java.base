#include <Exceptions4String$53.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$53_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$53::*)()>(&Exceptions4String$53::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$53_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"split",
	"()V"
};

$InnerClassInfo _Exceptions4String$53_InnerClassesInfo_[] = {
	{"Exceptions4String$53", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$53_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$53",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$53_MethodInfo_,
	nullptr,
	&_Exceptions4String$53_EnclosingMethodInfo_,
	_Exceptions4String$53_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$53($Class* clazz) {
	return $of($alloc(Exceptions4String$53));
}

void Exceptions4String$53::init$() {
}

void Exceptions4String$53::run() {
	"foo"_s->split(nullptr, 1);
}

Exceptions4String$53::Exceptions4String$53() {
}

$Class* Exceptions4String$53::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$53, name, initialize, &_Exceptions4String$53_ClassInfo_, allocate$Exceptions4String$53);
	return class$;
}

$Class* Exceptions4String$53::class$ = nullptr;