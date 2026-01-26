#include <SkipBytes.h>

#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _SkipBytes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SkipBytes, init$, void)},
	{"doTest", "(Ljava/io/RandomAccessFile;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SkipBytes, doTest, void, $RandomAccessFile*, int32_t, int32_t), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SkipBytes, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _SkipBytes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SkipBytes",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SkipBytes_MethodInfo_
};

$Object* allocate$SkipBytes($Class* clazz) {
	return $of($alloc(SkipBytes));
}

void SkipBytes::init$() {
}

void SkipBytes::doTest($RandomAccessFile* raf, int32_t start, int32_t num_to_skip) {
	$useLocalCurrentObjectStackCache();
	$nc(raf)->seek(start);
	int64_t cur_ptr = raf->getFilePointer();
	int32_t length = (int32_t)raf->length();
	$nc($System::err)->println($$str({"\nCurrent pointer = "_s, $$str(cur_ptr), " length = "_s, $$str(length), " num_to_skip = "_s, $$str(num_to_skip)}));
	int32_t num_skipped = raf->skipBytes(num_to_skip);
	$nc($System::err)->println($$str({"After skipBytes -- no. skipped = "_s, $$str(num_skipped)}));
	if (num_to_skip <= 0) {
		if (num_skipped != 0) {
			$nc($System::err)->println("Negative Skip Test Failed"_s);
			$throwNew($RuntimeException, "Negative Skip Test Failed"_s);
		} else {
			$nc($System::err)->println("Negative Skip Test Succeeded"_s);
		}
	}
	cur_ptr = raf->getFilePointer();
	$nc($System::err)->println($$str({"Current pointer = "_s, $$str(cur_ptr)}));
	if (cur_ptr > length) {
		$nc($System::err)->println("Past EOF Skip Test Failed"_s);
		$throwNew($RuntimeException, "Past EOF Skip Test Failed"_s);
	} else {
		$nc($System::err)->println("Past EOF Skip Test Succeeded"_s);
	}
	int32_t byte_read = raf->read();
	if ((cur_ptr == length) && (byte_read != -1)) {
		$nc($System::err)->println($$str({"byte_read = "_s, $$str(byte_read), " Read Test Failed ......"_s}));
		$throwNew($RuntimeException, "Read Test Failed"_s);
	} else {
		$nc($System::err)->println($$str({"byte_read = "_s, $$str(byte_read), " Read Test Succeeded"_s}));
	}
}

void SkipBytes::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($RandomAccessFile, raf, $new($RandomAccessFile, "input.txt"_s, "rw"_s));
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t length = (int32_t)raf->length();
			doTest(raf, 0, 2 * length);
			doTest(raf, 0, length);
			doTest(raf, 0, length / 2);
			doTest(raf, length / 2, -2);
			doTest(raf, length, 0);
			doTest(raf, 0, -1);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			raf->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

SkipBytes::SkipBytes() {
}

$Class* SkipBytes::load$($String* name, bool initialize) {
	$loadClass(SkipBytes, name, initialize, &_SkipBytes_ClassInfo_, allocate$SkipBytes);
	return class$;
}

$Class* SkipBytes::class$ = nullptr;