#include <HugeCapacity.h>

#include <HugeCapacity$MyHugeCharSeq.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE

using $HugeCapacity$MyHugeCharSeq = ::HugeCapacity$MyHugeCharSeq;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HugeCapacity::*)()>(&HugeCapacity::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HugeCapacity::main))},
	{"testHugeInitialCharSequence", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&HugeCapacity::testHugeInitialCharSequence))},
	{"testHugeInitialString", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&HugeCapacity::testHugeInitialString))},
	{"testLatin1", "(Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool)>(&HugeCapacity::testLatin1))},
	{"testUtf16", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&HugeCapacity::testUtf16))},
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
	$useLocalCurrentObjectStackCache();
	try {
		int32_t divisor = isCompact ? 2 : 4;
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->ensureCapacity($div($Integer::MAX_VALUE, divisor));
		sb->ensureCapacity($div($Integer::MAX_VALUE, divisor) + 1);
	} catch ($OutOfMemoryError&) {
		$var($OutOfMemoryError, oom, $catch());
		oom->printStackTrace();
		++HugeCapacity::failures;
	}
}

void HugeCapacity::testUtf16() {
	$init(HugeCapacity);
	$useLocalCurrentObjectStackCache();
	try {
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append((char16_t)0x42B);
		sb->ensureCapacity($Integer::MAX_VALUE / 4);
		sb->ensureCapacity($Integer::MAX_VALUE / 4 + 1);
	} catch ($OutOfMemoryError&) {
		$var($OutOfMemoryError, oom, $catch());
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
	} catch ($OutOfMemoryError&) {
		$catch();
	} catch ($Throwable&) {
		$var($Throwable, unexpected, $catch());
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
	} catch ($OutOfMemoryError&) {
		$catch();
	} catch ($Throwable&) {
		$var($Throwable, unexpected, $catch());
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