#include <ReadAfterClose.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void ReadAfterClose::init$() {
}

void ReadAfterClose::testRead($InputStream* in) {
	$nc(in)->close();
	$var($bytes, buf, $new($bytes, 2));
	try {
		in->read(buf, 0, 1);
		$throwNew($Exception, "Should not allow read on a closed stream"_s);
	} catch ($IOException& e) {
	}
	try {
		in->read(buf, 0, 0);
		$throwNew($Exception, "Should not allow read on a closed stream"_s);
	} catch ($IOException& e) {
	}
}

void ReadAfterClose::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($BufferedInputStream, bis, $new($BufferedInputStream, $$new($ByteArrayInputStream, $$new($bytes, 32))));
	testRead(bis);
}

ReadAfterClose::ReadAfterClose() {
}

$Class* ReadAfterClose::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadAfterClose, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadAfterClose, main, void, $StringArray*), "java.lang.Exception"},
		{"testRead", "(Ljava/io/InputStream;)V", nullptr, $STATIC, $staticMethod(ReadAfterClose, testRead, void, $InputStream*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadAfterClose",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReadAfterClose, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadAfterClose);
	});
	return class$;
}

$Class* ReadAfterClose::class$ = nullptr;