#include <SelectTimeout.h>

#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/channels/Selector.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <jcpp.h>

#undef BIGGER_TIMEOUT
#undef BIG_TIMEOUT
#undef SLEEP_MILLIS

using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Selector = ::java::nio::channels::Selector;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;

class SelectTimeout$$Lambda$lambda$test$0 : public $Runnable {
	$class(SelectTimeout$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Selector* selector, int64_t timeout, $AtomicBoolean* isTimedOut, $AtomicReference* theException) {
		$set(this, selector, selector);
		this->timeout = timeout;
		$set(this, isTimedOut, isTimedOut);
		$set(this, theException, theException);
	}
	virtual void run() override {
		SelectTimeout::lambda$test$0(selector, timeout, isTimedOut, theException);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SelectTimeout$$Lambda$lambda$test$0>());
	}
	$Selector* selector = nullptr;
	int64_t timeout = 0;
	$AtomicBoolean* isTimedOut = nullptr;
	$AtomicReference* theException = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SelectTimeout$$Lambda$lambda$test$0::fieldInfos[5] = {
	{"selector", "Ljava/nio/channels/Selector;", nullptr, $PUBLIC, $field(SelectTimeout$$Lambda$lambda$test$0, selector)},
	{"timeout", "J", nullptr, $PUBLIC, $field(SelectTimeout$$Lambda$lambda$test$0, timeout)},
	{"isTimedOut", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(SelectTimeout$$Lambda$lambda$test$0, isTimedOut)},
	{"theException", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $PUBLIC, $field(SelectTimeout$$Lambda$lambda$test$0, theException)},
	{}
};
$MethodInfo SelectTimeout$$Lambda$lambda$test$0::methodInfos[3] = {
	{"<init>", "(Ljava/nio/channels/Selector;JLjava/util/concurrent/atomic/AtomicBoolean;Ljava/util/concurrent/atomic/AtomicReference;)V", nullptr, $PUBLIC, $method(SelectTimeout$$Lambda$lambda$test$0, init$, void, $Selector*, int64_t, $AtomicBoolean*, $AtomicReference*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SelectTimeout$$Lambda$lambda$test$0, run, void)},
	{}
};
$ClassInfo SelectTimeout$$Lambda$lambda$test$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"SelectTimeout$$Lambda$lambda$test$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* SelectTimeout$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$loadClass(SelectTimeout$$Lambda$lambda$test$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SelectTimeout$$Lambda$lambda$test$0::class$ = nullptr;

$FieldInfo _SelectTimeout_FieldInfo_[] = {
	{"BIG_TIMEOUT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SelectTimeout, BIG_TIMEOUT)},
	{"BIGGER_TIMEOUT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SelectTimeout, BIGGER_TIMEOUT)},
	{"SLEEP_MILLIS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SelectTimeout, SLEEP_MILLIS)},
	{}
};

$MethodInfo _SelectTimeout_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SelectTimeout, init$, void)},
	{"lambda$test$0", "(Ljava/nio/channels/Selector;JLjava/util/concurrent/atomic/AtomicBoolean;Ljava/util/concurrent/atomic/AtomicReference;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SelectTimeout, lambda$test$0, void, $Selector*, int64_t, $AtomicBoolean*, $AtomicReference*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SelectTimeout, main, void, $StringArray*), "java.io.IOException,java.lang.InterruptedException"},
	{"test", "(J)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(SelectTimeout, test, bool, int64_t), "java.lang.InterruptedException,java.io.IOException"},
	{}
};

$ClassInfo _SelectTimeout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SelectTimeout",
	"java.lang.Object",
	nullptr,
	_SelectTimeout_FieldInfo_,
	_SelectTimeout_MethodInfo_
};

$Object* allocate$SelectTimeout($Class* clazz) {
	return $of($alloc(SelectTimeout));
}

void SelectTimeout::init$() {
}

void SelectTimeout::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($longs, timeouts, $new($longs, {
		(int64_t)1,
		SelectTimeout::BIG_TIMEOUT / 2,
		SelectTimeout::BIG_TIMEOUT - 1,
		SelectTimeout::BIG_TIMEOUT,
		SelectTimeout::BIGGER_TIMEOUT
	}));
	{
		$var($longs, arr$, timeouts);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int64_t t = arr$->get(i$);
			{
				if (!test(t)) {
					++failures;
				}
			}
		}
	}
	if (failures > 0) {
		$throwNew($RuntimeException, "Test failed!"_s);
	} else {
		$nc($System::out)->println("Test succeeded"_s);
	}
}

bool SelectTimeout::test(int64_t timeout) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReference, theException, $new($AtomicReference));
	$var($AtomicBoolean, isTimedOut, $new($AtomicBoolean));
	$var($Selector, selector, $Selector::open());
	$var($Thread, t, $new($Thread, static_cast<$Runnable*>($$new(SelectTimeout$$Lambda$lambda$test$0, selector, timeout, isTimedOut, theException))));
	t->start();
	t->join(SelectTimeout::SLEEP_MILLIS);
	bool result = false;
	if (theException->get() == nullptr) {
		if (timeout > SelectTimeout::SLEEP_MILLIS && isTimedOut->get()) {
			$nc($System::err)->printf("Test timed out early with timeout %d%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(timeout)))}));
			result = false;
		} else {
			$nc($System::out)->printf("Test succeeded with timeout %d%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(timeout)))}));
			result = true;
		}
	} else {
		$nc($System::err)->printf("Test failed with timeout %d%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(timeout)))}));
		$nc(($cast($Exception, $(theException->get()))))->printStackTrace();
		result = false;
	}
	t->interrupt();
	$nc(selector)->close();
	return result;
}

void SelectTimeout::lambda$test$0($Selector* selector, int64_t timeout, $AtomicBoolean* isTimedOut, $AtomicReference* theException) {
	try {
		$nc(selector)->select(timeout);
		$nc(isTimedOut)->set(true);
	} catch ($IOException& ioe) {
		$nc(theException)->set(ioe);
	}
}

SelectTimeout::SelectTimeout() {
}

$Class* SelectTimeout::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SelectTimeout$$Lambda$lambda$test$0::classInfo$.name)) {
			return SelectTimeout$$Lambda$lambda$test$0::load$(name, initialize);
		}
	}
	$loadClass(SelectTimeout, name, initialize, &_SelectTimeout_ClassInfo_, allocate$SelectTimeout);
	return class$;
}

$Class* SelectTimeout::class$ = nullptr;