#include <WaitFor.h>

#include <MyProcess.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef MILLISECONDS

using $MyProcess = ::MyProcess;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $RuntimeException = ::java::lang::RuntimeException;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$MethodInfo _WaitFor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WaitFor::*)()>(&WaitFor::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WaitFor::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _WaitFor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WaitFor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WaitFor_MethodInfo_
};

$Object* allocate$WaitFor($Class* clazz) {
	return $of($alloc(WaitFor));
}

void WaitFor::init$() {
}

void WaitFor::main($StringArray* args) {
	int32_t failCnt = 0;
	for (int32_t i = 0; i < 30; ++i) {
		$var($Process, proc, $new($MyProcess, $($$new($ProcessBuilder, $$new($StringArray, {"true"_s}))->start())));
		$init($TimeUnit);
		bool exited = proc->waitFor(100, $TimeUnit::MILLISECONDS);
		if (!exited && !proc->isAlive()) {
			++failCnt;
		}
	}
	if (failCnt > 10) {
		$throwNew($RuntimeException, $$str({$$str(failCnt), " processes were still alive after timeout"_s}));
	}
}

WaitFor::WaitFor() {
}

$Class* WaitFor::load$($String* name, bool initialize) {
	$loadClass(WaitFor, name, initialize, &_WaitFor_ClassInfo_, allocate$WaitFor);
	return class$;
}

$Class* WaitFor::class$ = nullptr;