#include <WriteAfterReaderClose.h>
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

void WriteAfterReaderClose::init$() {
}

void WriteAfterReaderClose::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($PipedReader, pr, $new($PipedReader));
	$var($PipedWriter, pw, $new($PipedWriter, pr));
	pr->close();
	try {
		pw->write(u'a');
		$throwNew($Exception, "Should not allow write after close"_s);
	} catch ($IOException& e) {
	}
}

WriteAfterReaderClose::WriteAfterReaderClose() {
}

$Class* WriteAfterReaderClose::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WriteAfterReaderClose, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WriteAfterReaderClose, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WriteAfterReaderClose",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WriteAfterReaderClose, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WriteAfterReaderClose);
	});
	return class$;
}

$Class* WriteAfterReaderClose::class$ = nullptr;