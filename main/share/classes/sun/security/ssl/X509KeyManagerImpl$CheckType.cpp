#include <sun/security/ssl/X509KeyManagerImpl$CheckType.h>
#include <java/lang/Enum.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Collections.h>
#include <java/util/Date.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/net/ssl/SNIHostName.h>
#include <javax/net/ssl/SNIServerName.h>
#include <javax/net/ssl/StandardConstants.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/X509KeyManagerImpl$CheckResult.h>
#include <sun/security/ssl/X509KeyManagerImpl.h>
#include <sun/security/ssl/X509TrustManagerImpl.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/validator/Validator.h>
#include <jcpp.h>

#undef CLIENT
#undef EXPIRED
#undef EXTENSION_MISMATCH
#undef INSENSITIVE
#undef NONE
#undef OK
#undef SERVER
#undef SNI_HOST_NAME
#undef VAR_GENERIC
#undef VAR_TLS_CLIENT
#undef VAR_TLS_SERVER

using $X509KeyManagerImpl$CheckTypeArray = $Array<::sun::security::ssl::X509KeyManagerImpl$CheckType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateException = ::java::security::cert::CertificateException;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Collections = ::java::util::Collections;
using $Date = ::java::util::Date;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $SNIHostName = ::javax::net::ssl::SNIHostName;
using $SNIServerName = ::javax::net::ssl::SNIServerName;
using $StandardConstants = ::javax::net::ssl::StandardConstants;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $X509KeyManagerImpl$CheckResult = ::sun::security::ssl::X509KeyManagerImpl$CheckResult;
using $X509TrustManagerImpl = ::sun::security::ssl::X509TrustManagerImpl;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $Validator = ::sun::security::validator::Validator;

