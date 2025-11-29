#include <Exceptions4String$55.h>

#include <Exceptions4String.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

$MethodInfo _Exceptions4String$55_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$55::*)()>(&Exceptions4String$55::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$55_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"toLowerCase",
	"()V"
};

$InnerClassInfo _Exceptions4String$55_InnerClassesInfo_[] = {
	{"Exceptions4String$55", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$55_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$55",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$55_MethodInfo_,
	nullptr,
	&_Exceptions4String$55_EnclosingMethodInfo_,
	_Exceptions4String$55_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$55($Class* clazz) {
	return $of($alloc(Exceptions4String$55));
}

void Exceptions4String$55::init$() {
}

void Exceptions4String$55::run() {
	"foo"_s->toLowerCase(nullptr);
}

Exceptions4String$55::Exceptions4String$55() {
}

$Class* Exceptions4String$55::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$55, name, initialize, &_Exceptions4String$55_ClassInfo_, allocate$Exceptions4String$55);
	return class$;
}

$Class* Exceptions4String$55::class$ = nullptr;