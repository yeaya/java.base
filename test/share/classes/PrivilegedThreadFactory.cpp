#include <PrivilegedThreadFactory.h>
#include <PrivilegedThreadFactory$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <jcpp.h>

using $PrivilegedThreadFactory$1 = ::PrivilegedThreadFactory$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessController = ::java::security::AccessController;

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
	return $cast($Thread, $AccessController::doPrivileged($$new($PrivilegedThreadFactory$1, this, r)));
}

PrivilegedThreadFactory::PrivilegedThreadFactory() {
}

$Class* PrivilegedThreadFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivilegedThreadFactory, init$, void)},
		{"PrivilegedThreadPoolFactory", "()V", nullptr, $PUBLIC, $virtualMethod(PrivilegedThreadFactory, PrivilegedThreadPoolFactory, void)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(PrivilegedThreadFactory, newThread, $Thread*, $Runnable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrivilegedThreadFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"PrivilegedThreadFactory",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"PrivilegedThreadFactory$1"
	};
	$loadClass(PrivilegedThreadFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivilegedThreadFactory);
	});
	return class$;
}

$Class* PrivilegedThreadFactory::class$ = nullptr;