namespace sun {
	namespace security {
		namespace ssl {

X509KeyManagerImpl$CheckType* X509KeyManagerImpl$CheckType::NONE = nullptr;
X509KeyManagerImpl$CheckType* X509KeyManagerImpl$CheckType::CLIENT = nullptr;
X509KeyManagerImpl$CheckType* X509KeyManagerImpl$CheckType::SERVER = nullptr;
$X509KeyManagerImpl$CheckTypeArray* X509KeyManagerImpl$CheckType::$VALUES = nullptr;

$X509KeyManagerImpl$CheckTypeArray* X509KeyManagerImpl$CheckType::$values() {
	$init(X509KeyManagerImpl$CheckType);
	return $new($X509KeyManagerImpl$CheckTypeArray, {
		X509KeyManagerImpl$CheckType::NONE,
		X509KeyManagerImpl$CheckType::CLIENT,
		X509KeyManagerImpl$CheckType::SERVER
	});
}

$X509KeyManagerImpl$CheckTypeArray* X509KeyManagerImpl$CheckType::values() {
	$init(X509KeyManagerImpl$CheckType);
	return $cast($X509KeyManagerImpl$CheckTypeArray, X509KeyManagerImpl$CheckType::$VALUES->clone());
}

X509KeyManagerImpl$CheckType* X509KeyManagerImpl$CheckType::valueOf($String* name) {
	$init(X509KeyManagerImpl$CheckType);
	return $cast(X509KeyManagerImpl$CheckType, $Enum::valueOf(X509KeyManagerImpl$CheckType::class$, name));
}

void X509KeyManagerImpl$CheckType::init$($String* $enum$name, int32_t $enum$ordinal, $Set* validEku) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, validEku, validEku);
}

bool X509KeyManagerImpl$CheckType::getBit($booleans* keyUsage, int32_t bit) {
	$init(X509KeyManagerImpl$CheckType);
	return (bit < $nc(keyUsage)->length) && keyUsage->get(bit);
}

$X509KeyManagerImpl$CheckResult* X509KeyManagerImpl$CheckType::check($X509Certificate* cert, $Date* date, $List* serverNames, $String* idAlgorithm) {
	$useLocalObjectStack();
	if (this == X509KeyManagerImpl$CheckType::NONE) {
		$init($X509KeyManagerImpl$CheckResult);
		return $X509KeyManagerImpl$CheckResult::OK;
	}
	try {
		$var($List, certEku, $nc(cert)->getExtendedKeyUsage());
		if ((certEku != nullptr) && $Collections::disjoint(this->validEku, certEku)) {
			$init($X509KeyManagerImpl$CheckResult);
			return $X509KeyManagerImpl$CheckResult::EXTENSION_MISMATCH;
		}
		$var($booleans, ku, cert->getKeyUsage());
		if (ku != nullptr) {
			$var($String, algorithm, $$nc(cert->getPublicKey())->getAlgorithm());
			bool supportsDigitalSignature = getBit(ku, 0);
			{
				$var($String, s22678$, algorithm);
				int32_t tmp22678$ = -1;
				switch ($nc(s22678$)->hashCode()) {
				case 0x00013e20:
					if (s22678$->equals("RSA"_s)) {
						tmp22678$ = 0;
					}
					break;
				case 0x69d3b2a4:
					if (s22678$->equals("RSASSA-PSS"_s)) {
						tmp22678$ = 1;
					}
					break;
				case 0x00010992:
					if (s22678$->equals("DSA"_s)) {
						tmp22678$ = 2;
					}
					break;
				case 2180:
					if (s22678$->equals("DH"_s)) {
						tmp22678$ = 3;
					}
					break;
				case 2206:
					if (s22678$->equals("EC"_s)) {
						tmp22678$ = 4;
					}
					break;
				}
				switch (tmp22678$) {
				case 0:
					if (!supportsDigitalSignature) {
						if (this == X509KeyManagerImpl$CheckType::CLIENT || !getBit(ku, 2)) {
							$init($X509KeyManagerImpl$CheckResult);
							return $X509KeyManagerImpl$CheckResult::EXTENSION_MISMATCH;
						}
					}
					break;
				case 1:
					if (!supportsDigitalSignature && (this == X509KeyManagerImpl$CheckType::SERVER)) {
						$init($X509KeyManagerImpl$CheckResult);
						return $X509KeyManagerImpl$CheckResult::EXTENSION_MISMATCH;
					}
					break;
				case 2:
					if (!supportsDigitalSignature) {
						$init($X509KeyManagerImpl$CheckResult);
						return $X509KeyManagerImpl$CheckResult::EXTENSION_MISMATCH;
					}
					break;
				case 3:
					if (!getBit(ku, 4)) {
						$init($X509KeyManagerImpl$CheckResult);
						return $X509KeyManagerImpl$CheckResult::EXTENSION_MISMATCH;
					}
					break;
				case 4:
					if (!supportsDigitalSignature) {
						$init($X509KeyManagerImpl$CheckResult);
						return $X509KeyManagerImpl$CheckResult::EXTENSION_MISMATCH;
					}
					if (this == X509KeyManagerImpl$CheckType::SERVER && !getBit(ku, 4)) {
						$init($X509KeyManagerImpl$CheckResult);
						return $X509KeyManagerImpl$CheckResult::EXTENSION_MISMATCH;
					}
					break;
				}
			}
		}
	} catch ($CertificateException& e) {
		$init($X509KeyManagerImpl$CheckResult);
		return $X509KeyManagerImpl$CheckResult::EXTENSION_MISMATCH;
	}
	try {
		$nc(cert)->checkValidity(date);
	} catch ($CertificateException& e) {
		$init($X509KeyManagerImpl$CheckResult);
		return $X509KeyManagerImpl$CheckResult::EXPIRED;
	}
	if (serverNames != nullptr && !serverNames->isEmpty()) {
		$var($Iterator, i$, serverNames->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SNIServerName, serverName, $cast($SNIServerName, i$->next()));
			if ($nc(serverName)->getType() == $StandardConstants::SNI_HOST_NAME) {
				if (!($instanceOf($SNIHostName, serverName))) {
					try {
						$assign(serverName, $new($SNIHostName, $(serverName->getEncoded())));
					} catch ($IllegalArgumentException& iae) {
						$init($SSLLogger);
						if ($SSLLogger::isOn$ && $SSLLogger::isOn("keymanager"_s)) {
							$SSLLogger::fine($$str({"Illegal server name: "_s, serverName}), $$new($ObjectArray, 0));
						}
						$init($X509KeyManagerImpl$CheckResult);
						return $X509KeyManagerImpl$CheckResult::INSENSITIVE;
					}
				}
				$var($String, hostname, $cast($SNIHostName, serverName)->getAsciiName());
				try {
					$X509TrustManagerImpl::checkIdentity(hostname, cert, idAlgorithm);
				} catch ($CertificateException& e) {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("keymanager"_s)) {
						$SSLLogger::fine($$str({"Certificate identity does not match Server Name Inidication (SNI): "_s, hostname}), $$new($ObjectArray, 0));
					}
					$init($X509KeyManagerImpl$CheckResult);
					return $X509KeyManagerImpl$CheckResult::INSENSITIVE;
				}
				break;
			}
		}
	}
	$init($X509KeyManagerImpl$CheckResult);
	return $X509KeyManagerImpl$CheckResult::OK;
}

