#include <CountUpdate.h>
#include <BufferBreaker.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $BufferBreaker = ::BufferBreaker;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void CountUpdate::init$() {
}

void CountUpdate::main($StringArray* args) {
	$useLocalObjectStack();
	$var($BufferBreaker, breaker, $new($BufferBreaker));
	$var($BufferedInputStream, in, $new($BufferedInputStream, breaker, 1000));
	$var($bytes, b, $new($bytes, 100));
	int32_t total = 0;
	for (int32_t i = 0; i < 5; ++i) {
		if (i > 0) {
			breaker->breakIt = true;
		}
		try {
			int32_t n = in->read(b);
			total += n;
		} catch ($IOException& e) {
		}
	}
	if (total > 7) {
		$throwNew($RuntimeException, "BufferedInputStream did not reset count."_s);
	}
}

CountUpdate::CountUpdate() {
}

$Class* CountUpdate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CountUpdate, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CountUpdate, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CountUpdate",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CountUpdate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CountUpdate);
	});
	return class$;
}

$Class* CountUpdate::class$ = nullptr;