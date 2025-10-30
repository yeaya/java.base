#include <java/util/concurrent/CompletableFuture$Delayer$DaemonThreadFactory.h>

#include <java/lang/Runnable.h>
#include <java/util/concurrent/CompletableFuture$Delayer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CompletableFuture$Delayer = ::java::util::concurrent::CompletableFuture$Delayer;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _CompletableFuture$Delayer$DaemonThreadFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CompletableFuture$Delayer$DaemonThreadFactory::*)()>(&CompletableFuture$Delayer$DaemonThreadFactory::init$))},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CompletableFuture$Delayer$DaemonThreadFactory_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$Delayer", "java.util.concurrent.CompletableFuture", "Delayer", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$Delayer$DaemonThreadFactory", "java.util.concurrent.CompletableFuture$Delayer", "DaemonThreadFactory", $STATIC | $FINAL},
	{}
};

$ClassInfo _CompletableFuture$Delayer$DaemonThreadFactory_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$Delayer$DaemonThreadFactory",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	nullptr,
	_CompletableFuture$Delayer$DaemonThreadFactory_MethodInfo_,
	nullptr,
	nullptr,
	_CompletableFuture$Delayer$DaemonThreadFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$Delayer$DaemonThreadFactory($Class* clazz) {
	return $of($alloc(CompletableFuture$Delayer$DaemonThreadFactory));
}

void CompletableFuture$Delayer$DaemonThreadFactory::init$() {
}

$Thread* CompletableFuture$Delayer$DaemonThreadFactory::newThread($Runnable* r) {
	$var($Thread, t, $new($Thread, r));
	t->setDaemon(true);
	t->setName("CompletableFutureDelayScheduler"_s);
	return t;
}

CompletableFuture$Delayer$DaemonThreadFactory::CompletableFuture$Delayer$DaemonThreadFactory() {
}

$Class* CompletableFuture$Delayer$DaemonThreadFactory::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$Delayer$DaemonThreadFactory, name, initialize, &_CompletableFuture$Delayer$DaemonThreadFactory_ClassInfo_, allocate$CompletableFuture$Delayer$DaemonThreadFactory);
	return class$;
}

$Class* CompletableFuture$Delayer$DaemonThreadFactory::class$ = nullptr;

		} // concurrent
	} // util
} // java