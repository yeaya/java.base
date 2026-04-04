#include <EOL.h>
#include <java/io/BufferedReader.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <jcpp.h>

#undef EOL

using $BufferedReader = ::java::io::BufferedReader;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void EOL::init$() {
}

void EOL::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Reader, sr, $new($StringReader, "one\rtwo\r\nthree\nfour\r"_s));
	$var($BufferedReader, br, $new($BufferedReader, sr));
	for (int32_t i = 0;; ++i) {
		$var($String, l, br->readLine());
		if (l == nullptr) {
			if (i != 4) {
				$throwNew($RuntimeException, $$str({"Expected 4 lines, got "_s, $$str(i)}));
			}
			break;
		}
		$nc($System::err)->println($$str({$$str(i), ": "_s, l}));
	}
}

EOL::EOL() {
}

$Class* EOL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EOL, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EOL, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EOL",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EOL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EOL);
	});
	return class$;
}

$Class* EOL::class$ = nullptr;