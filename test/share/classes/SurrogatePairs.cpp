#include <SurrogatePairs.h>
#include <java/lang/StringBuffer.h>
#include <java/net/URLDecoder.h>
#include <java/net/URLEncoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $URLDecoder = ::java::net::URLDecoder;
using $URLEncoder = ::java::net::URLEncoder;

$StringArray* SurrogatePairs::testStrings = nullptr;
$StringArray* SurrogatePairs::correctEncodings = nullptr;

void SurrogatePairs::init$() {
}

void SurrogatePairs::main($StringArray* args) {
	$init(SurrogatePairs);
	for (int32_t i = 0; i < $nc(SurrogatePairs::testStrings)->length; ++i) {
		test(SurrogatePairs::testStrings->get(i), $nc(SurrogatePairs::correctEncodings)->get(i));
	}
}

void SurrogatePairs::test($String* str, $String* correctEncoding) {
	$init(SurrogatePairs);
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"Unicode bytes of test string are: "_s, $(getHexBytes(str))}));
	$var($String, encoded, $URLEncoder::encode(str, "UTF-8"_s));
	$System::out->println($$str({"URLEncoding is: "_s, encoded}));
	if ($nc(encoded)->equals(correctEncoding)) {
		$System::out->println("The encoding is correct!"_s);
	} else {
		$throwNew($Exception, $$str({"The encoding is incorrect! It should be "_s, correctEncoding}));
	}
	$var($String, decoded, $URLDecoder::decode(encoded, "UTF-8"_s));
	$System::out->println($$str({"Unicode bytes for URLDecoding are: "_s, $(getHexBytes(decoded))}));
	if ($nc(str)->equals(decoded)) {
		$System::out->println("The decoding is correct"_s);
	} else {
		$throwNew($Exception, "The decoded is not equal to the original"_s);
	}
	$System::out->println("---"_s);
}

$String* SurrogatePairs::getHexBytes($String* s) {
	$init(SurrogatePairs);
	$useLocalObjectStack();
	$var($StringBuffer, sb, $new($StringBuffer));
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		int32_t a = s->charAt(i);
		int32_t b1 = (a >> 8) & 0xff;
		int32_t b2 = (int8_t)a;
		int32_t b11 = (b1 >> 4) & 0x0f;
		int32_t b12 = b1 & 0x0f;
		int32_t b21 = (b2 >> 4) & 0x0f;
		int32_t b22 = b2 & 0x0f;
		sb->append($($Integer::toHexString(b11)));
		sb->append($($Integer::toHexString(b12)));
		sb->append($($Integer::toHexString(b21)));
		sb->append($($Integer::toHexString(b22)));
		sb->append(u' ');
	}
	return sb->toString();
}

void SurrogatePairs::clinit$($Class* clazz) {
	$assignStatic(SurrogatePairs::testStrings, $new($StringArray, {
		$cstr({0x00010000}),
		$cstr({0x000103ff}),
		$cstr({0x0010fc00}),
		$cstr({0x0010ffff}),
		$cstr({'1', 0x0010fc00}),
		$cstr({'@', 0x0010fc00}),
		$cstr({0x0010fc00, '1'}),
		$cstr({0x0010fc00, '@'}),
		$cstr({0x0101, 0x0010fc00}),
		$cstr({0x0010fc00, 0x0101})
	}));
	$assignStatic(SurrogatePairs::correctEncodings, $new($StringArray, {
		"%F0%90%80%80"_s,
		"%F0%90%8F%BF"_s,
		"%F4%8F%B0%80"_s,
		"%F4%8F%BF%BF"_s,
		"1%F4%8F%B0%80"_s,
		"%40%F4%8F%B0%80"_s,
		"%F4%8F%B0%801"_s,
		"%F4%8F%B0%80%40"_s,
		"%C4%81%F4%8F%B0%80"_s,
		"%F4%8F%B0%80%C4%81"_s
	}));
}

SurrogatePairs::SurrogatePairs() {
}

$Class* SurrogatePairs::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"testStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(SurrogatePairs, testStrings)},
		{"correctEncodings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(SurrogatePairs, correctEncodings)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SurrogatePairs, init$, void)},
		{"getHexBytes", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SurrogatePairs, getHexBytes, $String*, $String*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SurrogatePairs, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SurrogatePairs, test, void, $String*, $String*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SurrogatePairs",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SurrogatePairs, name, initialize, &classInfo$$, SurrogatePairs::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SurrogatePairs);
	});
	return class$;
}

$Class* SurrogatePairs::class$ = nullptr;