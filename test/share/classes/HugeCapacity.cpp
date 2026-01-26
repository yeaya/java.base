#include <HugeCapacity.h>

#include <HugeCapacity$MyHugeCharSeq.h>
#include <java/lang/CharSequence.h>
#include <java/lang/OutOfMemoryError.h>
#include <jcpp.h>

#undef MAX_VALUE

using $HugeCapacity$MyHugeCharSeq = ::HugeCapacity$MyHugeCharSeq;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _HugeCapacity_FieldInfo_[] = {
	{"failures", "I", nullptr, $PRIVATE | $STATIC, $staticField(HugeCapacity, failures)},
	{}
};

$MethodInfo _HugeCapacity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HugeCapacity, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HugeCapacity, main, void, $StringArray*)},
	{"testHugeInitialCharSequence", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(HugeCapacity, testHugeInitialCharSequence, void)},
	{"testHugeInitialString", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(HugeCapacity, testHugeInitialString, void)},
	{"testLatin1", "(Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(HugeCapacity, testLatin1, void, bool)},
	{"testUtf16", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(HugeCapacity, testUtf16, void)},
	{}
};

$InnerClassInfo _HugeCapacity_InnerClassesInfo_[] = {
	{"HugeCapacity$MyHugeCharSeq", "HugeCapacity", "MyHugeCharSeq", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HugeCapacity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HugeCapacity",
	"java.lang.Object",
	nullptr,
	_HugeCapacity_FieldInfo_,
	_HugeCapacity_MethodInfo_,
	nullptr,
	nullptr,
	_HugeCapacity_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HugeCapacity$MyHugeCharSeq"
};

$Object* allocate$HugeCapacity($Class* clazz) {
	return $of($alloc(HugeCapacity));
}

int32_t HugeCapacity::failures = 0;

void HugeCapacity::init$() {
}

void HugeCapacity::main($StringArray* args) {
	$init(HugeCapacity);
	$useLocalCurrentObjectStackCache();
	if ($nc(args)->length == 0) {
		$throwNew($IllegalArgumentException, "Need the argument"_s);
	}
	bool isCompact = $Boolean::parseBoolean($nc(args)->get(0));
	testLatin1(isCompact);
	testUtf16();
	testHugeInitialString();
	testHugeInitialCharSequence();
	if (HugeCapacity::failures > 0) {
		$throwNew($RuntimeException, $$str({$$str(HugeCapacity::failures), " tests failed"_s}));
	}
}

void HugeCapacity::testLatin1(bool isCompact) {
	$init(HugeCapacity);
	try {
		int32_t divisor = isCompact ? 2 : 4;
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->ensureCapacity($div($Integer::MAX_VALUE, divisor));
		sb->ensureCapacity($div($Integer::MAX_VALUE, divisor) + 1);
	} catch ($OutOfMemoryError& oom) {
		oom->printStackTrace();
		++HugeCapacity::failures;
	}
}

void HugeCapacity::testUtf16() {
	$init(HugeCapacity);
	try {
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append((char16_t)0x42B);
		sb->ensureCapacity($Integer::MAX_VALUE / 4);
		sb->ensureCapacity($Integer::MAX_VALUE / 4 + 1);
	} catch ($OutOfMemoryError& oom) {
		oom->printStackTrace();
		++HugeCapacity::failures;
	}
}

void HugeCapacity::testHugeInitialString() {
	$init(HugeCapacity);
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, str, "Z"_s->repeat($Integer::MAX_VALUE - 8));
		$var($StringBuilder, sb, $new($StringBuilder, str));
	} catch ($OutOfMemoryError& ignore) {
	} catch ($Throwable& unexpected) {
		unexpected->printStackTrace();
		++HugeCapacity::failures;
	}
}

void HugeCapacity::testHugeInitialCharSequence() {
	$init(HugeCapacity);
	$useLocalCurrentObjectStackCache();
	try {
		$var($CharSequence, seq, $new($HugeCapacity$MyHugeCharSeq));
		$var($StringBuilder, sb, $new($StringBuilder, seq));
	} catch ($OutOfMemoryError& ignore) {
	} catch ($Throwable& unexpected) {
		unexpected->printStackTrace();
		++HugeCapacity::failures;
	}
}

void clinit$HugeCapacity($Class* class$) {
	HugeCapacity::failures = 0;
}

HugeCapacity::HugeCapacity() {
}

$Class* HugeCapacity::load$($String* name, bool initialize) {
	$loadClass(HugeCapacity, name, initialize, &_HugeCapacity_ClassInfo_, clinit$HugeCapacity, allocate$HugeCapacity);
	return class$;
}

$Class* HugeCapacity::class$ = nullptr;