#include <Fill4BufferedReader.h>
#include <Fill4BufferedReader$Source.h>
#include <java/io/BufferedReader.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $Fill4BufferedReader$Source = ::Fill4BufferedReader$Source;
using $BufferedReader = ::java::io::BufferedReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Fill4BufferedReader::init$() {
}

void Fill4BufferedReader::go(int32_t shortFall) {
	$useLocalObjectStack();
	$var($Reader, r, $new($BufferedReader, $$new($Fill4BufferedReader$Source, shortFall), 10));
	$var($chars, cbuf, $new($chars, 8));
	int32_t n1 = r->read(cbuf);
	int32_t n2 = r->read(cbuf);
	$nc($System::err)->println($$str({"Shortfall "_s, $$str(shortFall), ": Read "_s, $$str(n1), ", then "_s, $$str(n2), " chars"_s}));
	if (n1 != cbuf->length) {
		$throwNew($Exception, $$str({"First read returned "_s, $$str(n1)}));
	}
	if (n2 != cbuf->length) {
		$throwNew($Exception, $$str({"Second read returned "_s, $$str(n2)}));
	}
}

void Fill4BufferedReader::main($StringArray* args) {
	for (int32_t i = 0; i < 8; ++i) {
		go(i);
	}
}

Fill4BufferedReader::Fill4BufferedReader() {
}

$Class* Fill4BufferedReader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Fill4BufferedReader, init$, void)},
		{"go", "(I)V", nullptr, $STATIC, $staticMethod(Fill4BufferedReader, go, void, int32_t), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Fill4BufferedReader, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Fill4BufferedReader$Source", "Fill4BufferedReader", "Source", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Fill4BufferedReader",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Fill4BufferedReader$Source"
	};
	$loadClass(Fill4BufferedReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Fill4BufferedReader);
	});
	return class$;
}

$Class* Fill4BufferedReader::class$ = nullptr;