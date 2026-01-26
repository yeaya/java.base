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

$FieldInfo _ThreadId_FieldInfo_[] = {
	{"nextId", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadId, nextId)},
	{"threadId", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ThreadId, threadId)},
	{}
};

$MethodInfo _ThreadId_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadId, init$, void)},
	{"get", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(ThreadId, get, int32_t)},
	{}
};

$InnerClassInfo _ThreadId_InnerClassesInfo_[] = {
	{"ThreadId$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ThreadId_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ThreadId",
	"java.lang.Object",
	nullptr,
	_ThreadId_FieldInfo_,
	_ThreadId_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadId_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ThreadId$1"
};

$Object* allocate$ThreadId($Class* clazz) {
	return $of($alloc(ThreadId));
}

$AtomicInteger* ThreadId::nextId = nullptr;
$ThreadLocal* ThreadId::threadId = nullptr;

void ThreadId::init$() {
}

int32_t ThreadId::get() {
	$init(ThreadId);
	return $nc(($cast($Integer, $($nc(ThreadId::threadId)->get()))))->intValue();
}

void clinit$ThreadId($Class* class$) {
	$assignStatic(ThreadId::nextId, $new($AtomicInteger, 0));
	$assignStatic(ThreadId::threadId, $new($ThreadId$1));
}

ThreadId::ThreadId() {
}

$Class* ThreadId::load$($String* name, bool initialize) {
	$loadClass(ThreadId, name, initialize, &_ThreadId_ClassInfo_, clinit$ThreadId, allocate$ThreadId);
	return class$;
}

$Class* ThreadId::class$ = nullptr;