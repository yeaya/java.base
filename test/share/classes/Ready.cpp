#include <Ready.h>
#include <java/io/IOException.h>
#include <java/io/PipedReader.h>
#include <java/io/PipedWriter.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PipedReader = ::java::io::PipedReader;
using $PipedWriter = ::java::io::PipedWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void Ready::init$() {
}

void Ready::main($StringArray* args) {
	$useLocalObjectStack();
	$var($PipedWriter, pw, $new($PipedWriter));
	$var($PipedReader, pr, $new($PipedReader, pw));
	pw->write("input characters"_s);
	if (!pr->ready()) {
		$throwNew($Exception, "ready() should return true"_s);
	}
	pr->close();
	try {
		pr->ready();
		$throwNew($Exception, "ready() should throw an exception"_s);
	} catch ($IOException& e) {
	}
}

Ready::Ready() {
}

$Class* Ready::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Ready, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Ready, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Ready",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Ready, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Ready);
	});
	return class$;
}

$Class* Ready::class$ = nullptr;