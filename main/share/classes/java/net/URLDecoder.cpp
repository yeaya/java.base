#include <java/net/URLDecoder.h>

#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URLEncoder.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/IllegalCharsetNameException.h>
#include <java/nio/charset/UnsupportedCharsetException.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $URLEncoder = ::java::net::URLEncoder;
using $Charset = ::java::nio::charset::Charset;
using $IllegalCharsetNameException = ::java::nio::charset::IllegalCharsetNameException;
using $UnsupportedCharsetException = ::java::nio::charset::UnsupportedCharsetException;
using $Objects = ::java::util::Objects;

namespace java {
	namespace net {

$CompoundAttribute _URLDecoder_MethodAnnotations_decode1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _URLDecoder_FieldInfo_[] = {
	{"dfltEncName", "Ljava/lang/String;", nullptr, $STATIC, $staticField(URLDecoder, dfltEncName)},
	{}
};

$MethodInfo _URLDecoder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(URLDecoder::*)()>(&URLDecoder::init$))},
	{"decode", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$String*(*)($String*)>(&URLDecoder::decode)), nullptr, nullptr, _URLDecoder_MethodAnnotations_decode1},
	{"decode", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&URLDecoder::decode)), "java.io.UnsupportedEncodingException"},
	{"decode", "(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$Charset*)>(&URLDecoder::decode))},
	{}
};

$ClassInfo _URLDecoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.URLDecoder",
	"java.lang.Object",
	nullptr,
	_URLDecoder_FieldInfo_,
	_URLDecoder_MethodInfo_
};

$Object* allocate$URLDecoder($Class* clazz) {
	return $of($alloc(URLDecoder));
}

$String* URLDecoder::dfltEncName = nullptr;

void URLDecoder::init$() {
}

$String* URLDecoder::decode($String* s) {
	$init(URLDecoder);
	$var($String, str, nullptr);
	try {
		$assign(str, decode(s, URLDecoder::dfltEncName));
	} catch ($UnsupportedEncodingException&) {
		$catch();
	}
	return str;
}

$String* URLDecoder::decode($String* s, $String* enc) {
	$init(URLDecoder);
	$useLocalCurrentObjectStackCache();
	if ($nc(enc)->isEmpty()) {
		$throwNew($UnsupportedEncodingException, "URLDecoder: empty string enc parameter"_s);
	}
	try {
		$var($Charset, charset, $Charset::forName(enc));
		return decode(s, charset);
	} catch ($IllegalCharsetNameException&) {
		$var($IllegalArgumentException, e, $catch());
		$throwNew($UnsupportedEncodingException, enc);
	} catch ($UnsupportedCharsetException&) {
		$var($IllegalArgumentException, e, $catch());
		$throwNew($UnsupportedEncodingException, enc);
	}
	$shouldNotReachHere();
}

$String* URLDecoder::decode($String* s, $Charset* charset) {
	$init(URLDecoder);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(charset), "Charset"_s);
	bool needToChange = false;
	int32_t numChars = $nc(s)->length();
	$var($StringBuilder, sb, $new($StringBuilder, numChars > 500 ? numChars / 2 : numChars));
	int32_t i = 0;
	char16_t c = 0;
	$var($bytes, bytes, nullptr);
	while (i < numChars) {
		c = s->charAt(i);
		switch (c) {
		case u'+':
			{
				sb->append(u' ');
				++i;
				needToChange = true;
				break;
			}
		case u'%':
			{
				try {
					if (bytes == nullptr) {
						$assign(bytes, $new($bytes, (numChars - i) / 3));
					}
					int32_t pos = 0;
					while (((i + 2) < numChars) && (c == u'%')) {
						int32_t v = $Integer::parseInt(s, i + 1, i + 3, 16);
						if (v < 0) {
							$throwNew($IllegalArgumentException, "URLDecoder: Illegal hex characters in escape (%) pattern - negative value"_s);
						}
						$nc(bytes)->set(pos++, (int8_t)v);
						i += 3;
						if (i < numChars) {
							c = s->charAt(i);
						}
					}
					if ((i < numChars) && (c == u'%')) {
						$throwNew($IllegalArgumentException, "URLDecoder: Incomplete trailing escape (%) pattern"_s);
					}
					sb->append($$new($String, bytes, 0, pos, charset));
				} catch ($NumberFormatException&) {
					$var($NumberFormatException, e, $catch());
					$throwNew($IllegalArgumentException, $$str({"URLDecoder: Illegal hex characters in escape (%) pattern - "_s, $(e->getMessage())}));
				}
				needToChange = true;
				break;
			}
		default:
			{
				sb->append(c);
				++i;
				break;
			}
		}
	}
	return (needToChange ? sb->toString() : s);
}

void clinit$URLDecoder($Class* class$) {
	$init($URLEncoder);
	$assignStatic(URLDecoder::dfltEncName, $URLEncoder::dfltEncName);
}

URLDecoder::URLDecoder() {
}

$Class* URLDecoder::load$($String* name, bool initialize) {
	$loadClass(URLDecoder, name, initialize, &_URLDecoder_ClassInfo_, clinit$URLDecoder, allocate$URLDecoder);
	return class$;
}

$Class* URLDecoder::class$ = nullptr;

	} // net
} // java