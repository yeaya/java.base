#include <ReachabilityFenceTest.h>

#include <ReachabilityFenceTest$MyFinalizeable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jcpp.h>

#undef LOOP_ITERS
#undef MAIN_ITERS
#undef PREMATURE_FINALIZATION
#undef WARMUP_LOOP_ITERS

using $ReachabilityFenceTest$MyFinalizeable = ::ReachabilityFenceTest$MyFinalizeable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;

$FieldInfo _ReachabilityFenceTest_FieldInfo_[] = {
	{"LOOP_ITERS", "I", nullptr, $STATIC | $FINAL, $staticField(ReachabilityFenceTest, LOOP_ITERS)},
	{"WARMUP_LOOP_ITERS", "I", nullptr, $STATIC | $FINAL, $staticField(ReachabilityFenceTest, WARMUP_LOOP_ITERS)},
	{"MAIN_ITERS", "I", nullptr, $STATIC | $FINAL, $constField(ReachabilityFenceTest, MAIN_ITERS)},
	{"PREMATURE_FINALIZATION", "Z", nullptr, $STATIC | $FINAL, $staticField(ReachabilityFenceTest, PREMATURE_FINALIZATION)},
	{}
};

$MethodInfo _ReachabilityFenceTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReachabilityFenceTest::*)()>(&ReachabilityFenceTest::init$))},
	{"fenced", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&ReachabilityFenceTest::fenced))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&ReachabilityFenceTest::main))},
	{"nonFenced", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&ReachabilityFenceTest::nonFenced))},
	{}
};

$InnerClassInfo _ReachabilityFenceTest_InnerClassesInfo_[] = {
	{"ReachabilityFenceTest$MyFinalizeable", "ReachabilityFenceTest", "MyFinalizeable", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ReachabilityFenceTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReachabilityFenceTest",
	"java.lang.Object",
	nullptr,
	_ReachabilityFenceTest_FieldInfo_,
	_ReachabilityFenceTest_MethodInfo_,
	nullptr,
	nullptr,
	_ReachabilityFenceTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ReachabilityFenceTest$MyFinalizeable"
};

$Object* allocate$ReachabilityFenceTest($Class* clazz) {
	return $of($alloc(ReachabilityFenceTest));
}

int32_t ReachabilityFenceTest::LOOP_ITERS = 0;
int32_t ReachabilityFenceTest::WARMUP_LOOP_ITERS = 0;
bool ReachabilityFenceTest::PREMATURE_FINALIZATION = false;

void ReachabilityFenceTest::init$() {
}

void ReachabilityFenceTest::main($StringArray* args) {
	$init(ReachabilityFenceTest);
	bool finalized = false;
	for (int32_t c = 0; !finalized && c < ReachabilityFenceTest::MAIN_ITERS; ++c) {
		finalized |= nonFenced();
	}
	if (ReachabilityFenceTest::PREMATURE_FINALIZATION && !finalized) {
		$throwNew($IllegalStateException, "The object had never been finalized before timeout reached."_s);
	}
	if (!ReachabilityFenceTest::PREMATURE_FINALIZATION && finalized) {
	}
	if (!ReachabilityFenceTest::PREMATURE_FINALIZATION) {
		return;
	}
	finalized = false;
	for (int32_t c = 0; !finalized && c < ReachabilityFenceTest::MAIN_ITERS; ++c) {
		finalized |= fenced();
	}
	if (finalized) {
		$throwNew($IllegalStateException, "The object had been prematurely finalized."_s);
	}
}

bool ReachabilityFenceTest::nonFenced() {
	$init(ReachabilityFenceTest);
	$useLocalCurrentObjectStackCache();
	$var($AtomicBoolean, finalized, $new($AtomicBoolean));
	$var($ReachabilityFenceTest$MyFinalizeable, o, $new($ReachabilityFenceTest$MyFinalizeable, finalized));
	for (int32_t i = 0; i < ReachabilityFenceTest::LOOP_ITERS; ++i) {
		if (finalized->get()) {
			break;
		}
		if (i > ReachabilityFenceTest::WARMUP_LOOP_ITERS) {
			$System::gc();
			$System::runFinalization();
		}
	}
	return finalized->get();
}

bool ReachabilityFenceTest::fenced() {
	$init(ReachabilityFenceTest);
	$useLocalCurrentObjectStackCache();
	$var($AtomicBoolean, finalized, $new($AtomicBoolean));
	$var($ReachabilityFenceTest$MyFinalizeable, o, $new($ReachabilityFenceTest$MyFinalizeable, finalized));
	for (int32_t i = 0; i < ReachabilityFenceTest::LOOP_ITERS; ++i) {
		if (finalized->get()) {
			break;
		}
		if (i > ReachabilityFenceTest::WARMUP_LOOP_ITERS) {
			$System::gc();
			$System::runFinalization();
		}
	}
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = finalized->get();
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$Reference::reachabilityFence(o);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void clinit$ReachabilityFenceTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	ReachabilityFenceTest::LOOP_ITERS = $nc($($Integer::getInteger("LOOP_ITERS"_s, 0x0000C350)))->intValue();
	ReachabilityFenceTest::WARMUP_LOOP_ITERS = ReachabilityFenceTest::LOOP_ITERS - $nc($($Integer::getInteger("GC_ITERS"_s, 100)))->intValue();
	ReachabilityFenceTest::PREMATURE_FINALIZATION = $Boolean::getBoolean("premature"_s);
}

ReachabilityFenceTest::ReachabilityFenceTest() {
}

$Class* ReachabilityFenceTest::load$($String* name, bool initialize) {
	$loadClass(ReachabilityFenceTest, name, initialize, &_ReachabilityFenceTest_ClassInfo_, clinit$ReachabilityFenceTest, allocate$ReachabilityFenceTest);
	return class$;
}

$Class* ReachabilityFenceTest::class$ = nullptr;