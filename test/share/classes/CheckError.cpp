#include <CheckError.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FileWriter.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FileWriter = ::java::io::FileWriter;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void CheckError::init$() {
}

void CheckError::main($StringArray* args) {
	$useLocalObjectStack();
	bool passTest1 = false;
	$var($File, file, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "junkie.out"_s));
	$var($FileWriter, fw, $new($FileWriter, file));
	$var($PrintWriter, ppw, $new($PrintWriter, $$new($PrintWriter, fw)));
	fw->close();
	ppw->println("Hello World!"_s);
	file->deleteOnExit();
	if (ppw->checkError()) {
		$nc($System::out)->println("Correct: An error occured in the underlying writer"_s);
		passTest1 = true;
	}
	ppw->close();
	$var($FileOutputStream, fos, $new($FileOutputStream, file));
	$var($PrintWriter, pps, $new($PrintWriter, $$new($PrintStream, fos)));
	fos->close();
	pps->println("Hello World!"_s);
	if (pps->checkError()) {
		$nc($System::out)->println("Correct: An error occured in the underlying Stream"_s);
	} else if (!passTest1) {
		$throwNew($Exception, "CheckError() returned an incorrect value when error occured in the underlying Stream and when error occured in the underlying writer"_s);
	} else {
		$throwNew($Exception, "CheckError() returned an incorrect value when the error has occured in the underlying Stream"_s);
	}
	if (!passTest1) {
		$throwNew($Exception, "CheckError() returned an incorrect value when the error has occured in the underlying Writer"_s);
	}
	pps->close();
}

CheckError::CheckError() {
}

$Class* CheckError::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CheckError, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CheckError, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CheckError",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CheckError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckError);
	});
	return class$;
}

$Class* CheckError::class$ = nullptr;