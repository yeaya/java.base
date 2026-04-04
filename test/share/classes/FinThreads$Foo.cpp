#include <FinThreads$Foo.h>
#include <FinThreads$Foo$1.h>
#include <FinThreads.h>
#include <jcpp.h>

#undef MAX_VALUE

using $FinThreads = ::FinThreads;
using $FinThreads$Foo$1 = ::FinThreads$Foo$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

void FinThreads$Foo::create(bool catchFinalizer) {
	$useLocalObjectStack();
	$var($Thread, t, $new($Thread, $$new($FinThreads$Foo$1, catchFinalizer)));
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
	$FieldInfo fieldInfos$$[] = {
		{"catchFinalizer", "Z", nullptr, 0, $field(FinThreads$Foo, catchFinalizer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(FinThreads$Foo, init$, void, bool)},
		{"create", "(Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FinThreads$Foo, create, void, bool), "java.lang.InterruptedException"},
		{"finalize", "()V", nullptr, $PUBLIC, $virtualMethod(FinThreads$Foo, finalize, void), "java.lang.InterruptedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinThreads$Foo", "FinThreads", "Foo", $STATIC},
		{"FinThreads$Foo$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FinThreads$Foo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FinThreads"
	};
	$loadClass(FinThreads$Foo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinThreads$Foo);
	});
	return class$;
}

$Class* FinThreads$Foo::class$ = nullptr;