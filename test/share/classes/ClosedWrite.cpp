#include <ClosedWrite.h>
#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void ClosedWrite::init$() {
}

void ClosedWrite::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($PipedOutputStream, os, $new($PipedOutputStream));
	$var($PipedInputStream, is, $new($PipedInputStream));
	os->connect(is);
	os->close();
	try {
		os->write(10);
		$throwNew($RuntimeException, "No IOException upon write on closed Stream"_s);
	} catch ($IOException& e) {
		$nc($System::err)->println("Test passed: IOException thrown"_s);
	}
}

ClosedWrite::ClosedWrite() {
}

$Class* ClosedWrite::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedWrite, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ClosedWrite, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ClosedWrite",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ClosedWrite, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClosedWrite);
	});
	return class$;
}

$Class* ClosedWrite::class$ = nullptr;