#include <Exceptions4StringBuffer$4.h>

#include <Exceptions4StringBuffer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Exceptions4StringBuffer = ::Exceptions4StringBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _Exceptions4StringBuffer$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4StringBuffer$4::*)()>(&Exceptions4StringBuffer$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4StringBuffer$4_EnclosingMethodInfo_ = {
	"Exceptions4StringBuffer",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Exceptions4StringBuffer$4_InnerClassesInfo_[] = {
	{"Exceptions4StringBuffer$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4StringBuffer$4_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4StringBuffer$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4StringBuffer$4_MethodInfo_,
	nullptr,
	&_Exceptions4StringBuffer$4_EnclosingMethodInfo_,
	_Exceptions4StringBuffer$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4StringBuffer"
};

$Object* allocate$Exceptions4StringBuffer$4($Class* clazz) {
	return $of($alloc(Exceptions4StringBuffer$4));
}

void Exceptions4StringBuffer$4::init$() {
}

void Exceptions4StringBuffer$4::run() {
	$new($StringBuffer, ($String*)nullptr);
}

Exceptions4StringBuffer$4::Exceptions4StringBuffer$4() {
}

$Class* Exceptions4StringBuffer$4::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuffer$4, name, initialize, &_Exceptions4StringBuffer$4_ClassInfo_, allocate$Exceptions4StringBuffer$4);
	return class$;
}

$Class* Exceptions4StringBuffer$4::class$ = nullptr;