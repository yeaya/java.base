#include <CloseRace$ExecLoop.h>
#include <CloseRace.h>
#include <java/io/InputStream.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $CloseRace = ::CloseRace;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;

void CloseRace$ExecLoop::init$() {
}

void CloseRace$ExecLoop::run() {
	$useLocalObjectStack();
	$init($CloseRace);
	$nc($CloseRace::threadsStarted)->countDown();
	$var($ProcessBuilder, builder, $new($ProcessBuilder, $$new($StringArray, {"/bin/true"_s})));
	while (!$Thread::interrupted()) {
		try {
			do {
				if ($Thread::interrupted()) {
					return;
				}
			} while ($CloseRace::count($($CloseRace::procFDsInUse())) > 0);
			$var($Process, process, builder->start());
			$var($InputStream, is, $nc(process)->getInputStream());
			process->waitFor();
			$nc(is)->close();
		} catch ($InterruptedException& e) {
			break;
		} catch ($Exception& e) {
			$throwNew($Error, e);
		}
	}
}

CloseRace$ExecLoop::CloseRace$ExecLoop() {
}

$Class* CloseRace$ExecLoop::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CloseRace$ExecLoop, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CloseRace$ExecLoop, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CloseRace$ExecLoop", "CloseRace", "ExecLoop", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CloseRace$ExecLoop",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"CloseRace"
	};
	$loadClass(CloseRace$ExecLoop, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseRace$ExecLoop);
	});
	return class$;
}

$Class* CloseRace$ExecLoop::class$ = nullptr;