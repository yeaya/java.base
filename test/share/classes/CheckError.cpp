#include <CheckError.h>

#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FileWriter.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FileWriter = ::java::io::FileWriter;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _CheckError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CheckError::*)()>(&CheckError::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CheckError::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _CheckError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CheckError",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CheckError_MethodInfo_
};

$Object* allocate$CheckError($Class* clazz) {
	return $of($alloc(CheckError));
}

void CheckError::init$() {
}

void CheckError::main($StringArray* args) {
	$System::out->println("CheckError::main 1"_s);
	bool passTest1 = false;
	$var($File, file, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "junkie.out"_s));
	$var($FileWriter, fw, $new($FileWriter, file));
	$var($PrintWriter, ppw, $new($PrintWriter, static_cast<$Writer*>($$new($PrintWriter, static_cast<$Writer*>(fw)))));
	$System::out->println("CheckError::main 2"_s);
	fw->close();
	$System::out->println("CheckError::main 3"_s);
	ppw->println("Hello World!"_s);
	$System::out->println("CheckError::main 4"_s);
	file->deleteOnExit();
	$System::out->println("CheckError::main 5"_s);
	if (ppw->checkError()) {
		$nc($System::out)->println("Correct: An error occured in the underlying writer"_s);
		passTest1 = true;
	}
	$System::out->println("CheckError::main 6"_s);
	ppw->close();
	$System::out->println("CheckError::main 7"_s);
	$var($FileOutputStream, fos, $new($FileOutputStream, file));
	$System::out->println("CheckError::main 8"_s);
	$var($PrintWriter, pps, $new($PrintWriter, static_cast<$OutputStream*>($$new($PrintStream, static_cast<$OutputStream*>(fos)))));
	$System::out->println("CheckError::main 9"_s);
	fos->close();
	$System::out->println("CheckError::main 10"_s);
	pps->println("Hello World!"_s);
	$System::out->println("CheckError::main 11"_s);
	if (pps->checkError()) {
		$nc($System::out)->println("Correct: An error occured in the underlying Stream"_s);
	} else if (!passTest1) {
		$System::out->println("CheckError::main 12"_s);
		$throwNew($Exception, "CheckError() returned an incorrect value when error occured in the underlying Stream and when error occured in the underlying writer"_s);
	} else {
		$System::out->println("CheckError::main 13"_s);
		$throwNew($Exception, "CheckError() returned an incorrect value when the error has occured in the underlying Stream"_s);
	}
	if (!passTest1) {
		$System::out->println("CheckError::main 14"_s);
		$throwNew($Exception, "CheckError() returned an incorrect value when the error has occured in the underlying Writer"_s);
	}
	$System::out->println("CheckError::main 15"_s);
	pps->close();
	$System::out->println("CheckError::main 16"_s);
}

CheckError::CheckError() {
}

$Class* CheckError::load$($String* name, bool initialize) {
	$loadClass(CheckError, name, initialize, &_CheckError_ClassInfo_, allocate$CheckError);
	return class$;
}

$Class* CheckError::class$ = nullptr;