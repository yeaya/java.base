#include <ReadLine.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void ReadLine::init$() {
}

void ReadLine::main($StringArray* args) {
	$useLocalObjectStack();
	$var($File, fn, $new($File, "x.ReadLine"_s));
	$var($RandomAccessFile, raf, $new($RandomAccessFile, fn, "rw"_s));
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
	$nc($System::err)->println("Successfully completed test!"_s);
}

ReadLine::ReadLine() {
}

$Class* ReadLine::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadLine, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadLine, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadLine",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReadLine, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadLine);
	});
	return class$;
}

$Class* ReadLine::class$ = nullptr;