#include <java/util/concurrent/CompletableFuture$Delayer.h>

#include <java/lang/Runnable.h>
#include <java/util/concurrent/CompletableFuture$Delayer$DaemonThreadFactory.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/ScheduledThreadPoolExecutor.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CompletableFuture$Delayer$DaemonThreadFactory = ::java::util::concurrent::CompletableFuture$Delayer$DaemonThreadFactory;
using $ScheduledFuture = ::java::util::concurrent::ScheduledFuture;
using $ScheduledThreadPoolExecutor = ::java::util::concurrent::ScheduledThreadPoolExecutor;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$Delayer_FieldInfo_[] = {
	{"delayer", "Ljava/util/concurrent/ScheduledThreadPoolExecutor;", nullptr, $STATIC | $FINAL, $staticField(CompletableFuture$Delayer, delayer)},
	{}
};

$MethodInfo _CompletableFuture$Delayer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(CompletableFuture$Delayer, init$, void)},
	{"delay", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<*>;", $STATIC, $staticMethod(CompletableFuture$Delayer, delay, $ScheduledFuture*, $Runnable*, int64_t, $TimeUnit*)},
	{}
};

$InnerClassInfo _CompletableFuture$Delayer_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$Delayer", "java.util.concurrent.CompletableFuture", "Delayer", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$Delayer$DaemonThreadFactory", "java.util.concurrent.CompletableFuture$Delayer", "DaemonThreadFactory", $STATIC | $FINAL},
	{}
};

$ClassInfo _CompletableFuture$Delayer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$Delayer",
	"java.lang.Object",
	nullptr,
	_CompletableFuture$Delayer_FieldInfo_,
	_CompletableFuture$Delayer_MethodInfo_,
	nullptr,
	nullptr,
	_CompletableFuture$Delayer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$Delayer($Class* clazz) {
	return $of($alloc(CompletableFuture$Delayer));
}

$ScheduledThreadPoolExecutor* CompletableFuture$Delayer::delayer = nullptr;

void CompletableFuture$Delayer::init$() {
}

$ScheduledFuture* CompletableFuture$Delayer::delay($Runnable* command, int64_t delay, $TimeUnit* unit) {
	$init(CompletableFuture$Delayer);
	return $nc(CompletableFuture$Delayer::delayer)->schedule(command, delay, unit);
}

void clinit$CompletableFuture$Delayer($Class* class$) {
	{
		$nc(($assignStatic(CompletableFuture$Delayer::delayer, $new($ScheduledThreadPoolExecutor, 1, static_cast<$ThreadFactory*>($$new($CompletableFuture$Delayer$DaemonThreadFactory))))))->setRemoveOnCancelPolicy(true);
	}
}

CompletableFuture$Delayer::CompletableFuture$Delayer() {
}

$Class* CompletableFuture$Delayer::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$Delayer, name, initialize, &_CompletableFuture$Delayer_ClassInfo_, clinit$CompletableFuture$Delayer, allocate$CompletableFuture$Delayer);
	return class$;
}

$Class* CompletableFuture$Delayer::class$ = nullptr;

		} // concurrent
	} // util
} // java