#include <sun/security/ssl/CipherSuite$HashAlg.h>

#include <java/lang/Enum.h>
#include <sun/security/ssl/CipherSuite.h>
#include <jcpp.h>

#undef H_NONE
#undef H_SHA256
#undef H_SHA384

using $CipherSuite$HashAlgArray = $Array<::sun::security::ssl::CipherSuite$HashAlg>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CipherSuite$HashAlg_FieldInfo_[] = {
	{"H_NONE", "Lsun/security/ssl/CipherSuite$HashAlg;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$HashAlg, H_NONE)},
	{"H_SHA256", "Lsun/security/ssl/CipherSuite$HashAlg;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$HashAlg, H_SHA256)},
	{"H_SHA384", "Lsun/security/ssl/CipherSuite$HashAlg;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$HashAlg, H_SHA384)},
	{"$VALUES", "[Lsun/security/ssl/CipherSuite$HashAlg;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CipherSuite$HashAlg, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(CipherSuite$HashAlg, name$)},
	{"hashLength", "I", nullptr, $FINAL, $field(CipherSuite$HashAlg, hashLength)},
	{"blockSize", "I", nullptr, $FINAL, $field(CipherSuite$HashAlg, blockSize)},
	{}
};

$MethodInfo _CipherSuite$HashAlg_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/CipherSuite$HashAlg;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CipherSuite$HashAlg, $values, $CipherSuite$HashAlgArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;II)V", "(Ljava/lang/String;II)V", $PRIVATE, $method(CipherSuite$HashAlg, init$, void, $String*, int32_t, $String*, int32_t, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CipherSuite$HashAlg, toString, $String*)},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/CipherSuite$HashAlg;", nullptr, $PUBLIC | $STATIC, $staticMethod(CipherSuite$HashAlg, valueOf, CipherSuite$HashAlg*, $String*)},
	{"values", "()[Lsun/security/ssl/CipherSuite$HashAlg;", nullptr, $PUBLIC | $STATIC, $staticMethod(CipherSuite$HashAlg, values, $CipherSuite$HashAlgArray*)},
	{}
};

$InnerClassInfo _CipherSuite$HashAlg_InnerClassesInfo_[] = {
	{"sun.security.ssl.CipherSuite$HashAlg", "sun.security.ssl.CipherSuite", "HashAlg", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CipherSuite$HashAlg_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.CipherSuite$HashAlg",
	"java.lang.Enum",
	nullptr,
	_CipherSuite$HashAlg_FieldInfo_,
	_CipherSuite$HashAlg_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/CipherSuite$HashAlg;>;",
	nullptr,
	_CipherSuite$HashAlg_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CipherSuite"
};

$Object* allocate$CipherSuite$HashAlg($Class* clazz) {
	return $of($alloc(CipherSuite$HashAlg));
}

CipherSuite$HashAlg* CipherSuite$HashAlg::H_NONE = nullptr;
CipherSuite$HashAlg* CipherSuite$HashAlg::H_SHA256 = nullptr;
CipherSuite$HashAlg* CipherSuite$HashAlg::H_SHA384 = nullptr;
$CipherSuite$HashAlgArray* CipherSuite$HashAlg::$VALUES = nullptr;

$CipherSuite$HashAlgArray* CipherSuite$HashAlg::$values() {
	$init(CipherSuite$HashAlg);
	return $new($CipherSuite$HashAlgArray, {
		CipherSuite$HashAlg::H_NONE,
		CipherSuite$HashAlg::H_SHA256,
		CipherSuite$HashAlg::H_SHA384
	});
}

$CipherSuite$HashAlgArray* CipherSuite$HashAlg::values() {
	$init(CipherSuite$HashAlg);
	return $cast($CipherSuite$HashAlgArray, CipherSuite$HashAlg::$VALUES->clone());
}

CipherSuite$HashAlg* CipherSuite$HashAlg::valueOf($String* name) {
	$init(CipherSuite$HashAlg);
	return $cast(CipherSuite$HashAlg, $Enum::valueOf(CipherSuite$HashAlg::class$, name));
}

void CipherSuite$HashAlg::init$($String* $enum$name, int32_t $enum$ordinal, $String* hashAlg, int32_t hashLength, int32_t blockSize) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, hashAlg);
	this->hashLength = hashLength;
	this->blockSize = blockSize;
}

$String* CipherSuite$HashAlg::toString() {
	return this->name$;
}

void clinit$CipherSuite$HashAlg($Class* class$) {
	$assignStatic(CipherSuite$HashAlg::H_NONE, $new(CipherSuite$HashAlg, "H_NONE"_s, 0, "NONE"_s, 0, 0));
	$assignStatic(CipherSuite$HashAlg::H_SHA256, $new(CipherSuite$HashAlg, "H_SHA256"_s, 1, "SHA-256"_s, 32, 64));
	$assignStatic(CipherSuite$HashAlg::H_SHA384, $new(CipherSuite$HashAlg, "H_SHA384"_s, 2, "SHA-384"_s, 48, 128));
	$assignStatic(CipherSuite$HashAlg::$VALUES, CipherSuite$HashAlg::$values());
}

CipherSuite$HashAlg::CipherSuite$HashAlg() {
}

$Class* CipherSuite$HashAlg::load$($String* name, bool initialize) {
	$loadClass(CipherSuite$HashAlg, name, initialize, &_CipherSuite$HashAlg_ClassInfo_, clinit$CipherSuite$HashAlg, allocate$CipherSuite$HashAlg);
	return class$;
}

$Class* CipherSuite$HashAlg::class$ = nullptr;

		} // ssl
	} // security
} // sun