#include <sun/security/ssl/SSLTrafficKeyDerivation$KeySchedule.h>

#include <java/lang/Enum.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/SSLCipher.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <jcpp.h>

using $SSLTrafficKeyDerivation$KeyScheduleArray = $Array<::sun::security::ssl::SSLTrafficKeyDerivation$KeySchedule>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherSuite$HashAlg = ::sun::security::ssl::CipherSuite$HashAlg;
using $SSLCipher = ::sun::security::ssl::SSLCipher;
using $SSLTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLTrafficKeyDerivation$KeySchedule_FieldInfo_[] = {
	{"TlsKey", "Lsun/security/ssl/SSLTrafficKeyDerivation$KeySchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLTrafficKeyDerivation$KeySchedule, TlsKey)},
	{"TlsIv", "Lsun/security/ssl/SSLTrafficKeyDerivation$KeySchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLTrafficKeyDerivation$KeySchedule, TlsIv)},
	{"TlsUpdateNplus1", "Lsun/security/ssl/SSLTrafficKeyDerivation$KeySchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLTrafficKeyDerivation$KeySchedule, TlsUpdateNplus1)},
	{"$VALUES", "[Lsun/security/ssl/SSLTrafficKeyDerivation$KeySchedule;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLTrafficKeyDerivation$KeySchedule, $VALUES)},
	{"label", "[B", nullptr, $PRIVATE | $FINAL, $field(SSLTrafficKeyDerivation$KeySchedule, label)},
	{"isIv", "Z", nullptr, $PRIVATE | $FINAL, $field(SSLTrafficKeyDerivation$KeySchedule, isIv)},
	{}
};

$MethodInfo _SSLTrafficKeyDerivation$KeySchedule_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/SSLTrafficKeyDerivation$KeySchedule;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SSLTrafficKeyDerivation$KeyScheduleArray*(*)()>(&SSLTrafficKeyDerivation$KeySchedule::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Z)V", "(Ljava/lang/String;Z)V", $PRIVATE, $method(static_cast<void(SSLTrafficKeyDerivation$KeySchedule::*)($String*,int32_t,$String*,bool)>(&SSLTrafficKeyDerivation$KeySchedule::init$))},
	{"getAlgorithm", "(Lsun/security/ssl/CipherSuite;Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(SSLTrafficKeyDerivation$KeySchedule::*)($CipherSuite*,$String*)>(&SSLTrafficKeyDerivation$KeySchedule::getAlgorithm))},
	{"getKeyLength", "(Lsun/security/ssl/CipherSuite;)I", nullptr, 0, $method(static_cast<int32_t(SSLTrafficKeyDerivation$KeySchedule::*)($CipherSuite*)>(&SSLTrafficKeyDerivation$KeySchedule::getKeyLength))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/SSLTrafficKeyDerivation$KeySchedule;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SSLTrafficKeyDerivation$KeySchedule*(*)($String*)>(&SSLTrafficKeyDerivation$KeySchedule::valueOf))},
	{"values", "()[Lsun/security/ssl/SSLTrafficKeyDerivation$KeySchedule;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SSLTrafficKeyDerivation$KeyScheduleArray*(*)()>(&SSLTrafficKeyDerivation$KeySchedule::values))},
	{}
};

$InnerClassInfo _SSLTrafficKeyDerivation$KeySchedule_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLTrafficKeyDerivation$KeySchedule", "sun.security.ssl.SSLTrafficKeyDerivation", "KeySchedule", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SSLTrafficKeyDerivation$KeySchedule_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.SSLTrafficKeyDerivation$KeySchedule",
	"java.lang.Enum",
	nullptr,
	_SSLTrafficKeyDerivation$KeySchedule_FieldInfo_,
	_SSLTrafficKeyDerivation$KeySchedule_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/SSLTrafficKeyDerivation$KeySchedule;>;",
	nullptr,
	_SSLTrafficKeyDerivation$KeySchedule_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLTrafficKeyDerivation"
};

$Object* allocate$SSLTrafficKeyDerivation$KeySchedule($Class* clazz) {
	return $of($alloc(SSLTrafficKeyDerivation$KeySchedule));
}

SSLTrafficKeyDerivation$KeySchedule* SSLTrafficKeyDerivation$KeySchedule::TlsKey = nullptr;
SSLTrafficKeyDerivation$KeySchedule* SSLTrafficKeyDerivation$KeySchedule::TlsIv = nullptr;
SSLTrafficKeyDerivation$KeySchedule* SSLTrafficKeyDerivation$KeySchedule::TlsUpdateNplus1 = nullptr;
$SSLTrafficKeyDerivation$KeyScheduleArray* SSLTrafficKeyDerivation$KeySchedule::$VALUES = nullptr;

$SSLTrafficKeyDerivation$KeyScheduleArray* SSLTrafficKeyDerivation$KeySchedule::$values() {
	$init(SSLTrafficKeyDerivation$KeySchedule);
	return $new($SSLTrafficKeyDerivation$KeyScheduleArray, {
		SSLTrafficKeyDerivation$KeySchedule::TlsKey,
		SSLTrafficKeyDerivation$KeySchedule::TlsIv,
		SSLTrafficKeyDerivation$KeySchedule::TlsUpdateNplus1
	});
}

$SSLTrafficKeyDerivation$KeyScheduleArray* SSLTrafficKeyDerivation$KeySchedule::values() {
	$init(SSLTrafficKeyDerivation$KeySchedule);
	return $cast($SSLTrafficKeyDerivation$KeyScheduleArray, SSLTrafficKeyDerivation$KeySchedule::$VALUES->clone());
}

SSLTrafficKeyDerivation$KeySchedule* SSLTrafficKeyDerivation$KeySchedule::valueOf($String* name) {
	$init(SSLTrafficKeyDerivation$KeySchedule);
	return $cast(SSLTrafficKeyDerivation$KeySchedule, $Enum::valueOf(SSLTrafficKeyDerivation$KeySchedule::class$, name));
}

void SSLTrafficKeyDerivation$KeySchedule::init$($String* $enum$name, int32_t $enum$ordinal, $String* label, bool isIv) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, label, $nc(($$str({"tls13 "_s, label})))->getBytes());
	this->isIv = isIv;
}

int32_t SSLTrafficKeyDerivation$KeySchedule::getKeyLength($CipherSuite* cs) {
	if (this == SSLTrafficKeyDerivation$KeySchedule::TlsUpdateNplus1) {
		return $nc(cs)->hashAlg->hashLength;
	}
	return this->isIv ? $nc(cs)->bulkCipher->ivSize : cs->bulkCipher->keySize;
}

$String* SSLTrafficKeyDerivation$KeySchedule::getAlgorithm($CipherSuite* cs, $String* algorithm) {
	return this->isIv ? algorithm : $nc(cs)->bulkCipher->algorithm;
}

void clinit$SSLTrafficKeyDerivation$KeySchedule($Class* class$) {
	$assignStatic(SSLTrafficKeyDerivation$KeySchedule::TlsKey, $new(SSLTrafficKeyDerivation$KeySchedule, "TlsKey"_s, 0, "key"_s, false));
	$assignStatic(SSLTrafficKeyDerivation$KeySchedule::TlsIv, $new(SSLTrafficKeyDerivation$KeySchedule, "TlsIv"_s, 1, "iv"_s, true));
	$assignStatic(SSLTrafficKeyDerivation$KeySchedule::TlsUpdateNplus1, $new(SSLTrafficKeyDerivation$KeySchedule, "TlsUpdateNplus1"_s, 2, "traffic upd"_s, false));
	$assignStatic(SSLTrafficKeyDerivation$KeySchedule::$VALUES, SSLTrafficKeyDerivation$KeySchedule::$values());
}

SSLTrafficKeyDerivation$KeySchedule::SSLTrafficKeyDerivation$KeySchedule() {
}

$Class* SSLTrafficKeyDerivation$KeySchedule::load$($String* name, bool initialize) {
	$loadClass(SSLTrafficKeyDerivation$KeySchedule, name, initialize, &_SSLTrafficKeyDerivation$KeySchedule_ClassInfo_, clinit$SSLTrafficKeyDerivation$KeySchedule, allocate$SSLTrafficKeyDerivation$KeySchedule);
	return class$;
}

$Class* SSLTrafficKeyDerivation$KeySchedule::class$ = nullptr;

		} // ssl
	} // security
} // sun