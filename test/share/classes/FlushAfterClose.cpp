#include <FlushAfterClose.h>
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

void FlushAfterClose::init$() {
}

void FlushAfterClose::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($PipedReader, pr, $new($PipedReader));
	$var($PipedWriter, pw, $new($PipedWriter, pr));
	pw->close();
	try {
		pw->flush();
		$throwNew($Exception, "Should not allow flush after close"_s);
	} catch ($IOException& e) {
	}
}

FlushAfterClose::FlushAfterClose() {
}

$Class* FlushAfterClose::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FlushAfterClose, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FlushAfterClose, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FlushAfterClose",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FlushAfterClose, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlushAfterClose);
	});
	return class$;
}

$Class* FlushAfterClose::class$ = nullptr;