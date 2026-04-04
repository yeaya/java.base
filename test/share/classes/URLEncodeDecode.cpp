#include <URLEncodeDecode.h>
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

$chars* URLEncodeDecode::chars = nullptr;
$String* URLEncodeDecode::str = nullptr;
$String* URLEncodeDecode::correctEncodedUTF8 = nullptr;

void URLEncodeDecode::init$() {
}

void URLEncodeDecode::main($StringArray* args) {
	$init(URLEncodeDecode);
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"Constructed the string: "_s, URLEncodeDecode::str}));
	$System::out->println($$str({"The Unicode bytes are: "_s, $(getHexBytes(URLEncodeDecode::str))}));
	$System::out->println(""_s);
	test("UTF-8"_s, URLEncodeDecode::correctEncodedUTF8);
}

void URLEncodeDecode::test($String* enc, $String* correctEncoded) {
	$init(URLEncodeDecode);
	$useLocalObjectStack();
	$var($String, encoded, nullptr);
	$var($String, outStr, nullptr);
	if (enc == nullptr) {
		$assign(encoded, $URLEncoder::encode(URLEncodeDecode::str));
		$assign(outStr, "default"_s);
	} else {
		$assign(encoded, $URLEncoder::encode(URLEncodeDecode::str, enc));
		$assign(outStr, enc);
	}
	$nc($System::out)->println($$str({"URLEncode it ("_s, outStr, ") : "_s, encoded}));
	$System::out->println($$str({"The Unicode bytes are: "_s, $(getHexBytes(encoded))}));
	if ($nc(encoded)->equals(correctEncoded)) {
		$System::out->println("The encoding is correct!"_s);
	} else {
		$throwNew($Exception, $$str({"The encoding is incorrect! It should be "_s, correctEncoded}));
	}
	$System::out->println(""_s);
	$var($String, decoded, nullptr);
	if (enc == nullptr) {
		$assign(decoded, $URLDecoder::decode(encoded));
	} else {
		$assign(decoded, $URLDecoder::decode(encoded, enc));
	}
	$System::out->println($$str({"URLDecode it ("_s, outStr, ") : "_s, decoded}));
	$System::out->println($$str({"The Unicode bytes are: "_s, $(getHexBytes(decoded))}));
	if ($nc(URLEncodeDecode::str)->equals(decoded)) {
		$System::out->println("The decoding is correct"_s);
	} else {
		$throwNew($Exception, "The decoded is not equal to the original"_s);
	}
}

$String* URLEncodeDecode::getHexBytes($String* s) {
	$init(URLEncodeDecode);
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

void URLEncodeDecode::clinit$($Class* clazz) {
	$assignStatic(URLEncodeDecode::chars, $new($chars, {
		u'H',
		u'e',
		u'l',
		u'l',
		u'o',
		u' ',
		u'+',
		u'%',
		u'-',
		u'_',
		u'.',
		u'!',
		u'~',
		u'*',
		u'\'',
		u'(',
		u')',
		u'@',
		(char16_t)0xae,
		(char16_t)0x0101,
		(char16_t)0x10a0
	}));
	$assignStatic(URLEncodeDecode::str, $new($String, URLEncodeDecode::chars));
	$assignStatic(URLEncodeDecode::correctEncodedUTF8, "Hello+%2B%25-_.%21%7E*%27%28%29%40%C2%AE%C4%81%E1%82%A0"_s);
}

URLEncodeDecode::URLEncodeDecode() {
}

$Class* URLEncodeDecode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"chars", "[C", nullptr, $STATIC, $staticField(URLEncodeDecode, chars)},
		{"str", "Ljava/lang/String;", nullptr, $STATIC, $staticField(URLEncodeDecode, str)},
		{"correctEncodedUTF8", "Ljava/lang/String;", nullptr, $STATIC, $staticField(URLEncodeDecode, correctEncodedUTF8)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(URLEncodeDecode, init$, void)},
		{"getHexBytes", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(URLEncodeDecode, getHexBytes, $String*, $String*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(URLEncodeDecode, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(URLEncodeDecode, test, void, $String*, $String*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"URLEncodeDecode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(URLEncodeDecode, name, initialize, &classInfo$$, URLEncodeDecode::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(URLEncodeDecode);
	});
	return class$;
}

$Class* URLEncodeDecode::class$ = nullptr;