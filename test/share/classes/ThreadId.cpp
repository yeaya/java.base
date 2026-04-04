#include <ThreadId.h>
#include <ThreadId$1.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $ThreadId$1 = ::ThreadId$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$AtomicInteger* ThreadId::nextId = nullptr;
$ThreadLocal* ThreadId::threadId = nullptr;

void ThreadId::init$() {
}

int32_t ThreadId::get() {
	$init(ThreadId);
	return $$sure($Integer, ThreadId::threadId->get())->intValue();
}

void ThreadId::clinit$($Class* clazz) {
	$assignStatic(ThreadId::nextId, $new($AtomicInteger, 0));
	$assignStatic(ThreadId::threadId, $new($ThreadId$1));
}

ThreadId::ThreadId() {
}

$Class* ThreadId::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"nextId", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadId, nextId)},
		{"threadId", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ThreadId, threadId)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadId, init$, void)},
		{"get", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(ThreadId, get, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ThreadId$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ThreadId",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ThreadId$1"
	};
	$loadClass(ThreadId, name, initialize, &classInfo$$, ThreadId::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadId);
	});
	return class$;
}

$Class* ThreadId::class$ = nullptr;