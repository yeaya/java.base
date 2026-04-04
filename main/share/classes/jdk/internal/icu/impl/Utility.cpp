#include <jdk/internal/icu/impl/Utility.h>
#include <java/io/IOException.h>
#include <java/lang/Appendable.h>
#include <java/util/Locale.h>
#include <jdk/internal/icu/impl/UCharacterProperty.h>
#include <jdk/internal/icu/lang/UCharacter.h>
#include <jdk/internal/icu/text/UTF16.h>
#include <jcpp.h>

#undef DIGITS
#undef ENGLISH
#undef MIN_VALUE
#undef UNESCAPE_MAP

using $IOException = ::java::io::IOException;
using $Appendable = ::java::lang::Appendable;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $UCharacterProperty = ::jdk::internal::icu::impl::UCharacterProperty;
using $UCharacter = ::jdk::internal::icu::lang::UCharacter;
using $UTF16 = ::jdk::internal::icu::text::UTF16;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$chars* Utility::UNESCAPE_MAP = nullptr;
$chars* Utility::DIGITS = nullptr;

void Utility::init$() {
}

$String* Utility::escape($String* s) {
	$init(Utility);
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(s)->length();) {
		int32_t c = $Character::codePointAt(s, i);
		i += $UTF16::getCharCount(c);
		if (c >= u' ' && c <= 127) {
			if (c == u'\\') {
				buf->append("\\\\"_s);
			} else {
				buf->append((char16_t)c);
			}
		} else {
			bool four = c <= 0x0000ffff;
			buf->append(four ? "\\u"_s : "\\U"_s);
			buf->append($(hex(c, four ? 4 : 8)));
		}
	}
	return buf->toString();
}

int32_t Utility::unescapeAt($String* s, $ints* offset16) {
	$init(Utility);
	int32_t c = 0;
	int32_t result = 0;
	int32_t n = 0;
	int32_t minDig = 0;
	int32_t maxDig = 0;
	int32_t bitsPerDigit = 4;
	int32_t dig = 0;
	int32_t i = 0;
	bool braces = false;
	int32_t offset = $nc(offset16)->get(0);
	int32_t length = $nc(s)->length();
	if (offset < 0 || offset >= length) {
		return -1;
	}
	c = $Character::codePointAt(s, offset);
	offset += $UTF16::getCharCount(c);
	switch (c) {
	case u'u':
		minDig = (maxDig = 4);
		break;
	case u'U':
		minDig = (maxDig = 8);
		break;
	case u'x':
		minDig = 1;
		if (offset < length && $UTF16::charAt(s, offset) == 123) {
			++offset;
			braces = true;
			maxDig = 8;
		} else {
			maxDig = 2;
		}
		break;
	default:
		dig = $UCharacter::digit(c, 8);
		if (dig >= 0) {
			minDig = 1;
			maxDig = 3;
			n = 1;
			bitsPerDigit = 3;
			result = dig;
		}
		break;
	}
	if (minDig != 0) {
		while (offset < length && n < maxDig) {
			c = $UTF16::charAt(s, offset);
			dig = $UCharacter::digit(c, (bitsPerDigit == 3) ? 8 : 16);
			if (dig < 0) {
				break;
			}
			result = ($sl(result, bitsPerDigit)) | dig;
			offset += $UTF16::getCharCount(c);
			++n;
		}
		if (n < minDig) {
			return -1;
		}
		if (braces) {
			if (c != 125) {
				return -1;
			}
			++offset;
		}
		if (result < 0 || result >= 0x00110000) {
			return -1;
		}
		if (offset < length && $UTF16::isLeadSurrogate((char16_t)result)) {
			int32_t ahead = offset + 1;
			c = s->charAt(offset);
			if (c == u'\\' && ahead < length) {
				$var($ints, o, $new($ints, {ahead}));
				c = unescapeAt(s, o);
				ahead = o->get(0);
			}
			if ($UTF16::isTrailSurrogate((char16_t)c)) {
				offset = ahead;
				result = $UCharacterProperty::getRawSupplementary((char16_t)result, (char16_t)c);
			}
		}
		offset16->set(0, offset);
		return result;
	}
	for (i = 0; i < Utility::UNESCAPE_MAP->length; i += 2) {
		if (c == Utility::UNESCAPE_MAP->get(i)) {
			offset16->set(0, offset);
			return Utility::UNESCAPE_MAP->get(i + 1);
		} else if (c < Utility::UNESCAPE_MAP->get(i)) {
			break;
		}
	}
	if (c == u'c' && offset < length) {
		c = $UTF16::charAt(s, offset);
		offset16->set(0, offset + $UTF16::getCharCount(c));
		return 0x1f & c;
	}
	offset16->set(0, offset);
	return c;
}

