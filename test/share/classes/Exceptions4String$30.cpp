#include <Exceptions4String$30.h>

#include <Exceptions4String.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _Exceptions4String$30_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$30::*)()>(&Exceptions4String$30::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$30_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"stringBuffer",
	"()V"
};

$InnerClassInfo _Exceptions4String$30_InnerClassesInfo_[] = {
	{"Exceptions4String$30", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$30_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$30",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$30_MethodInfo_,
	nullptr,
	&_Exceptions4String$30_EnclosingMethodInfo_,
	_Exceptions4String$30_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$30($Class* clazz) {
	return $of($alloc(Exceptions4String$30));
}

void Exceptions4String$30::init$() {
}

void Exceptions4String$30::run() {
	$new($String, ($StringBuffer*)nullptr);
}

Exceptions4String$30::Exceptions4String$30() {
}

$Class* Exceptions4String$30::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$30, name, initialize, &_Exceptions4String$30_ClassInfo_, allocate$Exceptions4String$30);
	return class$;
}

$Class* Exceptions4String$30::class$ = nullptr;