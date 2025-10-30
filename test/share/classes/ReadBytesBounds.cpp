#include <ReadBytesBounds.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Error.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _ReadBytesBounds_FieldInfo_[] = {
	{"fis", "Ljava/io/FileInputStream;", nullptr, $STATIC | $FINAL, $staticField(ReadBytesBounds, fis)},
	{"raf", "Ljava/io/RandomAccessFile;", nullptr, $STATIC | $FINAL, $staticField(ReadBytesBounds, raf)},
	{"b", "[B", nullptr, $STATIC | $FINAL, $staticField(ReadBytesBounds, b)},
	{}
};

$MethodInfo _ReadBytesBounds_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadBytesBounds::*)()>(&ReadBytesBounds::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReadBytesBounds::main)), "java.lang.Throwable"},
	{"testRead", "(IIZ)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,int32_t,bool)>(&ReadBytesBounds::testRead)), "java.lang.Throwable"},
	{}
};

$ClassInfo _ReadBytesBounds_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadBytesBounds",
	"java.lang.Object",
	nullptr,
	_ReadBytesBounds_FieldInfo_,
	_ReadBytesBounds_MethodInfo_
};

$Object* allocate$ReadBytesBounds($Class* clazz) {
	return $of($alloc(ReadBytesBounds));
}

$FileInputStream* ReadBytesBounds::fis = nullptr;
$RandomAccessFile* ReadBytesBounds::raf = nullptr;
$bytes* ReadBytesBounds::b = nullptr;

void ReadBytesBounds::init$() {
}

void ReadBytesBounds::main($StringArray* argv) {
	$init(ReadBytesBounds);
	{
		$var($Throwable, var$0, nullptr);
		try {
			testRead(-1, -1, false);
			testRead(-1, 0, false);
			testRead(0, -1, false);
			testRead(0, 33, false);
			testRead(33, 0, false);
			testRead(33, 4, false);
			testRead(0, 32, true);
			testRead(32, 0, true);
			testRead(32, 4, false);
			testRead(4, 16, true);
			testRead(1, 31, true);
			testRead(0, 0, true);
			testRead(31, $Integer::MAX_VALUE, false);
			testRead(0, $Integer::MAX_VALUE, false);
			testRead(-1, $Integer::MAX_VALUE, false);
			testRead(-4, $Integer::MIN_VALUE, false);
			testRead(0, $Integer::MIN_VALUE, false);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(ReadBytesBounds::fis)->close();
			$nc(ReadBytesBounds::raf)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ReadBytesBounds::testRead(int32_t off, int32_t len, bool expected) {
	$init(ReadBytesBounds);
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->printf("off=%d len=%d expected=%b%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(off))),
		$($of($Integer::valueOf(len))),
		$($of($Boolean::valueOf(expected)))
	}));
	bool result = false;
	try {
		$nc(ReadBytesBounds::fis)->read(ReadBytesBounds::b, off, len);
		$nc(ReadBytesBounds::raf)->read(ReadBytesBounds::b, off, len);
		result = true;
	} catch ($IndexOutOfBoundsException& e) {
		result = false;
	}
	if (result != expected) {
		$throwNew($RuntimeException, $($String::format("Unexpected result off=%d len=%d expected=%b"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(off))),
			$($of($Integer::valueOf(len))),
			$($of($Boolean::valueOf(expected)))
		}))));
	}
}

void clinit$ReadBytesBounds($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ReadBytesBounds::b, $new($bytes, 32));
	{
		try {
			$var($String, dir, $System::getProperty("test.src"_s, "."_s));
			$var($File, testFile, $new($File, dir, "input.txt"_s));
			$assignStatic(ReadBytesBounds::fis, $new($FileInputStream, testFile));
			$assignStatic(ReadBytesBounds::raf, $new($RandomAccessFile, testFile, "r"_s));
		} catch ($Throwable& t) {
			$throwNew($Error, t);
		}
	}
}

ReadBytesBounds::ReadBytesBounds() {
}

$Class* ReadBytesBounds::load$($String* name, bool initialize) {
	$loadClass(ReadBytesBounds, name, initialize, &_ReadBytesBounds_ClassInfo_, clinit$ReadBytesBounds, allocate$ReadBytesBounds);
	return class$;
}

$Class* ReadBytesBounds::class$ = nullptr;