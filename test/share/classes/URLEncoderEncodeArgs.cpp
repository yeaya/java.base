#include <URLEncoderEncodeArgs.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/net/URLEncoder.h>
#include <jcpp.h>

using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $URLEncoder = ::java::net::URLEncoder;

void URLEncoderEncodeArgs::init$() {
}

void URLEncoderEncodeArgs::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($String, s1, $URLEncoder::encode("Hello World"_s, ($String*)nullptr));
	} catch ($UnsupportedEncodingException& e) {
		$throwNew($RuntimeException, "NPE should have been thrown"_s);
	} catch ($NullPointerException& e) {
		try {
			$var($String, s2, $URLEncoder::encode("Hello World"_s, ""_s));
		} catch ($UnsupportedEncodingException& ee) {
			return;
		}
		$throwNew($RuntimeException, "empty string was accepted as encoding name"_s);
	}
	$throwNew($RuntimeException, "null reference was accepted as encoding name"_s);
}

URLEncoderEncodeArgs::URLEncoderEncodeArgs() {
}

$Class* URLEncoderEncodeArgs::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(URLEncoderEncodeArgs, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(URLEncoderEncodeArgs, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"URLEncoderEncodeArgs",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(URLEncoderEncodeArgs, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLEncoderEncodeArgs);
	});
	return class$;
}

$Class* URLEncoderEncodeArgs::class$ = nullptr;