#include <FinThreads$Foo.h>

#include <FinThreads$Foo$1.h>
#include <FinThreads.h>
#include <java/lang/Runnable.h>
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
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(FinThreads$Foo, init$, void, bool)},
	{"create", "(Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FinThreads$Foo, create, void, bool), "java.lang.InterruptedException"},
	{"finalize", "()V", nullptr, $PUBLIC, $virtualMethod(FinThreads$Foo, finalize, void), "java.lang.InterruptedException"},
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
	$useLocalCurrentObjectStackCache();
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
			$nc($System::err)->println("Caught finalizer thread; sleeping..."_s);
			$Thread::sleep($Long::MAX_VALUE);
		}
	} else {
		$init($FinThreads);
		$synchronized($FinThreads::lock) {
			$assignStatic($FinThreads::finalizedBy, $Thread::currentThread());
		}
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