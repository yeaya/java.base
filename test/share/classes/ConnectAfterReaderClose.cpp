#include <ConnectAfterReaderClose.h>
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

void ConnectAfterReaderClose::init$() {
}

void ConnectAfterReaderClose::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($PipedReader, pr, $new($PipedReader));
	pr->close();
	try {
		$var($PipedWriter, pw, $new($PipedWriter, pr));
		$throwNew($Exception, "Should not allow connect after close"_s);
	} catch ($IOException& e) {
	}
}

ConnectAfterReaderClose::ConnectAfterReaderClose() {
}

$Class* ConnectAfterReaderClose::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ConnectAfterReaderClose, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ConnectAfterReaderClose, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ConnectAfterReaderClose",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ConnectAfterReaderClose, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectAfterReaderClose);
	});
	return class$;
}

$Class* ConnectAfterReaderClose::class$ = nullptr;