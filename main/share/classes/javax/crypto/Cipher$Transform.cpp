#include <javax/crypto/Cipher$Transform.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider$Service.h>
#include <java/util/Locale.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/CipherSpi.h>
#include <jcpp.h>

#undef ENGLISH

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider$Service = ::java::security::Provider$Service;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Cipher = ::javax::crypto::Cipher;
using $CipherSpi = ::javax::crypto::CipherSpi;

namespace javax {
	namespace crypto {

$FieldInfo _Cipher$Transform_FieldInfo_[] = {
	{"transform", "Ljava/lang/String;", nullptr, $FINAL, $field(Cipher$Transform, transform)},
	{"suffix", "Ljava/lang/String;", nullptr, $FINAL, $field(Cipher$Transform, suffix)},
	{"mode", "Ljava/lang/String;", nullptr, $FINAL, $field(Cipher$Transform, mode)},
	{"pad", "Ljava/lang/String;", nullptr, $FINAL, $field(Cipher$Transform, pad)},
	{"patternCache", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/String;Ljava/util/regex/Pattern;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Cipher$Transform, patternCache)},
	{}
};

$MethodInfo _Cipher$Transform_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Cipher$Transform::*)($String*,$String*,$String*,$String*)>(&Cipher$Transform::init$))},
	{"matches", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&Cipher$Transform::matches))},
	{"setModePadding", "(Ljavax/crypto/CipherSpi;)V", nullptr, 0, nullptr, "java.security.NoSuchAlgorithmException,javax.crypto.NoSuchPaddingException"},
	{"supports", "(Ljava/security/Provider$Service;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Provider$Service*,$String*,$String*)>(&Cipher$Transform::supports))},
	{"supportsMode", "(Ljava/security/Provider$Service;)I", nullptr, 0},
	{"supportsModePadding", "(Ljava/security/Provider$Service;)I", nullptr, 0},
	{"supportsPadding", "(Ljava/security/Provider$Service;)I", nullptr, 0},
	{}
};

$InnerClassInfo _Cipher$Transform_InnerClassesInfo_[] = {
	{"javax.crypto.Cipher$Transform", "javax.crypto.Cipher", "Transform", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Cipher$Transform_ClassInfo_ = {
	$ACC_SUPER,
	"javax.crypto.Cipher$Transform",
	"java.lang.Object",
	nullptr,
	_Cipher$Transform_FieldInfo_,
	_Cipher$Transform_MethodInfo_,
	nullptr,
	nullptr,
	_Cipher$Transform_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.crypto.Cipher"
};

$Object* allocate$Cipher$Transform($Class* clazz) {
	return $of($alloc(Cipher$Transform));
}

$ConcurrentMap* Cipher$Transform::patternCache = nullptr;

void Cipher$Transform::init$($String* alg, $String* suffix, $String* mode, $String* pad) {
	$set(this, transform, $str({alg, suffix}));
	$init($Locale);
	$set(this, suffix, $nc(suffix)->toUpperCase($Locale::ENGLISH));
	$set(this, mode, mode);
	$set(this, pad, pad);
}

void Cipher$Transform::setModePadding($CipherSpi* spi) {
	if (this->mode != nullptr) {
		$nc(spi)->engineSetMode(this->mode);
	}
	if (this->pad != nullptr) {
		$nc(spi)->engineSetPadding(this->pad);
	}
}

int32_t Cipher$Transform::supportsModePadding($Provider$Service* s) {
	int32_t smode = supportsMode(s);
	if (smode == 0) {
		return smode;
	}
	int32_t spad = supportsPadding(s);
	return $Math::min(smode, spad);
}

int32_t Cipher$Transform::supportsMode($Provider$Service* s) {
	return supports(s, "SupportedModes"_s, this->mode);
}

int32_t Cipher$Transform::supportsPadding($Provider$Service* s) {
	return supports(s, "SupportedPaddings"_s, this->pad);
}

int32_t Cipher$Transform::supports($Provider$Service* s, $String* attrName, $String* value) {
	$init(Cipher$Transform);
	if (value == nullptr) {
		return 2;
	}
	$var($String, regexp, $nc(s)->getAttribute(attrName));
	if (regexp == nullptr) {
		return 1;
	}
	return matches(regexp, value) ? 2 : 0;
}

bool Cipher$Transform::matches($String* regexp, $String* str) {
	$init(Cipher$Transform);
	$var($Pattern, pattern, $cast($Pattern, $nc(Cipher$Transform::patternCache)->get(regexp)));
	if (pattern == nullptr) {
		$assign(pattern, $Pattern::compile(regexp));
		$nc(Cipher$Transform::patternCache)->putIfAbsent(regexp, pattern);
	}
	$init($Locale);
	return $nc($($nc(pattern)->matcher($($nc(str)->toUpperCase($Locale::ENGLISH)))))->matches();
}

void clinit$Cipher$Transform($Class* class$) {
	$assignStatic(Cipher$Transform::patternCache, $new($ConcurrentHashMap));
}

Cipher$Transform::Cipher$Transform() {
}

$Class* Cipher$Transform::load$($String* name, bool initialize) {
	$loadClass(Cipher$Transform, name, initialize, &_Cipher$Transform_ClassInfo_, clinit$Cipher$Transform, allocate$Cipher$Transform);
	return class$;
}

$Class* Cipher$Transform::class$ = nullptr;

	} // crypto
} // javax