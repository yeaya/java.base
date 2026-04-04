#include <CloseStream.h>
#include <MyInputStream4CloseStream.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $MyInputStream4CloseStream = ::MyInputStream4CloseStream;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void CloseStream::init$() {
}

void CloseStream::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($BufferedInputStream, in, $new($BufferedInputStream, $$new($MyInputStream4CloseStream)));
	in->read();
	in->close();
	try {
		in->read();
		$throwNew($RuntimeException, "No exception during read on closed stream"_s);
	} catch ($IOException& e) {
		$nc($System::err)->println("Test passed: IOException is thrown"_s);
	}
}

CloseStream::CloseStream() {
}

$Class* CloseStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CloseStream, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CloseStream, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CloseStream",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CloseStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseStream);
	});
	return class$;
}

$Class* CloseStream::class$ = nullptr;