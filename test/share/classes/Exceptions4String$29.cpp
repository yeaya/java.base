#include <Exceptions4String$29.h>

#include <Exceptions4String.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _Exceptions4String$29_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$29::*)()>(&Exceptions4String$29::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$29_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"stringBuffer",
	"()V"
};

$InnerClassInfo _Exceptions4String$29_InnerClassesInfo_[] = {
	{"Exceptions4String$29", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$29_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$29",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$29_MethodInfo_,
	nullptr,
	&_Exceptions4String$29_EnclosingMethodInfo_,
	_Exceptions4String$29_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$29($Class* clazz) {
	return $of($alloc(Exceptions4String$29));
}

void Exceptions4String$29::init$() {
}

void Exceptions4String$29::run() {
	$new($String, $$new($StringBuffer, "bar"_s));
}

Exceptions4String$29::Exceptions4String$29() {
}

$Class* Exceptions4String$29::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$29, name, initialize, &_Exceptions4String$29_ClassInfo_, allocate$Exceptions4String$29);
	return class$;
}

$Class* Exceptions4String$29::class$ = nullptr;