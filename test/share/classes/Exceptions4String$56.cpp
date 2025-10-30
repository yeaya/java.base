#include <Exceptions4String$56.h>

#include <Exceptions4String.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Locale = ::java::util::Locale;

$MethodInfo _Exceptions4String$56_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$56::*)()>(&Exceptions4String$56::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$56_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"toUpperCase",
	"()V"
};

$InnerClassInfo _Exceptions4String$56_InnerClassesInfo_[] = {
	{"Exceptions4String$56", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$56_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$56",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$56_MethodInfo_,
	nullptr,
	&_Exceptions4String$56_EnclosingMethodInfo_,
	_Exceptions4String$56_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$56($Class* clazz) {
	return $of($alloc(Exceptions4String$56));
}

void Exceptions4String$56::init$() {
}

void Exceptions4String$56::run() {
	"foo"_s->toUpperCase(nullptr);
}

Exceptions4String$56::Exceptions4String$56() {
}

$Class* Exceptions4String$56::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$56, name, initialize, &_Exceptions4String$56_ClassInfo_, allocate$Exceptions4String$56);
	return class$;
}

$Class* Exceptions4String$56::class$ = nullptr;