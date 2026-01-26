#include <Exceptions4StringBuilder$6.h>

#include <Exceptions4StringBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4StringBuilder$6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4StringBuilder$6, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4StringBuilder$6, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4StringBuilder$6_EnclosingMethodInfo_ = {
	"Exceptions4StringBuilder",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Exceptions4StringBuilder$6_InnerClassesInfo_[] = {
	{"Exceptions4StringBuilder$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4StringBuilder$6_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4StringBuilder$6",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4StringBuilder$6_MethodInfo_,
	nullptr,
	&_Exceptions4StringBuilder$6_EnclosingMethodInfo_,
	_Exceptions4StringBuilder$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4StringBuilder"
};

$Object* allocate$Exceptions4StringBuilder$6($Class* clazz) {
	return $of($alloc(Exceptions4StringBuilder$6));
}

void Exceptions4StringBuilder$6::init$() {
}

void Exceptions4StringBuilder$6::run() {
	$var($StringBuilder, sb, $new($StringBuilder, "hilbert"_s));
	sb->replace(-1, 2, " "_s);
}

Exceptions4StringBuilder$6::Exceptions4StringBuilder$6() {
}

$Class* Exceptions4StringBuilder$6::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuilder$6, name, initialize, &_Exceptions4StringBuilder$6_ClassInfo_, allocate$Exceptions4StringBuilder$6);
	return class$;
}

$Class* Exceptions4StringBuilder$6::class$ = nullptr;