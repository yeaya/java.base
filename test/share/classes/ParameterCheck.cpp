#include <ParameterCheck.h>

#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/OutOfMemoryError.h>
#include <jcpp.h>

#undef MAX_VALUE

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _ParameterCheck_FieldInfo_[] = {
	{"off", "[I", nullptr, $STATIC, $staticField(ParameterCheck, off)},
	{"len", "[I", nullptr, $STATIC, $staticField(ParameterCheck, len)},
	{"results", "[Z", nullptr, $STATIC, $staticField(ParameterCheck, results)},
	{"numBad", "I", nullptr, $STATIC, $staticField(ParameterCheck, numBad)},
	{}
};

$MethodInfo _ParameterCheck_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParameterCheck::*)()>(&ParameterCheck::init$))},
	{"doTest", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ParameterCheck::doTest)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ParameterCheck::main)), "java.lang.Exception"},
	{"printErr", "(Ljava/lang/String;IILjava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,int32_t,int32_t,$String*)>(&ParameterCheck::printErr))},
	{}
};

$ClassInfo _ParameterCheck_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ParameterCheck",
	"java.lang.Object",
	nullptr,
	_ParameterCheck_FieldInfo_,
	_ParameterCheck_MethodInfo_
};

$Object* allocate$ParameterCheck($Class* clazz) {
	return $of($alloc(ParameterCheck));
}

$ints* ParameterCheck::off = nullptr;
$ints* ParameterCheck::len = nullptr;
$booleans* ParameterCheck::results = nullptr;
int32_t ParameterCheck::numBad = 0;

void ParameterCheck::init$() {
}

void ParameterCheck::doTest($String* method) {
	$init(ParameterCheck);
	$useLocalCurrentObjectStackCache();
	$var($File, fn, $new($File, "x.ParameterCheck"_s));
	$var($RandomAccessFile, raf, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($bytes, b, $new($bytes, 32));
			int32_t numCases = $nc(ParameterCheck::off)->length;
			$var($ints, got, $new($ints, numCases));
			int32_t numGood = 0;
			$var($FileOutputStream, fout, $new($FileOutputStream, fn));
			for (int32_t i = 0; i < 32; ++i) {
				fout->write(i);
			}
			fout->close();
			$assign(raf, $new($RandomAccessFile, fn, "rw"_s));
			$nc($System::err)->println("----------------------------------------------------------"_s);
			$nc($System::err)->println($$str({"\nRandomAccessFile."_s, method, "\nTotal test cases = "_s, $$str(($nc(ParameterCheck::off)->length + 1))}));
			$nc($System::err)->println("----------------------------------------------------------"_s);
			for (int32_t i = 0; i < numCases; ++i) {
				try {
					if ($nc(method)->equals("readFully"_s)) {
						raf->readFully(b, $nc(ParameterCheck::off)->get(i), $nc(ParameterCheck::len)->get(i));
					}
					if ($nc(method)->equals("read"_s)) {
						raf->read(b, $nc(ParameterCheck::off)->get(i), $nc(ParameterCheck::len)->get(i));
					}
					if ($nc(method)->equals("write"_s)) {
						raf->write(b, $nc(ParameterCheck::off)->get(i), $nc(ParameterCheck::len)->get(i));
					}
					raf->seek(0);
				} catch ($IndexOutOfBoundsException& aiobe) {
					if ($nc(ParameterCheck::results)->get(i)) {
						printErr(method, numGood, i, "java.lang.IndexOutOfBoundsException"_s);
					} else {
						++numGood;
					}
					continue;
				} catch ($OutOfMemoryError& ome) {
					printErr(method, numGood, i, "java.lang.OutOfMemoryError"_s);
					continue;
				}
				if ($nc(ParameterCheck::results)->get(i)) {
					++numGood;
				} else {
					printErr(method, numGood, i, "No java.lang.IndexOutOfBoundsException"_s);
				}
			}
			raf->seek(0);
			bool thrown = false;
			try {
				if ($nc(method)->equals("readFully"_s)) {
					raf->readFully(nullptr, 1, 2);
				}
				if ($nc(method)->equals("read"_s)) {
					raf->read(nullptr, 1, 2);
				}
				if ($nc(method)->equals("write"_s)) {
					raf->write(nullptr, 1, 2);
				}
			} catch ($NullPointerException& npe) {
				++numGood;
				thrown = true;
			}
			if (!thrown) {
				printErr(method, numGood, -1, "no NullPointerException for null b"_s);
			}
			$nc($System::err)->println($$str({"\nTotal passed = "_s, $$str(numGood)}));
			$nc($System::err)->println("----------------------------------------------------------"_s);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (raf != nullptr) {
				raf->close();
			}
			fn->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ParameterCheck::printErr($String* method, int32_t numGood, int32_t i, $String* expStr) {
	$init(ParameterCheck);
	$useLocalCurrentObjectStackCache();
	++ParameterCheck::numBad;
	$nc($System::err)->println($$str({"\nNumber passed so far = "_s, $$str(numGood), "\nUnexpected "_s, expStr}));
	if (i < 0) {
		$nc($System::err)->println("for case : b = null"_s);
	} else {
		$nc($System::err)->println($$str({"for case : b.length = "_s, $$str(32), " off = "_s, $$str($nc(ParameterCheck::off)->get(i)), " len = "_s, $$str($nc(ParameterCheck::len)->get(i))}));
	}
}

void ParameterCheck::main($StringArray* argv) {
	$init(ParameterCheck);
	$useLocalCurrentObjectStackCache();
	doTest("read"_s);
	doTest("readFully"_s);
	doTest("write"_s);
	if (ParameterCheck::numBad > 0) {
		$throwNew($RuntimeException, $$str({"Failed "_s, $$str(ParameterCheck::numBad), " tests"_s}));
	}
}

void clinit$ParameterCheck($Class* class$) {
	$assignStatic(ParameterCheck::off, $new($ints, {
		-1,
		-1,
		0,
		0,
		33,
		33,
		0,
		32,
		32,
		4,
		1,
		0,
		-1,
		$Integer::MAX_VALUE,
		1
	}));
	$assignStatic(ParameterCheck::len, $new($ints, {
		-1,
		0,
		-1,
		33,
		0,
		4,
		32,
		0,
		4,
		16,
		31,
		0,
		$Integer::MAX_VALUE,
		$Integer::MAX_VALUE,
		$Integer::MAX_VALUE
	}));
	$assignStatic(ParameterCheck::results, $new($booleans, {
		false,
		false,
		false,
		false,
		false,
		false,
		true,
		true,
		false,
		true,
		true,
		true,
		false,
		false,
		false
	}));
	ParameterCheck::numBad = 0;
}

ParameterCheck::ParameterCheck() {
}

$Class* ParameterCheck::load$($String* name, bool initialize) {
	$loadClass(ParameterCheck, name, initialize, &_ParameterCheck_ClassInfo_, clinit$ParameterCheck, allocate$ParameterCheck);
	return class$;
}

$Class* ParameterCheck::class$ = nullptr;