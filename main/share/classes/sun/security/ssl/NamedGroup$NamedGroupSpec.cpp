#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>

#include <java/lang/Enum.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/security/SecureRandom.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/NamedGroup$ECDHEScheme.h>
#include <sun/security/ssl/NamedGroup$ExceptionSupplier.h>
#include <sun/security/ssl/NamedGroup$FFDHEScheme.h>
#include <sun/security/ssl/NamedGroup$NamedGroupScheme.h>
#include <sun/security/ssl/NamedGroup$XDHScheme.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/NamedGroupPossession.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLPossession.h>
#include <jcpp.h>

#undef NAMED_GROUP_ARBITRARY
#undef NAMED_GROUP_ECDHE
#undef NAMED_GROUP_FFDHE
#undef NAMED_GROUP_NONE
#undef NAMED_GROUP_XDH

using $NamedGroup$NamedGroupSpecArray = $Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $SecureRandom = ::java::security::SecureRandom;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$ECDHEScheme = ::sun::security::ssl::NamedGroup$ECDHEScheme;
using $NamedGroup$ExceptionSupplier = ::sun::security::ssl::NamedGroup$ExceptionSupplier;
using $NamedGroup$FFDHEScheme = ::sun::security::ssl::NamedGroup$FFDHEScheme;
using $NamedGroup$NamedGroupScheme = ::sun::security::ssl::NamedGroup$NamedGroupScheme;
using $NamedGroup$XDHScheme = ::sun::security::ssl::NamedGroup$XDHScheme;
using $NamedGroupPossession = ::sun::security::ssl::NamedGroupPossession;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLPossession = ::sun::security::ssl::SSLPossession;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _NamedGroup$NamedGroupSpec_FieldInfo_[] = {
	{"NAMED_GROUP_ECDHE", "Lsun/security/ssl/NamedGroup$NamedGroupSpec;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NamedGroup$NamedGroupSpec, NAMED_GROUP_ECDHE)},
	{"NAMED_GROUP_FFDHE", "Lsun/security/ssl/NamedGroup$NamedGroupSpec;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NamedGroup$NamedGroupSpec, NAMED_GROUP_FFDHE)},
	{"NAMED_GROUP_XDH", "Lsun/security/ssl/NamedGroup$NamedGroupSpec;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NamedGroup$NamedGroupSpec, NAMED_GROUP_XDH)},
	{"NAMED_GROUP_ARBITRARY", "Lsun/security/ssl/NamedGroup$NamedGroupSpec;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NamedGroup$NamedGroupSpec, NAMED_GROUP_ARBITRARY)},
	{"NAMED_GROUP_NONE", "Lsun/security/ssl/NamedGroup$NamedGroupSpec;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NamedGroup$NamedGroupSpec, NAMED_GROUP_NONE)},
	{"$VALUES", "[Lsun/security/ssl/NamedGroup$NamedGroupSpec;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(NamedGroup$NamedGroupSpec, $VALUES)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(NamedGroup$NamedGroupSpec, algorithm)},
	{"scheme", "Lsun/security/ssl/NamedGroup$NamedGroupScheme;", nullptr, $PRIVATE | $FINAL, $field(NamedGroup$NamedGroupSpec, scheme)},
	{}
};

$MethodInfo _NamedGroup$NamedGroupSpec_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/NamedGroup$NamedGroupSpec;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$NamedGroup$NamedGroupSpecArray*(*)()>(&NamedGroup$NamedGroupSpec::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Lsun/security/ssl/NamedGroup$NamedGroupScheme;)V", "(Ljava/lang/String;Lsun/security/ssl/NamedGroup$NamedGroupScheme;)V", $PRIVATE, $method(static_cast<void(NamedGroup$NamedGroupSpec::*)($String*,int32_t,$String*,$NamedGroup$NamedGroupScheme*)>(&NamedGroup$NamedGroupSpec::init$))},
	{"arrayContains", "([Lsun/security/ssl/NamedGroup$NamedGroupSpec;Lsun/security/ssl/NamedGroup$NamedGroupSpec;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($NamedGroup$NamedGroupSpecArray*,NamedGroup$NamedGroupSpec*)>(&NamedGroup$NamedGroupSpec::arrayContains))},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createPossession", "(Lsun/security/ssl/NamedGroup;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLPossession;", nullptr, $PUBLIC},
	{"decodeCredentials", "(Lsun/security/ssl/NamedGroup;[BLjava/security/AlgorithmConstraints;Lsun/security/ssl/NamedGroup$ExceptionSupplier;)Lsun/security/ssl/SSLCredentials;", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.security.GeneralSecurityException"},
	{"encodePossessionPublicKey", "(Lsun/security/ssl/NamedGroupPossession;)[B", nullptr, $PUBLIC},
	{"isSupported", "(Ljava/util/List;)Z", "(Ljava/util/List<Lsun/security/ssl/CipherSuite;>;)Z", 0, $method(static_cast<bool(NamedGroup$NamedGroupSpec::*)($List*)>(&NamedGroup$NamedGroupSpec::isSupported))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/NamedGroup$NamedGroupSpec;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NamedGroup$NamedGroupSpec*(*)($String*)>(&NamedGroup$NamedGroupSpec::valueOf))},
	{"values", "()[Lsun/security/ssl/NamedGroup$NamedGroupSpec;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$NamedGroup$NamedGroupSpecArray*(*)()>(&NamedGroup$NamedGroupSpec::values))},
	{}
};

$InnerClassInfo _NamedGroup$NamedGroupSpec_InnerClassesInfo_[] = {
	{"sun.security.ssl.NamedGroup$NamedGroupSpec", "sun.security.ssl.NamedGroup", "NamedGroupSpec", $STATIC | $FINAL | $ENUM},
	{"sun.security.ssl.NamedGroup$NamedGroupScheme", "sun.security.ssl.NamedGroup", "NamedGroupScheme", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NamedGroup$NamedGroupSpec_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.NamedGroup$NamedGroupSpec",
	"java.lang.Enum",
	"sun.security.ssl.NamedGroup$NamedGroupScheme",
	_NamedGroup$NamedGroupSpec_FieldInfo_,
	_NamedGroup$NamedGroupSpec_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/NamedGroup$NamedGroupSpec;>;Lsun/security/ssl/NamedGroup$NamedGroupScheme;",
	nullptr,
	_NamedGroup$NamedGroupSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.NamedGroup"
};

$Object* allocate$NamedGroup$NamedGroupSpec($Class* clazz) {
	return $of($alloc(NamedGroup$NamedGroupSpec));
}

$String* NamedGroup$NamedGroupSpec::toString() {
	 return this->$Enum::toString();
}

bool NamedGroup$NamedGroupSpec::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t NamedGroup$NamedGroupSpec::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* NamedGroup$NamedGroupSpec::clone() {
	 return this->$Enum::clone();
}

void NamedGroup$NamedGroupSpec::finalize() {
	this->$Enum::finalize();
}

NamedGroup$NamedGroupSpec* NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE = nullptr;
NamedGroup$NamedGroupSpec* NamedGroup$NamedGroupSpec::NAMED_GROUP_FFDHE = nullptr;
NamedGroup$NamedGroupSpec* NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH = nullptr;
NamedGroup$NamedGroupSpec* NamedGroup$NamedGroupSpec::NAMED_GROUP_ARBITRARY = nullptr;
NamedGroup$NamedGroupSpec* NamedGroup$NamedGroupSpec::NAMED_GROUP_NONE = nullptr;
$NamedGroup$NamedGroupSpecArray* NamedGroup$NamedGroupSpec::$VALUES = nullptr;

$NamedGroup$NamedGroupSpecArray* NamedGroup$NamedGroupSpec::$values() {
	$init(NamedGroup$NamedGroupSpec);
	return $new($NamedGroup$NamedGroupSpecArray, {
		NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE,
		NamedGroup$NamedGroupSpec::NAMED_GROUP_FFDHE,
		NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH,
		NamedGroup$NamedGroupSpec::NAMED_GROUP_ARBITRARY,
		NamedGroup$NamedGroupSpec::NAMED_GROUP_NONE
	});
}

$NamedGroup$NamedGroupSpecArray* NamedGroup$NamedGroupSpec::values() {
	$init(NamedGroup$NamedGroupSpec);
	return $cast($NamedGroup$NamedGroupSpecArray, NamedGroup$NamedGroupSpec::$VALUES->clone());
}

NamedGroup$NamedGroupSpec* NamedGroup$NamedGroupSpec::valueOf($String* name) {
	$init(NamedGroup$NamedGroupSpec);
	return $cast(NamedGroup$NamedGroupSpec, $Enum::valueOf(NamedGroup$NamedGroupSpec::class$, name));
}

void NamedGroup$NamedGroupSpec::init$($String* $enum$name, int32_t $enum$ordinal, $String* algorithm, $NamedGroup$NamedGroupScheme* scheme) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, algorithm, algorithm);
	$set(this, scheme, scheme);
}

bool NamedGroup$NamedGroupSpec::isSupported($List* cipherSuites) {
	{
		$var($Iterator, i$, $nc(cipherSuites)->iterator());
		for (; $nc(i$)->hasNext();) {
			$CipherSuite* cs = $cast($CipherSuite, i$->next());
			{
				if ($nc(cs)->keyExchange == nullptr || arrayContains($nc(cs)->keyExchange->groupTypes, this)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool NamedGroup$NamedGroupSpec::arrayContains($NamedGroup$NamedGroupSpecArray* namedGroupTypes, NamedGroup$NamedGroupSpec* namedGroupType) {
	$init(NamedGroup$NamedGroupSpec);
	{
		$var($NamedGroup$NamedGroupSpecArray, arr$, namedGroupTypes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			NamedGroup$NamedGroupSpec* ng = arr$->get(i$);
			{
				if (ng == namedGroupType) {
					return true;
				}
			}
		}
	}
	return false;
}

$bytes* NamedGroup$NamedGroupSpec::encodePossessionPublicKey($NamedGroupPossession* namedGroupPossession) {
	if (this->scheme != nullptr) {
		return $nc(this->scheme)->encodePossessionPublicKey(namedGroupPossession);
	}
	return nullptr;
}

$SSLCredentials* NamedGroup$NamedGroupSpec::decodeCredentials($NamedGroup* ng, $bytes* encoded, $AlgorithmConstraints* constraints, $NamedGroup$ExceptionSupplier* onConstraintFail) {
	if (this->scheme != nullptr) {
		return $nc(this->scheme)->decodeCredentials(ng, encoded, constraints, onConstraintFail);
	}
	return nullptr;
}

$SSLPossession* NamedGroup$NamedGroupSpec::createPossession($NamedGroup* ng, $SecureRandom* random) {
	if (this->scheme != nullptr) {
		return $nc(this->scheme)->createPossession(ng, random);
	}
	return nullptr;
}

$SSLKeyDerivation* NamedGroup$NamedGroupSpec::createKeyDerivation($HandshakeContext* hc) {
	if (this->scheme != nullptr) {
		return $nc(this->scheme)->createKeyDerivation(hc);
	}
	return nullptr;
}

void clinit$NamedGroup$NamedGroupSpec($Class* class$) {
	$init($NamedGroup$ECDHEScheme);
	$assignStatic(NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE, $new(NamedGroup$NamedGroupSpec, "NAMED_GROUP_ECDHE"_s, 0, "EC"_s, $NamedGroup$ECDHEScheme::instance));
	$init($NamedGroup$FFDHEScheme);
	$assignStatic(NamedGroup$NamedGroupSpec::NAMED_GROUP_FFDHE, $new(NamedGroup$NamedGroupSpec, "NAMED_GROUP_FFDHE"_s, 1, "DiffieHellman"_s, $NamedGroup$FFDHEScheme::instance));
	$init($NamedGroup$XDHScheme);
	$assignStatic(NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH, $new(NamedGroup$NamedGroupSpec, "NAMED_GROUP_XDH"_s, 2, "XDH"_s, $NamedGroup$XDHScheme::instance));
	$assignStatic(NamedGroup$NamedGroupSpec::NAMED_GROUP_ARBITRARY, $new(NamedGroup$NamedGroupSpec, "NAMED_GROUP_ARBITRARY"_s, 3, "EC"_s, nullptr));
	$assignStatic(NamedGroup$NamedGroupSpec::NAMED_GROUP_NONE, $new(NamedGroup$NamedGroupSpec, "NAMED_GROUP_NONE"_s, 4, ""_s, nullptr));
	$assignStatic(NamedGroup$NamedGroupSpec::$VALUES, NamedGroup$NamedGroupSpec::$values());
}

NamedGroup$NamedGroupSpec::NamedGroup$NamedGroupSpec() {
}

$Class* NamedGroup$NamedGroupSpec::load$($String* name, bool initialize) {
	$loadClass(NamedGroup$NamedGroupSpec, name, initialize, &_NamedGroup$NamedGroupSpec_ClassInfo_, clinit$NamedGroup$NamedGroupSpec, allocate$NamedGroup$NamedGroupSpec);
	return class$;
}

$Class* NamedGroup$NamedGroupSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun