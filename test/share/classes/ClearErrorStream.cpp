#include <ClearErrorStream.h>

#include <java/io/BufferedOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
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

using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ClearErrorStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;Z)V", nullptr, $PUBLIC, $method(static_cast<void(ClearErrorStream::*)($OutputStream*,bool)>(&ClearErrorStream::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ClearErrorStream::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ClearErrorStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClearErrorStream",
	"java.io.PrintStream",
	nullptr,
	nullptr,
	_ClearErrorStream_MethodInfo_
};

$Object* allocate$ClearErrorStream($Class* clazz) {
	return $of($alloc(ClearErrorStream));
}

void ClearErrorStream::init$($OutputStream* out, bool autoFlush) {
	$PrintStream::init$(out, autoFlush);
}

void ClearErrorStream::main($StringArray* args) {
	$init(ClearErrorStream);
	$var($File, f, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "print-stream.out"_s));
	f->deleteOnExit();
	$var(ClearErrorStream, out, $new(ClearErrorStream, $$new($BufferedOutputStream, $$new($FileOutputStream, f)), true));
	out->println("Hello World!"_s);
	out->close();
	out->println("Writing after close"_s);
	if (out->checkError()) {
		$nc($System::out)->println("An error occured"_s);
		out->clearError();
		if (!out->checkError()) {
			$nc($System::out)->println("Error status cleared"_s);
		} else {
			$throwNew($Exception, "Error Status unchanged"_s);
		}
	} else {
		$nc($System::out)->println(" No error occured"_s);
	}
}

ClearErrorStream::ClearErrorStream() {
}

$Class* ClearErrorStream::load$($String* name, bool initialize) {
	$loadClass(ClearErrorStream, name, initialize, &_ClearErrorStream_ClassInfo_, allocate$ClearErrorStream);
	return class$;
}

$Class* ClearErrorStream::class$ = nullptr;