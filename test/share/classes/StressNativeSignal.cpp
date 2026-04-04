#include <StressNativeSignal.h>
#include <StressNativeSignal$ServerSocketThread.h>
#include <StressNativeSignal$UDPThread.h>
#include <jcpp.h>

using $StressNativeSignal$ServerSocketThread = ::StressNativeSignal$ServerSocketThread;
using $StressNativeSignal$UDPThread = ::StressNativeSignal$UDPThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StressNativeSignal::init$() {
	try {
		$set(this, serverSocketThread, $new($StressNativeSignal$ServerSocketThread, this));
		this->serverSocketThread->start();
		$set(this, udpThread, $new($StressNativeSignal$UDPThread, this));
		this->udpThread->start();
	} catch ($Exception& z) {
		z->printStackTrace();
	}
}

void StressNativeSignal::main($StringArray* args) {
	$var(StressNativeSignal, test, $new(StressNativeSignal));
	try {
		$Thread::sleep(3000);
	} catch ($Exception& z) {
		z->printStackTrace($System::err);
	}
	test->shutdown();
}

void StressNativeSignal::shutdown() {
	$nc(this->udpThread)->terminate();
	try {
		$nc(this->udpThread)->join();
	} catch ($Exception& z) {
		z->printStackTrace($System::err);
	}
	$nc(this->serverSocketThread)->terminate();
	try {
		$nc(this->serverSocketThread)->join();
	} catch ($Exception& z) {
		z->printStackTrace($System::err);
	}
}

StressNativeSignal::StressNativeSignal() {
}

$Class* StressNativeSignal::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"udpThread", "LStressNativeSignal$UDPThread;", nullptr, $PRIVATE, $field(StressNativeSignal, udpThread)},
		{"serverSocketThread", "LStressNativeSignal$ServerSocketThread;", nullptr, $PRIVATE, $field(StressNativeSignal, serverSocketThread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StressNativeSignal, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StressNativeSignal, main, void, $StringArray*), "java.lang.Throwable"},
		{"shutdown", "()V", nullptr, $PUBLIC, $virtualMethod(StressNativeSignal, shutdown, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StressNativeSignal$UDPThread", "StressNativeSignal", "UDPThread", $PUBLIC},
		{"StressNativeSignal$ServerSocketThread", "StressNativeSignal", "ServerSocketThread", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StressNativeSignal",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"StressNativeSignal$UDPThread,StressNativeSignal$ServerSocketThread"
	};
	$loadClass(StressNativeSignal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StressNativeSignal);
	});
	return class$;
}

$Class* StressNativeSignal::class$ = nullptr;