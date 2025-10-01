#include <FinInterrupt.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _FinInterrupt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FinInterrupt::*)()>(&FinInterrupt::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FinInterrupt::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _FinInterrupt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FinInterrupt",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FinInterrupt_MethodInfo_
};

$Object* allocate$FinInterrupt($Class* clazz) {
	return $of($alloc(FinInterrupt));
}

void FinInterrupt::init$() {
}

void FinInterrupt::main($StringArray* args) {
	$($Thread::currentThread())->interrupt();
	$System::runFinalization();
	if ($Thread::interrupted()) {
		$nc($System::out)->println("Passed: interrupt bit was still set."_s);
	} else {
		$throwNew($AssertionError, $of("interrupt bit was cleared"_s));
	}
}

FinInterrupt::FinInterrupt() {
}

$Class* FinInterrupt::load$($String* name, bool initialize) {
	$loadClass(FinInterrupt, name, initialize, &_FinInterrupt_ClassInfo_, allocate$FinInterrupt);
	return class$;
}

$Class* FinInterrupt::class$ = nullptr;