#include <VerifyStackTrace.h>

#include <VerifyStackTrace$1.h>
#include <VerifyStackTrace$Handle.h>
#include <VerifyStackTrace$Recorder.h>
#include <VerifyStackTrace$TestCase.h>
#include <VerifyStackTrace$TestCase1.h>
#include <VerifyStackTrace$TestCase2.h>
#include <VerifyStackTrace$TestCase3.h>
#include <VerifyStackTrace$TestCase4.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $VerifyStackTrace$1 = ::VerifyStackTrace$1;
using $VerifyStackTrace$Handle = ::VerifyStackTrace$Handle;
using $VerifyStackTrace$Recorder = ::VerifyStackTrace$Recorder;
using $VerifyStackTrace$TestCase = ::VerifyStackTrace$TestCase;
using $VerifyStackTrace$TestCase1 = ::VerifyStackTrace$TestCase1;
using $VerifyStackTrace$TestCase2 = ::VerifyStackTrace$TestCase2;
using $VerifyStackTrace$TestCase3 = ::VerifyStackTrace$TestCase3;
using $VerifyStackTrace$TestCase4 = ::VerifyStackTrace$TestCase4;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Objects = ::java::util::Objects;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $Consumer = ::java::util::function::Consumer;

class VerifyStackTrace$$Lambda$lambda$test$1 : public $Runnable {
	$class(VerifyStackTrace$$Lambda$lambda$test$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($VerifyStackTrace$TestCase* test, $VerifyStackTrace$Recorder* recorder, $AtomicLong* counter, $StringBuilder* builder) {
		$set(this, test, test);
		$set(this, recorder, recorder);
		$set(this, counter, counter);
		$set(this, builder, builder);
	}
	virtual void run() override {
		VerifyStackTrace::lambda$test$1(test, recorder, counter, builder);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VerifyStackTrace$$Lambda$lambda$test$1>());
	}
	$VerifyStackTrace$TestCase* test = nullptr;
	$VerifyStackTrace$Recorder* recorder = nullptr;
	$AtomicLong* counter = nullptr;
	$StringBuilder* builder = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo VerifyStackTrace$$Lambda$lambda$test$1::fieldInfos[5] = {
	{"test", "LVerifyStackTrace$TestCase;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$1, test)},
	{"recorder", "LVerifyStackTrace$Recorder;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$1, recorder)},
	{"counter", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$1, counter)},
	{"builder", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$1, builder)},
	{}
};
$MethodInfo VerifyStackTrace$$Lambda$lambda$test$1::methodInfos[3] = {
	{"<init>", "(LVerifyStackTrace$TestCase;LVerifyStackTrace$Recorder;Ljava/util/concurrent/atomic/AtomicLong;Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(VerifyStackTrace$$Lambda$lambda$test$1::*)($VerifyStackTrace$TestCase*,$VerifyStackTrace$Recorder*,$AtomicLong*,$StringBuilder*)>(&VerifyStackTrace$$Lambda$lambda$test$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo VerifyStackTrace$$Lambda$lambda$test$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"VerifyStackTrace$$Lambda$lambda$test$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* VerifyStackTrace$$Lambda$lambda$test$1::load$($String* name, bool initialize) {
	$loadClass(VerifyStackTrace$$Lambda$lambda$test$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VerifyStackTrace$$Lambda$lambda$test$1::class$ = nullptr;

class VerifyStackTrace$$Lambda$lambda$test$0$1 : public $Consumer {
	$class(VerifyStackTrace$$Lambda$lambda$test$0$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($VerifyStackTrace$Recorder* recorder, $AtomicLong* counter, $StringBuilder* builder) {
		$set(this, recorder, recorder);
		$set(this, counter, counter);
		$set(this, builder, builder);
	}
	virtual void accept(Object$* f) override {
		VerifyStackTrace::lambda$test$0(recorder, counter, builder, $cast($StackWalker$StackFrame, f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VerifyStackTrace$$Lambda$lambda$test$0$1>());
	}
	$VerifyStackTrace$Recorder* recorder = nullptr;
	$AtomicLong* counter = nullptr;
	$StringBuilder* builder = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo VerifyStackTrace$$Lambda$lambda$test$0$1::fieldInfos[4] = {
	{"recorder", "LVerifyStackTrace$Recorder;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$0$1, recorder)},
	{"counter", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$0$1, counter)},
	{"builder", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$0$1, builder)},
	{}
};
$MethodInfo VerifyStackTrace$$Lambda$lambda$test$0$1::methodInfos[3] = {
	{"<init>", "(LVerifyStackTrace$Recorder;Ljava/util/concurrent/atomic/AtomicLong;Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(VerifyStackTrace$$Lambda$lambda$test$0$1::*)($VerifyStackTrace$Recorder*,$AtomicLong*,$StringBuilder*)>(&VerifyStackTrace$$Lambda$lambda$test$0$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo VerifyStackTrace$$Lambda$lambda$test$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"VerifyStackTrace$$Lambda$lambda$test$0$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* VerifyStackTrace$$Lambda$lambda$test$0$1::load$($String* name, bool initialize) {
	$loadClass(VerifyStackTrace$$Lambda$lambda$test$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VerifyStackTrace$$Lambda$lambda$test$0$1::class$ = nullptr;

$MethodInfo _VerifyStackTrace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VerifyStackTrace::*)()>(&VerifyStackTrace::init$))},
	{"invoke", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Runnable*)>(&VerifyStackTrace::invoke))},
	{"lambda$test$0", "(LVerifyStackTrace$Recorder;Ljava/util/concurrent/atomic/AtomicLong;Ljava/lang/StringBuilder;Ljava/lang/StackWalker$StackFrame;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($VerifyStackTrace$Recorder*,$AtomicLong*,$StringBuilder*,$StackWalker$StackFrame*)>(&VerifyStackTrace::lambda$test$0))},
	{"lambda$test$1", "(LVerifyStackTrace$TestCase;LVerifyStackTrace$Recorder;Ljava/util/concurrent/atomic/AtomicLong;Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($VerifyStackTrace$TestCase*,$VerifyStackTrace$Recorder*,$AtomicLong*,$StringBuilder*)>(&VerifyStackTrace::lambda$test$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&VerifyStackTrace::main))},
	{"prepare", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,bool)>(&VerifyStackTrace::prepare))},
	{"test", "(LVerifyStackTrace$TestCase;)V", nullptr, $STATIC, $method(static_cast<void(*)($VerifyStackTrace$TestCase*)>(&VerifyStackTrace::test))},
	{}
};

$InnerClassInfo _VerifyStackTrace_InnerClassesInfo_[] = {
	{"VerifyStackTrace$Recorder", "VerifyStackTrace", "Recorder", $STATIC | $FINAL},
	{"VerifyStackTrace$Handle", "VerifyStackTrace", "Handle", $PUBLIC | $STATIC},
	{"VerifyStackTrace$TestCase4", "VerifyStackTrace", "TestCase4", $STATIC | $FINAL},
	{"VerifyStackTrace$TestCase3", "VerifyStackTrace", "TestCase3", $STATIC},
	{"VerifyStackTrace$TestCase2", "VerifyStackTrace", "TestCase2", $STATIC | $FINAL},
	{"VerifyStackTrace$TestCase1", "VerifyStackTrace", "TestCase1", $STATIC | $FINAL},
	{"VerifyStackTrace$TestCase", "VerifyStackTrace", "TestCase", $STATIC | $INTERFACE | $ABSTRACT},
	{"VerifyStackTrace$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _VerifyStackTrace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"VerifyStackTrace",
	"java.lang.Object",
	nullptr,
	nullptr,
	_VerifyStackTrace_MethodInfo_,
	nullptr,
	nullptr,
	_VerifyStackTrace_InnerClassesInfo_,
	nullptr,
	nullptr,
	"VerifyStackTrace$Recorder,VerifyStackTrace$Handle,VerifyStackTrace$TestCase4,VerifyStackTrace$TestCase3,VerifyStackTrace$TestCase2,VerifyStackTrace$TestCase1,VerifyStackTrace$TestCase,VerifyStackTrace$1"
};

$Object* allocate$VerifyStackTrace($Class* clazz) {
	return $of($alloc(VerifyStackTrace));
}

void VerifyStackTrace::init$() {
}

$String* VerifyStackTrace::prepare($String* produced, bool eraseSensitiveInfo) {
	$useLocalCurrentObjectStackCache();
	if (eraseSensitiveInfo) {
		return $($($($($($($($nc(produced)->replaceAll(":[1-9][0-9]*\\)"_s, ":00)"_s))->replaceAll("/0x[0-9a-f]+\\.run"_s, "/xxxxxxxx.run"_s))->replaceAll("/0x[0-9a-f]+\\.invoke"_s, "/xxxxxxxx.invoke"_s))->replaceAll("DirectMethodHandle\\$Holder"_s, "LambdaForm\\$DMH"_s))->replaceAll("Invokers\\$Holder"_s, "LambdaForm\\$MH"_s))->replaceAll("MH\\.invoke"_s, "MH/xxxxxxxx.invoke"_s))->replaceAll("xx\\.invoke([A-Za-z]*)_[A-Z_]+"_s, "xx.invoke$1"_s))->replaceAll("\\$[0-9]+"_s, "\\$??"_s);
	} else {
		return produced;
	}
}

void VerifyStackTrace::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	test($$new($VerifyStackTrace$TestCase1));
	test($$new($VerifyStackTrace$TestCase2));
	test($$new($VerifyStackTrace$TestCase3));
	test($$new($VerifyStackTrace$TestCase4));
}

void VerifyStackTrace::invoke($Runnable* run) {
	$nc(run)->run();
}

void VerifyStackTrace::test($VerifyStackTrace$TestCase* test) {
	$load(VerifyStackTrace);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($System::out)->println($$str({"\nTesting: "_s, $($nc(test)->description())}));
	$var($AtomicLong, counter, $new($AtomicLong));
	$var($StringBuilder, builder, $new($StringBuilder));
	$var($VerifyStackTrace$Recorder, recorder, $new($VerifyStackTrace$Recorder));
	$var($Runnable, run, static_cast<$Runnable*>($new(VerifyStackTrace$$Lambda$lambda$test$1, test, recorder, counter, builder)));
	$var($VerifyStackTrace$Handle, handle, $new($VerifyStackTrace$Handle, run));
	$var($PrivilegedAction, pa, $new($VerifyStackTrace$1, handle));
	$AccessController::doPrivileged(pa);
	$nc($System::out)->println($$str({"Main found: "_s, $$str(recorder->found)}));
	$var($Object, var$0, $of(prepare($($nc(test)->expected()), true)));
	if (!$Objects::equals(var$0, $(prepare($(builder->toString()), true)))) {
		$nc($System::out)->flush();
		try {
			$Thread::sleep(1000);
		} catch ($InterruptedException& ex) {
		}
		$var($String, var$1, $$str({"\nUnexpected stack trace: \n<!-- expected -->\n"_s, $(prepare($($nc(test)->expected()), true)), "\n<--  actual -->\n"_s}));
		$nc($System::err)->println($$concat(var$1, $(prepare($(builder->toString()), false))));
	}
}

void VerifyStackTrace::lambda$test$1($VerifyStackTrace$TestCase* test, $VerifyStackTrace$Recorder* recorder, $AtomicLong* counter, $StringBuilder* builder) {
	$load(VerifyStackTrace);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($($nc(test)->walker()))->forEach(static_cast<$Consumer*>($$new(VerifyStackTrace$$Lambda$lambda$test$0$1, recorder, counter, builder)));
}

void VerifyStackTrace::lambda$test$0($VerifyStackTrace$Recorder* recorder, $AtomicLong* counter, $StringBuilder* builder, $StackWalker$StackFrame* f) {
	$nc(recorder)->recordSTE($nc(counter)->incrementAndGet(), builder, f);
}

VerifyStackTrace::VerifyStackTrace() {
}

$Class* VerifyStackTrace::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(VerifyStackTrace$$Lambda$lambda$test$1::classInfo$.name)) {
			return VerifyStackTrace$$Lambda$lambda$test$1::load$(name, initialize);
		}
		if (name->equals(VerifyStackTrace$$Lambda$lambda$test$0$1::classInfo$.name)) {
			return VerifyStackTrace$$Lambda$lambda$test$0$1::load$(name, initialize);
		}
	}
	$loadClass(VerifyStackTrace, name, initialize, &_VerifyStackTrace_ClassInfo_, allocate$VerifyStackTrace);
	return class$;
}

$Class* VerifyStackTrace::class$ = nullptr;