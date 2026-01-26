#include <Exceptions4String$25.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$25_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$25, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$25, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$25_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArrayOffLength",
	"()V"
};

$InnerClassInfo _Exceptions4String$25_InnerClassesInfo_[] = {
	{"Exceptions4String$25", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$25_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$25",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$25_MethodInfo_,
	nullptr,
	&_Exceptions4String$25_EnclosingMethodInfo_,
	_Exceptions4String$25_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$25($Class* clazz) {
	return $of($alloc(Exceptions4String$25));
}

void Exceptions4String$25::init$() {
}

void Exceptions4String$25::run() {
	$init($Exceptions4String);
	$new($String, $Exceptions4String::b, $nc($Exceptions4String::b)->length + 1, 1);
}

Exceptions4String$25::Exceptions4String$25() {
}

$Class* Exceptions4String$25::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$25, name, initialize, &_Exceptions4String$25_ClassInfo_, allocate$Exceptions4String$25);
	return class$;
}

$Class* Exceptions4String$25::class$ = nullptr;