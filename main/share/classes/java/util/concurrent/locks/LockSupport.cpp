#include <java/util/concurrent/locks/LockSupport.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef U
#undef PARKBLOCKER
#undef TID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _LockSupport_FieldInfo_[] = {
	{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LockSupport, U)},
	{"PARKBLOCKER", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LockSupport, PARKBLOCKER)},
	{"TID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LockSupport, TID)},
	{}
};

$MethodInfo _LockSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LockSupport::*)()>(&LockSupport::init$))},
	{"getBlocker", "(Ljava/lang/Thread;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Thread*)>(&LockSupport::getBlocker))},
	{"getThreadId", "(Ljava/lang/Thread;)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)($Thread*)>(&LockSupport::getThreadId))},
	{"park", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*)>(&LockSupport::park))},
	{"park", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&LockSupport::park))},
	{"parkNanos", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*,int64_t)>(&LockSupport::parkNanos))},
	{"parkNanos", "(J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t)>(&LockSupport::parkNanos))},
	{"parkUntil", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*,int64_t)>(&LockSupport::parkUntil))},
	{"parkUntil", "(J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t)>(&LockSupport::parkUntil))},
	{"setBlocker", "(Ljava/lang/Thread;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Thread*,Object$*)>(&LockSupport::setBlocker))},
	{"setCurrentBlocker", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*)>(&LockSupport::setCurrentBlocker))},
	{"unpark", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Thread*)>(&LockSupport::unpark))},
	{}
};

$ClassInfo _LockSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.locks.LockSupport",
	"java.lang.Object",
	nullptr,
	_LockSupport_FieldInfo_,
	_LockSupport_MethodInfo_
};

$Object* allocate$LockSupport($Class* clazz) {
	return $of($alloc(LockSupport));
}

$Unsafe* LockSupport::U = nullptr;
int64_t LockSupport::PARKBLOCKER = 0;
int64_t LockSupport::TID = 0;

void LockSupport::init$() {
}

void LockSupport::setBlocker($Thread* t, Object$* arg) {
	$init(LockSupport);
	$nc(LockSupport::U)->putReferenceOpaque(t, LockSupport::PARKBLOCKER, arg);
}

void LockSupport::setCurrentBlocker(Object$* blocker) {
	$init(LockSupport);
	$nc(LockSupport::U)->putReferenceOpaque($($Thread::currentThread()), LockSupport::PARKBLOCKER, blocker);
}

void LockSupport::unpark($Thread* thread) {
	$init(LockSupport);
	if (thread != nullptr) {
		$nc(LockSupport::U)->unpark(thread);
	}
}

void LockSupport::park(Object$* blocker) {
	$init(LockSupport);
	$var($Thread, t, $Thread::currentThread());
	setBlocker(t, blocker);
	$nc(LockSupport::U)->park(false, 0);
	setBlocker(t, nullptr);
}

void LockSupport::parkNanos(Object$* blocker, int64_t nanos) {
	$init(LockSupport);
	if (nanos > 0) {
		$var($Thread, t, $Thread::currentThread());
		setBlocker(t, blocker);
		$nc(LockSupport::U)->park(false, nanos);
		setBlocker(t, nullptr);
	}
}

void LockSupport::parkUntil(Object$* blocker, int64_t deadline) {
	$init(LockSupport);
	$var($Thread, t, $Thread::currentThread());
	setBlocker(t, blocker);
	$nc(LockSupport::U)->park(true, deadline);
	setBlocker(t, nullptr);
}

$Object* LockSupport::getBlocker($Thread* t) {
	$init(LockSupport);
	if (t == nullptr) {
		$throwNew($NullPointerException);
	}
	return $of($nc(LockSupport::U)->getReferenceOpaque(t, LockSupport::PARKBLOCKER));
}

void LockSupport::park() {
	$init(LockSupport);
	$nc(LockSupport::U)->park(false, 0);
}

void LockSupport::parkNanos(int64_t nanos) {
	$init(LockSupport);
	if (nanos > 0) {
		$nc(LockSupport::U)->park(false, nanos);
	}
}

void LockSupport::parkUntil(int64_t deadline) {
	$init(LockSupport);
	$nc(LockSupport::U)->park(true, deadline);
}

int64_t LockSupport::getThreadId($Thread* thread) {
	$init(LockSupport);
	return $nc(LockSupport::U)->getLong(thread, LockSupport::TID);
}

void clinit$LockSupport($Class* class$) {
	$assignStatic(LockSupport::U, $Unsafe::getUnsafe());
	$load($Thread);
	LockSupport::PARKBLOCKER = $nc(LockSupport::U)->objectFieldOffset($Thread::class$, "parkBlocker"_s);
	LockSupport::TID = $nc(LockSupport::U)->objectFieldOffset($Thread::class$, "tid"_s);
}

LockSupport::LockSupport() {
}

$Class* LockSupport::load$($String* name, bool initialize) {
	$loadClass(LockSupport, name, initialize, &_LockSupport_ClassInfo_, clinit$LockSupport, allocate$LockSupport);
	return class$;
}

$Class* LockSupport::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java