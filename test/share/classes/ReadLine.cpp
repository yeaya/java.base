#include <ReadLine.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReadLine_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadLine::*)()>(&ReadLine::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReadLine::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ReadLine_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadLine",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReadLine_MethodInfo_
};

$Object* allocate$ReadLine($Class* clazz) {
	return $of($alloc(ReadLine));
}

void ReadLine::init$() {
}

void ReadLine::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, fn, $new($File, "x.ReadLine"_s));
	$var($RandomAccessFile, raf, $new($RandomAccessFile, fn, "rw"_s));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($String, line, nullptr);
			int32_t ctr = 1;
			$var($String, expected, nullptr);
			raf->writeBytes("ln1\rln2\r\nln3\nln4\rln5\r\nln6\n\rln8\r\rln10\n\nln12\r\r\nln14"_s);
			raf->seek(0);
			while (($assign(line, raf->readLine())) != nullptr) {
				if ((ctr == 7) || (ctr == 9) || (ctr == 11) || (ctr == 13)) {
					$assign(expected, ""_s);
				} else {
					$assign(expected, $str({"ln"_s, $$str(ctr)}));
				}
				if (!$nc(line)->equals(expected)) {
					$throwNew($Exception, $$str({"Expected \""_s, expected, "\", read \""_s, line, "\""_s}));
				}
				++ctr;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			raf->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$nc($System::err)->println("Successfully completed test!"_s);
}

ReadLine::ReadLine() {
}

$Class* ReadLine::load$($String* name, bool initialize) {
	$loadClass(ReadLine, name, initialize, &_ReadLine_ClassInfo_, allocate$ReadLine);
	return class$;
}

$Class* ReadLine::class$ = nullptr;