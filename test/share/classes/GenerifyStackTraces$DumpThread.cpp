#include <GenerifyStackTraces$DumpThread.h>

#include <GenerifyStackTraces.h>
#include <jcpp.h>

using $GenerifyStackTraces = ::GenerifyStackTraces;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GenerifyStackTraces$DumpThread_FieldInfo_[] = {
	{"finished", "Z", nullptr, $PRIVATE | $VOLATILE, $field(GenerifyStackTraces$DumpThread, finished)},
	{}
};

$MethodInfo _GenerifyStackTraces$DumpThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GenerifyStackTraces$DumpThread::*)()>(&GenerifyStackTraces$DumpThread::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"shutdown", "()V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _GenerifyStackTraces$DumpThread_InnerClassesInfo_[] = {
	{"GenerifyStackTraces$DumpThread", "GenerifyStackTraces", "DumpThread", $STATIC},
	{}
};

$ClassInfo _GenerifyStackTraces$DumpThread_ClassInfo_ = {
	$ACC_SUPER,
	"GenerifyStackTraces$DumpThread",
	"java.lang.Thread",
	nullptr,
	_GenerifyStackTraces$DumpThread_FieldInfo_,
	_GenerifyStackTraces$DumpThread_MethodInfo_,
	nullptr,
	nullptr,
	_GenerifyStackTraces$DumpThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GenerifyStackTraces"
};

$Object* allocate$GenerifyStackTraces$DumpThread($Class* clazz) {
	return $of($alloc(GenerifyStackTraces$DumpThread));
}

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
	$loadClass(GenerifyStackTraces$DumpThread, name, initialize, &_GenerifyStackTraces$DumpThread_ClassInfo_, allocate$GenerifyStackTraces$DumpThread);
	return class$;
}

$Class* GenerifyStackTraces$DumpThread::class$ = nullptr;