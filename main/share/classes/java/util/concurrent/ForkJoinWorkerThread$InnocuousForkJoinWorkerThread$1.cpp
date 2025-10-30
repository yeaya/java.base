#include <java/util/concurrent/ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1.h>

#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1::*)()>(&ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1::init$))},
	{"run", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread",
	nullptr,
	nullptr
};

$InnerClassInfo _ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread", "java.util.concurrent.ForkJoinWorkerThread", "InnocuousForkJoinWorkerThread", $STATIC | $FINAL},
	{"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ThreadGroup;>;",
	&_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1_EnclosingMethodInfo_,
	_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinWorkerThread"
};

$Object* allocate$ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1($Class* clazz) {
	return $of($alloc(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1));
}

void ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1::init$() {
}

$Object* ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, group, $($Thread::currentThread())->getThreadGroup());
	{
		$var($ThreadGroup, p, nullptr);
		for (; ($assign(p, $nc(group)->getParent())) != nullptr;) {
			$assign(group, p);
		}
	}
	return $of($new($ThreadGroup, group, "InnocuousForkJoinWorkerThreadGroup"_s));
}

ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1::ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1() {
}

$Class* ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1::load$($String* name, bool initialize) {
	$loadClass(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1, name, initialize, &_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1_ClassInfo_, allocate$ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1);
	return class$;
}

$Class* ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1::class$ = nullptr;

		} // concurrent
	} // util
} // java