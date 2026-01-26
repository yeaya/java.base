#include <Daemon.h>

#include <MadThread.h>
#include <java/lang/IllegalThreadStateException.h>
#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

using $MadThread = ::MadThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalThreadStateException = ::java::lang::IllegalThreadStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadGroup = ::java::lang::ThreadGroup;

$MethodInfo _Daemon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Daemon, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Daemon, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Daemon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Daemon",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Daemon_MethodInfo_
};

$Object* allocate$Daemon($Class* clazz) {
	return $of($alloc(Daemon));
}

void Daemon::init$() {
}

void Daemon::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, tg, $new($ThreadGroup, "madbot-threads"_s));
	$var($Thread, myThread, $new($MadThread, tg, "mad"_s));
	$var($ThreadGroup, aGroup, $new($ThreadGroup, tg, "ness"_s));
	tg->setDaemon(true);
	if (tg->activeCount() != 0) {
		$throwNew($RuntimeException, "activeCount"_s);
	}
	aGroup->destroy();
	if (tg->isDestroyed()) {
		$throwNew($RuntimeException, "destroy"_s);
	}
	try {
		$var($Thread, anotherThread, $new($MadThread, aGroup, "bot"_s));
		$throwNew($RuntimeException, "illegal"_s);
	} catch ($IllegalThreadStateException& itse) {
	}
}

Daemon::Daemon() {
}

$Class* Daemon::load$($String* name, bool initialize) {
	$loadClass(Daemon, name, initialize, &_Daemon_ClassInfo_, allocate$Daemon);
	return class$;
}

$Class* Daemon::class$ = nullptr;