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

$FieldInfo _HugeCapacity4StringBuffer_FieldInfo_[] = {
	{"failures", "I", nullptr, $PRIVATE | $STATIC, $staticField(HugeCapacity4StringBuffer, failures)},
	{}
};

$MethodInfo _HugeCapacity4StringBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HugeCapacity4StringBuffer::*)()>(&HugeCapacity4StringBuffer::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HugeCapacity4StringBuffer::main))},
	{"testHugeInitialCharSequence", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&HugeCapacity4StringBuffer::testHugeInitialCharSequence))},
	{"testHugeInitialString", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&HugeCapacity4StringBuffer::testHugeInitialString))},
	{}
};

$InnerClassInfo _HugeCapacity4StringBuffer_InnerClassesInfo_[] = {
	{"HugeCapacity4StringBuffer$MyHugeCharSeq", "HugeCapacity4StringBuffer", "MyHugeCharSeq", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HugeCapacity4StringBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HugeCapacity4StringBuffer",
	"java.lang.Object",
	nullptr,
	_HugeCapacity4StringBuffer_FieldInfo_,
	_HugeCapacity4StringBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_HugeCapacity4StringBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HugeCapacity4StringBuffer$MyHugeCharSeq"
};

$Object* allocate$HugeCapacity4StringBuffer($Class* clazz) {
	return $of($alloc(HugeCapacity4StringBuffer));
}

int32_t HugeCapacity4StringBuffer::failures = 0;

void HugeCapacity4StringBuffer::init$() {
}

void HugeCapacity4StringBuffer::main($StringArray* args) {
	$init(HugeCapacity4StringBuffer);
	$useLocalCurrentObjectStackCache();
	testHugeInitialString();
	testHugeInitialCharSequence();
	if (HugeCapacity4StringBuffer::failures > 0) {
		$throwNew($RuntimeException, $$str({$$str(HugeCapacity4StringBuffer::failures), " tests failed"_s}));
	}
}

void HugeCapacity4StringBuffer::testHugeInitialString() {
	$init(HugeCapacity4StringBuffer);
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	try {
		$var($CharSequence, seq, $new($HugeCapacity4StringBuffer$MyHugeCharSeq));
		$var($StringBuffer, sb, $new($StringBuffer, seq));
	} catch ($OutOfMemoryError& ignore) {
	} catch ($Throwable& unexpected) {
		unexpected->printStackTrace();
		++HugeCapacity4StringBuffer::failures;
	}
}

void clinit$HugeCapacity4StringBuffer($Class* class$) {
	HugeCapacity4StringBuffer::failures = 0;
}

HugeCapacity4StringBuffer::HugeCapacity4StringBuffer() {
}

$Class* HugeCapacity4StringBuffer::load$($String* name, bool initialize) {
	$loadClass(HugeCapacity4StringBuffer, name, initialize, &_HugeCapacity4StringBuffer_ClassInfo_, clinit$HugeCapacity4StringBuffer, allocate$HugeCapacity4StringBuffer);
	return class$;
}

$Class* HugeCapacity4StringBuffer::class$ = nullptr;