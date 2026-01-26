#include <ClosedStream.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/PushbackInputStream.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedStream, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ClosedStream, main, void, $StringArray*), "java.lang.Exception"},
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
	$useLocalCurrentObjectStackCache();
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
	} catch ($IOException& e) {
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