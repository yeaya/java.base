#include <Exceptions4StringBuffer$2.h>

#include <Exceptions4StringBuffer.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $Exceptions4StringBuffer = ::Exceptions4StringBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _Exceptions4StringBuffer$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4StringBuffer$2::*)()>(&Exceptions4StringBuffer$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4StringBuffer$2_EnclosingMethodInfo_ = {
	"Exceptions4StringBuffer",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Exceptions4StringBuffer$2_InnerClassesInfo_[] = {
	{"Exceptions4StringBuffer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4StringBuffer$2_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4StringBuffer$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4StringBuffer$2_MethodInfo_,
	nullptr,
	&_Exceptions4StringBuffer$2_EnclosingMethodInfo_,
	_Exceptions4StringBuffer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4StringBuffer"
};

$Object* allocate$Exceptions4StringBuffer$2($Class* clazz) {
	return $of($alloc(Exceptions4StringBuffer$2));
}

void Exceptions4StringBuffer$2::init$() {
}

void Exceptions4StringBuffer$2::run() {
	$new($StringBuffer, 1);
}

Exceptions4StringBuffer$2::Exceptions4StringBuffer$2() {
}

$Class* Exceptions4StringBuffer$2::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuffer$2, name, initialize, &_Exceptions4StringBuffer$2_ClassInfo_, allocate$Exceptions4StringBuffer$2);
	return class$;
}

$Class* Exceptions4StringBuffer$2::class$ = nullptr;