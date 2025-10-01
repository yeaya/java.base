#include <ClosedStream.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/PushbackInputStream.h>
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

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $PushbackInputStream = ::java::io::PushbackInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ClosedStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClosedStream::*)()>(&ClosedStream::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ClosedStream::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ClosedStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClosedStream",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClosedStream_MethodInfo_
};

$Object* allocate$ClosedStream($Class* clazz) {
	return $of($alloc(ClosedStream));
}

void ClosedStream::init$() {
}

void ClosedStream::main($StringArray* argv) {
	$var($bytes, data, $new($bytes, {
		(int8_t)30,
		(int8_t)40
	}));
	int32_t b1 = 0;
	int32_t b2 = 0;
	$var($PushbackInputStream, in, $new($PushbackInputStream, $$new($ByteArrayInputStream, data)));
	in->unread(20);
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

ClosedStream::ClosedStream() {
}

$Class* ClosedStream::load$($String* name, bool initialize) {
	$loadClass(ClosedStream, name, initialize, &_ClosedStream_ClassInfo_, allocate$ClosedStream);
	return class$;
}

$Class* ClosedStream::class$ = nullptr;