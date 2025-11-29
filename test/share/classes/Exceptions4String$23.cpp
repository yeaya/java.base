#include <Exceptions4String$23.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$23_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$23::*)()>(&Exceptions4String$23::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$23_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArrayOffLength",
	"()V"
};

$InnerClassInfo _Exceptions4String$23_InnerClassesInfo_[] = {
	{"Exceptions4String$23", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$23_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$23",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$23_MethodInfo_,
	nullptr,
	&_Exceptions4String$23_EnclosingMethodInfo_,
	_Exceptions4String$23_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$23($Class* clazz) {
	return $of($alloc(Exceptions4String$23));
}

void Exceptions4String$23::init$() {
}

void Exceptions4String$23::run() {
	$init($Exceptions4String);
	$new($String, $Exceptions4String::b, -1, $nc($Exceptions4String::b)->length);
}

Exceptions4String$23::Exceptions4String$23() {
}

$Class* Exceptions4String$23::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$23, name, initialize, &_Exceptions4String$23_ClassInfo_, allocate$Exceptions4String$23);
	return class$;
}

$Class* Exceptions4String$23::class$ = nullptr;