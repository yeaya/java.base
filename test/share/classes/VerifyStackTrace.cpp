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
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
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
	$VerifyStackTrace$TestCase* test = nullptr;
	$VerifyStackTrace$Recorder* recorder = nullptr;
	$AtomicLong* counter = nullptr;
	$StringBuilder* builder = nullptr;
};
$Class* VerifyStackTrace$$Lambda$lambda$test$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"test", "LVerifyStackTrace$TestCase;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$1, test)},
		{"recorder", "LVerifyStackTrace$Recorder;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$1, recorder)},
		{"counter", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$1, counter)},
		{"builder", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$1, builder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LVerifyStackTrace$TestCase;LVerifyStackTrace$Recorder;Ljava/util/concurrent/atomic/AtomicLong;Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(VerifyStackTrace$$Lambda$lambda$test$1, init$, void, $VerifyStackTrace$TestCase*, $VerifyStackTrace$Recorder*, $AtomicLong*, $StringBuilder*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(VerifyStackTrace$$Lambda$lambda$test$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"VerifyStackTrace$$Lambda$lambda$test$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VerifyStackTrace$$Lambda$lambda$test$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VerifyStackTrace$$Lambda$lambda$test$1);
	});
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
	$VerifyStackTrace$Recorder* recorder = nullptr;
	$AtomicLong* counter = nullptr;
	$StringBuilder* builder = nullptr;
};
$Class* VerifyStackTrace$$Lambda$lambda$test$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"recorder", "LVerifyStackTrace$Recorder;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$0$1, recorder)},
		{"counter", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$0$1, counter)},
		{"builder", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(VerifyStackTrace$$Lambda$lambda$test$0$1, builder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LVerifyStackTrace$Recorder;Ljava/util/concurrent/atomic/AtomicLong;Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(VerifyStackTrace$$Lambda$lambda$test$0$1, init$, void, $VerifyStackTrace$Recorder*, $AtomicLong*, $StringBuilder*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(VerifyStackTrace$$Lambda$lambda$test$0$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"VerifyStackTrace$$Lambda$lambda$test$0$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VerifyStackTrace$$Lambda$lambda$test$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VerifyStackTrace$$Lambda$lambda$test$0$1);
	});
	return class$;
}
$Class* VerifyStackTrace$$Lambda$lambda$test$0$1::class$ = nullptr;

void VerifyStackTrace::init$() {
}

$String* VerifyStackTrace::prepare($String* produced, bool eraseSensitiveInfo) {
	$useLocalObjectStack();
	if (eraseSensitiveInfo) {
		return $($($($($($($($nc(produced)->replaceAll(":[1-9][0-9]*\\)"_s, ":00)"_s))->replaceAll("/0x[0-9a-f]+\\.run"_s, "/xxxxxxxx.run"_s))->replaceAll("/0x[0-9a-f]+\\.invoke"_s, "/xxxxxxxx.invoke"_s))->replaceAll("DirectMethodHandle\\$Holder"_s, "LambdaForm\\$DMH"_s))->replaceAll("Invokers\\$Holder"_s, "LambdaForm\\$MH"_s))->replaceAll("MH\\.invoke"_s, "MH/xxxxxxxx.invoke"_s))->replaceAll("xx\\.invoke([A-Za-z]*)_[A-Z_]+"_s, "xx.invoke$1"_s))->replaceAll("\\$[0-9]+"_s, "\\$??"_s);
	} else {
		return produced;
	}
}

void VerifyStackTrace::main($StringArray* args) {
	$useLocalObjectStack();
	test($$new($VerifyStackTrace$TestCase1));
	test($$new($VerifyStackTrace$TestCase2));
	test($$new($VerifyStackTrace$TestCase3));
	test($$new($VerifyStackTrace$TestCase4));
}

void VerifyStackTrace::invoke($Runnable* run) {
	$nc(run)->run();
}

void VerifyStackTrace::test($VerifyStackTrace$TestCase* test) {
	$useLocalObjectStack();
	$load(VerifyStackTrace);
	$beforeCallerSensitive();
	$nc($System::out)->println($$str({"\nTesting: "_s, $($nc(test)->description())}));
	$var($AtomicLong, counter, $new($AtomicLong));
	$var($StringBuilder, builder, $new($StringBuilder));
	$var($VerifyStackTrace$Recorder, recorder, $new($VerifyStackTrace$Recorder));
	$var($Runnable, run, $new(VerifyStackTrace$$Lambda$lambda$test$1, test, recorder, counter, builder));
	$var($VerifyStackTrace$Handle, handle, $new($VerifyStackTrace$Handle, run));
	$var($PrivilegedAction, pa, $new($VerifyStackTrace$1, handle));
	$AccessController::doPrivileged(pa);
	$System::out->println($$str({"Main found: "_s, $$str(recorder->found)}));
	$var($Object, var$0, prepare($(test->expected()), true));
	if (!$Objects::equals(var$0, $(prepare($(builder->toString()), true)))) {
		$System::out->flush();
		try {
			$Thread::sleep(1000);
		} catch ($InterruptedException& ex) {
		}
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("\nUnexpected stack trace: \n<!-- expected -->\n"_s);
		var$1->append($(prepare($(test->expected()), true)));
		var$1->append("\n<--  actual -->\n"_s);
		var$1->append($(prepare($(builder->toString()), false)));
		$nc($System::err)->println($$str(var$1));
	}
}

void VerifyStackTrace::lambda$test$1($VerifyStackTrace$TestCase* test, $VerifyStackTrace$Recorder* recorder, $AtomicLong* counter, $StringBuilder* builder) {
	$useLocalObjectStack();
	$load(VerifyStackTrace);
	$beforeCallerSensitive();
	$$nc($nc(test)->walker())->forEach($$new(VerifyStackTrace$$Lambda$lambda$test$0$1, recorder, counter, builder));
}

void VerifyStackTrace::lambda$test$0($VerifyStackTrace$Recorder* recorder, $AtomicLong* counter, $StringBuilder* builder, $StackWalker$StackFrame* f) {
	$nc(recorder)->recordSTE($nc(counter)->incrementAndGet(), builder, f);
}

VerifyStackTrace::VerifyStackTrace() {
}

$Class* VerifyStackTrace::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("VerifyStackTrace$$Lambda$lambda$test$1")) {
			return VerifyStackTrace$$Lambda$lambda$test$1::load$(name, initialize);
		}
		if (name->equals("VerifyStackTrace$$Lambda$lambda$test$0$1")) {
			return VerifyStackTrace$$Lambda$lambda$test$0$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VerifyStackTrace, init$, void)},
		{"invoke", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(VerifyStackTrace, invoke, void, $Runnable*)},
		{"lambda$test$0", "(LVerifyStackTrace$Recorder;Ljava/util/concurrent/atomic/AtomicLong;Ljava/lang/StringBuilder;Ljava/lang/StackWalker$StackFrame;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(VerifyStackTrace, lambda$test$0, void, $VerifyStackTrace$Recorder*, $AtomicLong*, $StringBuilder*, $StackWalker$StackFrame*)},
		{"lambda$test$1", "(LVerifyStackTrace$TestCase;LVerifyStackTrace$Recorder;Ljava/util/concurrent/atomic/AtomicLong;Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(VerifyStackTrace, lambda$test$1, void, $VerifyStackTrace$TestCase*, $VerifyStackTrace$Recorder*, $AtomicLong*, $StringBuilder*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(VerifyStackTrace, main, void, $StringArray*)},
		{"prepare", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(VerifyStackTrace, prepare, $String*, $String*, bool)},
		{"test", "(LVerifyStackTrace$TestCase;)V", nullptr, $STATIC, $staticMethod(VerifyStackTrace, test, void, $VerifyStackTrace$TestCase*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
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
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"VerifyStackTrace",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"VerifyStackTrace$Recorder,VerifyStackTrace$Handle,VerifyStackTrace$TestCase4,VerifyStackTrace$TestCase3,VerifyStackTrace$TestCase2,VerifyStackTrace$TestCase1,VerifyStackTrace$TestCase,VerifyStackTrace$1"
	};
	$loadClass(VerifyStackTrace, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VerifyStackTrace);
	});
	return class$;
}

$Class* VerifyStackTrace::class$ = nullptr;