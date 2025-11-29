#include <Exceptions4String$27.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$27_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$27::*)()>(&Exceptions4String$27::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$27_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArray",
	"()V"
};

$InnerClassInfo _Exceptions4String$27_InnerClassesInfo_[] = {
	{"Exceptions4String$27", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$27_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$27",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$27_MethodInfo_,
	nullptr,
	&_Exceptions4String$27_EnclosingMethodInfo_,
	_Exceptions4String$27_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$27($Class* clazz) {
	return $of($alloc(Exceptions4String$27));
}

void Exceptions4String$27::init$() {
}

void Exceptions4String$27::run() {
	$init($Exceptions4String);
	$new($String, $Exceptions4String::b);
}

Exceptions4String$27::Exceptions4String$27() {
}

$Class* Exceptions4String$27::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$27, name, initialize, &_Exceptions4String$27_ClassInfo_, allocate$Exceptions4String$27);
	return class$;
}

$Class* Exceptions4String$27::class$ = nullptr;