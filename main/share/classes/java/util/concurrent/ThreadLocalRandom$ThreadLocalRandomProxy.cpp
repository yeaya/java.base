#include <java/util/concurrent/ThreadLocalRandom$ThreadLocalRandomProxy.h>
#include <java/util/Random.h>
#include <java/util/concurrent/ThreadLocalRandom.h>
#include <jcpp.h>

#undef PROXY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Random = ::java::util::Random;
using $ThreadLocalRandom = ::java::util::concurrent::ThreadLocalRandom;

namespace java {
	namespace util {
		namespace concurrent {

$Random* ThreadLocalRandom$ThreadLocalRandomProxy::PROXY = nullptr;

void ThreadLocalRandom$ThreadLocalRandomProxy::init$() {
	$Random::init$();
}

int32_t ThreadLocalRandom$ThreadLocalRandomProxy::nextInt() {
	return $$nc($ThreadLocalRandom::current())->nextInt();
}

int64_t ThreadLocalRandom$ThreadLocalRandomProxy::nextLong() {
	return $$nc($ThreadLocalRandom::current())->nextLong();
}

void ThreadLocalRandom$ThreadLocalRandomProxy::clinit$($Class* clazz) {
	$assignStatic(ThreadLocalRandom$ThreadLocalRandomProxy::PROXY, $new(ThreadLocalRandom$ThreadLocalRandomProxy));
}

ThreadLocalRandom$ThreadLocalRandomProxy::ThreadLocalRandom$ThreadLocalRandomProxy() {
}

$Class* ThreadLocalRandom$ThreadLocalRandomProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PROXY", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(ThreadLocalRandom$ThreadLocalRandomProxy, PROXY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ThreadLocalRandom$ThreadLocalRandomProxy, init$, void)},
		{"nextInt", "()I", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom$ThreadLocalRandomProxy, nextInt, int32_t)},
		{"nextLong", "()J", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom$ThreadLocalRandomProxy, nextLong, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ThreadLocalRandom$ThreadLocalRandomProxy", "java.util.concurrent.ThreadLocalRandom", "ThreadLocalRandomProxy", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ThreadLocalRandom$ThreadLocalRandomProxy",
		"java.util.Random",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ThreadLocalRandom"
	};
	$loadClass(ThreadLocalRandom$ThreadLocalRandomProxy, name, initialize, &classInfo$$, ThreadLocalRandom$ThreadLocalRandomProxy::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ThreadLocalRandom$ThreadLocalRandomProxy));
	});
	return class$;
}

$Class* ThreadLocalRandom$ThreadLocalRandomProxy::class$ = nullptr;

		} // concurrent
	} // util
} // java