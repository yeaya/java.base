#include <GenerifyStackTraces$DumpThread.h>
#include <GenerifyStackTraces.h>
#include <jcpp.h>

using $GenerifyStackTraces = ::GenerifyStackTraces;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GenerifyStackTraces$DumpThread::init$() {
	$Thread::init$();
	this->finished = false;
}

void GenerifyStackTraces$DumpThread::run() {
	int32_t depth = 2;
	while (!this->finished) {
		try {
			sleep(10);
			$GenerifyStackTraces::dumpStacks(depth);
			++depth;
			$GenerifyStackTraces::finishDump();
		} catch ($Exception& e) {
			e->printStackTrace();
			$init($GenerifyStackTraces);
			$GenerifyStackTraces::testFailed = true;
		}
	}
}

void GenerifyStackTraces$DumpThread::shutdown() {
	this->finished = true;
	this->join();
}

GenerifyStackTraces$DumpThread::GenerifyStackTraces$DumpThread() {
}

$Class* GenerifyStackTraces$DumpThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"finished", "Z", nullptr, $PRIVATE | $VOLATILE, $field(GenerifyStackTraces$DumpThread, finished)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GenerifyStackTraces$DumpThread, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GenerifyStackTraces$DumpThread, run, void)},
		{"shutdown", "()V", nullptr, $PUBLIC, $virtualMethod(GenerifyStackTraces$DumpThread, shutdown, void), "java.lang.InterruptedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GenerifyStackTraces$DumpThread", "GenerifyStackTraces", "DumpThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GenerifyStackTraces$DumpThread",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GenerifyStackTraces"
	};
	$loadClass(GenerifyStackTraces$DumpThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GenerifyStackTraces$DumpThread);
	});
	return class$;
}

$Class* GenerifyStackTraces$DumpThread::class$ = nullptr;