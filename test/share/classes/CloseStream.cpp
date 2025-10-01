#include <CloseStream.h>

#include <MyInputStream4CloseStream.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MyInputStream4CloseStream = ::MyInputStream4CloseStream;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _CloseStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CloseStream::*)()>(&CloseStream::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CloseStream::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _CloseStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CloseStream",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CloseStream_MethodInfo_
};

$Object* allocate$CloseStream($Class* clazz) {
	return $of($alloc(CloseStream));
}

void CloseStream::init$() {
}

void CloseStream::main($StringArray* argv) {
	$var($BufferedInputStream, in, $new($BufferedInputStream, $$new($MyInputStream4CloseStream)));
	in->read();
	in->close();
	try {
		in->read();
		$throwNew($RuntimeException, "No exception during read on closed stream"_s);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$init($System);
		$nc($System::err)->println("Test passed: IOException is thrown"_s);
	}
}

CloseStream::CloseStream() {
}

$Class* CloseStream::load$($String* name, bool initialize) {
	$loadClass(CloseStream, name, initialize, &_CloseStream_ClassInfo_, allocate$CloseStream);
	return class$;
}

$Class* CloseStream::class$ = nullptr;