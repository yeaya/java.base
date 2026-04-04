#include <DeadReader.h>
#include <LazyReader.h>
#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <jcpp.h>

using $LazyReader = ::LazyReader;
using $IOException = ::java::io::IOException;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void DeadReader::init$() {
}

void DeadReader::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($PipedOutputStream, os, $new($PipedOutputStream));
	$var($PipedInputStream, is, $new($PipedInputStream));
	is->connect(os);
	$var($LazyReader, lr, $new($LazyReader, is));
	os->write($$new($bytes, 1000));
	lr->start();
	while (lr->isAlive()) {
		$Thread::sleep(100);
	}
	try {
		os->write(27);
		$throwNew($Exception, "Test failed: shouldn\'t be able to write"_s);
	} catch ($IOException& e) {
	}
}

DeadReader::DeadReader() {
}

$Class* DeadReader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DeadReader, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DeadReader, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DeadReader",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DeadReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeadReader);
	});
	return class$;
}

$Class* DeadReader::class$ = nullptr;