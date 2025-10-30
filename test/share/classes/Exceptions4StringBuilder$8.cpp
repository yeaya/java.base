#include <Exceptions4StringBuilder$8.h>

#include <Exceptions4StringBuilder.h>
#include <jcpp.h>

using $Exceptions4StringBuilder = ::Exceptions4StringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4StringBuilder$8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4StringBuilder$8::*)()>(&Exceptions4StringBuilder$8::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4StringBuilder$8_EnclosingMethodInfo_ = {
	"Exceptions4StringBuilder",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Exceptions4StringBuilder$8_InnerClassesInfo_[] = {
	{"Exceptions4StringBuilder$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4StringBuilder$8_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4StringBuilder$8",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4StringBuilder$8_MethodInfo_,
	nullptr,
	&_Exceptions4StringBuilder$8_EnclosingMethodInfo_,
	_Exceptions4StringBuilder$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4StringBuilder"
};

$Object* allocate$Exceptions4StringBuilder$8($Class* clazz) {
	return $of($alloc(Exceptions4StringBuilder$8));
}

void Exceptions4StringBuilder$8::init$() {
}

void Exceptions4StringBuilder$8::run() {
	$var($StringBuilder, sb, $new($StringBuilder, "riemann"_s));
	sb->replace(2, 1, " "_s);
}

Exceptions4StringBuilder$8::Exceptions4StringBuilder$8() {
}

$Class* Exceptions4StringBuilder$8::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuilder$8, name, initialize, &_Exceptions4StringBuilder$8_ClassInfo_, allocate$Exceptions4StringBuilder$8);
	return class$;
}

$Class* Exceptions4StringBuilder$8::class$ = nullptr;