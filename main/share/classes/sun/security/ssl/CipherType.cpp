#include <sun/security/ssl/CipherType.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef STREAM_CIPHER
#undef BLOCK_CIPHER
#undef AEAD_CIPHER
#undef NULL_CIPHER

using $CipherTypeArray = $Array<::sun::security::ssl::CipherType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CipherType_FieldInfo_[] = {
	{"NULL_CIPHER", "Lsun/security/ssl/CipherType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherType, NULL_CIPHER)},
	{"STREAM_CIPHER", "Lsun/security/ssl/CipherType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherType, STREAM_CIPHER)},
	{"BLOCK_CIPHER", "Lsun/security/ssl/CipherType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherType, BLOCK_CIPHER)},
	{"AEAD_CIPHER", "Lsun/security/ssl/CipherType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherType, AEAD_CIPHER)},
	{"$VALUES", "[Lsun/security/ssl/CipherType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CipherType, $VALUES)},
	{}
};

$MethodInfo _CipherType_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/CipherType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CipherTypeArray*(*)()>(&CipherType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CipherType::*)($String*,int32_t)>(&CipherType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/CipherType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CipherType*(*)($String*)>(&CipherType::valueOf))},
	{"values", "()[Lsun/security/ssl/CipherType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CipherTypeArray*(*)()>(&CipherType::values))},
	{}
};

$ClassInfo _CipherType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.CipherType",
	"java.lang.Enum",
	nullptr,
	_CipherType_FieldInfo_,
	_CipherType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/CipherType;>;"
};

$Object* allocate$CipherType($Class* clazz) {
	return $of($alloc(CipherType));
}

CipherType* CipherType::NULL_CIPHER = nullptr;
CipherType* CipherType::STREAM_CIPHER = nullptr;
CipherType* CipherType::BLOCK_CIPHER = nullptr;
CipherType* CipherType::AEAD_CIPHER = nullptr;
$CipherTypeArray* CipherType::$VALUES = nullptr;

$CipherTypeArray* CipherType::$values() {
	$init(CipherType);
	return $new($CipherTypeArray, {
		CipherType::NULL_CIPHER,
		CipherType::STREAM_CIPHER,
		CipherType::BLOCK_CIPHER,
		CipherType::AEAD_CIPHER
	});
}

$CipherTypeArray* CipherType::values() {
	$init(CipherType);
	return $cast($CipherTypeArray, CipherType::$VALUES->clone());
}

CipherType* CipherType::valueOf($String* name) {
	$init(CipherType);
	return $cast(CipherType, $Enum::valueOf(CipherType::class$, name));
}

void CipherType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CipherType($Class* class$) {
	$assignStatic(CipherType::NULL_CIPHER, $new(CipherType, "NULL_CIPHER"_s, 0));
	$assignStatic(CipherType::STREAM_CIPHER, $new(CipherType, "STREAM_CIPHER"_s, 1));
	$assignStatic(CipherType::BLOCK_CIPHER, $new(CipherType, "BLOCK_CIPHER"_s, 2));
	$assignStatic(CipherType::AEAD_CIPHER, $new(CipherType, "AEAD_CIPHER"_s, 3));
	$assignStatic(CipherType::$VALUES, CipherType::$values());
}

CipherType::CipherType() {
}

$Class* CipherType::load$($String* name, bool initialize) {
	$loadClass(CipherType, name, initialize, &_CipherType_ClassInfo_, clinit$CipherType, allocate$CipherType);
	return class$;
}

$Class* CipherType::class$ = nullptr;

		} // ssl
	} // security
} // sun