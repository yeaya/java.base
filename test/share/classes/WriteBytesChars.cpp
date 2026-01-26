#include <WriteBytesChars.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _WriteBytesChars_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(WriteBytesChars, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WriteBytesChars, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _WriteBytesChars_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WriteBytesChars",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WriteBytesChars_MethodInfo_
};

$Object* allocate$WriteBytesChars($Class* clazz) {
	return $of($alloc(WriteBytesChars));
}

void WriteBytesChars::init$() {
}

void WriteBytesChars::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, towrite, nullptr);
	$var($chars, buf, $new($chars, 80));
	$var($bytes, b, $new($bytes, 80));
	$var($File, fn, $new($File, "x.WriteBytesChars"_s));
	$var($RandomAccessFile, raf, $new($RandomAccessFile, fn, "rw"_s));
	{
		$var($Throwable, var$0, nullptr);
		try {
			for (int32_t i = 0; i < 80; ++i) {
				buf->set(i, u'a');
			}
			$assign(towrite, $new($String, buf));
			raf->writeBytes(towrite);
			raf->seek(0);
			raf->read(b);
			$nc($System::out)->println("RandomAccessFile.writeBytes"_s);
			if (towrite->equals($$new($String, b))) {
				$nc($System::err)->println("Test succeeded."_s);
			} else {
				$throwNew($RuntimeException, "RandomAccessFile.writeBytes, wrong result"_s);
			}
			raf->seek(0);
			raf->writeChars(towrite);
			raf->seek(0);
			for (int32_t i = 0; i < 80; ++i) {
				buf->set(i, raf->readChar());
			}
			$nc($System::out)->println("RandomAccessFile.writeChars"_s);
			if (towrite->equals($$new($String, buf))) {
				$nc($System::err)->println("Test succeeded."_s);
			} else {
				$throwNew($RuntimeException, "RandomAccessFile.writeChars, wrong result"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			raf->close();
			fn->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

WriteBytesChars::WriteBytesChars() {
}

$Class* WriteBytesChars::load$($String* name, bool initialize) {
	$loadClass(WriteBytesChars, name, initialize, &_WriteBytesChars_ClassInfo_, allocate$WriteBytesChars);
	return class$;
}

$Class* WriteBytesChars::class$ = nullptr;