#include <EncodeDecode.h>
#include <java/net/URLDecoder.h>
#include <java/net/URLEncoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLDecoder = ::java::net::URLDecoder;
using $URLEncoder = ::java::net::URLEncoder;

void EncodeDecode::init$() {
}

void EncodeDecode::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, str, "fds@$"_s);
	$var($String, encStr, $URLEncoder::encode(str));
	$var($String, decStr, $URLDecoder::decode(encStr));
}

EncodeDecode::EncodeDecode() {
}

$Class* EncodeDecode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EncodeDecode, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EncodeDecode, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EncodeDecode",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EncodeDecode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EncodeDecode);
	});
	return class$;
}

$Class* EncodeDecode::class$ = nullptr;