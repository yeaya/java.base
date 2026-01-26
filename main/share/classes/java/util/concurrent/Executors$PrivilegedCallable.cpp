#include <java/util/concurrent/Executors$PrivilegedCallable.h>

#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
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
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Callable = ::java::util::concurrent::Callable;
using $Executors$PrivilegedCallable$1 = ::java::util::concurrent::Executors$PrivilegedCallable$1;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Executors$PrivilegedCallable_FieldInfo_[] = {
	{"task", "Ljava/util/concurrent/Callable;", "Ljava/util/concurrent/Callable<TT;>;", $FINAL, $field(Executors$PrivilegedCallable, task)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL, $field(Executors$PrivilegedCallable, acc)},
	{}
};

$MethodInfo _Executors$PrivilegedCallable_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Callable;)V", "(Ljava/util/concurrent/Callable<TT;>;)V", 0, $method(Executors$PrivilegedCallable, init$, void, $Callable*)},
	{"call", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(Executors$PrivilegedCallable, call, $Object*), "java.lang.Exception"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Executors$PrivilegedCallable, toString, $String*)},
	{}
};

$InnerClassInfo _Executors$PrivilegedCallable_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$PrivilegedCallable", "java.util.concurrent.Executors", "PrivilegedCallable", $PRIVATE | $STATIC | $FINAL},
	{"java.util.concurrent.Executors$PrivilegedCallable$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Executors$PrivilegedCallable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.Executors$PrivilegedCallable",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Executors$PrivilegedCallable_FieldInfo_,
	_Executors$PrivilegedCallable_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/Callable<TT;>;",
	nullptr,
	_Executors$PrivilegedCallable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$PrivilegedCallable($Class* clazz) {
	return $of($alloc(Executors$PrivilegedCallable));
}

void Executors$PrivilegedCallable::init$($Callable* task) {
	$set(this, task, task);
	$set(this, acc, $AccessController::getContext());
}

$Object* Executors$PrivilegedCallable::call() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $of($AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($Executors$PrivilegedCallable$1, this)), this->acc));
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
	$loadClass(Executors$PrivilegedCallable, name, initialize, &_Executors$PrivilegedCallable_ClassInfo_, allocate$Executors$PrivilegedCallable);
	return class$;
}

$Class* Executors$PrivilegedCallable::class$ = nullptr;

		} // concurrent
	} // util
} // java