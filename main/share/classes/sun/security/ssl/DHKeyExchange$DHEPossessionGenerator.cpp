#include <sun/security/ssl/DHKeyExchange$DHEPossessionGenerator.h>
#include <java/lang/NumberFormatException.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/security/PrivateKey.h>
#include <java/security/SecureRandom.h>
#include <java/util/List.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/ssl/DHKeyExchange$DHEPossession.h>
#include <sun/security/ssl/DHKeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroups.h>
#include <sun/security/ssl/X509Authentication$X509Possession.h>
#include <sun/security/util/KeyUtil.h>
#include <jcpp.h>

#undef NAMED_GROUP_FFDHE

using $NamedGroup$NamedGroupSpecArray = $Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $PrivateKey = ::java::security::PrivateKey;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $DHKeyExchange$DHEPossession = ::sun::security::ssl::DHKeyExchange$DHEPossession;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SupportedGroupsExtension$SupportedGroups = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups;
using $X509Authentication$X509Possession = ::sun::security::ssl::X509Authentication$X509Possession;
using $KeyUtil = ::sun::security::util::KeyUtil;

namespace sun {
	namespace security {
		namespace ssl {

bool DHKeyExchange$DHEPossessionGenerator::useSmartEphemeralDHKeys = false;
bool DHKeyExchange$DHEPossessionGenerator::useLegacyEphemeralDHKeys = false;
int32_t DHKeyExchange$DHEPossessionGenerator::customizedDHKeySize = 0;

void DHKeyExchange$DHEPossessionGenerator::init$(bool exportable) {
	this->exportable = exportable;
}

$SSLPossession* DHKeyExchange$DHEPossessionGenerator::createPossession($HandshakeContext* context) {
	$useLocalObjectStack();
	$NamedGroup* preferableNamedGroup = nullptr;
	if (!DHKeyExchange$DHEPossessionGenerator::useLegacyEphemeralDHKeys && ($nc(context)->clientRequestedNamedGroups != nullptr) && (!context->clientRequestedNamedGroups->isEmpty())) {
		$init($NamedGroup$NamedGroupSpec);
		preferableNamedGroup = $SupportedGroupsExtension$SupportedGroups::getPreferredGroup(context->negotiatedProtocol, context->algorithmConstraints, $$new($NamedGroup$NamedGroupSpecArray, {$NamedGroup$NamedGroupSpec::NAMED_GROUP_FFDHE}), context->clientRequestedNamedGroups);
		if (preferableNamedGroup != nullptr) {
			return $new($DHKeyExchange$DHEPossession, preferableNamedGroup, $($nc(context->sslContext)->getSecureRandom()));
		}
	}
	int32_t keySize = this->exportable ? 512 : 1024;
	if (!this->exportable) {
		if (DHKeyExchange$DHEPossessionGenerator::useLegacyEphemeralDHKeys) {
			keySize = 768;
		} else if (DHKeyExchange$DHEPossessionGenerator::useSmartEphemeralDHKeys) {
			$var($PrivateKey, key, nullptr);
			$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
			if ($instanceOf($X509Authentication$X509Possession, $nc(shc)->interimAuthn)) {
				$assign(key, $cast($X509Authentication$X509Possession, shc->interimAuthn)->popPrivateKey);
			}
			if (key != nullptr) {
				int32_t ks = $KeyUtil::getKeySize(key);
				keySize = ks <= 1024 ? 1024 : 2048;
			}
		} else if (DHKeyExchange$DHEPossessionGenerator::customizedDHKeySize > 0) {
			keySize = DHKeyExchange$DHEPossessionGenerator::customizedDHKeySize;
		}
	}
	return $new($DHKeyExchange$DHEPossession, keySize, $($nc($nc(context)->sslContext)->getSecureRandom()));
}

void DHKeyExchange$DHEPossessionGenerator::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($String, property, $GetPropertyAction::privilegedGetProperty("jdk.tls.ephemeralDHKeySize"_s));
		if (property == nullptr || property->isEmpty()) {
			DHKeyExchange$DHEPossessionGenerator::useLegacyEphemeralDHKeys = false;
			DHKeyExchange$DHEPossessionGenerator::useSmartEphemeralDHKeys = false;
			DHKeyExchange$DHEPossessionGenerator::customizedDHKeySize = -1;
		} else if ("matched"_s->equals(property)) {
			DHKeyExchange$DHEPossessionGenerator::useLegacyEphemeralDHKeys = false;
			DHKeyExchange$DHEPossessionGenerator::useSmartEphemeralDHKeys = true;
			DHKeyExchange$DHEPossessionGenerator::customizedDHKeySize = -1;
		} else if ("legacy"_s->equals(property)) {
			DHKeyExchange$DHEPossessionGenerator::useLegacyEphemeralDHKeys = true;
			DHKeyExchange$DHEPossessionGenerator::useSmartEphemeralDHKeys = false;
			DHKeyExchange$DHEPossessionGenerator::customizedDHKeySize = -1;
		} else {
			DHKeyExchange$DHEPossessionGenerator::useLegacyEphemeralDHKeys = false;
			DHKeyExchange$DHEPossessionGenerator::useSmartEphemeralDHKeys = false;
			try {
				DHKeyExchange$DHEPossessionGenerator::customizedDHKeySize = $Integer::parseUnsignedInt(property);
				if (DHKeyExchange$DHEPossessionGenerator::customizedDHKeySize < 1024 || DHKeyExchange$DHEPossessionGenerator::customizedDHKeySize > 8192 || (DHKeyExchange$DHEPossessionGenerator::customizedDHKeySize & 0x3f) != 0) {
					$throwNew($IllegalArgumentException, $$str({"Unsupported customized DH key size: "_s, $$str(DHKeyExchange$DHEPossessionGenerator::customizedDHKeySize), ". The key size must be multiple of 64, and range from 1024 to 8192 (inclusive)"_s}));
				}
			} catch ($NumberFormatException& nfe) {
				$throwNew($IllegalArgumentException, "Invalid system property jdk.tls.ephemeralDHKeySize"_s);
			}
		}
	}
}

DHKeyExchange$DHEPossessionGenerator::DHKeyExchange$DHEPossessionGenerator() {
}

$Class* DHKeyExchange$DHEPossessionGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"useSmartEphemeralDHKeys", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DHKeyExchange$DHEPossessionGenerator, useSmartEphemeralDHKeys)},
		{"useLegacyEphemeralDHKeys", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DHKeyExchange$DHEPossessionGenerator, useLegacyEphemeralDHKeys)},
		{"customizedDHKeySize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DHKeyExchange$DHEPossessionGenerator, customizedDHKeySize)},
		{"exportable", "Z", nullptr, $PRIVATE | $FINAL, $field(DHKeyExchange$DHEPossessionGenerator, exportable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PRIVATE, $method(DHKeyExchange$DHEPossessionGenerator, init$, void, bool)},
		{"createPossession", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLPossession;", nullptr, $PUBLIC, $virtualMethod(DHKeyExchange$DHEPossessionGenerator, createPossession, $SSLPossession*, $HandshakeContext*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.DHKeyExchange$DHEPossessionGenerator", "sun.security.ssl.DHKeyExchange", "DHEPossessionGenerator", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.DHKeyExchange$DHEPossessionGenerator",
		"java.lang.Object",
		"sun.security.ssl.SSLPossessionGenerator",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.DHKeyExchange"
	};
	$loadClass(DHKeyExchange$DHEPossessionGenerator, name, initialize, &classInfo$$, DHKeyExchange$DHEPossessionGenerator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DHKeyExchange$DHEPossessionGenerator);
	});
	return class$;
}

$Class* DHKeyExchange$DHEPossessionGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun