#include <java/util/concurrent/Executors$PrivilegedCallable.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Executors$PrivilegedCallable$1.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $Callable = ::java::util::concurrent::Callable;
using $Executors$PrivilegedCallable$1 = ::java::util::concurrent::Executors$PrivilegedCallable$1;

namespace java {
	namespace util {
		namespace concurrent {

void Executors$PrivilegedCallable::init$($Callable* task) {
	$set(this, task, task);
	$set(this, acc, $AccessController::getContext());
}

$Object* Executors$PrivilegedCallable::call() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		return $AccessController::doPrivileged($$new($Executors$PrivilegedCallable$1, this), this->acc);
	} catch ($PrivilegedActionException& e) {
		$throw($(e->getException()));
	}
	$shouldNotReachHere();
}

$String* Executors$PrivilegedCallable::toString() {
	return $str({$($Callable::toString()), "[Wrapped task = "_s, this->task, "]"_s});
}

Executors$PrivilegedCallable::Executors$PrivilegedCallable() {
}

$Class* Executors$PrivilegedCallable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"task", "Ljava/util/concurrent/Callable;", "Ljava/util/concurrent/Callable<TT;>;", $FINAL, $field(Executors$PrivilegedCallable, task)},
		{"acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL, $field(Executors$PrivilegedCallable, acc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Callable;)V", "(Ljava/util/concurrent/Callable<TT;>;)V", 0, $method(Executors$PrivilegedCallable, init$, void, $Callable*)},
		{"call", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(Executors$PrivilegedCallable, call, $Object*), "java.lang.Exception"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Executors$PrivilegedCallable, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Executors$PrivilegedCallable", "java.util.concurrent.Executors", "PrivilegedCallable", $PRIVATE | $STATIC | $FINAL},
		{"java.util.concurrent.Executors$PrivilegedCallable$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.Executors$PrivilegedCallable",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/Callable<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.Executors"
	};
	$loadClass(Executors$PrivilegedCallable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Executors$PrivilegedCallable);
	});
	return class$;
}

$Class* Executors$PrivilegedCallable::class$ = nullptr;

		} // concurrent
	} // util
} // java