#include <DecodeNonEncoded.h>
#include <java/net/URLDecoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLDecoder = ::java::net::URLDecoder;

$StringArray* DecodeNonEncoded::errorStrings = nullptr;
$StringArray* DecodeNonEncoded::ignoreStrings = nullptr;

void DecodeNonEncoded::init$() {
}

void DecodeNonEncoded::main($StringArray* args) {
	$init(DecodeNonEncoded);
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(DecodeNonEncoded::errorStrings)->length; ++i) {
		try {
			$URLDecoder::decode(DecodeNonEncoded::errorStrings->get(i));
			$throwNew($Exception, $$str({"String \""_s, DecodeNonEncoded::errorStrings->get(i), "\" should have failed in URLDecoder.decode!"_s}));
		} catch ($IllegalArgumentException& e) {
			$nc($System::out)->println($$str({"String \""_s, DecodeNonEncoded::errorStrings->get(i), "\" correctly threw IllegalArgumentException: "_s, $(e->getMessage())}));
		}
	}
	$var($String, temp, nullptr);
	for (int32_t i = 0; i < $nc(DecodeNonEncoded::ignoreStrings)->length; ++i) {
		$assign(temp, $URLDecoder::decode(DecodeNonEncoded::ignoreStrings->get(i)));
		if (!$nc(temp)->equals(DecodeNonEncoded::ignoreStrings->get(i))) {
			$throwNew($Exception, $$str({"String \""_s, DecodeNonEncoded::ignoreStrings->get(i), "\" was converted to "_s, temp, " by URLDecoder.decode to "_s}));
		} else {
			$nc($System::out)->println($$str({"String \""_s, temp, "\" was left unchanged by URLDecoder.decode."_s}));
		}
	}
}

void DecodeNonEncoded::clinit$($Class* clazz) {
	$assignStatic(DecodeNonEncoded::errorStrings, $new($StringArray, {
		"%"_s,
		"%A"_s,
		"Hello%"_s,
		"%xy"_s,
		"%az"_s,
		"%ab%q"_s
	}));
	$assignStatic(DecodeNonEncoded::ignoreStrings, $new($StringArray, {
		"#"_s,
		"X@Y"_s,
		"Hello There"_s
	}));
}

DecodeNonEncoded::DecodeNonEncoded() {
}

$Class* DecodeNonEncoded::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"errorStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(DecodeNonEncoded, errorStrings)},
		{"ignoreStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(DecodeNonEncoded, ignoreStrings)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DecodeNonEncoded, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DecodeNonEncoded, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DecodeNonEncoded",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DecodeNonEncoded, name, initialize, &classInfo$$, DecodeNonEncoded::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DecodeNonEncoded);
	});
	return class$;
}

$Class* DecodeNonEncoded::class$ = nullptr;