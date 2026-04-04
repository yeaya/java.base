#include <SkipEOL.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/LineNumberInputStream.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $LineNumberInputStream = ::java::io::LineNumberInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void SkipEOL::init$() {
}

void SkipEOL::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($bytes, data, $new($bytes, {
		12,
		13,
		10,
		23,
		11,
		13,
		12,
		10,
		13
	}));
	$var($bytes, expected, $new($bytes, {
		12,
		10,
		23,
		11,
		10,
		12,
		10,
		10
	}));
	$var($LineNumberInputStream, in, $new($LineNumberInputStream, $$new($ByteArrayInputStream, data)));
	int64_t skipped = in->skip(3);
	if ((skipped == 3) && ((in->read()) != 11)) {
		$throwNew($RuntimeException, "LineNumberInputStream.skip - unexpected results!"_s);
	}
	$assign(in, $new($LineNumberInputStream, $$new($ByteArrayInputStream, data)));
	for (int32_t i = 0; i < 8; ++i) {
		if (in->read() != expected->get(i)) {
			$throwNew($RuntimeException, "LineNumberInputStream.read - unexpected results!"_s);
		}
	}
	$nc($System::err)->println("Test completed successfully"_s);
}

SkipEOL::SkipEOL() {
}

$Class* SkipEOL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SkipEOL, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SkipEOL, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SkipEOL",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SkipEOL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SkipEOL);
	});
	return class$;
}

$Class* SkipEOL::class$ = nullptr;