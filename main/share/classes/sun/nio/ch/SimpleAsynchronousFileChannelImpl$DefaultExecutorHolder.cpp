#include <sun/nio/ch/SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder.h>
#include <java/util/concurrent/ExecutorService.h>
#include <sun/nio/ch/SimpleAsynchronousFileChannelImpl.h>
#include <sun/nio/ch/ThreadPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $ThreadPool = ::sun::nio::ch::ThreadPool;

namespace sun {
	namespace nio {
		namespace ch {

$ExecutorService* SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::defaultExecutor = nullptr;

void SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::init$() {
}

void SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::clinit$($Class* clazz) {
	$assignStatic(SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::defaultExecutor, $$nc($ThreadPool::createDefault())->executor());
}

SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder() {
}

$Class* SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultExecutor", "Ljava/util/concurrent/ExecutorService;", nullptr, $STATIC | $FINAL, $staticField(SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder, defaultExecutor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder", "sun.nio.ch.SimpleAsynchronousFileChannelImpl", "DefaultExecutorHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.SimpleAsynchronousFileChannelImpl"
	};
	$loadClass(SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder, name, initialize, &classInfo$$, SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder);
	});
	return class$;
}

$Class* SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::class$ = nullptr;

		} // ch
	} // nio
} // sun