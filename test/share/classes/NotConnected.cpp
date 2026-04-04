#include <NotConnected.h>
#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void NotConnected::init$() {
}

void NotConnected::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($PipedInputStream, i, $new($PipedInputStream));
	$var($PipedOutputStream, o, $new($PipedOutputStream));
	bool readPassed = false;
	bool writePassed = false;
	try {
		i->read();
	} catch ($IOException& e) {
		readPassed = true;
	}
	try {
		o->write(10);
	} catch ($IOException& e) {
		writePassed = true;
	}
	if (!readPassed || !writePassed) {
		$throwNew($Exception, "Test failed: IOException not thrown"_s);
	}
}

NotConnected::NotConnected() {
}

$Class* NotConnected::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NotConnected, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NotConnected, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NotConnected",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NotConnected, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotConnected);
	});
	return class$;
}

$Class* NotConnected::class$ = nullptr;