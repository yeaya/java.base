#include <java/util/concurrent/ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory.h>
#include <java/lang/RuntimePermission.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/util/concurrent/ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinWorkerThread.h>
#include <jcpp.h>

#undef ACC

using $PermissionArray = $Array<::java::security::Permission>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1 = ::java::util::concurrent::ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1;
using $ForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread;

namespace java {
	namespace util {
		namespace concurrent {

$AccessControlContext* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::ACC = nullptr;

void ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::init$() {
}

$ForkJoinWorkerThread* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::newThread($ForkJoinPool* pool) {
	$beforeCallerSensitive();
	return $cast($ForkJoinWorkerThread, $AccessController::doPrivileged($$new($ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1, this, pool), ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::ACC));
}

void ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$init($ForkJoinPool);
	$assignStatic(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::ACC, $ForkJoinPool::contextWithPermissions($$new($PermissionArray, {
		$ForkJoinPool::modifyThreadPermission,
		$$new($RuntimePermission, "enableContextClassLoaderOverride"_s),
		$$new($RuntimePermission, "modifyThreadGroup"_s),
		$$new($RuntimePermission, "getClassLoader"_s),
		$$new($RuntimePermission, "setContextClassLoader"_s)
	})));
}

ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory() {
}

$Class* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ACC", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory, ACC)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory, init$, void)},
		{"newThread", "(Ljava/util/concurrent/ForkJoinPool;)Ljava/util/concurrent/ForkJoinWorkerThread;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory, newThread, $ForkJoinWorkerThread*, $ForkJoinPool*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory", "java.util.concurrent.ForkJoinPool", "DefaultCommonPoolForkJoinWorkerThreadFactory", $STATIC | $FINAL},
		{"java.util.concurrent.ForkJoinPool$ForkJoinWorkerThreadFactory", "java.util.concurrent.ForkJoinPool", "ForkJoinWorkerThreadFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory",
		"java.lang.Object",
		"java.util.concurrent.ForkJoinPool$ForkJoinWorkerThreadFactory",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ForkJoinPool"
	};
	$loadClass(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory, name, initialize, &classInfo$$, ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory);
	});
	return class$;
}

$Class* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::class$ = nullptr;

		} // concurrent
	} // util
} // java