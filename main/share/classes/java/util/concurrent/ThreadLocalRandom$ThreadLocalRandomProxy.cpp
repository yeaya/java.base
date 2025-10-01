#include <java/util/concurrent/ThreadLocalRandom$ThreadLocalRandomProxy.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _ThreadLocalRandom$ThreadLocalRandomProxy_FieldInfo_[] = {
	{"PROXY", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(ThreadLocalRandom$ThreadLocalRandomProxy, PROXY)},
	{}
};

$MethodInfo _ThreadLocalRandom$ThreadLocalRandomProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ThreadLocalRandom$ThreadLocalRandomProxy::*)()>(&ThreadLocalRandom$ThreadLocalRandomProxy::init$))},
	{"nextInt", "()I", nullptr, $PUBLIC},
	{"nextLong", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ThreadLocalRandom$ThreadLocalRandomProxy_InnerClassesInfo_[] = {
	{"java.util.concurrent.ThreadLocalRandom$ThreadLocalRandomProxy", "java.util.concurrent.ThreadLocalRandom", "ThreadLocalRandomProxy", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ThreadLocalRandom$ThreadLocalRandomProxy_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ThreadLocalRandom$ThreadLocalRandomProxy",
	"java.util.Random",
	nullptr,
	_ThreadLocalRandom$ThreadLocalRandomProxy_FieldInfo_,
	_ThreadLocalRandom$ThreadLocalRandomProxy_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadLocalRandom$ThreadLocalRandomProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ThreadLocalRandom"
};

$Object* allocate$ThreadLocalRandom$ThreadLocalRandomProxy($Class* clazz) {
	return $of($alloc(ThreadLocalRandom$ThreadLocalRandomProxy));
}

$Random* ThreadLocalRandom$ThreadLocalRandomProxy::PROXY = nullptr;

void ThreadLocalRandom$ThreadLocalRandomProxy::init$() {
	$Random::init$();
}

int32_t ThreadLocalRandom$ThreadLocalRandomProxy::nextInt() {
	return $nc($($ThreadLocalRandom::current()))->nextInt();
}

int64_t ThreadLocalRandom$ThreadLocalRandomProxy::nextLong() {
	return $nc($($ThreadLocalRandom::current()))->nextLong();
}

void clinit$ThreadLocalRandom$ThreadLocalRandomProxy($Class* class$) {
	$assignStatic(ThreadLocalRandom$ThreadLocalRandomProxy::PROXY, $new(ThreadLocalRandom$ThreadLocalRandomProxy));
}

ThreadLocalRandom$ThreadLocalRandomProxy::ThreadLocalRandom$ThreadLocalRandomProxy() {
}

$Class* ThreadLocalRandom$ThreadLocalRandomProxy::load$($String* name, bool initialize) {
	$loadClass(ThreadLocalRandom$ThreadLocalRandomProxy, name, initialize, &_ThreadLocalRandom$ThreadLocalRandomProxy_ClassInfo_, clinit$ThreadLocalRandom$ThreadLocalRandomProxy, allocate$ThreadLocalRandom$ThreadLocalRandomProxy);
	return class$;
}

$Class* ThreadLocalRandom$ThreadLocalRandomProxy::class$ = nullptr;

		} // concurrent
	} // util
} // java