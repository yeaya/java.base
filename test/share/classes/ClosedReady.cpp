#include <ClosedReady.h>

#include <java/io/IOException.h>
#include <java/io/StringReader.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ClosedReady_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedReady, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ClosedReady, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _ClosedReady_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClosedReady",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClosedReady_MethodInfo_
};

$Object* allocate$ClosedReady($Class* clazz) {
	return $of($alloc(ClosedReady));
}

void ClosedReady::init$() {
}

void ClosedReady::main($StringArray* argv) {
	$var($StringReader, in, $new($StringReader, "aaaaaaaaaaaaaaa"_s));
	in->read();
	in->close();
	try {
		in->ready();
		$throwNew($RuntimeException, " No exception during read on closed stream"_s);
	} catch ($IOException& e) {
		$nc($System::err)->println("Test passed: IOException is thrown"_s);
	}
}

ClosedReady::ClosedReady() {
}

$Class* ClosedReady::load$($String* name, bool initialize) {
	$loadClass(ClosedReady, name, initialize, &_ClosedReady_ClassInfo_, allocate$ClosedReady);
	return class$;
}

$Class* ClosedReady::class$ = nullptr;