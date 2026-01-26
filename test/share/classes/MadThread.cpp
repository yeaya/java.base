#include <MadThread.h>

#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;

$FieldInfo _MadThread_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(MadThread, name)},
	{}
};

$MethodInfo _MadThread_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V", nullptr, 0, $method(MadThread, init$, void, $ThreadGroup*, $String*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MadThread, run, void)},
	{}
};

$ClassInfo _MadThread_ClassInfo_ = {
	$ACC_SUPER,
	"MadThread",
	"java.lang.Thread",
	nullptr,
	_MadThread_FieldInfo_,
	_MadThread_MethodInfo_
};

$Object* allocate$MadThread($Class* clazz) {
	return $of($alloc(MadThread));
}

void MadThread::init$($ThreadGroup* tg, $String* name) {
	$Thread::init$(tg, name);
	$set(this, name, name);
}

void MadThread::run() {
	$nc($System::out)->println($$str({"me run "_s, this->name}));
}

MadThread::MadThread() {
}

$Class* MadThread::load$($String* name, bool initialize) {
	$loadClass(MadThread, name, initialize, &_MadThread_ClassInfo_, allocate$MadThread);
	return class$;
}

$Class* MadThread::class$ = nullptr;