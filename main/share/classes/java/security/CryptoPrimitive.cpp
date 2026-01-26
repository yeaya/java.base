#include <java/security/CryptoPrimitive.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BLOCK_CIPHER
#undef KEY_AGREEMENT
#undef KEY_ENCAPSULATION
#undef KEY_WRAP
#undef MAC
#undef MESSAGE_DIGEST
#undef PUBLIC_KEY_ENCRYPTION
#undef SECURE_RANDOM
#undef SIGNATURE
#undef STREAM_CIPHER

using $CryptoPrimitiveArray = $Array<::java::security::CryptoPrimitive>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$FieldInfo _CryptoPrimitive_FieldInfo_[] = {
	{"MESSAGE_DIGEST", "Ljava/security/CryptoPrimitive;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CryptoPrimitive, MESSAGE_DIGEST)},
	{"SECURE_RANDOM", "Ljava/security/CryptoPrimitive;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CryptoPrimitive, SECURE_RANDOM)},
	{"BLOCK_CIPHER", "Ljava/security/CryptoPrimitive;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CryptoPrimitive, BLOCK_CIPHER)},
	{"STREAM_CIPHER", "Ljava/security/CryptoPrimitive;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CryptoPrimitive, STREAM_CIPHER)},
	{"MAC", "Ljava/security/CryptoPrimitive;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CryptoPrimitive, MAC)},
	{"KEY_WRAP", "Ljava/security/CryptoPrimitive;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CryptoPrimitive, KEY_WRAP)},
	{"PUBLIC_KEY_ENCRYPTION", "Ljava/security/CryptoPrimitive;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CryptoPrimitive, PUBLIC_KEY_ENCRYPTION)},
	{"SIGNATURE", "Ljava/security/CryptoPrimitive;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CryptoPrimitive, SIGNATURE)},
	{"KEY_ENCAPSULATION", "Ljava/security/CryptoPrimitive;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CryptoPrimitive, KEY_ENCAPSULATION)},
	{"KEY_AGREEMENT", "Ljava/security/CryptoPrimitive;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CryptoPrimitive, KEY_AGREEMENT)},
	{"$VALUES", "[Ljava/security/CryptoPrimitive;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CryptoPrimitive, $VALUES)},
	{}
};

$MethodInfo _CryptoPrimitive_MethodInfo_[] = {
	{"$values", "()[Ljava/security/CryptoPrimitive;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CryptoPrimitive, $values, $CryptoPrimitiveArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(CryptoPrimitive, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/security/CryptoPrimitive;", nullptr, $PUBLIC | $STATIC, $staticMethod(CryptoPrimitive, valueOf, CryptoPrimitive*, $String*)},
	{"values", "()[Ljava/security/CryptoPrimitive;", nullptr, $PUBLIC | $STATIC, $staticMethod(CryptoPrimitive, values, $CryptoPrimitiveArray*)},
	{}
};

$ClassInfo _CryptoPrimitive_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.security.CryptoPrimitive",
	"java.lang.Enum",
	nullptr,
	_CryptoPrimitive_FieldInfo_,
	_CryptoPrimitive_MethodInfo_,
	"Ljava/lang/Enum<Ljava/security/CryptoPrimitive;>;"
};

$Object* allocate$CryptoPrimitive($Class* clazz) {
	return $of($alloc(CryptoPrimitive));
}

CryptoPrimitive* CryptoPrimitive::MESSAGE_DIGEST = nullptr;
CryptoPrimitive* CryptoPrimitive::SECURE_RANDOM = nullptr;
CryptoPrimitive* CryptoPrimitive::BLOCK_CIPHER = nullptr;
CryptoPrimitive* CryptoPrimitive::STREAM_CIPHER = nullptr;
CryptoPrimitive* CryptoPrimitive::MAC = nullptr;
CryptoPrimitive* CryptoPrimitive::KEY_WRAP = nullptr;
CryptoPrimitive* CryptoPrimitive::PUBLIC_KEY_ENCRYPTION = nullptr;
CryptoPrimitive* CryptoPrimitive::SIGNATURE = nullptr;
CryptoPrimitive* CryptoPrimitive::KEY_ENCAPSULATION = nullptr;
CryptoPrimitive* CryptoPrimitive::KEY_AGREEMENT = nullptr;
$CryptoPrimitiveArray* CryptoPrimitive::$VALUES = nullptr;

$CryptoPrimitiveArray* CryptoPrimitive::$values() {
	$init(CryptoPrimitive);
	return $new($CryptoPrimitiveArray, {
		CryptoPrimitive::MESSAGE_DIGEST,
		CryptoPrimitive::SECURE_RANDOM,
		CryptoPrimitive::BLOCK_CIPHER,
		CryptoPrimitive::STREAM_CIPHER,
		CryptoPrimitive::MAC,
		CryptoPrimitive::KEY_WRAP,
		CryptoPrimitive::PUBLIC_KEY_ENCRYPTION,
		CryptoPrimitive::SIGNATURE,
		CryptoPrimitive::KEY_ENCAPSULATION,
		CryptoPrimitive::KEY_AGREEMENT
	});
}

$CryptoPrimitiveArray* CryptoPrimitive::values() {
	$init(CryptoPrimitive);
	return $cast($CryptoPrimitiveArray, CryptoPrimitive::$VALUES->clone());
}

CryptoPrimitive* CryptoPrimitive::valueOf($String* name) {
	$init(CryptoPrimitive);
	return $cast(CryptoPrimitive, $Enum::valueOf(CryptoPrimitive::class$, name));
}

void CryptoPrimitive::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CryptoPrimitive($Class* class$) {
	$assignStatic(CryptoPrimitive::MESSAGE_DIGEST, $new(CryptoPrimitive, "MESSAGE_DIGEST"_s, 0));
	$assignStatic(CryptoPrimitive::SECURE_RANDOM, $new(CryptoPrimitive, "SECURE_RANDOM"_s, 1));
	$assignStatic(CryptoPrimitive::BLOCK_CIPHER, $new(CryptoPrimitive, "BLOCK_CIPHER"_s, 2));
	$assignStatic(CryptoPrimitive::STREAM_CIPHER, $new(CryptoPrimitive, "STREAM_CIPHER"_s, 3));
	$assignStatic(CryptoPrimitive::MAC, $new(CryptoPrimitive, "MAC"_s, 4));
	$assignStatic(CryptoPrimitive::KEY_WRAP, $new(CryptoPrimitive, "KEY_WRAP"_s, 5));
	$assignStatic(CryptoPrimitive::PUBLIC_KEY_ENCRYPTION, $new(CryptoPrimitive, "PUBLIC_KEY_ENCRYPTION"_s, 6));
	$assignStatic(CryptoPrimitive::SIGNATURE, $new(CryptoPrimitive, "SIGNATURE"_s, 7));
	$assignStatic(CryptoPrimitive::KEY_ENCAPSULATION, $new(CryptoPrimitive, "KEY_ENCAPSULATION"_s, 8));
	$assignStatic(CryptoPrimitive::KEY_AGREEMENT, $new(CryptoPrimitive, "KEY_AGREEMENT"_s, 9));
	$assignStatic(CryptoPrimitive::$VALUES, CryptoPrimitive::$values());
}

CryptoPrimitive::CryptoPrimitive() {
}

$Class* CryptoPrimitive::load$($String* name, bool initialize) {
	$loadClass(CryptoPrimitive, name, initialize, &_CryptoPrimitive_ClassInfo_, clinit$CryptoPrimitive, allocate$CryptoPrimitive);
	return class$;
}

$Class* CryptoPrimitive::class$ = nullptr;

	} // security
} // java