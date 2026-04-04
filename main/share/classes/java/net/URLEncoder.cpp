#include <java/net/URLEncoder.h>
#include <java/io/CharArrayWriter.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/IllegalCharsetNameException.h>
#include <java/nio/charset/UnsupportedCharsetException.h>
#include <java/util/BitSet.h>
#include <java/util/Objects.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $CharArrayWriter = ::java::io::CharArrayWriter;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Charset = ::java::nio::charset::Charset;
using $IllegalCharsetNameException = ::java::nio::charset::IllegalCharsetNameException;
using $UnsupportedCharsetException = ::java::nio::charset::UnsupportedCharsetException;
using $BitSet = ::java::util::BitSet;
using $Objects = ::java::util::Objects;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace java {
	namespace net {

$BitSet* URLEncoder::dontNeedEncoding = nullptr;
$String* URLEncoder::dfltEncName = nullptr;

void URLEncoder::init$() {
}

$String* URLEncoder::encode($String* s) {
	$init(URLEncoder);
	$var($String, str, nullptr);
	try {
		$assign(str, encode(s, URLEncoder::dfltEncName));
	} catch ($UnsupportedEncodingException& e) {
	}
	return str;
}

$String* URLEncoder::encode($String* s, $String* enc) {
	$init(URLEncoder);
	if (enc == nullptr) {
		$throwNew($NullPointerException, "charsetName"_s);
	}
	try {
		$var($Charset, charset, $Charset::forName(enc));
		return encode(s, charset);
	} catch ($IllegalCharsetNameException& e) {
		$throwNew($UnsupportedEncodingException, enc);
	} catch ($UnsupportedCharsetException& e) {
		$throwNew($UnsupportedEncodingException, enc);
	}
	$shouldNotReachHere();
}

$String* URLEncoder::encode($String* s, $Charset* charset) {
	$init(URLEncoder);
	$useLocalObjectStack();
	$Objects::requireNonNull(charset, "charset"_s);
	bool needToChange = false;
	$var($StringBuilder, out, $new($StringBuilder, $nc(s)->length()));
	$var($CharArrayWriter, charArrayWriter, $new($CharArrayWriter));
	for (int32_t i = 0; i < s->length();) {
		int32_t c = s->charAt(i);
		if ($nc(URLEncoder::dontNeedEncoding)->get(c)) {
			if (c == u' ') {
				c = u'+';
				needToChange = true;
			}
			out->append((char16_t)c);
			++i;
		} else {
			bool var$0 = false;
			do {
				charArrayWriter->write(c);
				if (c >= 0x0000d800 && c <= 0x0000dbff) {
					if ((i + 1) < s->length()) {
						int32_t d = s->charAt(i + 1);
						if (d >= 0x0000dc00 && d <= 0x0000dfff) {
							charArrayWriter->write(d);
							++i;
						}
					}
				}
				++i;
				var$0 = i < s->length();
			} while (var$0 && !URLEncoder::dontNeedEncoding->get((c = s->charAt(i))));
			charArrayWriter->flush();
			$var($String, str, charArrayWriter->toString());
			$var($bytes, ba, $nc(str)->getBytes(charset));
			{
				$var($bytes, arr$, ba);
				for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
					int8_t b = arr$->get(i$);
					{
						out->append(u'%');
						char16_t ch = $Character::forDigit((b >> 4) & 0x0f, 16);
						if ($Character::isLetter(ch)) {
							ch -= URLEncoder::caseDiff;
						}
						out->append(ch);
						ch = $Character::forDigit(b & 0x0f, 16);
						if ($Character::isLetter(ch)) {
							ch -= URLEncoder::caseDiff;
						}
						out->append(ch);
					}
				}
			}
			charArrayWriter->reset();
			needToChange = true;
		}
	}
	return (needToChange ? out->toString() : s);
}

void URLEncoder::clinit$($Class* clazz) {
	{
		$assignStatic(URLEncoder::dontNeedEncoding, $new($BitSet, 256));
		int32_t i = 0;
		for (i = u'a'; i <= u'z'; ++i) {
			URLEncoder::dontNeedEncoding->set(i);
		}
		for (i = u'A'; i <= u'Z'; ++i) {
			URLEncoder::dontNeedEncoding->set(i);
		}
		for (i = u'0'; i <= u'9'; ++i) {
			URLEncoder::dontNeedEncoding->set(i);
		}
		URLEncoder::dontNeedEncoding->set(u' ');
		URLEncoder::dontNeedEncoding->set(u'-');
		URLEncoder::dontNeedEncoding->set(u'_');
		URLEncoder::dontNeedEncoding->set(u'.');
		URLEncoder::dontNeedEncoding->set(u'*');
		$assignStatic(URLEncoder::dfltEncName, $GetPropertyAction::privilegedGetProperty("file.encoding"_s));
	}
}

URLEncoder::URLEncoder() {
}

$Class* URLEncoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dontNeedEncoding", "Ljava/util/BitSet;", nullptr, $STATIC, $staticField(URLEncoder, dontNeedEncoding)},
		{"caseDiff", "I", nullptr, $STATIC | $FINAL, $constField(URLEncoder, caseDiff)},
		{"dfltEncName", "Ljava/lang/String;", nullptr, $STATIC, $staticField(URLEncoder, dfltEncName)},
		{}
	};
	$CompoundAttribute encodemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(URLEncoder, init$, void)},
		{"encode", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(URLEncoder, encode, $String*, $String*), nullptr, nullptr, encodemethodAnnotations$$},
		{"encode", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(URLEncoder, encode, $String*, $String*, $String*), "java.io.UnsupportedEncodingException"},
		{"encode", "(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(URLEncoder, encode, $String*, $String*, $Charset*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.URLEncoder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(URLEncoder, name, initialize, &classInfo$$, URLEncoder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(URLEncoder);
	});
	return class$;
}

$Class* URLEncoder::class$ = nullptr;

	} // net
} // java