$String* Utility::hex(int64_t i, int32_t places) {
	$init(Utility);
	$useLocalObjectStack();
	if (i == $Long::MIN_VALUE) {
		return "-8000000000000000"_s;
	}
	bool negative = i < 0;
	if (negative) {
		i = -i;
	}
	$init($Locale);
	$var($String, result, $($Long::toString(i, 16))->toUpperCase($Locale::ENGLISH));
	if (result->length() < places) {
		$assign(result, $str({$("0000000000000000"_s->substring(result->length(), places)), result}));
	}
	if (negative) {
		return $str({$$str(u'-'), result});
	}
	return result;
}

bool Utility::isUnprintable(int32_t c) {
	$init(Utility);
	return !(c >= 32 && c <= 126);
}

bool Utility::escapeUnprintable($Appendable* result, int32_t c) {
	$init(Utility);
	try {
		if (isUnprintable(c)) {
			$nc(result)->append(u'\\');
			if ((c & ~0xffff) != 0) {
				result->append(u'U');
				result->append(Utility::DIGITS->get(0x0f & (c >> 28)));
				result->append(Utility::DIGITS->get(0x0f & (c >> 24)));
				result->append(Utility::DIGITS->get(0x0f & (c >> 20)));
				result->append(Utility::DIGITS->get(0x0f & (c >> 16)));
			} else {
				result->append(u'u');
			}
			result->append(Utility::DIGITS->get(0x0f & (c >> 12)));
			result->append(Utility::DIGITS->get(0x0f & (c >> 8)));
			result->append(Utility::DIGITS->get(0x0f & (c >> 4)));
			result->append(Utility::DIGITS->get(0x0f & c));
			return true;
		}
		return false;
	} catch ($IOException& e) {
		$throwNew($IllegalArgumentException, e);
	}
	$shouldNotReachHere();
}

void Utility::clinit$($Class* clazz) {
	$assignStatic(Utility::UNESCAPE_MAP, $new($chars, {
		97,
		7,
		98,
		8,
		101,
		27,
		102,
		12,
		110,
		10,
		114,
		13,
		116,
		9,
		118,
		11
	}));
	$assignStatic(Utility::DIGITS, $new($chars, {
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'A',
		u'B',
		u'C',
		u'D',
		u'E',
		u'F',
		u'G',
		u'H',
		u'I',
		u'J',
		u'K',
		u'L',
		u'M',
		u'N',
		u'O',
		u'P',
		u'Q',
		u'R',
		u'S',
		u'T',
		u'U',
		u'V',
		u'W',
		u'X',
		u'Y',
		u'Z'
	}));
}

Utility::Utility() {
}

$Class* Utility::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"UNESCAPE_MAP", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Utility, UNESCAPE_MAP)},
		{"DIGITS", "[C", nullptr, $STATIC | $FINAL, $staticField(Utility, DIGITS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Utility, init$, void)},
		{"escape", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(Utility, escape, $String*, $String*)},
		{"escapeUnprintable", "(Ljava/lang/Appendable;I)Z", "<T::Ljava/lang/Appendable;>(TT;I)Z", $PUBLIC | $STATIC, $staticMethod(Utility, escapeUnprintable, bool, $Appendable*, int32_t)},
		{"hex", "(JI)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, hex, $String*, int64_t, int32_t)},
		{"isUnprintable", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, isUnprintable, bool, int32_t)},
		{"unescapeAt", "(Ljava/lang/String;[I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, unescapeAt, int32_t, $String*, $ints*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.icu.impl.Utility",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Utility, name, initialize, &classInfo$$, Utility::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Utility);
	});
	return class$;
}

$Class* Utility::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk