#include <ReadZeroBytes.h>
#include <ThrowingInputStream.h>
#include <java/io/BufferedInputStream.h>
#include <jcpp.h>

using $ThrowingInputStream = ::ThrowingInputStream;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ReadZeroBytes::init$() {
}

void ReadZeroBytes::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($BufferedInputStream, in, $new($BufferedInputStream, $$new($ThrowingInputStream)));
	in->read($$new($bytes, 0), 0, 0);
}

ReadZeroBytes::ReadZeroBytes() {
}

$Class* ReadZeroBytes::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadZeroBytes, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadZeroBytes, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadZeroBytes",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReadZeroBytes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadZeroBytes);
	});
	return class$;
}

$Class* ReadZeroBytes::class$ = nullptr;