#include <TestThread.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$FieldInfo _TestThread_FieldInfo_[] = {
	{"failure", "Ljava/lang/Exception;", nullptr, 0, $field(TestThread, failure)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(TestThread, name)},
	{"log", "Ljava/io/PrintStream;", nullptr, $PROTECTED | $FINAL, $field(TestThread, log)},
	{"main", "Ljava/lang/Thread;", nullptr, 0, $field(TestThread, main)},
	{}
};

$MethodInfo _TestThread_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/io/PrintStream;)V", nullptr, 0, $method(static_cast<void(TestThread::*)($String*,$PrintStream*)>(&TestThread::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(TestThread::*)($String*)>(&TestThread::init$))},
	{"finish", "(J)I", nullptr, 0},
	{"finishAndThrow", "(J)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"go", "()V", nullptr, $ABSTRACT, nullptr, "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TestThread_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"TestThread",
	"java.lang.Thread",
	nullptr,
	_TestThread_FieldInfo_,
	_TestThread_MethodInfo_
};

$Object* allocate$TestThread($Class* clazz) {
	return $of($alloc(TestThread));
}

void TestThread::init$($String* name, $PrintStream* log) {
	$Thread::init$($$str({"TestThread-"_s, name}));
	$set(this, failure, nullptr);
	$set(this, name, name);
	$set(this, log, log);
	$set(this, main, $Thread::currentThread());
	setDaemon(true);
}

void TestThread::init$($String* name) {
	$init($System);
	TestThread::init$(name, $System::err);
}

void TestThread::run() {
	try {
		go();
	} catch ($Exception&) {
		$var($Exception, x, $catch());
		$set(this, failure, x);
		$nc(this->main)->interrupt();
	}
}

int32_t TestThread::finish(int64_t timeout) {
	try {
		join(timeout);
	} catch ($InterruptedException&) {
		$catch();
	}
	if (isAlive() && (this->failure == nullptr)) {
		$set(this, failure, $new($Exception, $$str({this->name, ": Timed out"_s})));
	}
	if (this->failure != nullptr) {
		$nc(this->failure)->printStackTrace(this->log);
		return 0;
	}
	return 1;
}

void TestThread::finishAndThrow(int64_t timeout) {
	$useLocalCurrentObjectStackCache();
	try {
		join(timeout);
	} catch ($InterruptedException&) {
		$catch();
	}
	if (this->failure != nullptr) {
		$set(this, failure, $new($Exception, $$str({this->name, " threw an exception"_s}), this->failure));
	}
	if (isAlive() && (this->failure == nullptr)) {
		$set(this, failure, $new($Exception, $$str({this->name, " timed out"_s})));
	}
	if (this->failure != nullptr) {
		$throw(this->failure);
	}
}

$String* TestThread::toString() {
	return this->name;
}

TestThread::TestThread() {
}

$Class* TestThread::load$($String* name, bool initialize) {
	$loadClass(TestThread, name, initialize, &_TestThread_ClassInfo_, allocate$TestThread);
	return class$;
}

$Class* TestThread::class$ = nullptr;