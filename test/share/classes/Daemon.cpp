#include <Daemon.h>

#include <MadThread.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalThreadStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MadThread = ::MadThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalThreadStateException = ::java::lang::IllegalThreadStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadGroup = ::java::lang::ThreadGroup;

$MethodInfo _Daemon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Daemon::*)()>(&Daemon::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Daemon::main)), "java.lang.Exception"},
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
	} catch ($IllegalThreadStateException&) {
		$catch();
	}
}

Daemon::Daemon() {
}

$Class* Daemon::load$($String* name, bool initialize) {
	$loadClass(Daemon, name, initialize, &_Daemon_ClassInfo_, allocate$Daemon);
	return class$;
}

$Class* Daemon::class$ = nullptr;