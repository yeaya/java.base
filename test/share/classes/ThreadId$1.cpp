#include <ThreadId$1.h>

#include <ThreadId.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $ThreadId = ::ThreadId;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$MethodInfo _ThreadId$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ThreadId$1::*)()>(&ThreadId$1::init$))},
	{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ThreadId$1_EnclosingMethodInfo_ = {
	"ThreadId",
	nullptr,
	nullptr
};

$InnerClassInfo _ThreadId$1_InnerClassesInfo_[] = {
	{"ThreadId$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ThreadId$1_ClassInfo_ = {
	$ACC_SUPER,
	"ThreadId$1",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_ThreadId$1_MethodInfo_,
	"Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;",
	&_ThreadId$1_EnclosingMethodInfo_,
	_ThreadId$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ThreadId"
};

$Object* allocate$ThreadId$1($Class* clazz) {
	return $of($alloc(ThreadId$1));
}

void ThreadId$1::init$() {
	$ThreadLocal::init$();
}

$Object* ThreadId$1::initialValue() {
	$init($ThreadId);
	return $of($Integer::valueOf($nc($ThreadId::nextId)->getAndIncrement()));
}

ThreadId$1::ThreadId$1() {
}

$Class* ThreadId$1::load$($String* name, bool initialize) {
	$loadClass(ThreadId$1, name, initialize, &_ThreadId$1_ClassInfo_, allocate$ThreadId$1);
	return class$;
}

$Class* ThreadId$1::class$ = nullptr;