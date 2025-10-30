#include <Exceptions4StringBuilder$1.h>

#include <Exceptions4StringBuilder.h>
#include <jcpp.h>

using $Exceptions4StringBuilder = ::Exceptions4StringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4StringBuilder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4StringBuilder$1::*)()>(&Exceptions4StringBuilder$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4StringBuilder$1_EnclosingMethodInfo_ = {
	"Exceptions4StringBuilder",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Exceptions4StringBuilder$1_InnerClassesInfo_[] = {
	{"Exceptions4StringBuilder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4StringBuilder$1_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4StringBuilder$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4StringBuilder$1_MethodInfo_,
	nullptr,
	&_Exceptions4StringBuilder$1_EnclosingMethodInfo_,
	_Exceptions4StringBuilder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4StringBuilder"
};

$Object* allocate$Exceptions4StringBuilder$1($Class* clazz) {
	return $of($alloc(Exceptions4StringBuilder$1));
}

void Exceptions4StringBuilder$1::init$() {
}

void Exceptions4StringBuilder$1::run() {
	$new($StringBuilder);
}

Exceptions4StringBuilder$1::Exceptions4StringBuilder$1() {
}

$Class* Exceptions4StringBuilder$1::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuilder$1, name, initialize, &_Exceptions4StringBuilder$1_ClassInfo_, allocate$Exceptions4StringBuilder$1);
	return class$;
}

$Class* Exceptions4StringBuilder$1::class$ = nullptr;