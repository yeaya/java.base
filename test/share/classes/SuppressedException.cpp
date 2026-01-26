#include <SuppressedException.h>

#include <SuppressedException$OutputStreamFailsWithException.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

#undef CLOSE_MESSAGE
#undef FLUSH_MESSAGE
#undef SAME_MESSAGE

using $SuppressedException$OutputStreamFailsWithException = ::SuppressedException$OutputStreamFailsWithException;
using $ThrowableArray = $Array<::java::lang::Throwable>;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _SuppressedException_FieldInfo_[] = {
	{"CLOSE_MESSAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SuppressedException, CLOSE_MESSAGE)},
	{"FLUSH_MESSAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SuppressedException, FLUSH_MESSAGE)},
	{"SAME_MESSAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SuppressedException, SAME_MESSAGE)},
	{}
};

$MethodInfo _SuppressedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SuppressedException, init$, void)},
	{"createOutputStream", "(Ljava/io/OutputStream;Z)Ljava/io/FilterOutputStream;", nullptr, $PRIVATE, $method(SuppressedException, createOutputStream, $FilterOutputStream*, $OutputStream*, bool)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SuppressedException, main, void, $StringArray*), "java.io.IOException"},
	{"test", "()V", nullptr, $PRIVATE, $method(SuppressedException, test, void)},
	{}
};

$InnerClassInfo _SuppressedException_InnerClassesInfo_[] = {
	{"SuppressedException$OutputStreamFailsWithException", "SuppressedException", "OutputStreamFailsWithException", 0},
	{}
};

$ClassInfo _SuppressedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SuppressedException",
	"java.lang.Object",
	nullptr,
	_SuppressedException_FieldInfo_,
	_SuppressedException_MethodInfo_,
	nullptr,
	nullptr,
	_SuppressedException_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SuppressedException$OutputStreamFailsWithException"
};

$Object* allocate$SuppressedException($Class* clazz) {
	return $of($alloc(SuppressedException));
}

$String* SuppressedException::CLOSE_MESSAGE = nullptr;
$String* SuppressedException::FLUSH_MESSAGE = nullptr;
$String* SuppressedException::SAME_MESSAGE = nullptr;

void SuppressedException::init$() {
}

void SuppressedException::main($StringArray* args) {
	$init(SuppressedException);
	$var(SuppressedException, test, $new(SuppressedException));
	test->test();
}

$FilterOutputStream* SuppressedException::createOutputStream($OutputStream* out, bool isBuffered) {
	return isBuffered ? static_cast<$FilterOutputStream*>($new($BufferedOutputStream, out)) : $new($FilterOutputStream, out);
}

void SuppressedException::test() {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($FilterOutputStream, buf, nullptr);
	$var($booleans, isBuffered, $new($booleans, {
		false,
		true
	}));
	{
		$var($booleans, arr$, isBuffered);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			bool buffered = arr$->get(i$);
			{
				$nc($System::err)->println($$str({"\n>>> Buffered: "_s, $$str(buffered), " <<<"_s}));
				$nc($System::err)->flush();
				try {
					$assign(buf, createOutputStream($$new($SuppressedException$OutputStreamFailsWithException, this), buffered));
					$nc(buf)->close();
					$nc($System::err)->println("\nNo IOException thrown for same exception"_s);
					++failures;
				} catch ($IOException& expected) {
					if (!$nc($(expected->getMessage()))->equals(SuppressedException::SAME_MESSAGE)) {
						$nc($System::err)->println("\nIOException with unexpected message thrown"_s);
						expected->printStackTrace();
						++failures;
					}
				} catch ($IllegalArgumentException& unexpected) {
					$nc($System::err)->println("\nUnexpected IllegalArgumentException thrown"_s);
					unexpected->printStackTrace();
					++failures;
				}
				try {
					$assign(buf, createOutputStream($$new($SuppressedException$OutputStreamFailsWithException, this, false, false), buffered));
					$nc(buf)->close();
				} catch ($IOException& e) {
					$nc($System::err)->println("\nUnexpected IOException thrown"_s);
					e->printStackTrace();
					++failures;
				}
				try {
					$assign(buf, createOutputStream($$new($SuppressedException$OutputStreamFailsWithException, this, true, false), buffered));
					$nc(buf)->close();
				} catch ($IOException& e) {
					if (!$nc($(e->getMessage()))->equals(SuppressedException::CLOSE_MESSAGE)) {
						$nc($System::err)->println("\nIOException with unexpected message thrown"_s);
						e->printStackTrace();
						++failures;
					}
				}
				try {
					$assign(buf, createOutputStream($$new($SuppressedException$OutputStreamFailsWithException, this, false, true), buffered));
					$nc(buf)->close();
				} catch ($IOException& e) {
					if (!$nc($(e->getMessage()))->equals(SuppressedException::FLUSH_MESSAGE)) {
						$nc($System::err)->println("\nIOException with unexpected message thrown"_s);
						e->printStackTrace();
						++failures;
					}
				}
				try {
					$assign(buf, createOutputStream($$new($SuppressedException$OutputStreamFailsWithException, this, true, true), buffered));
					$nc(buf)->close();
				} catch ($IOException& e) {
					if (!$nc($(e->getMessage()))->equals(SuppressedException::CLOSE_MESSAGE)) {
						$nc($System::err)->println("\nIOException with unexpected message thrown"_s);
						e->printStackTrace();
						++failures;
					}
					$var($ThrowableArray, suppressed, e->getSuppressed());
					if (suppressed == nullptr) {
						$nc($System::err)->println("\nExpected suppressed exception not present"_s);
						e->printStackTrace();
						++failures;
					} else if ($nc(suppressed)->length != 1) {
						$nc($System::err)->println("\nUnexpected number of suppressed exceptions"_s);
						e->printStackTrace();
						++failures;
					} else if (!($instanceOf($IOException, suppressed->get(0)))) {
						$nc($System::err)->println("\nSuppressed exception is not an IOException"_s);
						e->printStackTrace();
						++failures;
					} else if (!$nc($($nc(suppressed->get(0))->getMessage()))->equals(SuppressedException::FLUSH_MESSAGE)) {
						$nc($System::err)->println("\nIOException with unexpected message thrown"_s);
						e->printStackTrace();
						++failures;
					}
				}
			}
		}
	}
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Test failed with "_s, $$str(failures), " errors"_s}));
	} else {
		$nc($System::out)->println("Test succeeded."_s);
	}
}

SuppressedException::SuppressedException() {
}

void clinit$SuppressedException($Class* class$) {
	$assignStatic(SuppressedException::CLOSE_MESSAGE, "Close exception"_s);
	$assignStatic(SuppressedException::FLUSH_MESSAGE, "Flush exception"_s);
	$assignStatic(SuppressedException::SAME_MESSAGE, "Same exception"_s);
}

$Class* SuppressedException::load$($String* name, bool initialize) {
	$loadClass(SuppressedException, name, initialize, &_SuppressedException_ClassInfo_, clinit$SuppressedException, allocate$SuppressedException);
	return class$;
}

$Class* SuppressedException::class$ = nullptr;