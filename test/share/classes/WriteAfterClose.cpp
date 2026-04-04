#include <WriteAfterClose.h>
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

void WriteAfterClose::init$() {
}

void WriteAfterClose::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($PipedInputStream, in, $new($PipedInputStream));
	$var($PipedOutputStream, out, $new($PipedOutputStream, in));
	in->close();
	try {
		out->write(u'a');
		$throwNew($Exception, "Should not allow write after close"_s);
	} catch ($IOException& e) {
	}
}

WriteAfterClose::WriteAfterClose() {
}

$Class* WriteAfterClose::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WriteAfterClose, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WriteAfterClose, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WriteAfterClose",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WriteAfterClose, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WriteAfterClose);
	});
	return class$;
}

$Class* WriteAfterClose::class$ = nullptr;