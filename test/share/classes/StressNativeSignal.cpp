#include <StressNativeSignal.h>

#include <StressNativeSignal$ServerSocketThread.h>
#include <StressNativeSignal$UDPThread.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StressNativeSignal$ServerSocketThread = ::StressNativeSignal$ServerSocketThread;
using $StressNativeSignal$UDPThread = ::StressNativeSignal$UDPThread;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _StressNativeSignal_FieldInfo_[] = {
	{"udpThread", "LStressNativeSignal$UDPThread;", nullptr, $PRIVATE, $field(StressNativeSignal, udpThread)},
	{"serverSocketThread", "LStressNativeSignal$ServerSocketThread;", nullptr, $PRIVATE, $field(StressNativeSignal, serverSocketThread)},
	{}
};

$MethodInfo _StressNativeSignal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StressNativeSignal::*)()>(&StressNativeSignal::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StressNativeSignal::main)), "java.lang.Throwable"},
	{"shutdown", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StressNativeSignal_InnerClassesInfo_[] = {
	{"StressNativeSignal$UDPThread", "StressNativeSignal", "UDPThread", $PUBLIC},
	{"StressNativeSignal$ServerSocketThread", "StressNativeSignal", "ServerSocketThread", $PUBLIC},
	{}
};

$ClassInfo _StressNativeSignal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StressNativeSignal",
	"java.lang.Object",
	nullptr,
	_StressNativeSignal_FieldInfo_,
	_StressNativeSignal_MethodInfo_,
	nullptr,
	nullptr,
	_StressNativeSignal_InnerClassesInfo_,
	nullptr,
	nullptr,
	"StressNativeSignal$UDPThread,StressNativeSignal$ServerSocketThread"
};

$Object* allocate$StressNativeSignal($Class* clazz) {
	return $of($alloc(StressNativeSignal));
}

void StressNativeSignal::init$() {
	try {
		$set(this, serverSocketThread, $new($StressNativeSignal$ServerSocketThread, this));
		$nc(this->serverSocketThread)->start();
		$set(this, udpThread, $new($StressNativeSignal$UDPThread, this));
		$nc(this->udpThread)->start();
	} catch ($Exception&) {
		$var($Exception, z, $catch());
		z->printStackTrace();
	}
}

void StressNativeSignal::main($StringArray* args) {
	$var(StressNativeSignal, test, $new(StressNativeSignal));
	try {
		$Thread::sleep(3000);
	} catch ($Exception&) {
		$var($Exception, z, $catch());
		$init($System);
		z->printStackTrace($System::err);
	}
	test->shutdown();
}

void StressNativeSignal::shutdown() {
	$nc(this->udpThread)->terminate();
	try {
		$nc(this->udpThread)->join();
	} catch ($Exception&) {
		$var($Exception, z, $catch());
		$init($System);
		z->printStackTrace($System::err);
	}
	$nc(this->serverSocketThread)->terminate();
	try {
		$nc(this->serverSocketThread)->join();
	} catch ($Exception&) {
		$var($Exception, z, $catch());
		$init($System);
		z->printStackTrace($System::err);
	}
}

StressNativeSignal::StressNativeSignal() {
}

$Class* StressNativeSignal::load$($String* name, bool initialize) {
	$loadClass(StressNativeSignal, name, initialize, &_StressNativeSignal_ClassInfo_, allocate$StressNativeSignal);
	return class$;
}

$Class* StressNativeSignal::class$ = nullptr;