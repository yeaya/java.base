#include <java/util/concurrent/Executors$FinalizableDelegatedExecutorService.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors$DelegatedExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Executors$DelegatedExecutorService = ::java::util::concurrent::Executors$DelegatedExecutorService;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _Executors$FinalizableDelegatedExecutorService_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ExecutorService;)V", nullptr, 0, $method(static_cast<void(Executors$FinalizableDelegatedExecutorService::*)($ExecutorService*)>(&Executors$FinalizableDelegatedExecutorService::init$))},
	{"finalize", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Executors$FinalizableDelegatedExecutorService_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$FinalizableDelegatedExecutorService", "java.util.concurrent.Executors", "FinalizableDelegatedExecutorService", $PRIVATE | $STATIC},
	{"java.util.concurrent.Executors$DelegatedExecutorService", "java.util.concurrent.Executors", "DelegatedExecutorService", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Executors$FinalizableDelegatedExecutorService_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.Executors$FinalizableDelegatedExecutorService",
	"java.util.concurrent.Executors$DelegatedExecutorService",
	nullptr,
	nullptr,
	_Executors$FinalizableDelegatedExecutorService_MethodInfo_,
	nullptr,
	nullptr,
	_Executors$FinalizableDelegatedExecutorService_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$FinalizableDelegatedExecutorService($Class* clazz) {
	return $of($alloc(Executors$FinalizableDelegatedExecutorService));
}

void Executors$FinalizableDelegatedExecutorService::init$($ExecutorService* executor) {
	$Executors$DelegatedExecutorService::init$(executor);
}

void Executors$FinalizableDelegatedExecutorService::finalize() {
	$Executors$DelegatedExecutorService::shutdown();
}

Executors$FinalizableDelegatedExecutorService::Executors$FinalizableDelegatedExecutorService() {
}

$Class* Executors$FinalizableDelegatedExecutorService::load$($String* name, bool initialize) {
	$loadClass(Executors$FinalizableDelegatedExecutorService, name, initialize, &_Executors$FinalizableDelegatedExecutorService_ClassInfo_, allocate$Executors$FinalizableDelegatedExecutorService);
	return class$;
}

$Class* Executors$FinalizableDelegatedExecutorService::class$ = nullptr;

		} // concurrent
	} // util
} // java