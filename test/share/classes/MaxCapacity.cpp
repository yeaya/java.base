#include <MaxCapacity.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runtime = ::java::lang::Runtime;

$MethodInfo _MaxCapacity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MaxCapacity::*)()>(&MaxCapacity::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MaxCapacity::main))},
	{}
};

$ClassInfo _MaxCapacity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MaxCapacity",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MaxCapacity_MethodInfo_
};

$Object* allocate$MaxCapacity($Class* clazz) {
	return $of($alloc(MaxCapacity));
}

void MaxCapacity::init$() {
}

void MaxCapacity::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int64_t maxHeap = $nc($($Runtime::getRuntime()))->maxMemory();
	if (maxHeap < (int64_t)3 * $Integer::MAX_VALUE) {
		$init($System);
		$nc($System::out)->printf("Skipping test; max memory %sM too small%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($div(maxHeap, (1024 * 1024)))))}));
		return;
	}
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	for (int64_t n = 0;; ++n) {
		try {
			baos->write((int32_t)(int8_t)u'x');
		} catch ($Throwable&) {
			$var($Throwable, t, $catch());
			$var($bytes, bytes, baos->toByteArray());
			if ($nc(bytes)->length != n) {
				$throwNew($AssertionError, $of("wrong length"_s));
			}
			if ($nc(bytes)->get(0) != u'x' || $nc(bytes)->get(bytes->length - 1) != u'x') {
				$throwNew($AssertionError, $of("wrong contents"_s));
			}
			int64_t gap = $Integer::MAX_VALUE - n;
			$init($System);
			$nc($System::out)->printf("gap=%dM %d%n"_s, $$new($ObjectArray, {
				$($of($Long::valueOf($div(gap, (1024 * 1024))))),
				$($of($Long::valueOf(gap)))
			}));
			if (gap > 1024) {
				$throw(t);
			}
			break;
		}
	}
}

MaxCapacity::MaxCapacity() {
}

$Class* MaxCapacity::load$($String* name, bool initialize) {
	$loadClass(MaxCapacity, name, initialize, &_MaxCapacity_ClassInfo_, allocate$MaxCapacity);
	return class$;
}

$Class* MaxCapacity::class$ = nullptr;