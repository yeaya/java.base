#include <PrivilegedThreadFactory.h>

#include <PrivilegedThreadFactory$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $PrivilegedThreadFactory$1 = ::PrivilegedThreadFactory$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

$MethodInfo _PrivilegedThreadFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PrivilegedThreadFactory, init$, void)},
	{"PrivilegedThreadPoolFactory", "()V", nullptr, $PUBLIC, $virtualMethod(PrivilegedThreadFactory, PrivilegedThreadPoolFactory, void)},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(PrivilegedThreadFactory, newThread, $Thread*, $Runnable*)},
	{}
};

$InnerClassInfo _PrivilegedThreadFactory_InnerClassesInfo_[] = {
	{"PrivilegedThreadFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrivilegedThreadFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PrivilegedThreadFactory",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	nullptr,
	_PrivilegedThreadFactory_MethodInfo_,
	nullptr,
	nullptr,
	_PrivilegedThreadFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"PrivilegedThreadFactory$1"
};

$Object* allocate$PrivilegedThreadFactory($Class* clazz) {
	return $of($alloc(PrivilegedThreadFactory));
}

void PrivilegedThreadFactory::init$() {
}

void PrivilegedThreadFactory::PrivilegedThreadPoolFactory() {
	$beforeCallerSensitive();
	if (PrivilegedThreadFactory::class$->getClassLoader() != nullptr) {
		$throwNew($RuntimeException, "PrivilegedThreadFactory class not on boot class path"_s);
	}
}

$Thread* PrivilegedThreadFactory::newThread($Runnable* r) {
	$beforeCallerSensitive();
	return $cast($Thread, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($PrivilegedThreadFactory$1, this, r))));
}

PrivilegedThreadFactory::PrivilegedThreadFactory() {
}

$Class* PrivilegedThreadFactory::load$($String* name, bool initialize) {
	$loadClass(PrivilegedThreadFactory, name, initialize, &_PrivilegedThreadFactory_ClassInfo_, allocate$PrivilegedThreadFactory);
	return class$;
}

$Class* PrivilegedThreadFactory::class$ = nullptr;