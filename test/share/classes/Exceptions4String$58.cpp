#include <Exceptions4String$58.h>

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

$MethodInfo _Exceptions4String$58_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$58::*)()>(&Exceptions4String$58::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$58_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"valueOf",
	"()V"
};

$InnerClassInfo _Exceptions4String$58_InnerClassesInfo_[] = {
	{"Exceptions4String$58", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$58_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$58",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$58_MethodInfo_,
	nullptr,
	&_Exceptions4String$58_EnclosingMethodInfo_,
	_Exceptions4String$58_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$58($Class* clazz) {
	return $of($alloc(Exceptions4String$58));
}

void Exceptions4String$58::init$() {
}

void Exceptions4String$58::run() {
	$String::valueOf(($chars*)nullptr);
}

Exceptions4String$58::Exceptions4String$58() {
}

$Class* Exceptions4String$58::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$58, name, initialize, &_Exceptions4String$58_ClassInfo_, allocate$Exceptions4String$58);
	return class$;
}

$Class* Exceptions4String$58::class$ = nullptr;