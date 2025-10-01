#include <Exceptions4StringBuilder$2.h>

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

$MethodInfo _Exceptions4StringBuilder$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4StringBuilder$2::*)()>(&Exceptions4StringBuilder$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4StringBuilder$2_EnclosingMethodInfo_ = {
	"Exceptions4StringBuilder",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Exceptions4StringBuilder$2_InnerClassesInfo_[] = {
	{"Exceptions4StringBuilder$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4StringBuilder$2_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4StringBuilder$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4StringBuilder$2_MethodInfo_,
	nullptr,
	&_Exceptions4StringBuilder$2_EnclosingMethodInfo_,
	_Exceptions4StringBuilder$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4StringBuilder"
};

$Object* allocate$Exceptions4StringBuilder$2($Class* clazz) {
	return $of($alloc(Exceptions4StringBuilder$2));
}

void Exceptions4StringBuilder$2::init$() {
}

void Exceptions4StringBuilder$2::run() {
	$new($StringBuilder, 1);
}

Exceptions4StringBuilder$2::Exceptions4StringBuilder$2() {
}

$Class* Exceptions4StringBuilder$2::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuilder$2, name, initialize, &_Exceptions4StringBuilder$2_ClassInfo_, allocate$Exceptions4StringBuilder$2);
	return class$;
}

$Class* Exceptions4StringBuilder$2::class$ = nullptr;