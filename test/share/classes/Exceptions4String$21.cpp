#include <Exceptions4String$21.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$21_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$21, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$21, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$21_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArrayOffLength",
	"()V"
};

$InnerClassInfo _Exceptions4String$21_InnerClassesInfo_[] = {
	{"Exceptions4String$21", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$21_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$21",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$21_MethodInfo_,
	nullptr,
	&_Exceptions4String$21_EnclosingMethodInfo_,
	_Exceptions4String$21_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$21($Class* clazz) {
	return $of($alloc(Exceptions4String$21));
}

void Exceptions4String$21::init$() {
}

void Exceptions4String$21::run() {
	$init($Exceptions4String);
	$new($String, $Exceptions4String::b, 0, $nc($Exceptions4String::b)->length);
}

Exceptions4String$21::Exceptions4String$21() {
}

$Class* Exceptions4String$21::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$21, name, initialize, &_Exceptions4String$21_ClassInfo_, allocate$Exceptions4String$21);
	return class$;
}

$Class* Exceptions4String$21::class$ = nullptr;