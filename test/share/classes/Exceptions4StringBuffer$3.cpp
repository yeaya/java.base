#include <Exceptions4StringBuffer$3.h>

#include <Exceptions4StringBuffer.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _Exceptions4StringBuffer$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4StringBuffer$3::*)()>(&Exceptions4StringBuffer$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4StringBuffer$3_EnclosingMethodInfo_ = {
	"Exceptions4StringBuffer",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Exceptions4StringBuffer$3_InnerClassesInfo_[] = {
	{"Exceptions4StringBuffer$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4StringBuffer$3_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4StringBuffer$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4StringBuffer$3_MethodInfo_,
	nullptr,
	&_Exceptions4StringBuffer$3_EnclosingMethodInfo_,
	_Exceptions4StringBuffer$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4StringBuffer"
};

$Object* allocate$Exceptions4StringBuffer$3($Class* clazz) {
	return $of($alloc(Exceptions4StringBuffer$3));
}

void Exceptions4StringBuffer$3::init$() {
}

void Exceptions4StringBuffer$3::run() {
	$new($StringBuffer, -1);
}

Exceptions4StringBuffer$3::Exceptions4StringBuffer$3() {
}

$Class* Exceptions4StringBuffer$3::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuffer$3, name, initialize, &_Exceptions4StringBuffer$3_ClassInfo_, allocate$Exceptions4StringBuffer$3);
	return class$;
}

$Class* Exceptions4StringBuffer$3::class$ = nullptr;