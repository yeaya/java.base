#include <ReferenceEnqueue.h>

#include <ReferenceEnqueue$ExplicitEnqueue.h>
#include <ReferenceEnqueue$WeakRef.h>
#include <jcpp.h>

using $ReferenceEnqueue$ExplicitEnqueue = ::ReferenceEnqueue$ExplicitEnqueue;
using $ReferenceEnqueue$WeakRef = ::ReferenceEnqueue$WeakRef;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReferenceEnqueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ReferenceEnqueue, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReferenceEnqueue, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ReferenceEnqueue_InnerClassesInfo_[] = {
	{"ReferenceEnqueue$ExplicitEnqueue", "ReferenceEnqueue", "ExplicitEnqueue", $STATIC},
	{"ReferenceEnqueue$WeakRef", "ReferenceEnqueue", "WeakRef", $STATIC},
	{}
};

$ClassInfo _ReferenceEnqueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReferenceEnqueue",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReferenceEnqueue_MethodInfo_,
	nullptr,
	nullptr,
	_ReferenceEnqueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ReferenceEnqueue$ExplicitEnqueue,ReferenceEnqueue$WeakRef"
};

$Object* allocate$ReferenceEnqueue($Class* clazz) {
	return $of($alloc(ReferenceEnqueue));
}

void ReferenceEnqueue::init$() {
}

void ReferenceEnqueue::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < 5; ++i) {
		$$new($ReferenceEnqueue$WeakRef)->run();
		$$new($ReferenceEnqueue$ExplicitEnqueue)->run();
	}
	$nc($System::out)->println("Test passed."_s);
}

ReferenceEnqueue::ReferenceEnqueue() {
}

$Class* ReferenceEnqueue::load$($String* name, bool initialize) {
	$loadClass(ReferenceEnqueue, name, initialize, &_ReferenceEnqueue_ClassInfo_, allocate$ReferenceEnqueue);
	return class$;
}

$Class* ReferenceEnqueue::class$ = nullptr;