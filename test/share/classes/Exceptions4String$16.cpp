#include <Exceptions4String$16.h>

#include <Exceptions4String.h>
#include <java/lang/Array.h>
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

$MethodInfo _Exceptions4String$16_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$16::*)()>(&Exceptions4String$16::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$16_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArrayHiOffCount",
	"()V"
};

$InnerClassInfo _Exceptions4String$16_InnerClassesInfo_[] = {
	{"Exceptions4String$16", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$16_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$16",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$16_MethodInfo_,
	nullptr,
	&_Exceptions4String$16_EnclosingMethodInfo_,
	_Exceptions4String$16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$16($Class* clazz) {
	return $of($alloc(Exceptions4String$16));
}

void Exceptions4String$16::init$() {
}

void Exceptions4String$16::run() {
	$init($Exceptions4String);
	$new($String, $Exceptions4String::b, 0, 4, -1);
}

Exceptions4String$16::Exceptions4String$16() {
}

$Class* Exceptions4String$16::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$16, name, initialize, &_Exceptions4String$16_ClassInfo_, allocate$Exceptions4String$16);
	return class$;
}

$Class* Exceptions4String$16::class$ = nullptr;