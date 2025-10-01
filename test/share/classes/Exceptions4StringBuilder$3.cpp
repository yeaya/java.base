#include <Exceptions4StringBuilder$3.h>

#include <Exceptions4StringBuilder.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Exceptions4StringBuilder = ::Exceptions4StringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4StringBuilder$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4StringBuilder$3::*)()>(&Exceptions4StringBuilder$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4StringBuilder$3_EnclosingMethodInfo_ = {
	"Exceptions4StringBuilder",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Exceptions4StringBuilder$3_InnerClassesInfo_[] = {
	{"Exceptions4StringBuilder$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4StringBuilder$3_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4StringBuilder$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4StringBuilder$3_MethodInfo_,
	nullptr,
	&_Exceptions4StringBuilder$3_EnclosingMethodInfo_,
	_Exceptions4StringBuilder$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4StringBuilder"
};

$Object* allocate$Exceptions4StringBuilder$3($Class* clazz) {
	return $of($alloc(Exceptions4StringBuilder$3));
}

void Exceptions4StringBuilder$3::init$() {
}

void Exceptions4StringBuilder$3::run() {
	$new($StringBuilder, -1);
}

Exceptions4StringBuilder$3::Exceptions4StringBuilder$3() {
}

$Class* Exceptions4StringBuilder$3::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuilder$3, name, initialize, &_Exceptions4StringBuilder$3_ClassInfo_, allocate$Exceptions4StringBuilder$3);
	return class$;
}

$Class* Exceptions4StringBuilder$3::class$ = nullptr;