#include <java/util/concurrent/Executors$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Callable = ::java::util::concurrent::Callable;
using $Executors = ::java::util::concurrent::Executors;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Executors$2_FieldInfo_[] = {
	{"val$action", "Ljava/security/PrivilegedExceptionAction;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$2, val$action)},
	{}
};

$MethodInfo _Executors$2_MethodInfo_[] = {
	{"<init>", "(Ljava/security/PrivilegedExceptionAction;)V", "()V", 0, $method(static_cast<void(Executors$2::*)($PrivilegedExceptionAction*)>(&Executors$2::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Executors$2_EnclosingMethodInfo_ = {
	"java.util.concurrent.Executors",
	"callable",
	"(Ljava/security/PrivilegedExceptionAction;)Ljava/util/concurrent/Callable;"
};

$InnerClassInfo _Executors$2_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Executors$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.Executors$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Executors$2_FieldInfo_,
	_Executors$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Object;>;",
	&_Executors$2_EnclosingMethodInfo_,
	_Executors$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$2($Class* clazz) {
	return $of($alloc(Executors$2));
}

void Executors$2::init$($PrivilegedExceptionAction* val$action) {
	$set(this, val$action, val$action);
}

$Object* Executors$2::call() {
	return $of($nc(this->val$action)->run());
}

Executors$2::Executors$2() {
}

$Class* Executors$2::load$($String* name, bool initialize) {
	$loadClass(Executors$2, name, initialize, &_Executors$2_ClassInfo_, allocate$Executors$2);
	return class$;
}

$Class* Executors$2::class$ = nullptr;

		} // concurrent
	} // util
} // java