#include <Exceptions4StringBuffer$5.h>

#include <Exceptions4StringBuffer.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _Exceptions4StringBuffer$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4StringBuffer$5::*)()>(&Exceptions4StringBuffer$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4StringBuffer$5_EnclosingMethodInfo_ = {
	"Exceptions4StringBuffer",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Exceptions4StringBuffer$5_InnerClassesInfo_[] = {
	{"Exceptions4StringBuffer$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4StringBuffer$5_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4StringBuffer$5",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4StringBuffer$5_MethodInfo_,
	nullptr,
	&_Exceptions4StringBuffer$5_EnclosingMethodInfo_,
	_Exceptions4StringBuffer$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4StringBuffer"
};

$Object* allocate$Exceptions4StringBuffer$5($Class* clazz) {
	return $of($alloc(Exceptions4StringBuffer$5));
}

void Exceptions4StringBuffer$5::init$() {
}

void Exceptions4StringBuffer$5::run() {
	$new($StringBuffer, "foo"_s);
}

Exceptions4StringBuffer$5::Exceptions4StringBuffer$5() {
}

$Class* Exceptions4StringBuffer$5::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuffer$5, name, initialize, &_Exceptions4StringBuffer$5_ClassInfo_, allocate$Exceptions4StringBuffer$5);
	return class$;
}

$Class* Exceptions4StringBuffer$5::class$ = nullptr;