$String* X509KeyManagerImpl$CheckType::getValidator() {
	if (this == X509KeyManagerImpl$CheckType::CLIENT) {
		$init($Validator);
		return $Validator::VAR_TLS_CLIENT;
	} else if (this == X509KeyManagerImpl$CheckType::SERVER) {
		$init($Validator);
		return $Validator::VAR_TLS_SERVER;
	}
	$init($Validator);
	return $Validator::VAR_GENERIC;
}

void X509KeyManagerImpl$CheckType::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(X509KeyManagerImpl$CheckType::NONE, $new(X509KeyManagerImpl$CheckType, "NONE"_s, 0, $($Collections::emptySet())));
	$init($KnownOIDs);
	$var($Object, var$0, $KnownOIDs::anyExtendedKeyUsage->value());
	$assignStatic(X509KeyManagerImpl$CheckType::CLIENT, $new(X509KeyManagerImpl$CheckType, "CLIENT"_s, 1, $$new($HashSet, $($List::of(var$0, $($KnownOIDs::clientAuth->value()))))));
	$var($Object, var$1, $KnownOIDs::anyExtendedKeyUsage->value());
	$var($Object, var$2, $KnownOIDs::serverAuth->value());
	$var($Object, var$3, $KnownOIDs::NETSCAPE_ExportApproved->value());
	$assignStatic(X509KeyManagerImpl$CheckType::SERVER, $new(X509KeyManagerImpl$CheckType, "SERVER"_s, 2, $$new($HashSet, $($List::of(var$1, var$2, var$3, $($KnownOIDs::MICROSOFT_ExportApproved->value()))))));
	$assignStatic(X509KeyManagerImpl$CheckType::$VALUES, X509KeyManagerImpl$CheckType::$values());
}

X509KeyManagerImpl$CheckType::X509KeyManagerImpl$CheckType() {
}

$Class* X509KeyManagerImpl$CheckType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NONE", "Lsun/security/ssl/X509KeyManagerImpl$CheckType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509KeyManagerImpl$CheckType, NONE)},
		{"CLIENT", "Lsun/security/ssl/X509KeyManagerImpl$CheckType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509KeyManagerImpl$CheckType, CLIENT)},
		{"SERVER", "Lsun/security/ssl/X509KeyManagerImpl$CheckType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509KeyManagerImpl$CheckType, SERVER)},
		{"$VALUES", "[Lsun/security/ssl/X509KeyManagerImpl$CheckType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(X509KeyManagerImpl$CheckType, $VALUES)},
		{"validEku", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $FINAL, $field(X509KeyManagerImpl$CheckType, validEku)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/security/ssl/X509KeyManagerImpl$CheckType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(X509KeyManagerImpl$CheckType, $values, $X509KeyManagerImpl$CheckTypeArray*)},
		{"<init>", "(Ljava/lang/String;ILjava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;)V", $PRIVATE, $method(X509KeyManagerImpl$CheckType, init$, void, $String*, int32_t, $Set*)},
		{"check", "(Ljava/security/cert/X509Certificate;Ljava/util/Date;Ljava/util/List;Ljava/lang/String;)Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", "(Ljava/security/cert/X509Certificate;Ljava/util/Date;Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;Ljava/lang/String;)Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", 0, $method(X509KeyManagerImpl$CheckType, check, $X509KeyManagerImpl$CheckResult*, $X509Certificate*, $Date*, $List*, $String*)},
		{"getBit", "([ZI)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(X509KeyManagerImpl$CheckType, getBit, bool, $booleans*, int32_t)},
		{"getValidator", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(X509KeyManagerImpl$CheckType, getValidator, $String*)},
		{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/X509KeyManagerImpl$CheckType;", nullptr, $PUBLIC | $STATIC, $staticMethod(X509KeyManagerImpl$CheckType, valueOf, X509KeyManagerImpl$CheckType*, $String*)},
		{"values", "()[Lsun/security/ssl/X509KeyManagerImpl$CheckType;", nullptr, $PUBLIC | $STATIC, $staticMethod(X509KeyManagerImpl$CheckType, values, $X509KeyManagerImpl$CheckTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.X509KeyManagerImpl$CheckType", "sun.security.ssl.X509KeyManagerImpl", "CheckType", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.security.ssl.X509KeyManagerImpl$CheckType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/security/ssl/X509KeyManagerImpl$CheckType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.X509KeyManagerImpl"
	};
	$loadClass(X509KeyManagerImpl$CheckType, name, initialize, &classInfo$$, X509KeyManagerImpl$CheckType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(X509KeyManagerImpl$CheckType));
	});
	return class$;
}

$Class* X509KeyManagerImpl$CheckType::class$ = nullptr;

		} // ssl
	} // security
} // sun