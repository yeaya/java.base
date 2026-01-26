#include <java/net/IDN.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/StringBuffer.h>
#include <java/net/IDN$1.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/text/ParseException.h>
#include <jdk/internal/icu/impl/Punycode.h>
#include <jdk/internal/icu/text/StringPrep.h>
#include <jdk/internal/icu/text/UCharacterIterator.h>
#include <jcpp.h>

#undef ACE_PREFIX
#undef ACE_PREFIX_LENGTH
#undef ALLOW_UNASSIGNED
#undef IDN
#undef IDN_PROFILE
#undef MAX_LABEL_LENGTH
#undef USE_STD3_ASCII_RULES

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $IDN$1 = ::java::net::IDN$1;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ParseException = ::java::text::ParseException;
using $Punycode = ::jdk::internal::icu::impl::Punycode;
using $StringPrep = ::jdk::internal::icu::text::StringPrep;
using $UCharacterIterator = ::jdk::internal::icu::text::UCharacterIterator;

namespace java {
	namespace net {

$FieldInfo _IDN_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(IDN, $assertionsDisabled)},
	{"ALLOW_UNASSIGNED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IDN, ALLOW_UNASSIGNED)},
	{"USE_STD3_ASCII_RULES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IDN, USE_STD3_ASCII_RULES)},
	{"ACE_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IDN, ACE_PREFIX)},
	{"ACE_PREFIX_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IDN, ACE_PREFIX_LENGTH)},
	{"MAX_LABEL_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IDN, MAX_LABEL_LENGTH)},
	{"namePrep", "Ljdk/internal/icu/text/StringPrep;", nullptr, $PRIVATE | $STATIC, $staticField(IDN, namePrep)},
	{}
};

$MethodInfo _IDN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(IDN, init$, void)},
	{"isAllASCII", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(IDN, isAllASCII, bool, $String*)},
	{"isLabelSeparator", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(IDN, isLabelSeparator, bool, char16_t)},
	{"isNonLDHAsciiCodePoint", "(I)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(IDN, isNonLDHAsciiCodePoint, bool, int32_t)},
	{"isRootLabel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(IDN, isRootLabel, bool, $String*)},
	{"searchDots", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(IDN, searchDots, int32_t, $String*, int32_t)},
	{"startsWithACEPrefix", "(Ljava/lang/StringBuffer;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(IDN, startsWithACEPrefix, bool, $StringBuffer*)},
	{"toASCII", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(IDN, toASCII, $String*, $String*, int32_t)},
	{"toASCII", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(IDN, toASCII, $String*, $String*)},
	{"toASCIIInternal", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(IDN, toASCIIInternal, $String*, $String*, int32_t)},
	{"toASCIILower", "(C)C", nullptr, $PRIVATE | $STATIC, $staticMethod(IDN, toASCIILower, char16_t, char16_t)},
	{"toASCIILower", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;", nullptr, $PRIVATE | $STATIC, $staticMethod(IDN, toASCIILower, $StringBuffer*, $StringBuffer*)},
	{"toUnicode", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(IDN, toUnicode, $String*, $String*, int32_t)},
	{"toUnicode", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(IDN, toUnicode, $String*, $String*)},
	{"toUnicodeInternal", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(IDN, toUnicodeInternal, $String*, $String*, int32_t)},
	{}
};

$InnerClassInfo _IDN_InnerClassesInfo_[] = {
	{"java.net.IDN$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IDN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.net.IDN",
	"java.lang.Object",
	nullptr,
	_IDN_FieldInfo_,
	_IDN_MethodInfo_,
	nullptr,
	nullptr,
	_IDN_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.IDN$1"
};

$Object* allocate$IDN($Class* clazz) {
	return $of($alloc(IDN));
}

bool IDN::$assertionsDisabled = false;
$String* IDN::ACE_PREFIX = nullptr;
int32_t IDN::ACE_PREFIX_LENGTH = 0;
$StringPrep* IDN::namePrep = nullptr;

$String* IDN::toASCII($String* input, int32_t flag) {
	$init(IDN);
	$useLocalCurrentObjectStackCache();
	int32_t p = 0;
	int32_t q = 0;
	$var($StringBuilder, out, $new($StringBuilder));
	if (isRootLabel(input)) {
		return "."_s;
	}
	while (p < $nc(input)->length()) {
		q = searchDots(input, p);
		out->append($(toASCIIInternal($(input->substring(p, q)), flag)));
		if (q != (input->length())) {
			out->append(u'.');
		}
		p = q + 1;
	}
	return out->toString();
}

$String* IDN::toASCII($String* input) {
	$init(IDN);
	return toASCII(input, 0);
}

$String* IDN::toUnicode($String* input, int32_t flag) {
	$init(IDN);
	$useLocalCurrentObjectStackCache();
	int32_t p = 0;
	int32_t q = 0;
	$var($StringBuilder, out, $new($StringBuilder));
	if (isRootLabel(input)) {
		return "."_s;
	}
	while (p < $nc(input)->length()) {
		q = searchDots(input, p);
		out->append($(toUnicodeInternal($(input->substring(p, q)), flag)));
		if (q != (input->length())) {
			out->append(u'.');
		}
		p = q + 1;
	}
	return out->toString();
}

$String* IDN::toUnicode($String* input) {
	$init(IDN);
	return toUnicode(input, 0);
}

void IDN::init$() {
}

$String* IDN::toASCIIInternal($String* label, int32_t flag) {
	$init(IDN);
	$useLocalCurrentObjectStackCache();
	bool isASCII = isAllASCII(label);
	$var($StringBuffer, dest, nullptr);
	if (!isASCII) {
		$var($UCharacterIterator, iter, $UCharacterIterator::getInstance(label));
		try {
			$assign(dest, $nc(IDN::namePrep)->prepare(iter, flag));
		} catch ($ParseException& e) {
			$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
		}
	} else {
		$assign(dest, $new($StringBuffer, label));
	}
	if ($nc(dest)->length() == 0) {
		$throwNew($IllegalArgumentException, "Empty label is not a legal name"_s);
	}
	bool useSTD3ASCIIRules = (((int32_t)(flag & (uint32_t)IDN::USE_STD3_ASCII_RULES)) != 0);
	if (useSTD3ASCIIRules) {
		for (int32_t i = 0; i < $nc(dest)->length(); ++i) {
			int32_t c = dest->charAt(i);
			if (isNonLDHAsciiCodePoint(c)) {
				$throwNew($IllegalArgumentException, "Contains non-LDH ASCII characters"_s);
			}
		}
		bool var$0 = $nc(dest)->charAt(0) == u'-';
		if (var$0 || $nc(dest)->charAt(dest->length() - 1) == u'-') {
			$throwNew($IllegalArgumentException, "Has leading or trailing hyphen"_s);
		}
	}
	if (!isASCII) {
		if (!isAllASCII($($nc(dest)->toString()))) {
			if (!startsWithACEPrefix(dest)) {
				try {
					$assign(dest, $Punycode::encode(dest, nullptr));
				} catch ($ParseException& e) {
					$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
				}
				$assign(dest, toASCIILower(dest));
				$nc(dest)->insert(0, IDN::ACE_PREFIX);
			} else {
				$throwNew($IllegalArgumentException, "The input starts with the ACE Prefix"_s);
			}
		}
	}
	if ($nc(dest)->length() > IDN::MAX_LABEL_LENGTH) {
		$throwNew($IllegalArgumentException, "The label in the input is too long"_s);
	}
	return $nc(dest)->toString();
}

$String* IDN::toUnicodeInternal($String* label, int32_t flag) {
	$init(IDN);
	$useLocalCurrentObjectStackCache();
	$var($booleans, caseFlags, nullptr);
	$var($StringBuffer, dest, nullptr);
	bool isASCII = isAllASCII(label);
	if (!isASCII) {
		try {
			$var($UCharacterIterator, iter, $UCharacterIterator::getInstance(label));
			$assign(dest, $nc(IDN::namePrep)->prepare(iter, flag));
		} catch ($Exception& e) {
			return label;
		}
	} else {
		$assign(dest, $new($StringBuffer, label));
	}
	if (startsWithACEPrefix(dest)) {
		$var($String, temp, $nc(dest)->substring(IDN::ACE_PREFIX_LENGTH, dest->length()));
		try {
			$var($StringBuffer, decodeOut, $Punycode::decode($$new($StringBuffer, temp), nullptr));
			$var($String, toASCIIOut, toASCII($($nc(decodeOut)->toString()), flag));
			if ($nc(toASCIIOut)->equalsIgnoreCase($(dest->toString()))) {
				return $nc(decodeOut)->toString();
			}
		} catch ($Exception& ignored) {
		}
	}
	return label;
}

bool IDN::isNonLDHAsciiCodePoint(int32_t ch) {
	$init(IDN);
	return (0 <= ch && ch <= 44) || (46 <= ch && ch <= 47) || (58 <= ch && ch <= 64) || (91 <= ch && ch <= 96) || (123 <= ch && ch <= 127);
}

int32_t IDN::searchDots($String* s, int32_t start) {
	$init(IDN);
	int32_t i = 0;
	for (i = start; i < $nc(s)->length(); ++i) {
		if (isLabelSeparator(s->charAt(i))) {
			break;
		}
	}
	return i;
}

bool IDN::isRootLabel($String* s) {
	$init(IDN);
	bool var$0 = $nc(s)->length() == 1;
	return (var$0 && isLabelSeparator(s->charAt(0)));
}

bool IDN::isLabelSeparator(char16_t c) {
	$init(IDN);
	return (c == u'.' || c == (char16_t)0x3002 || c == (char16_t)0xFF0E || c == (char16_t)0xFF61);
}

bool IDN::isAllASCII($String* input) {
	$init(IDN);
	bool isASCII = true;
	for (int32_t i = 0; i < $nc(input)->length(); ++i) {
		int32_t c = input->charAt(i);
		if (c > 127) {
			isASCII = false;
			break;
		}
	}
	return isASCII;
}

bool IDN::startsWithACEPrefix($StringBuffer* input) {
	$init(IDN);
	bool startsWithPrefix = true;
	if ($nc(input)->length() < IDN::ACE_PREFIX_LENGTH) {
		return false;
	}
	for (int32_t i = 0; i < IDN::ACE_PREFIX_LENGTH; ++i) {
		char16_t var$0 = toASCIILower($nc(input)->charAt(i));
		if (var$0 != $nc(IDN::ACE_PREFIX)->charAt(i)) {
			startsWithPrefix = false;
		}
	}
	return startsWithPrefix;
}

char16_t IDN::toASCIILower(char16_t ch) {
	$init(IDN);
	if (u'A' <= ch && ch <= u'Z') {
		return (char16_t)(ch + u'a' - u'A');
	}
	return ch;
}

$StringBuffer* IDN::toASCIILower($StringBuffer* input) {
	$init(IDN);
	$var($StringBuffer, dest, $new($StringBuffer));
	for (int32_t i = 0; i < $nc(input)->length(); ++i) {
		dest->append(toASCIILower(input->charAt(i)));
	}
	return dest;
}

void clinit$IDN($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IDN::ACE_PREFIX, "xn--"_s);
	$beforeCallerSensitive();
	$var($String, IDN_PROFILE, "/sun/net/idn/uidna.spp"_s);
	IDN::$assertionsDisabled = !IDN::class$->desiredAssertionStatus();
	IDN::ACE_PREFIX_LENGTH = $nc(IDN::ACE_PREFIX)->length();
	$assignStatic(IDN::namePrep, nullptr);
	{
		$var($InputStream, stream, nullptr);
		try {
			$var($String, IDN_PROFILE, "/sun/net/idn/uidna.spp"_s);
			if ($System::getSecurityManager() != nullptr) {
				$assign(stream, $cast($InputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($IDN$1)))));
			} else {
				$load($StringPrep);
				$assign(stream, $StringPrep::class$->getResourceAsStream(IDN_PROFILE));
			}
			$assignStatic(IDN::namePrep, $new($StringPrep, stream));
			$nc(stream)->close();
		} catch ($IOException& e) {
			if (!IDN::$assertionsDisabled) {
				$throwNew($AssertionError);
			}
		}
	}
}

IDN::IDN() {
}

$Class* IDN::load$($String* name, bool initialize) {
	$loadClass(IDN, name, initialize, &_IDN_ClassInfo_, clinit$IDN, allocate$IDN);
	return class$;
}

$Class* IDN::class$ = nullptr;

	} // net
} // java