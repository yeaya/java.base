#include <MarkedFillAtEOF.h>
#include <java/io/BufferedReader.h>
#include <java/io/StringReader.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void MarkedFillAtEOF::init$() {
}

void MarkedFillAtEOF::main($StringArray* args) {
	$useLocalObjectStack();
	$var($BufferedReader, r, $new($BufferedReader, $$new($StringReader, "12"_s)));
	int32_t count = 0;
	r->read();
	r->mark(2);
	while (r->read() != -1) {
		;
	}
	r->reset();
	while (r->read() != -1) {
		++count;
	}
	if (count != 1) {
		$throwNew($Exception, $$str({"Expect 1 character, but got "_s, $$str(count)}));
	}
}

MarkedFillAtEOF::MarkedFillAtEOF() {
}

$Class* MarkedFillAtEOF::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MarkedFillAtEOF, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MarkedFillAtEOF, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MarkedFillAtEOF",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MarkedFillAtEOF, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MarkedFillAtEOF);
	});
	return class$;
}

$Class* MarkedFillAtEOF::class$ = nullptr;