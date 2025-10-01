#include <FinThreads$Foo.h>

#include <FinThreads$Foo$1.h>
#include <FinThreads.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE

using $FinThreads = ::FinThreads;
using $FinThreads$Foo$1 = ::FinThreads$Foo$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _FinThreads$Foo_FieldInfo_[] = {
	{"catchFinalizer", "Z", nullptr, 0, $field(FinThreads$Foo, catchFinalizer)},
	{}
};

$MethodInfo _FinThreads$Foo_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(FinThreads$Foo::*)(bool)>(&FinThreads$Foo::init$))},
	{"create", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&FinThreads$Foo::create)), "java.lang.InterruptedException"},
	{"finalize", "()V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _FinThreads$Foo_InnerClassesInfo_[] = {
	{"FinThreads$Foo", "FinThreads", "Foo", $STATIC},
	{"FinThreads$Foo$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FinThreads$Foo_ClassInfo_ = {
	$ACC_SUPER,
	"FinThreads$Foo",
	"java.lang.Object",
	nullptr,
	_FinThreads$Foo_FieldInfo_,
	_FinThreads$Foo_MethodInfo_,
	nullptr,
	nullptr,
	_FinThreads$Foo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FinThreads"
};

$Object* allocate$FinThreads$Foo($Class* clazz) {
	return $of($alloc(FinThreads$Foo));
}

void FinThreads$Foo::create(bool catchFinalizer) {
	$var($Thread, t, $new($Thread, static_cast<$Runnable*>($$new($FinThreads$Foo$1, catchFinalizer))));
	t->start();
	t->join();
}

void FinThreads$Foo::init$(bool catchFinalizer) {
	this->catchFinalizer = false;
	this->catchFinalizer = catchFinalizer;
}

void FinThreads$Foo::finalize() {
	if (this->catchFinalizer) {
		bool gotFinalizer = false;
		$init($FinThreads);
		$synchronized($FinThreads::lock) {
			if ($FinThreads::finalizerThread == nullptr) {
				$assignStatic($FinThreads::finalizerThread, $Thread::currentThread());
				gotFinalizer = true;
			}
		}
		if (gotFinalizer) {
			$init($System);
			$nc($System::err)->println("Caught finalizer thread; sleeping..."_s);
			$Thread::sleep($Long::MAX_VALUE);
		}
	} else {
		$init($FinThreads);
		$synchronized($FinThreads::lock) {
			$assignStatic($FinThreads::finalizedBy, $Thread::currentThread());
		}
		$init($System);
		$nc($System::err)->println($$str({"Test object finalized by "_s, $FinThreads::finalizedBy}));
	}
}

FinThreads$Foo::FinThreads$Foo() {
}

$Class* FinThreads$Foo::load$($String* name, bool initialize) {
	$loadClass(FinThreads$Foo, name, initialize, &_FinThreads$Foo_ClassInfo_, allocate$FinThreads$Foo);
	return class$;
}

$Class* FinThreads$Foo::class$ = nullptr;