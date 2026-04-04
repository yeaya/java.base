#include <GetResource$2.h>
#include <GetResource.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InterruptedException.h>
#include <java/net/URL.h>
#include <java/util/concurrent/BrokenBarrierException.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

using $GetResource = ::GetResource;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $BrokenBarrierException = ::java::util::concurrent::BrokenBarrierException;

void GetResource$2::init$($GetResource* this$0) {
	$set(this, this$0, this$0);
	$Thread::init$();
}

void GetResource$2::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$nc($System::out)->println("Thread 2 ready"_s);
	try {
		$nc(this->this$0->go)->await();
		$var($URL, u1, $$nc($($Thread::currentThread())->getContextClassLoader())->getResource("unknownresource"_s));
		$nc(this->this$0->done)->await();
	} catch ($InterruptedException& e) {
		$throwNew($RuntimeException, e);
	} catch ($BrokenBarrierException& e) {
		$throwNew($RuntimeException, e);
	}
	$System::out->println("Thread 2 exits"_s);
}

GetResource$2::GetResource$2() {
}

$Class* GetResource$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LGetResource;", nullptr, $FINAL | $SYNTHETIC, $field(GetResource$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetResource;)V", nullptr, 0, $method(GetResource$2, init$, void, $GetResource*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetResource$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GetResource",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetResource$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetResource$2",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetResource"
	};
	$loadClass(GetResource$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetResource$2);
	});
	return class$;
}

$Class* GetResource$2::class$ = nullptr;