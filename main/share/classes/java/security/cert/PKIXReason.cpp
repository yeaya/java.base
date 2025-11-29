#include <java/security/cert/PKIXReason.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef INVALID_KEY_USAGE
#undef INVALID_NAME
#undef INVALID_POLICY
#undef NAME_CHAINING
#undef NOT_CA_CERT
#undef NO_TRUST_ANCHOR
#undef PATH_TOO_LONG
#undef UNRECOGNIZED_CRIT_EXT

using $PKIXReasonArray = $Array<::java::security::cert::PKIXReason>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _PKIXReason_FieldInfo_[] = {
	{"NAME_CHAINING", "Ljava/security/cert/PKIXReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PKIXReason, NAME_CHAINING)},
	{"INVALID_KEY_USAGE", "Ljava/security/cert/PKIXReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PKIXReason, INVALID_KEY_USAGE)},
	{"INVALID_POLICY", "Ljava/security/cert/PKIXReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PKIXReason, INVALID_POLICY)},
	{"NO_TRUST_ANCHOR", "Ljava/security/cert/PKIXReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PKIXReason, NO_TRUST_ANCHOR)},
	{"UNRECOGNIZED_CRIT_EXT", "Ljava/security/cert/PKIXReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PKIXReason, UNRECOGNIZED_CRIT_EXT)},
	{"NOT_CA_CERT", "Ljava/security/cert/PKIXReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PKIXReason, NOT_CA_CERT)},
	{"PATH_TOO_LONG", "Ljava/security/cert/PKIXReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PKIXReason, PATH_TOO_LONG)},
	{"INVALID_NAME", "Ljava/security/cert/PKIXReason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PKIXReason, INVALID_NAME)},
	{"$VALUES", "[Ljava/security/cert/PKIXReason;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(PKIXReason, $VALUES)},
	{}
};

$MethodInfo _PKIXReason_MethodInfo_[] = {
	{"$values", "()[Ljava/security/cert/PKIXReason;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$PKIXReasonArray*(*)()>(&PKIXReason::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(PKIXReason::*)($String*,int32_t)>(&PKIXReason::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/security/cert/PKIXReason;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PKIXReason*(*)($String*)>(&PKIXReason::valueOf))},
	{"values", "()[Ljava/security/cert/PKIXReason;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PKIXReasonArray*(*)()>(&PKIXReason::values))},
	{}
};

$InnerClassInfo _PKIXReason_InnerClassesInfo_[] = {
	{"java.security.cert.CertPathValidatorException$Reason", "java.security.cert.CertPathValidatorException", "Reason", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PKIXReason_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.security.cert.PKIXReason",
	"java.lang.Enum",
	"java.security.cert.CertPathValidatorException$Reason",
	_PKIXReason_FieldInfo_,
	_PKIXReason_MethodInfo_,
	"Ljava/lang/Enum<Ljava/security/cert/PKIXReason;>;Ljava/security/cert/CertPathValidatorException$Reason;",
	nullptr,
	_PKIXReason_InnerClassesInfo_
};

$Object* allocate$PKIXReason($Class* clazz) {
	return $of($alloc(PKIXReason));
}

$String* PKIXReason::toString() {
	 return this->$Enum::toString();
}

bool PKIXReason::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t PKIXReason::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* PKIXReason::clone() {
	 return this->$Enum::clone();
}

void PKIXReason::finalize() {
	this->$Enum::finalize();
}

PKIXReason* PKIXReason::NAME_CHAINING = nullptr;
PKIXReason* PKIXReason::INVALID_KEY_USAGE = nullptr;
PKIXReason* PKIXReason::INVALID_POLICY = nullptr;
PKIXReason* PKIXReason::NO_TRUST_ANCHOR = nullptr;
PKIXReason* PKIXReason::UNRECOGNIZED_CRIT_EXT = nullptr;
PKIXReason* PKIXReason::NOT_CA_CERT = nullptr;
PKIXReason* PKIXReason::PATH_TOO_LONG = nullptr;
PKIXReason* PKIXReason::INVALID_NAME = nullptr;
$PKIXReasonArray* PKIXReason::$VALUES = nullptr;

$PKIXReasonArray* PKIXReason::$values() {
	$init(PKIXReason);
	return $new($PKIXReasonArray, {
		PKIXReason::NAME_CHAINING,
		PKIXReason::INVALID_KEY_USAGE,
		PKIXReason::INVALID_POLICY,
		PKIXReason::NO_TRUST_ANCHOR,
		PKIXReason::UNRECOGNIZED_CRIT_EXT,
		PKIXReason::NOT_CA_CERT,
		PKIXReason::PATH_TOO_LONG,
		PKIXReason::INVALID_NAME
	});
}

$PKIXReasonArray* PKIXReason::values() {
	$init(PKIXReason);
	return $cast($PKIXReasonArray, PKIXReason::$VALUES->clone());
}

PKIXReason* PKIXReason::valueOf($String* name) {
	$init(PKIXReason);
	return $cast(PKIXReason, $Enum::valueOf(PKIXReason::class$, name));
}

void PKIXReason::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$PKIXReason($Class* class$) {
	$assignStatic(PKIXReason::NAME_CHAINING, $new(PKIXReason, "NAME_CHAINING"_s, 0));
	$assignStatic(PKIXReason::INVALID_KEY_USAGE, $new(PKIXReason, "INVALID_KEY_USAGE"_s, 1));
	$assignStatic(PKIXReason::INVALID_POLICY, $new(PKIXReason, "INVALID_POLICY"_s, 2));
	$assignStatic(PKIXReason::NO_TRUST_ANCHOR, $new(PKIXReason, "NO_TRUST_ANCHOR"_s, 3));
	$assignStatic(PKIXReason::UNRECOGNIZED_CRIT_EXT, $new(PKIXReason, "UNRECOGNIZED_CRIT_EXT"_s, 4));
	$assignStatic(PKIXReason::NOT_CA_CERT, $new(PKIXReason, "NOT_CA_CERT"_s, 5));
	$assignStatic(PKIXReason::PATH_TOO_LONG, $new(PKIXReason, "PATH_TOO_LONG"_s, 6));
	$assignStatic(PKIXReason::INVALID_NAME, $new(PKIXReason, "INVALID_NAME"_s, 7));
	$assignStatic(PKIXReason::$VALUES, PKIXReason::$values());
}

PKIXReason::PKIXReason() {
}

$Class* PKIXReason::load$($String* name, bool initialize) {
	$loadClass(PKIXReason, name, initialize, &_PKIXReason_ClassInfo_, clinit$PKIXReason, allocate$PKIXReason);
	return class$;
}

$Class* PKIXReason::class$ = nullptr;

		} // cert
	} // security
} // java