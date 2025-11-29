#include <Exceptions4StringBuilder$5.h>

#include <Exceptions4StringBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4StringBuilder$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4StringBuilder$5::*)()>(&Exceptions4StringBuilder$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4StringBuilder$5_EnclosingMethodInfo_ = {
	"Exceptions4StringBuilder",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Exceptions4StringBuilder$5_InnerClassesInfo_[] = {
	{"Exceptions4StringBuilder$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4StringBuilder$5_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4StringBuilder$5",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4StringBuilder$5_MethodInfo_,
	nullptr,
	&_Exceptions4StringBuilder$5_EnclosingMethodInfo_,
	_Exceptions4StringBuilder$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4StringBuilder"
};

$Object* allocate$Exceptions4StringBuilder$5($Class* clazz) {
	return $of($alloc(Exceptions4StringBuilder$5));
}

void Exceptions4StringBuilder$5::init$() {
}

void Exceptions4StringBuilder$5::run() {
	$new($StringBuilder, "foo"_s);
}

Exceptions4StringBuilder$5::Exceptions4StringBuilder$5() {
}

$Class* Exceptions4StringBuilder$5::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuilder$5, name, initialize, &_Exceptions4StringBuilder$5_ClassInfo_, allocate$Exceptions4StringBuilder$5);
	return class$;
}

$Class* Exceptions4StringBuilder$5::class$ = nullptr;