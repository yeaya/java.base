#include <java/util/concurrent/locks/LockSupport.h>

#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef PARKBLOCKER
#undef TID
#undef U

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
	{"<init>", "()V", nullptr, $PRIVATE, $method(LockSupport, init$, void)},
	{"getBlocker", "(Ljava/lang/Thread;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(LockSupport, getBlocker, $Object*, $Thread*)},
	{"getThreadId", "(Ljava/lang/Thread;)J", nullptr, $STATIC | $FINAL, $staticMethod(LockSupport, getThreadId, int64_t, $Thread*)},
	{"park", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LockSupport, park, void, Object$*)},
	{"park", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(LockSupport, park, void)},
	{"parkNanos", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LockSupport, parkNanos, void, Object$*, int64_t)},
	{"parkNanos", "(J)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LockSupport, parkNanos, void, int64_t)},
	{"parkUntil", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LockSupport, parkUntil, void, Object$*, int64_t)},
	{"parkUntil", "(J)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LockSupport, parkUntil, void, int64_t)},
	{"setBlocker", "(Ljava/lang/Thread;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(LockSupport, setBlocker, void, $Thread*, Object$*)},
	{"setCurrentBlocker", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LockSupport, setCurrentBlocker, void, Object$*)},
	{"unpark", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LockSupport, unpark, void, $Thread*)},
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