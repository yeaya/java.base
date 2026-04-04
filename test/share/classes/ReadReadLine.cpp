#include <ReadReadLine.h>
#include <java/io/LineNumberReader.h>
#include <java/io/StringReader.h>
#include <jcpp.h>

using $LineNumberReader = ::java::io::LineNumberReader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void ReadReadLine::init$() {
}

void ReadReadLine::main($StringArray* args) {
	test("\r\n"_s, 1);
	test("\r\r\n"_s, 2);
	test("\r\n\n\n"_s, 3);
}

void ReadReadLine::test($String* s, int32_t good) {
	$useLocalObjectStack();
	int32_t c = 0;
	int32_t line = 0;
	$var($LineNumberReader, r, $new($LineNumberReader, $$new($StringReader, s), 2));
	if ((c = r->read()) >= 0) {
		while (r->readLine() != nullptr) {
			;
		}
	}
	line = r->getLineNumber();
	if (line != good) {
		$throwNew($Exception, $$str({"Failed test: Expected line number "_s, $$str(good), " Got: "_s, $$str(line)}));
	}
}

ReadReadLine::ReadReadLine() {
}

$Class* ReadReadLine::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadReadLine, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadReadLine, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/lang/String;I)V", nullptr, $STATIC, $staticMethod(ReadReadLine, test, void, $String*, int32_t), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadReadLine",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReadReadLine, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadReadLine);
	});
	return class$;
}

$Class* ReadReadLine::class$ = nullptr;