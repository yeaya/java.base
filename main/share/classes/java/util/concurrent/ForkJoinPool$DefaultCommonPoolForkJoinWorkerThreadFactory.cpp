#include <java/util/concurrent/ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
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
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1 = ::java::util::concurrent::ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1;
using $ForkJoinPool$ForkJoinWorkerThreadFactory = ::java::util::concurrent::ForkJoinPool$ForkJoinWorkerThreadFactory;
using $ForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory_FieldInfo_[] = {
	{"ACC", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory, ACC)},
	{}
};

$MethodInfo _ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::*)()>(&ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::init$))},
	{"newThread", "(Ljava/util/concurrent/ForkJoinPool;)Ljava/util/concurrent/ForkJoinWorkerThread;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory", "java.util.concurrent.ForkJoinPool", "DefaultCommonPoolForkJoinWorkerThreadFactory", $STATIC | $FINAL},
	{"java.util.concurrent.ForkJoinPool$ForkJoinWorkerThreadFactory", "java.util.concurrent.ForkJoinPool", "ForkJoinWorkerThreadFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory",
	"java.lang.Object",
	"java.util.concurrent.ForkJoinPool$ForkJoinWorkerThreadFactory",
	_ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory_FieldInfo_,
	_ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory_MethodInfo_,
	nullptr,
	nullptr,
	_ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinPool"
};

$Object* allocate$ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory($Class* clazz) {
	return $of($alloc(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory));
}

$AccessControlContext* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::ACC = nullptr;

void ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::init$() {
}

$ForkJoinWorkerThread* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::newThread($ForkJoinPool* pool) {
	$beforeCallerSensitive();
	return $cast($ForkJoinWorkerThread, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1, this, pool)), ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::ACC));
}

void clinit$ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory($Class* class$) {
	$useLocalCurrentObjectStackCache();
		$init($ForkJoinPool);
	$assignStatic(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::ACC, $ForkJoinPool::contextWithPermissions($$new($PermissionArray, {
		static_cast<$Permission*>($ForkJoinPool::modifyThreadPermission),
		static_cast<$Permission*>($$new($RuntimePermission, "enableContextClassLoaderOverride"_s)),
		static_cast<$Permission*>($$new($RuntimePermission, "modifyThreadGroup"_s)),
		static_cast<$Permission*>($$new($RuntimePermission, "getClassLoader"_s)),
		static_cast<$Permission*>($$new($RuntimePermission, "setContextClassLoader"_s))
	})));
}

ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory() {
}

$Class* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::load$($String* name, bool initialize) {
	$loadClass(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory, name, initialize, &_ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory_ClassInfo_, clinit$ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory, allocate$ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory);
	return class$;
}

$Class* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory::class$ = nullptr;

		} // concurrent
	} // util
} // java