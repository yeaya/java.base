#include <DumpStackTest.h>

#include <DumpStackTest$1.h>
#include <DumpStackTest$CallFrame.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef TYPE

using $DumpStackTest$1 = ::DumpStackTest$1;
using $DumpStackTest$CallFrame = ::DumpStackTest$CallFrame;
using $DumpStackTest$CallFrameArray = $Array<DumpStackTest$CallFrame>;
using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;

class DumpStackTest$$Lambda$lambda$testLambda$0 : public $Consumer {
	$class(DumpStackTest$$Lambda$lambda$testLambda$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* x) override {
		DumpStackTest::lambda$testLambda$0($cast($Void, x));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DumpStackTest$$Lambda$lambda$testLambda$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DumpStackTest$$Lambda$lambda$testLambda$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DumpStackTest$$Lambda$lambda$testLambda$0::*)()>(&DumpStackTest$$Lambda$lambda$testLambda$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DumpStackTest$$Lambda$lambda$testLambda$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"DumpStackTest$$Lambda$lambda$testLambda$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* DumpStackTest$$Lambda$lambda$testLambda$0::load$($String* name, bool initialize) {
	$loadClass(DumpStackTest$$Lambda$lambda$testLambda$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DumpStackTest$$Lambda$lambda$testLambda$0::class$ = nullptr;

class DumpStackTest$$Lambda$lambda$assertStackTrace$1$1 : public $Consumer {
	$class(DumpStackTest$$Lambda$lambda$assertStackTrace$1$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* e) override {
		DumpStackTest::lambda$assertStackTrace$1($cast($StackTraceElement, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DumpStackTest$$Lambda$lambda$assertStackTrace$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DumpStackTest$$Lambda$lambda$assertStackTrace$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DumpStackTest$$Lambda$lambda$assertStackTrace$1$1::*)()>(&DumpStackTest$$Lambda$lambda$assertStackTrace$1$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DumpStackTest$$Lambda$lambda$assertStackTrace$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DumpStackTest$$Lambda$lambda$assertStackTrace$1$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* DumpStackTest$$Lambda$lambda$assertStackTrace$1$1::load$($String* name, bool initialize) {
	$loadClass(DumpStackTest$$Lambda$lambda$assertStackTrace$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DumpStackTest$$Lambda$lambda$assertStackTrace$1$1::class$ = nullptr;

class DumpStackTest$$Lambda$lambda$assertStackTrace$2$2 : public $Consumer {
	$class(DumpStackTest$$Lambda$lambda$assertStackTrace$2$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* e) override {
		DumpStackTest::lambda$assertStackTrace$2($cast($DumpStackTest$CallFrame, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DumpStackTest$$Lambda$lambda$assertStackTrace$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DumpStackTest$$Lambda$lambda$assertStackTrace$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DumpStackTest$$Lambda$lambda$assertStackTrace$2$2::*)()>(&DumpStackTest$$Lambda$lambda$assertStackTrace$2$2::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DumpStackTest$$Lambda$lambda$assertStackTrace$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"DumpStackTest$$Lambda$lambda$assertStackTrace$2$2",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* DumpStackTest$$Lambda$lambda$assertStackTrace$2$2::load$($String* name, bool initialize) {
	$loadClass(DumpStackTest$$Lambda$lambda$assertStackTrace$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DumpStackTest$$Lambda$lambda$assertStackTrace$2$2::class$ = nullptr;

$MethodInfo _DumpStackTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DumpStackTest::*)()>(&DumpStackTest::init$))},
	{"assertEquals", "(Ljava/lang/StackTraceElement;LDumpStackTest$CallFrame;I)V", nullptr, $STATIC, $method(static_cast<void(*)($StackTraceElement*,$DumpStackTest$CallFrame*,int32_t)>(&DumpStackTest::assertEquals))},
	{"assertStackTrace", "([Ljava/lang/StackTraceElement;[LDumpStackTest$CallFrame;)V", nullptr, $STATIC, $method(static_cast<void(*)($StackTraceElementArray*,$DumpStackTest$CallFrameArray*)>(&DumpStackTest::assertStackTrace))},
	{"consumeLambda", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&DumpStackTest::consumeLambda))},
	{"getStackTrace", "([LDumpStackTest$CallFrame;)V", nullptr, $STATIC, $method(static_cast<void(*)($DumpStackTest$CallFrameArray*)>(&DumpStackTest::getStackTrace))},
	{"lambda$assertStackTrace$1", "(Ljava/lang/StackTraceElement;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StackTraceElement*)>(&DumpStackTest::lambda$assertStackTrace$1))},
	{"lambda$assertStackTrace$2", "(LDumpStackTest$CallFrame;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($DumpStackTest$CallFrame*)>(&DumpStackTest::lambda$assertStackTrace$2))},
	{"lambda$testLambda$0", "(Ljava/lang/Void;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Void*)>(&DumpStackTest::lambda$testLambda$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DumpStackTest::main))},
	{"methodHandle", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&DumpStackTest::methodHandle))},
	{"methodInvoke", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&DumpStackTest::methodInvoke))},
	{"test", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&DumpStackTest::test))},
	{"testLambda", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&DumpStackTest::testLambda))},
	{"testMethodHandle", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&DumpStackTest::testMethodHandle))},
	{"testMethodInvoke", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&DumpStackTest::testMethodInvoke))},
	{"testThread", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&DumpStackTest::testThread))},
	{}
};

