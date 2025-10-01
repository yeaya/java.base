#include <Exceptions4String$51.h>

#include <Exceptions4String.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$51_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$51::*)()>(&Exceptions4String$51::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$51_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"replaceAll",
	"()V"
};

$InnerClassInfo _Exceptions4String$51_InnerClassesInfo_[] = {
	{"Exceptions4String$51", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$51_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$51",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$51_MethodInfo_,
	nullptr,
	&_Exceptions4String$51_EnclosingMethodInfo_,
	_Exceptions4String$51_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$51($Class* clazz) {
	return $of($alloc(Exceptions4String$51));
}

void Exceptions4String$51::init$() {
}

void Exceptions4String$51::run() {
	"foo"_s->replaceAll("."_s, nullptr);
}

Exceptions4String$51::Exceptions4String$51() {
}

$Class* Exceptions4String$51::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$51, name, initialize, &_Exceptions4String$51_ClassInfo_, allocate$Exceptions4String$51);
	return class$;
}

$Class* Exceptions4String$51::class$ = nullptr;