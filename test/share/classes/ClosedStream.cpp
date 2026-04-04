#include <ClosedStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/PushbackInputStream.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $PushbackInputStream = ::java::io::PushbackInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void ClosedStream::init$() {
}

void ClosedStream::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($bytes, data, $new($bytes, {
		30,
		40
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedStream, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ClosedStream, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ClosedStream",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ClosedStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClosedStream);
	});
	return class$;
}

$Class* ClosedStream::class$ = nullptr;