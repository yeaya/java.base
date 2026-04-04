#include <TestRFC2732.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;

void TestRFC2732::init$() {
}

void TestRFC2732::main($StringArray* args) {
	$useLocalObjectStack();
	$var($URL, u, nullptr);
	try {
		$assign(u, $new($URL, "http"_s, "10:100::1234"_s, 99, "/index"_s));
		bool var$0 = !$$nc(u->toString())->equals("http://[10:100::1234]:99/index"_s);
		if (var$0 || !$$nc(u->toExternalForm())->equals("http://[10:100::1234]:99/index"_s)) {
			$throwNew($Exception, "Failed test for RFC 2732"_s);
		}
		$nc($System::out)->println("Test passed!"_s);
	} catch ($Exception& exp) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append($(exp->getMessage()));
		var$1->append("Expect: http://[10:100::1234]:99/index Got: "_s);
		var$1->append($($nc(u)->toExternalForm()));
		$throwNew($RuntimeException, $$str(var$1));
	}
}

TestRFC2732::TestRFC2732() {
}

$Class* TestRFC2732::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestRFC2732, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestRFC2732, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestRFC2732",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestRFC2732, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestRFC2732);
	});
	return class$;
}

$Class* TestRFC2732::class$ = nullptr;