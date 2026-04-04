#include <MultipleConnect.h>
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

void MultipleConnect::init$() {
}

void MultipleConnect::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($PipedOutputStream, os, $new($PipedOutputStream));
	$var($PipedOutputStream, os2, $new($PipedOutputStream));
	$var($PipedInputStream, is, $new($PipedInputStream));
	os->connect(is);
	try {
		is->connect(os2);
		$throwNew($Exception, "Test failed: IOException expected"_s);
	} catch ($IOException& e) {
	}
}

MultipleConnect::MultipleConnect() {
}

$Class* MultipleConnect::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultipleConnect, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MultipleConnect, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MultipleConnect",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MultipleConnect, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultipleConnect);
	});
	return class$;
}

$Class* MultipleConnect::class$ = nullptr;