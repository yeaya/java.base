#include <Exceptions4String$61.h>

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

$MethodInfo _Exceptions4String$61_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$61::*)()>(&Exceptions4String$61::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$61_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"copyValueOf",
	"()V"
};

$InnerClassInfo _Exceptions4String$61_InnerClassesInfo_[] = {
	{"Exceptions4String$61", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$61_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$61",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$61_MethodInfo_,
	nullptr,
	&_Exceptions4String$61_EnclosingMethodInfo_,
	_Exceptions4String$61_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$61($Class* clazz) {
	return $of($alloc(Exceptions4String$61));
}

void Exceptions4String$61::init$() {
}

void Exceptions4String$61::run() {
	$String::copyValueOf(($chars*)nullptr);
}

Exceptions4String$61::Exceptions4String$61() {
}

$Class* Exceptions4String$61::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$61, name, initialize, &_Exceptions4String$61_ClassInfo_, allocate$Exceptions4String$61);
	return class$;
}

$Class* Exceptions4String$61::class$ = nullptr;