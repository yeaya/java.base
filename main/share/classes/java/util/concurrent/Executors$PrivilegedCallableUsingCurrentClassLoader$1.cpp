#include <java/util/concurrent/Executors$PrivilegedCallableUsingCurrentClassLoader$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Executors$PrivilegedCallableUsingCurrentClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Callable = ::java::util::concurrent::Callable;
using $Executors$PrivilegedCallableUsingCurrentClassLoader = ::java::util::concurrent::Executors$PrivilegedCallableUsingCurrentClassLoader;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Executors$PrivilegedCallableUsingCurrentClassLoader$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/Executors$PrivilegedCallableUsingCurrentClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$PrivilegedCallableUsingCurrentClassLoader$1, this$0)},
	{}
};

$MethodInfo _Executors$PrivilegedCallableUsingCurrentClassLoader$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executors$PrivilegedCallableUsingCurrentClassLoader;)V", nullptr, 0, $method(static_cast<void(Executors$PrivilegedCallableUsingCurrentClassLoader$1::*)($Executors$PrivilegedCallableUsingCurrentClassLoader*)>(&Executors$PrivilegedCallableUsingCurrentClassLoader$1::init$))},
	{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Executors$PrivilegedCallableUsingCurrentClassLoader$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader",
	"call",
	"()Ljava/lang/Object;"
};

$InnerClassInfo _Executors$PrivilegedCallableUsingCurrentClassLoader$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader", "java.util.concurrent.Executors", "PrivilegedCallableUsingCurrentClassLoader", $PRIVATE | $STATIC | $FINAL},
	{"java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Executors$PrivilegedCallableUsingCurrentClassLoader$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_Executors$PrivilegedCallableUsingCurrentClassLoader$1_FieldInfo_,
	_Executors$PrivilegedCallableUsingCurrentClassLoader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<TT;>;",
	&_Executors$PrivilegedCallableUsingCurrentClassLoader$1_EnclosingMethodInfo_,
	_Executors$PrivilegedCallableUsingCurrentClassLoader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$PrivilegedCallableUsingCurrentClassLoader$1($Class* clazz) {
	return $of($alloc(Executors$PrivilegedCallableUsingCurrentClassLoader$1));
}

void Executors$PrivilegedCallableUsingCurrentClassLoader$1::init$($Executors$PrivilegedCallableUsingCurrentClassLoader* this$0) {
	$set(this, this$0, this$0);
}

$Object* Executors$PrivilegedCallableUsingCurrentClassLoader$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Thread, t, $Thread::currentThread());
	$var($ClassLoader, cl, t->getContextClassLoader());
	if (this->this$0->ccl == cl) {
		return $of($nc(this->this$0->task)->call());
	} else {
		t->setContextClassLoader(this->this$0->ccl);
		{
			$var($Throwable, var$0, nullptr);
			$var($Object, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(this->this$0->task)->call());
				return$1 = true;
				goto $finally;
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				t->setContextClassLoader(cl);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

Executors$PrivilegedCallableUsingCurrentClassLoader$1::Executors$PrivilegedCallableUsingCurrentClassLoader$1() {
}

$Class* Executors$PrivilegedCallableUsingCurrentClassLoader$1::load$($String* name, bool initialize) {
	$loadClass(Executors$PrivilegedCallableUsingCurrentClassLoader$1, name, initialize, &_Executors$PrivilegedCallableUsingCurrentClassLoader$1_ClassInfo_, allocate$Executors$PrivilegedCallableUsingCurrentClassLoader$1);
	return class$;
}

$Class* Executors$PrivilegedCallableUsingCurrentClassLoader$1::class$ = nullptr;

		} // concurrent
	} // util
} // java