$InnerClassInfo _DumpStackTest_InnerClassesInfo_[] = {
	{"DumpStackTest$CallFrame", "DumpStackTest", "CallFrame", $STATIC},
	{"DumpStackTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DumpStackTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DumpStackTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DumpStackTest_MethodInfo_,
	nullptr,
	nullptr,
	_DumpStackTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"DumpStackTest$CallFrame,DumpStackTest$1"
};

$Object* allocate$DumpStackTest($Class* clazz) {
	return $of($alloc(DumpStackTest));
}

void DumpStackTest::init$() {
}

void DumpStackTest::main($StringArray* args) {
	test();
	testThread();
	testLambda();
	testMethodInvoke();
	testMethodHandle();
}

void DumpStackTest::test() {
	$useLocalCurrentObjectStackCache();
	$load(DumpStackTest);
	$load($Method);
	$var($DumpStackTest$CallFrameArray, callStack, $new($DumpStackTest$CallFrameArray, {
		$$new($DumpStackTest$CallFrame, $Thread::class$, "getStackTrace"_s),
		$$new($DumpStackTest$CallFrame, DumpStackTest::class$, "test"_s),
		$$new($DumpStackTest$CallFrame, DumpStackTest::class$, "main"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.NativeMethodAccessorImpl"_s, "invoke0"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.NativeMethodAccessorImpl"_s, "invoke"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.DelegatingMethodAccessorImpl"_s, "invoke"_s),
		$$new($DumpStackTest$CallFrame, $Method::class$, "invoke"_s),
		$$new($DumpStackTest$CallFrame, $Thread::class$, "run"_s)
	}));
	assertStackTrace($($($Thread::currentThread())->getStackTrace()), callStack);
	getStackTrace(callStack);
}

void DumpStackTest::getStackTrace($DumpStackTest$CallFrameArray* callStack) {
	$useLocalCurrentObjectStackCache();
	$load(DumpStackTest);
	$nc(callStack)->set(0, $$new($DumpStackTest$CallFrame, DumpStackTest::class$, "getStackTrace"_s));
	try {
		$throwNew($RuntimeException);
	} catch ($RuntimeException& ex) {
		assertStackTrace($(ex->getStackTrace()), callStack);
	}
}

void DumpStackTest::testThread() {
	$var($Thread, t1, $new($DumpStackTest$1));
	t1->start();
	try {
		t1->join();
	} catch ($InterruptedException& e) {
	}
}

void DumpStackTest::testLambda() {
	$var($Consumer, c, static_cast<$Consumer*>($new(DumpStackTest$$Lambda$lambda$testLambda$0)));
	$nc(c)->accept(nullptr);
}

void DumpStackTest::consumeLambda() {
	$useLocalCurrentObjectStackCache();
	$load(DumpStackTest);
	$load($Method);
	$var($DumpStackTest$CallFrameArray, callStack, $new($DumpStackTest$CallFrameArray, {
		$$new($DumpStackTest$CallFrame, $Thread::class$, "getStackTrace"_s),
		$$new($DumpStackTest$CallFrame, DumpStackTest::class$, "consumeLambda"_s),
		$$new($DumpStackTest$CallFrame, DumpStackTest::class$, "lambda$testLambda$0"_s),
		$$new($DumpStackTest$CallFrame, DumpStackTest::class$, "testLambda"_s),
		$$new($DumpStackTest$CallFrame, DumpStackTest::class$, "main"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.NativeMethodAccessorImpl"_s, "invoke0"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.NativeMethodAccessorImpl"_s, "invoke"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.DelegatingMethodAccessorImpl"_s, "invoke"_s),
		$$new($DumpStackTest$CallFrame, $Method::class$, "invoke"_s),
		$$new($DumpStackTest$CallFrame, $Thread::class$, "run"_s)
	}));
	assertStackTrace($($($Thread::currentThread())->getStackTrace()), callStack);
	DumpStackTest::getStackTrace(callStack);
}

void DumpStackTest::testMethodInvoke() {
	$load(DumpStackTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($Method, m, DumpStackTest::class$->getDeclaredMethod("methodInvoke"_s, $$new($ClassArray, 0)));
		$nc(m)->invoke(nullptr, $$new($ObjectArray, 0));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void DumpStackTest::methodInvoke() {
	$useLocalCurrentObjectStackCache();
	$load(DumpStackTest);
	$load($Method);
	$var($DumpStackTest$CallFrameArray, callStack, $new($DumpStackTest$CallFrameArray, {
		$$new($DumpStackTest$CallFrame, $Thread::class$, "getStackTrace"_s),
		$$new($DumpStackTest$CallFrame, DumpStackTest::class$, "methodInvoke"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.NativeMethodAccessorImpl"_s, "invoke0"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.NativeMethodAccessorImpl"_s, "invoke"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.DelegatingMethodAccessorImpl"_s, "invoke"_s),
		$$new($DumpStackTest$CallFrame, $Method::class$, "invoke"_s),
		$$new($DumpStackTest$CallFrame, DumpStackTest::class$, "testMethodInvoke"_s),
		$$new($DumpStackTest$CallFrame, DumpStackTest::class$, "main"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.NativeMethodAccessorImpl"_s, "invoke0"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.NativeMethodAccessorImpl"_s, "invoke"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.DelegatingMethodAccessorImpl"_s, "invoke"_s),
		$$new($DumpStackTest$CallFrame, $Method::class$, "invoke"_s),
		$$new($DumpStackTest$CallFrame, $Thread::class$, "run"_s)
	}));
	assertStackTrace($($($Thread::currentThread())->getStackTrace()), callStack);
	DumpStackTest::getStackTrace(callStack);
}

void DumpStackTest::testMethodHandle() {
	$load(DumpStackTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($MethodHandles$Lookup, lookup, $MethodHandles::lookup());
	try {
		$init($Void);
		$var($MethodHandle, handle, $nc(lookup)->findStatic(DumpStackTest::class$, "methodHandle"_s, $($MethodType::methodType($Void::TYPE))));
		$nc(handle)->invoke($$new($ObjectArray, 0));
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, t);
	}
}

void DumpStackTest::methodHandle() {
	$useLocalCurrentObjectStackCache();
	$load(DumpStackTest);
	$load($Method);
	$var($DumpStackTest$CallFrameArray, callStack, $new($DumpStackTest$CallFrameArray, {
		$$new($DumpStackTest$CallFrame, $Thread::class$, "getStackTrace"_s),
		$$new($DumpStackTest$CallFrame, DumpStackTest::class$, "methodHandle"_s),
		$$new($DumpStackTest$CallFrame, DumpStackTest::class$, "testMethodHandle"_s),
		$$new($DumpStackTest$CallFrame, DumpStackTest::class$, "main"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.NativeMethodAccessorImpl"_s, "invoke0"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.NativeMethodAccessorImpl"_s, "invoke"_s),
		$$new($DumpStackTest$CallFrame, "jdk.internal.reflect.DelegatingMethodAccessorImpl"_s, "invoke"_s),
		$$new($DumpStackTest$CallFrame, $Method::class$, "invoke"_s),
		$$new($DumpStackTest$CallFrame, $Thread::class$, "run"_s)
	}));
	assertStackTrace($($($Thread::currentThread())->getStackTrace()), callStack);
	DumpStackTest::getStackTrace(callStack);
}

void DumpStackTest::assertStackTrace($StackTraceElementArray* actual, $DumpStackTest$CallFrameArray* expected) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("--- Actual ---"_s);
	$nc($($Arrays::stream(actual)))->forEach(static_cast<$Consumer*>($$new(DumpStackTest$$Lambda$lambda$assertStackTrace$1$1)));
	$nc($System::out)->println("--- Expected ---"_s);
	$nc($($Arrays::stream(expected)))->forEach(static_cast<$Consumer*>($$new(DumpStackTest$$Lambda$lambda$assertStackTrace$2$2)));
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < $nc(actual)->length; ++i) {
			if ($nc($($nc(actual->get(i))->getClassName()))->startsWith("com.sun.javatest.regtest"_s)) {
				continue;
			}
			assertEquals(actual->get(i), $nc(expected)->get(j++), i);
		}
	}
}

void DumpStackTest::assertEquals($StackTraceElement* actual, $DumpStackTest$CallFrame* expected, int32_t idx) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = !$nc($($nc(actual)->getClassName()))->equals($($nc(expected)->getClassName()));
	bool var$0 = var$1 || !$nc($($nc(actual)->getFileName()))->equals($($nc(expected)->getFileName()));
	if (var$0 || !$nc($($nc(actual)->getMethodName()))->equals($($nc(expected)->getMethodName()))) {
		$throwNew($RuntimeException, $$str({"StackTraceElements mismatch at index "_s, $$str(idx), ". Expected ["_s, expected, "], but get ["_s, actual, "]"_s}));
	}
}

void DumpStackTest::lambda$assertStackTrace$2($DumpStackTest$CallFrame* e) {
	$nc($System::out)->println($of(e));
}

void DumpStackTest::lambda$assertStackTrace$1($StackTraceElement* e) {
	$nc($System::out)->println($of(e));
}

void DumpStackTest::lambda$testLambda$0($Void* x) {
	consumeLambda();
}

DumpStackTest::DumpStackTest() {
}

$Class* DumpStackTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DumpStackTest$$Lambda$lambda$testLambda$0::classInfo$.name)) {
			return DumpStackTest$$Lambda$lambda$testLambda$0::load$(name, initialize);
		}
		if (name->equals(DumpStackTest$$Lambda$lambda$assertStackTrace$1$1::classInfo$.name)) {
			return DumpStackTest$$Lambda$lambda$assertStackTrace$1$1::load$(name, initialize);
		}
		if (name->equals(DumpStackTest$$Lambda$lambda$assertStackTrace$2$2::classInfo$.name)) {
			return DumpStackTest$$Lambda$lambda$assertStackTrace$2$2::load$(name, initialize);
		}
	}
	$loadClass(DumpStackTest, name, initialize, &_DumpStackTest_ClassInfo_, allocate$DumpStackTest);
	return class$;
}

$Class* DumpStackTest::class$ = nullptr;