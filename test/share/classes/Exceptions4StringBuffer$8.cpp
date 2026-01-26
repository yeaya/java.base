#include <Exceptions4StringBuffer$8.h>

#include <Exceptions4StringBuffer.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _Exceptions4StringBuffer$8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4StringBuffer$8, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4StringBuffer$8, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4StringBuffer$8_EnclosingMethodInfo_ = {
	"Exceptions4StringBuffer",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Exceptions4StringBuffer$8_InnerClassesInfo_[] = {
	{"Exceptions4StringBuffer$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4StringBuffer$8_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4StringBuffer$8",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4StringBuffer$8_MethodInfo_,
	nullptr,
	&_Exceptions4StringBuffer$8_EnclosingMethodInfo_,
	_Exceptions4StringBuffer$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4StringBuffer"
};

$Object* allocate$Exceptions4StringBuffer$8($Class* clazz) {
	return $of($alloc(Exceptions4StringBuffer$8));
}

void Exceptions4StringBuffer$8::init$() {
}

void Exceptions4StringBuffer$8::run() {
	$var($StringBuffer, sb, $new($StringBuffer, "riemann"_s));
	sb->replace(2, 1, " "_s);
}

Exceptions4StringBuffer$8::Exceptions4StringBuffer$8() {
}

$Class* Exceptions4StringBuffer$8::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuffer$8, name, initialize, &_Exceptions4StringBuffer$8_ClassInfo_, allocate$Exceptions4StringBuffer$8);
	return class$;
}

$Class* Exceptions4StringBuffer$8::class$ = nullptr;