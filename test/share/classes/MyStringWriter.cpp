#include <MyStringWriter.h>
#include <java/io/StringWriter.h>
#include <jcpp.h>

using $StringWriter = ::java::io::StringWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MyStringWriter::init$(int32_t bufsize) {
	$StringWriter::init$(bufsize);
}

MyStringWriter::MyStringWriter() {
}

$Class* MyStringWriter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(MyStringWriter, init$, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MyStringWriter",
		"java.io.StringWriter",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MyStringWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MyStringWriter));
	});
	return class$;
}

$Class* MyStringWriter::class$ = nullptr;