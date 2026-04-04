#include <ExpectedEncoding.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void ExpectedEncoding::init$() {
}

void ExpectedEncoding::main($StringArray* args) {
	$useLocalObjectStack();
	bool failed = false;
	if ($nc(args)->length != 2) {
		$nc($System::out)->println("Usage:"_s);
		$System::out->println("$ java ExpectedEncoding <expected file.encoding> <expected sun.jnu.encoding>"_s);
		$System::out->println("$   use \"skip\" to skip checking property\'s value"_s);
		$System::exit(1);
	}
	$var($String, expectFileEnc, args->get(0));
	$var($String, expectSunJnuEnc, args->get(1));
	$var($String, fileEnc, $System::getProperty("file.encoding"_s));
	$var($String, jnuEnc, $System::getProperty("sun.jnu.encoding"_s));
	if ("skip"_s->equals(expectFileEnc)) {
		$nc($System::err)->println("Expected file.encoding is \"skip\", ignoring"_s);
	} else if (fileEnc == nullptr || !fileEnc->equals(expectFileEnc)) {
		$nc($System::err)->println($$str({"Expected file.encoding: "_s, expectFileEnc}));
		$System::err->println($$str({"Actual file.encoding: "_s, fileEnc}));
		failed = true;
	}
	if ("skip"_s->equals(expectSunJnuEnc)) {
		$nc($System::err)->println("Expected sun.jnu.encoding is \"skip\", ignoring"_s);
	} else if (jnuEnc == nullptr || !jnuEnc->equals(expectSunJnuEnc)) {
		$nc($System::err)->println($$str({"Expected sun.jnu.encoding: "_s, expectSunJnuEnc}));
		$System::err->println($$str({"Actual sun.jnu.encoding: "_s, jnuEnc}));
		failed = true;
	}
	if (failed) {
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

ExpectedEncoding::ExpectedEncoding() {
}

$Class* ExpectedEncoding::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExpectedEncoding, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ExpectedEncoding, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ExpectedEncoding",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ExpectedEncoding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExpectedEncoding);
	});
	return class$;
}

$Class* ExpectedEncoding::class$ = nullptr;