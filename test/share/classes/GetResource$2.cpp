#include <GetResource$2.h>

#include <GetResource.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/concurrent/BrokenBarrierException.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

using $GetResource = ::GetResource;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $BrokenBarrierException = ::java::util::concurrent::BrokenBarrierException;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;

$FieldInfo _GetResource$2_FieldInfo_[] = {
	{"this$0", "LGetResource;", nullptr, $FINAL | $SYNTHETIC, $field(GetResource$2, this$0)},
	{}
};

$MethodInfo _GetResource$2_MethodInfo_[] = {
	{"<init>", "(LGetResource;)V", nullptr, 0, $method(static_cast<void(GetResource$2::*)($GetResource*)>(&GetResource$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GetResource$2_EnclosingMethodInfo_ = {
	"GetResource",
	"<init>",
	"()V"
};

$InnerClassInfo _GetResource$2_InnerClassesInfo_[] = {
	{"GetResource$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetResource$2_ClassInfo_ = {
	$ACC_SUPER,
	"GetResource$2",
	"java.lang.Thread",
	nullptr,
	_GetResource$2_FieldInfo_,
	_GetResource$2_MethodInfo_,
	nullptr,
	&_GetResource$2_EnclosingMethodInfo_,
	_GetResource$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetResource"
};

$Object* allocate$GetResource$2($Class* clazz) {
	return $of($alloc(GetResource$2));
}

void GetResource$2::init$($GetResource* this$0) {
	$set(this, this$0, this$0);
	$Thread::init$();
}

void GetResource$2::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($System);
	$nc($System::out)->println("Thread 2 ready"_s);
	try {
		$nc(this->this$0->go)->await();
		$var($URL, u1, $nc($($($Thread::currentThread())->getContextClassLoader()))->getResource("unknownresource"_s));
		$nc(this->this$0->done)->await();
	} catch ($InterruptedException&) {
		$var($InterruptedException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($BrokenBarrierException&) {
		$var($BrokenBarrierException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$nc($System::out)->println("Thread 2 exits"_s);
}

GetResource$2::GetResource$2() {
}

$Class* GetResource$2::load$($String* name, bool initialize) {
	$loadClass(GetResource$2, name, initialize, &_GetResource$2_ClassInfo_, allocate$GetResource$2);
	return class$;
}

$Class* GetResource$2::class$ = nullptr;