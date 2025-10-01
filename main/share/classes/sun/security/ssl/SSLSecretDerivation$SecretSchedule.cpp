#include <sun/security/ssl/SSLSecretDerivation$SecretSchedule.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/SSLSecretDerivation.h>
#include <jcpp.h>

using $SSLSecretDerivation$SecretScheduleArray = $Array<::sun::security::ssl::SSLSecretDerivation$SecretSchedule>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLSecretDerivation = ::sun::security::ssl::SSLSecretDerivation;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLSecretDerivation$SecretSchedule_FieldInfo_[] = {
	{"TlsSaltSecret", "Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLSecretDerivation$SecretSchedule, TlsSaltSecret)},
	{"TlsExtBinderKey", "Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLSecretDerivation$SecretSchedule, TlsExtBinderKey)},
	{"TlsResBinderKey", "Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLSecretDerivation$SecretSchedule, TlsResBinderKey)},
	{"TlsClientEarlyTrafficSecret", "Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLSecretDerivation$SecretSchedule, TlsClientEarlyTrafficSecret)},
	{"TlsEarlyExporterMasterSecret", "Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLSecretDerivation$SecretSchedule, TlsEarlyExporterMasterSecret)},
	{"TlsClientHandshakeTrafficSecret", "Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLSecretDerivation$SecretSchedule, TlsClientHandshakeTrafficSecret)},
	{"TlsServerHandshakeTrafficSecret", "Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLSecretDerivation$SecretSchedule, TlsServerHandshakeTrafficSecret)},
	{"TlsClientAppTrafficSecret", "Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLSecretDerivation$SecretSchedule, TlsClientAppTrafficSecret)},
	{"TlsServerAppTrafficSecret", "Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLSecretDerivation$SecretSchedule, TlsServerAppTrafficSecret)},
	{"TlsExporterMasterSecret", "Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLSecretDerivation$SecretSchedule, TlsExporterMasterSecret)},
	{"TlsResumptionMasterSecret", "Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLSecretDerivation$SecretSchedule, TlsResumptionMasterSecret)},
	{"$VALUES", "[Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLSecretDerivation$SecretSchedule, $VALUES)},
	{"label", "[B", nullptr, $PRIVATE | $FINAL, $field(SSLSecretDerivation$SecretSchedule, label)},
	{}
};

$MethodInfo _SSLSecretDerivation$SecretSchedule_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SSLSecretDerivation$SecretScheduleArray*(*)()>(&SSLSecretDerivation$SecretSchedule::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(SSLSecretDerivation$SecretSchedule::*)($String*,int32_t,$String*)>(&SSLSecretDerivation$SecretSchedule::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SSLSecretDerivation$SecretSchedule*(*)($String*)>(&SSLSecretDerivation$SecretSchedule::valueOf))},
	{"values", "()[Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SSLSecretDerivation$SecretScheduleArray*(*)()>(&SSLSecretDerivation$SecretSchedule::values))},
	{}
};

$InnerClassInfo _SSLSecretDerivation$SecretSchedule_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLSecretDerivation$SecretSchedule", "sun.security.ssl.SSLSecretDerivation", "SecretSchedule", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SSLSecretDerivation$SecretSchedule_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.SSLSecretDerivation$SecretSchedule",
	"java.lang.Enum",
	nullptr,
	_SSLSecretDerivation$SecretSchedule_FieldInfo_,
	_SSLSecretDerivation$SecretSchedule_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/SSLSecretDerivation$SecretSchedule;>;",
	nullptr,
	_SSLSecretDerivation$SecretSchedule_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLSecretDerivation"
};

$Object* allocate$SSLSecretDerivation$SecretSchedule($Class* clazz) {
	return $of($alloc(SSLSecretDerivation$SecretSchedule));
}

SSLSecretDerivation$SecretSchedule* SSLSecretDerivation$SecretSchedule::TlsSaltSecret = nullptr;
SSLSecretDerivation$SecretSchedule* SSLSecretDerivation$SecretSchedule::TlsExtBinderKey = nullptr;
SSLSecretDerivation$SecretSchedule* SSLSecretDerivation$SecretSchedule::TlsResBinderKey = nullptr;
SSLSecretDerivation$SecretSchedule* SSLSecretDerivation$SecretSchedule::TlsClientEarlyTrafficSecret = nullptr;
SSLSecretDerivation$SecretSchedule* SSLSecretDerivation$SecretSchedule::TlsEarlyExporterMasterSecret = nullptr;
SSLSecretDerivation$SecretSchedule* SSLSecretDerivation$SecretSchedule::TlsClientHandshakeTrafficSecret = nullptr;
SSLSecretDerivation$SecretSchedule* SSLSecretDerivation$SecretSchedule::TlsServerHandshakeTrafficSecret = nullptr;
SSLSecretDerivation$SecretSchedule* SSLSecretDerivation$SecretSchedule::TlsClientAppTrafficSecret = nullptr;
SSLSecretDerivation$SecretSchedule* SSLSecretDerivation$SecretSchedule::TlsServerAppTrafficSecret = nullptr;
SSLSecretDerivation$SecretSchedule* SSLSecretDerivation$SecretSchedule::TlsExporterMasterSecret = nullptr;
SSLSecretDerivation$SecretSchedule* SSLSecretDerivation$SecretSchedule::TlsResumptionMasterSecret = nullptr;
$SSLSecretDerivation$SecretScheduleArray* SSLSecretDerivation$SecretSchedule::$VALUES = nullptr;

$SSLSecretDerivation$SecretScheduleArray* SSLSecretDerivation$SecretSchedule::$values() {
	$init(SSLSecretDerivation$SecretSchedule);
	return $new($SSLSecretDerivation$SecretScheduleArray, {
		SSLSecretDerivation$SecretSchedule::TlsSaltSecret,
		SSLSecretDerivation$SecretSchedule::TlsExtBinderKey,
		SSLSecretDerivation$SecretSchedule::TlsResBinderKey,
		SSLSecretDerivation$SecretSchedule::TlsClientEarlyTrafficSecret,
		SSLSecretDerivation$SecretSchedule::TlsEarlyExporterMasterSecret,
		SSLSecretDerivation$SecretSchedule::TlsClientHandshakeTrafficSecret,
		SSLSecretDerivation$SecretSchedule::TlsServerHandshakeTrafficSecret,
		SSLSecretDerivation$SecretSchedule::TlsClientAppTrafficSecret,
		SSLSecretDerivation$SecretSchedule::TlsServerAppTrafficSecret,
		SSLSecretDerivation$SecretSchedule::TlsExporterMasterSecret,
		SSLSecretDerivation$SecretSchedule::TlsResumptionMasterSecret
	});
}

$SSLSecretDerivation$SecretScheduleArray* SSLSecretDerivation$SecretSchedule::values() {
	$init(SSLSecretDerivation$SecretSchedule);
	return $cast($SSLSecretDerivation$SecretScheduleArray, SSLSecretDerivation$SecretSchedule::$VALUES->clone());
}

SSLSecretDerivation$SecretSchedule* SSLSecretDerivation$SecretSchedule::valueOf($String* name) {
	$init(SSLSecretDerivation$SecretSchedule);
	return $cast(SSLSecretDerivation$SecretSchedule, $Enum::valueOf(SSLSecretDerivation$SecretSchedule::class$, name));
}

void SSLSecretDerivation$SecretSchedule::init$($String* $enum$name, int32_t $enum$ordinal, $String* label) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, label, $nc(($$str({"tls13 "_s, label})))->getBytes());
}

void clinit$SSLSecretDerivation$SecretSchedule($Class* class$) {
	$assignStatic(SSLSecretDerivation$SecretSchedule::TlsSaltSecret, $new(SSLSecretDerivation$SecretSchedule, "TlsSaltSecret"_s, 0, "derived"_s));
	$assignStatic(SSLSecretDerivation$SecretSchedule::TlsExtBinderKey, $new(SSLSecretDerivation$SecretSchedule, "TlsExtBinderKey"_s, 1, "ext binder"_s));
	$assignStatic(SSLSecretDerivation$SecretSchedule::TlsResBinderKey, $new(SSLSecretDerivation$SecretSchedule, "TlsResBinderKey"_s, 2, "res binder"_s));
	$assignStatic(SSLSecretDerivation$SecretSchedule::TlsClientEarlyTrafficSecret, $new(SSLSecretDerivation$SecretSchedule, "TlsClientEarlyTrafficSecret"_s, 3, "c e traffic"_s));
	$assignStatic(SSLSecretDerivation$SecretSchedule::TlsEarlyExporterMasterSecret, $new(SSLSecretDerivation$SecretSchedule, "TlsEarlyExporterMasterSecret"_s, 4, "e exp master"_s));
	$assignStatic(SSLSecretDerivation$SecretSchedule::TlsClientHandshakeTrafficSecret, $new(SSLSecretDerivation$SecretSchedule, "TlsClientHandshakeTrafficSecret"_s, 5, "c hs traffic"_s));
	$assignStatic(SSLSecretDerivation$SecretSchedule::TlsServerHandshakeTrafficSecret, $new(SSLSecretDerivation$SecretSchedule, "TlsServerHandshakeTrafficSecret"_s, 6, "s hs traffic"_s));
	$assignStatic(SSLSecretDerivation$SecretSchedule::TlsClientAppTrafficSecret, $new(SSLSecretDerivation$SecretSchedule, "TlsClientAppTrafficSecret"_s, 7, "c ap traffic"_s));
	$assignStatic(SSLSecretDerivation$SecretSchedule::TlsServerAppTrafficSecret, $new(SSLSecretDerivation$SecretSchedule, "TlsServerAppTrafficSecret"_s, 8, "s ap traffic"_s));
	$assignStatic(SSLSecretDerivation$SecretSchedule::TlsExporterMasterSecret, $new(SSLSecretDerivation$SecretSchedule, "TlsExporterMasterSecret"_s, 9, "exp master"_s));
	$assignStatic(SSLSecretDerivation$SecretSchedule::TlsResumptionMasterSecret, $new(SSLSecretDerivation$SecretSchedule, "TlsResumptionMasterSecret"_s, 10, "res master"_s));
	$assignStatic(SSLSecretDerivation$SecretSchedule::$VALUES, SSLSecretDerivation$SecretSchedule::$values());
}

SSLSecretDerivation$SecretSchedule::SSLSecretDerivation$SecretSchedule() {
}

$Class* SSLSecretDerivation$SecretSchedule::load$($String* name, bool initialize) {
	$loadClass(SSLSecretDerivation$SecretSchedule, name, initialize, &_SSLSecretDerivation$SecretSchedule_ClassInfo_, clinit$SSLSecretDerivation$SecretSchedule, allocate$SSLSecretDerivation$SecretSchedule);
	return class$;
}

$Class* SSLSecretDerivation$SecretSchedule::class$ = nullptr;

		} // ssl
	} // security
} // sun