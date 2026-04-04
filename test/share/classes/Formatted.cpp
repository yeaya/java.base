#include <Formatted.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void Formatted::init$() {
}

void Formatted::main($StringArray* args) {
	test1();
}

void Formatted::test1() {
	$useLocalObjectStack();
	$var($String, var$0, "formatted(Object... args)"_s);
	$var($String, var$1, "Test this %s"_s->formatted($$new($ObjectArray, {"and that"_s})));
	check(var$0, var$1, $($String::format("Test this %s"_s, $$new($ObjectArray, {"and that"_s}))));
}

void Formatted::check($String* test, $String* output, $String* expected) {
	$useLocalObjectStack();
	if (output != expected && (output == nullptr || !output->equals(expected))) {
		$nc($System::err)->println($$str({"Testing "_s, test, ": unexpected result"_s}));
		$System::err->println($$str({"Output: "_s, output}));
		$System::err->println($$str({"Expected: "_s, expected}));
		$throwNew($RuntimeException);
	}
}

Formatted::Formatted() {
}

$Class* Formatted::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Formatted, init$, void)},
		{"check", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Formatted, check, void, $String*, $String*, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Formatted, main, void, $StringArray*)},
		{"test1", "()V", nullptr, $STATIC, $staticMethod(Formatted, test1, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Formatted",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Formatted, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Formatted);
	});
	return class$;
}

$Class* Formatted::class$ = nullptr;