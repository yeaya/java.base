#include <HugeCapacity4StringBuffer.h>
#include <HugeCapacity4StringBuffer$MyHugeCharSeq.h>
#include <java/lang/CharSequence.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef MAX_VALUE

using $HugeCapacity4StringBuffer$MyHugeCharSeq = ::HugeCapacity4StringBuffer$MyHugeCharSeq;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;

int32_t HugeCapacity4StringBuffer::failures = 0;

void HugeCapacity4StringBuffer::init$() {
}

void HugeCapacity4StringBuffer::main($StringArray* args) {
	$init(HugeCapacity4StringBuffer);
	$useLocalObjectStack();
	testHugeInitialString();
	testHugeInitialCharSequence();
	if (HugeCapacity4StringBuffer::failures > 0) {
		$throwNew($RuntimeException, $$str({$$str(HugeCapacity4StringBuffer::failures), " tests failed"_s}));
	}
}

void HugeCapacity4StringBuffer::testHugeInitialString() {
	$init(HugeCapacity4StringBuffer);
	$useLocalObjectStack();
	try {
		$var($String, str, "Z"_s->repeat($Integer::MAX_VALUE - 8));
		$var($StringBuffer, sb, $new($StringBuffer, str));
	} catch ($OutOfMemoryError& ignore) {
	} catch ($Throwable& unexpected) {
		unexpected->printStackTrace();
		++HugeCapacity4StringBuffer::failures;
	}
}

void HugeCapacity4StringBuffer::testHugeInitialCharSequence() {
	$init(HugeCapacity4StringBuffer);
	$useLocalObjectStack();
	try {
		$var($CharSequence, seq, $new($HugeCapacity4StringBuffer$MyHugeCharSeq));
		$var($StringBuffer, sb, $new($StringBuffer, seq));
	} catch ($OutOfMemoryError& ignore) {
	} catch ($Throwable& unexpected) {
		unexpected->printStackTrace();
		++HugeCapacity4StringBuffer::failures;
	}
}

void HugeCapacity4StringBuffer::clinit$($Class* clazz) {
	HugeCapacity4StringBuffer::failures = 0;
}

HugeCapacity4StringBuffer::HugeCapacity4StringBuffer() {
}

$Class* HugeCapacity4StringBuffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"failures", "I", nullptr, $PRIVATE | $STATIC, $staticField(HugeCapacity4StringBuffer, failures)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HugeCapacity4StringBuffer, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HugeCapacity4StringBuffer, main, void, $StringArray*)},
		{"testHugeInitialCharSequence", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(HugeCapacity4StringBuffer, testHugeInitialCharSequence, void)},
		{"testHugeInitialString", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(HugeCapacity4StringBuffer, testHugeInitialString, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HugeCapacity4StringBuffer$MyHugeCharSeq", "HugeCapacity4StringBuffer", "MyHugeCharSeq", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HugeCapacity4StringBuffer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HugeCapacity4StringBuffer$MyHugeCharSeq"
	};
	$loadClass(HugeCapacity4StringBuffer, name, initialize, &classInfo$$, HugeCapacity4StringBuffer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HugeCapacity4StringBuffer);
	});
	return class$;
}

$Class* HugeCapacity4StringBuffer::class$ = nullptr;