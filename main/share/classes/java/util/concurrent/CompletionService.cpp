#include <java/util/concurrent/CompletionService.h>

#include <java/lang/Runnable.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Callable = ::java::util::concurrent::Callable;
using $Future = ::java::util::concurrent::Future;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _CompletionService_MethodInfo_[] = {
	{"poll", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<TV;>;", $PUBLIC | $ABSTRACT},
	{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future<TV;>;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", "(Ljava/util/concurrent/Callable<TV;>;)Ljava/util/concurrent/Future<TV;>;", $PUBLIC | $ABSTRACT},
	{"submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", "(Ljava/lang/Runnable;TV;)Ljava/util/concurrent/Future<TV;>;", $PUBLIC | $ABSTRACT},
	{"take", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<TV;>;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{}
};

$ClassInfo _CompletionService_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.CompletionService",
	nullptr,
	nullptr,
	nullptr,
	_CompletionService_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$CompletionService($Class* clazz) {
	return $of($alloc(CompletionService));
}

$Class* CompletionService::load$($String* name, bool initialize) {
	$loadClass(CompletionService, name, initialize, &_CompletionService_ClassInfo_, allocate$CompletionService);
	return class$;
}

$Class* CompletionService::class$ = nullptr;

		} // concurrent
	} // util
} // java