#include <java/util/concurrent/Executors$PrivilegedCallableUsingCurrentClassLoader$1.h>
#include <java/lang/ClassLoader.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Executors$PrivilegedCallableUsingCurrentClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Executors$PrivilegedCallableUsingCurrentClassLoader = ::java::util::concurrent::Executors$PrivilegedCallableUsingCurrentClassLoader;

namespace java {
	namespace util {
		namespace concurrent {

void Executors$PrivilegedCallableUsingCurrentClassLoader$1::init$($Executors$PrivilegedCallableUsingCurrentClassLoader* this$0) {
	$set(this, this$0, this$0);
}

$Object* Executors$PrivilegedCallableUsingCurrentClassLoader$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Thread, t, $Thread::currentThread());
	$var($ClassLoader, cl, t->getContextClassLoader());
	if (this->this$0->ccl == cl) {
		return $nc(this->this$0->task)->call();
	} else {
		t->setContextClassLoader(this->this$0->ccl);
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->this$0->task)->call());
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
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
	$shouldNotReachHere();
}

Executors$PrivilegedCallableUsingCurrentClassLoader$1::Executors$PrivilegedCallableUsingCurrentClassLoader$1() {
}

$Class* Executors$PrivilegedCallableUsingCurrentClassLoader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/Executors$PrivilegedCallableUsingCurrentClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$PrivilegedCallableUsingCurrentClassLoader$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Executors$PrivilegedCallableUsingCurrentClassLoader;)V", nullptr, 0, $method(Executors$PrivilegedCallableUsingCurrentClassLoader$1, init$, void, $Executors$PrivilegedCallableUsingCurrentClassLoader*)},
		{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(Executors$PrivilegedCallableUsingCurrentClassLoader$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader",
		"call",
		"()Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader", "java.util.concurrent.Executors", "PrivilegedCallableUsingCurrentClassLoader", $PRIVATE | $STATIC | $FINAL},
		{"java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<TT;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.Executors"
	};
	$loadClass(Executors$PrivilegedCallableUsingCurrentClassLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Executors$PrivilegedCallableUsingCurrentClassLoader$1);
	});
	return class$;
}

$Class* Executors$PrivilegedCallableUsingCurrentClassLoader$1::class$ = nullptr;

		} // concurrent
	} // util
} // java