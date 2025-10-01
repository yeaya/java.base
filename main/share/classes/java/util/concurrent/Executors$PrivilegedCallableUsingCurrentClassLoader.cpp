#include <java/util/concurrent/Executors$PrivilegedCallableUsingCurrentClassLoader.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Executors$PrivilegedCallableUsingCurrentClassLoader$1.h>
#include <java/util/concurrent/Executors.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef GET_CLASSLOADER_PERMISSION

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Callable = ::java::util::concurrent::Callable;
using $Executors = ::java::util::concurrent::Executors;
using $Executors$PrivilegedCallableUsingCurrentClassLoader$1 = ::java::util::concurrent::Executors$PrivilegedCallableUsingCurrentClassLoader$1;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Executors$PrivilegedCallableUsingCurrentClassLoader_FieldInfo_[] = {
	{"task", "Ljava/util/concurrent/Callable;", "Ljava/util/concurrent/Callable<TT;>;", $FINAL, $field(Executors$PrivilegedCallableUsingCurrentClassLoader, task)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL, $field(Executors$PrivilegedCallableUsingCurrentClassLoader, acc)},
	{"ccl", "Ljava/lang/ClassLoader;", nullptr, $FINAL, $field(Executors$PrivilegedCallableUsingCurrentClassLoader, ccl)},
	{}
};

$MethodInfo _Executors$PrivilegedCallableUsingCurrentClassLoader_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Callable;)V", "(Ljava/util/concurrent/Callable<TT;>;)V", 0, $method(static_cast<void(Executors$PrivilegedCallableUsingCurrentClassLoader::*)($Callable*)>(&Executors$PrivilegedCallableUsingCurrentClassLoader::init$))},
	{"call", "()Ljava/lang/Object;", "()TT;", $PUBLIC, nullptr, "java.lang.Exception"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Executors$PrivilegedCallableUsingCurrentClassLoader_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader", "java.util.concurrent.Executors", "PrivilegedCallableUsingCurrentClassLoader", $PRIVATE | $STATIC | $FINAL},
	{"java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Executors$PrivilegedCallableUsingCurrentClassLoader_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Executors$PrivilegedCallableUsingCurrentClassLoader_FieldInfo_,
	_Executors$PrivilegedCallableUsingCurrentClassLoader_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/Callable<TT;>;",
	nullptr,
	_Executors$PrivilegedCallableUsingCurrentClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$PrivilegedCallableUsingCurrentClassLoader($Class* clazz) {
	return $of($alloc(Executors$PrivilegedCallableUsingCurrentClassLoader));
}

void Executors$PrivilegedCallableUsingCurrentClassLoader::init$($Callable* task) {
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$init($SecurityConstants);
		sm->checkPermission($SecurityConstants::GET_CLASSLOADER_PERMISSION);
		sm->checkPermission($$new($RuntimePermission, "setContextClassLoader"_s));
	}
	$set(this, task, task);
	$set(this, acc, $AccessController::getContext());
	$set(this, ccl, $($Thread::currentThread())->getContextClassLoader());
}

$Object* Executors$PrivilegedCallableUsingCurrentClassLoader::call() {
	$beforeCallerSensitive();
	try {
		return $of($AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($Executors$PrivilegedCallableUsingCurrentClassLoader$1, this)), this->acc));
	} catch ($PrivilegedActionException&) {
		$var($PrivilegedActionException, e, $catch());
		$throw($(e->getException()));
	}
	$shouldNotReachHere();
}

$String* Executors$PrivilegedCallableUsingCurrentClassLoader::toString() {
	return $str({$($Callable::toString()), "[Wrapped task = "_s, this->task, "]"_s});
}

Executors$PrivilegedCallableUsingCurrentClassLoader::Executors$PrivilegedCallableUsingCurrentClassLoader() {
}

$Class* Executors$PrivilegedCallableUsingCurrentClassLoader::load$($String* name, bool initialize) {
	$loadClass(Executors$PrivilegedCallableUsingCurrentClassLoader, name, initialize, &_Executors$PrivilegedCallableUsingCurrentClassLoader_ClassInfo_, allocate$Executors$PrivilegedCallableUsingCurrentClassLoader);
	return class$;
}

$Class* Executors$PrivilegedCallableUsingCurrentClassLoader::class$ = nullptr;

		} // concurrent
	} // util
} // java