#include <LimitDirectMemory.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/Runtime.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Properties.h>
#include <jcpp.h>

#undef K

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
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

void LimitDirectMemory::init$() {
}

void LimitDirectMemory::main($StringArray* args) {
	$useLocalObjectStack();
	if ($nc(args)->length < 2) {
		$throwNew($IllegalArgumentException, "Usage: java LimitDirectMemory <OOME_expected(true|false)> <fill_direct_memory> <size_per_buffer>"_s);
	}
	bool throwp = parseThrow(args->get(0));
	int32_t size = parseSize(args->get(1));
	int32_t incr = (args->length > 2 ? parseSize(args->get(2)) : size);
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
		} catch ($OutOfMemoryError& e) {
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
	if (s->equals("false"_s)) {
		return false;
	}
	$throwNew($RuntimeException, $$str({"Unrecognized expectation: "_s, s}));
}

int32_t LimitDirectMemory::parseSize($String* size) {
	$useLocalObjectStack();
	if ($nc(size)->equals("DEFAULT"_s)) {
		return (int32_t)$$nc($Runtime::getRuntime())->maxMemory();
	}
	if (size->equals("DEFAULT+1"_s)) {
		return (int32_t)$$nc($Runtime::getRuntime())->maxMemory() + 1;
	}
	if (size->equals("DEFAULT+1M"_s)) {
		return (int32_t)$$nc($Runtime::getRuntime())->maxMemory() + (1 << 20);
	}
	if (size->equals("DEFAULT-1"_s)) {
		return (int32_t)$$nc($Runtime::getRuntime())->maxMemory() - 1;
	}
	if (size->equals("DEFAULT/2"_s)) {
		return (int32_t)$$nc($Runtime::getRuntime())->maxMemory() / 2;
	}
	int32_t idx = 0;
	int32_t len = size->length();
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
			case u't':
				result *= LimitDirectMemory::K;
			case u'G':
			case u'g':
				result *= LimitDirectMemory::K;
			case u'M':
			case u'm':
				result *= LimitDirectMemory::K;
			case u'K':
			case u'k':
				result *= LimitDirectMemory::K;
				break;
			default:
				$throwNew($RuntimeException, $$str({"Unrecognized size: "_s, size}));
			}
		}
	}
	return result;
}

LimitDirectMemory::LimitDirectMemory() {
}

$Class* LimitDirectMemory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"K", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LimitDirectMemory, K)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LimitDirectMemory, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LimitDirectMemory, main, void, $StringArray*), "java.lang.Exception"},
		{"parseSize", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(LimitDirectMemory, parseSize, int32_t, $String*), "java.lang.Exception"},
		{"parseThrow", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(LimitDirectMemory, parseThrow, bool, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LimitDirectMemory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LimitDirectMemory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LimitDirectMemory);
	});
	return class$;
}

$Class* LimitDirectMemory::class$ = nullptr;