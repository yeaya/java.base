#include <CloseRace$ExecLoop.h>

#include <CloseRace.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Runnable = ::java::lang::Runnable;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$MethodInfo _CloseRace$ExecLoop_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CloseRace$ExecLoop::*)()>(&CloseRace$ExecLoop::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CloseRace$ExecLoop_InnerClassesInfo_[] = {
	{"CloseRace$ExecLoop", "CloseRace", "ExecLoop", $STATIC},
	{}
};

$ClassInfo _CloseRace$ExecLoop_ClassInfo_ = {
	$ACC_SUPER,
	"CloseRace$ExecLoop",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_CloseRace$ExecLoop_MethodInfo_,
	nullptr,
	nullptr,
	_CloseRace$ExecLoop_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CloseRace"
};

$Object* allocate$CloseRace$ExecLoop($Class* clazz) {
	return $of($alloc(CloseRace$ExecLoop));
}

void CloseRace$ExecLoop::init$() {
}

void CloseRace$ExecLoop::run() {
	$useLocalCurrentObjectStackCache();
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
		} catch ($InterruptedException&) {
			$var($InterruptedException, e, $catch());
			break;
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($Error, static_cast<$Throwable*>(e));
		}
	}
}

CloseRace$ExecLoop::CloseRace$ExecLoop() {
}

$Class* CloseRace$ExecLoop::load$($String* name, bool initialize) {
	$loadClass(CloseRace$ExecLoop, name, initialize, &_CloseRace$ExecLoop_ClassInfo_, allocate$CloseRace$ExecLoop);
	return class$;
}

$Class* CloseRace$ExecLoop::class$ = nullptr;