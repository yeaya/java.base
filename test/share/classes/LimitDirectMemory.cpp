#include <LimitDirectMemory.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/Runtime.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Properties.h>
#include <jcpp.h>

#undef K

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Properties = ::java::util::Properties;

$FieldInfo _LimitDirectMemory_FieldInfo_[] = {
	{"K", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LimitDirectMemory, K)},
	{}
};

$MethodInfo _LimitDirectMemory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LimitDirectMemory::*)()>(&LimitDirectMemory::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LimitDirectMemory::main)), "java.lang.Exception"},
	{"parseSize", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&LimitDirectMemory::parseSize)), "java.lang.Exception"},
	{"parseThrow", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&LimitDirectMemory::parseThrow))},
	{}
};

$ClassInfo _LimitDirectMemory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LimitDirectMemory",
	"java.lang.Object",
	nullptr,
	_LimitDirectMemory_FieldInfo_,
	_LimitDirectMemory_MethodInfo_
};

$Object* allocate$LimitDirectMemory($Class* clazz) {
	return $of($alloc(LimitDirectMemory));
}

void LimitDirectMemory::init$() {
}

void LimitDirectMemory::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	if ($nc(args)->length < 2) {
		$throwNew($IllegalArgumentException, "Usage: java LimitDirectMemory <OOME_expected(true|false)> <fill_direct_memory> <size_per_buffer>"_s);
	}
	bool throwp = parseThrow($nc(args)->get(0));
	int32_t size = parseSize($nc(args)->get(1));
	int32_t incr = ($nc(args)->length > 2 ? parseSize($nc(args)->get(2)) : size);
	$var($Properties, p, $System::getProperties());
	if ($nc(p)->getProperty("sun.nio.MaxDirectMemorySize"_s) != nullptr) {
		$throwNew($RuntimeException, "sun.nio.MaxDirectMemorySize defined"_s);
	}
	$var($ByteBufferArray, b, $new($ByteBufferArray, LimitDirectMemory::K));
	int32_t i = 0;
	while (size >= incr) {
		b->set(i++, $($ByteBuffer::allocateDirect(incr)));
		size -= incr;
	}
	if (throwp) {
		try {
			b->set(i, $($ByteBuffer::allocateDirect(incr)));
			$throwNew($RuntimeException, $$str({"OutOfMemoryError not thrown: "_s, $$str(incr)}));
		} catch ($OutOfMemoryError&) {
			$var($OutOfMemoryError, e, $catch());
			e->printStackTrace($System::out);
			$nc($System::out)->println("OK - Error thrown as expected "_s);
		}
	} else {
		b->set(i, $($ByteBuffer::allocateDirect(incr)));
		$nc($System::out)->println("OK - Error not thrown"_s);
	}
}

bool LimitDirectMemory::parseThrow($String* s) {
	if ($nc(s)->equals("true"_s)) {
		return true;
	}
	if ($nc(s)->equals("false"_s)) {
		return false;
	}
	$throwNew($RuntimeException, $$str({"Unrecognized expectation: "_s, s}));
}

int32_t LimitDirectMemory::parseSize($String* size) {
	$useLocalCurrentObjectStackCache();
	if ($nc(size)->equals("DEFAULT"_s)) {
		return (int32_t)$nc($($Runtime::getRuntime()))->maxMemory();
	}
	if ($nc(size)->equals("DEFAULT+1"_s)) {
		return (int32_t)$nc($($Runtime::getRuntime()))->maxMemory() + 1;
	}
	if ($nc(size)->equals("DEFAULT+1M"_s)) {
		return (int32_t)$nc($($Runtime::getRuntime()))->maxMemory() + (1 << 20);
	}
	if ($nc(size)->equals("DEFAULT-1"_s)) {
		return (int32_t)$nc($($Runtime::getRuntime()))->maxMemory() - 1;
	}
	if ($nc(size)->equals("DEFAULT/2"_s)) {
		return (int32_t)$nc($($Runtime::getRuntime()))->maxMemory() / 2;
	}
	int32_t idx = 0;
	int32_t len = $nc(size)->length();
	for (int32_t i = 0; i < len; ++i) {
		if ($Character::isDigit(size->charAt(i))) {
			++idx;
		} else {
			break;
		}
	}
	if (idx == 0) {
		$throwNew($RuntimeException, $$str({"No digits detected: "_s, size}));
	}
	int32_t result = $Integer::parseInt($(size->substring(0, idx)));
	if (idx < len) {
		for (int32_t i = idx; i < len; ++i) {
			switch (size->charAt(i)) {
			case u'T':
				{}
			case u't':
				{
					result *= LimitDirectMemory::K;
				}
			case u'G':
				{}
			case u'g':
				{
					result *= LimitDirectMemory::K;
				}
			case u'M':
				{}
			case u'm':
				{
					result *= LimitDirectMemory::K;
				}
			case u'K':
				{}
			case u'k':
				{
					result *= LimitDirectMemory::K;
					break;
				}
			default:
				{
					$throwNew($RuntimeException, $$str({"Unrecognized size: "_s, size}));
				}
			}
		}
	}
	return result;
}

LimitDirectMemory::LimitDirectMemory() {
}

$Class* LimitDirectMemory::load$($String* name, bool initialize) {
	$loadClass(LimitDirectMemory, name, initialize, &_LimitDirectMemory_ClassInfo_, allocate$LimitDirectMemory);
	return class$;
}

$Class* LimitDirectMemory::class$ = nullptr;