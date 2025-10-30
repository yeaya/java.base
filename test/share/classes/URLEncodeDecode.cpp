#include <URLEncodeDecode.h>

#include <java/lang/StringBuffer.h>
#include <java/net/URLDecoder.h>
#include <java/net/URLEncoder.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $URLDecoder = ::java::net::URLDecoder;
using $URLEncoder = ::java::net::URLEncoder;

$FieldInfo _URLEncodeDecode_FieldInfo_[] = {
	{"chars", "[C", nullptr, $STATIC, $staticField(URLEncodeDecode, chars)},
	{"str", "Ljava/lang/String;", nullptr, $STATIC, $staticField(URLEncodeDecode, str)},
	{"correctEncodedUTF8", "Ljava/lang/String;", nullptr, $STATIC, $staticField(URLEncodeDecode, correctEncodedUTF8)},
	{}
};

$MethodInfo _URLEncodeDecode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(URLEncodeDecode::*)()>(&URLEncodeDecode::init$))},
	{"getHexBytes", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&URLEncodeDecode::getHexBytes)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&URLEncodeDecode::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&URLEncodeDecode::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _URLEncodeDecode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"URLEncodeDecode",
	"java.lang.Object",
	nullptr,
	_URLEncodeDecode_FieldInfo_,
	_URLEncodeDecode_MethodInfo_
};

$Object* allocate$URLEncodeDecode($Class* clazz) {
	return $of($alloc(URLEncodeDecode));
}

$chars* URLEncodeDecode::chars = nullptr;
$String* URLEncodeDecode::str = nullptr;
$String* URLEncodeDecode::correctEncodedUTF8 = nullptr;

void URLEncodeDecode::init$() {
}

void URLEncodeDecode::main($StringArray* args) {
	$init(URLEncodeDecode);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({"Constructed the string: "_s, URLEncodeDecode::str}));
	$nc($System::out)->println($$str({"The Unicode bytes are: "_s, $(getHexBytes(URLEncodeDecode::str))}));
	$nc($System::out)->println(""_s);
	test("UTF-8"_s, URLEncodeDecode::correctEncodedUTF8);
}

void URLEncodeDecode::test($String* enc, $String* correctEncoded) {
	$init(URLEncodeDecode);
	$useLocalCurrentObjectStackCache();
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
	$nc($System::out)->println($$str({"The Unicode bytes are: "_s, $(getHexBytes(encoded))}));
	if ($nc(encoded)->equals(correctEncoded)) {
		$nc($System::out)->println("The encoding is correct!"_s);
	} else {
		$throwNew($Exception, $$str({"The encoding is incorrect! It should be "_s, correctEncoded}));
	}
	$nc($System::out)->println(""_s);
	$var($String, decoded, nullptr);
	if (enc == nullptr) {
		$assign(decoded, $URLDecoder::decode(encoded));
	} else {
		$assign(decoded, $URLDecoder::decode(encoded, enc));
	}
	$nc($System::out)->println($$str({"URLDecode it ("_s, outStr, ") : "_s, decoded}));
	$nc($System::out)->println($$str({"The Unicode bytes are: "_s, $(getHexBytes(decoded))}));
	if ($nc(URLEncodeDecode::str)->equals(decoded)) {
		$nc($System::out)->println("The decoding is correct"_s);
	} else {
		$throwNew($Exception, "The decoded is not equal to the original"_s);
	}
}

$String* URLEncodeDecode::getHexBytes($String* s) {
	$init(URLEncodeDecode);
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sb, $new($StringBuffer));
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		int32_t a = s->charAt(i);
		int32_t b1 = (int32_t)((a >> 8) & (uint32_t)255);
		int32_t b2 = (int8_t)a;
		int32_t b11 = (int32_t)((b1 >> 4) & (uint32_t)15);
		int32_t b12 = (int32_t)(b1 & (uint32_t)15);
		int32_t b21 = (int32_t)((b2 >> 4) & (uint32_t)15);
		int32_t b22 = (int32_t)(b2 & (uint32_t)15);
		sb->append($($Integer::toHexString(b11)));
		sb->append($($Integer::toHexString(b12)));
		sb->append($($Integer::toHexString(b21)));
		sb->append($($Integer::toHexString(b22)));
		sb->append(u' ');
	}
	return sb->toString();
}

void clinit$URLEncodeDecode($Class* class$) {
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
		(char16_t)0xAE,
		(char16_t)0x101,
		(char16_t)0x10A0
	}));
	$assignStatic(URLEncodeDecode::str, $new($String, URLEncodeDecode::chars));
	$assignStatic(URLEncodeDecode::correctEncodedUTF8, "Hello+%2B%25-_.%21%7E*%27%28%29%40%C2%AE%C4%81%E1%82%A0"_s);
}

URLEncodeDecode::URLEncodeDecode() {
}

$Class* URLEncodeDecode::load$($String* name, bool initialize) {
	$loadClass(URLEncodeDecode, name, initialize, &_URLEncodeDecode_ClassInfo_, clinit$URLEncodeDecode, allocate$URLEncodeDecode);
	return class$;
}

$Class* URLEncodeDecode::class$ = nullptr;