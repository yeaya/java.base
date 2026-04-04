#include <sun/nio/ch/ThreadPool$DefaultThreadPoolHolder.h>
#include <sun/nio/ch/ThreadPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadPool = ::sun::nio::ch::ThreadPool;

namespace sun {
	namespace nio {
		namespace ch {

$ThreadPool* ThreadPool$DefaultThreadPoolHolder::defaultThreadPool = nullptr;

void ThreadPool$DefaultThreadPoolHolder::init$() {
}

void ThreadPool$DefaultThreadPoolHolder::clinit$($Class* clazz) {
	$assignStatic(ThreadPool$DefaultThreadPoolHolder::defaultThreadPool, $ThreadPool::createDefault());
}

ThreadPool$DefaultThreadPoolHolder::ThreadPool$DefaultThreadPoolHolder() {
}

$Class* ThreadPool$DefaultThreadPoolHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultThreadPool", "Lsun/nio/ch/ThreadPool;", nullptr, $STATIC | $FINAL, $staticField(ThreadPool$DefaultThreadPoolHolder, defaultThreadPool)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ThreadPool$DefaultThreadPoolHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.ThreadPool$DefaultThreadPoolHolder", "sun.nio.ch.ThreadPool", "DefaultThreadPoolHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.ThreadPool$DefaultThreadPoolHolder",
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
		"sun.nio.ch.ThreadPool"
	};
	$loadClass(ThreadPool$DefaultThreadPoolHolder, name, initialize, &classInfo$$, ThreadPool$DefaultThreadPoolHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadPool$DefaultThreadPoolHolder);
	});
	return class$;
}

$Class* ThreadPool$DefaultThreadPoolHolder::class$ = nullptr;

		} // ch
	} // nio
} // sun