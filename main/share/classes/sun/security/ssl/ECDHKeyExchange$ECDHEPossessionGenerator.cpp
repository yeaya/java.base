#include <sun/security/ssl/ECDHKeyExchange$ECDHEPossessionGenerator.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/security/SecureRandom.h>
#include <java/util/List.h>
#include <sun/security/ssl/ECDHKeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroups.h>
#include <jcpp.h>

#undef NAMED_GROUP_ECDHE
#undef NAMED_GROUP_XDH

using $NamedGroup$NamedGroupSpecArray = $Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SupportedGroupsExtension$SupportedGroups = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups;

namespace sun {
	namespace security {
		namespace ssl {

void ECDHKeyExchange$ECDHEPossessionGenerator::init$() {
}

$SSLPossession* ECDHKeyExchange$ECDHEPossessionGenerator::createPossession($HandshakeContext* context) {
	$useLocalObjectStack();
	$NamedGroup* preferableNamedGroup = nullptr;
	if (($nc(context)->clientRequestedNamedGroups != nullptr) && (!context->clientRequestedNamedGroups->isEmpty())) {
		$init($NamedGroup$NamedGroupSpec);
		preferableNamedGroup = $SupportedGroupsExtension$SupportedGroups::getPreferredGroup(context->negotiatedProtocol, context->algorithmConstraints, $$new($NamedGroup$NamedGroupSpecArray, {
			$NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE,
			$NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH
		}), context->clientRequestedNamedGroups);
	} else {
		$init($NamedGroup$NamedGroupSpec);
		preferableNamedGroup = $SupportedGroupsExtension$SupportedGroups::getPreferredGroup(context->negotiatedProtocol, context->algorithmConstraints, $$new($NamedGroup$NamedGroupSpecArray, {
			$NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE,
			$NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH
		}));
	}
	if (preferableNamedGroup != nullptr) {
		return preferableNamedGroup->createPossession($($nc(context->sslContext)->getSecureRandom()));
	}
	return nullptr;
}

ECDHKeyExchange$ECDHEPossessionGenerator::ECDHKeyExchange$ECDHEPossessionGenerator() {
}

$Class* ECDHKeyExchange$ECDHEPossessionGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ECDHKeyExchange$ECDHEPossessionGenerator, init$, void)},
		{"createPossession", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLPossession;", nullptr, $PUBLIC, $virtualMethod(ECDHKeyExchange$ECDHEPossessionGenerator, createPossession, $SSLPossession*, $HandshakeContext*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ECDHKeyExchange$ECDHEPossessionGenerator", "sun.security.ssl.ECDHKeyExchange", "ECDHEPossessionGenerator", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ECDHKeyExchange$ECDHEPossessionGenerator",
		"java.lang.Object",
		"sun.security.ssl.SSLPossessionGenerator",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.ECDHKeyExchange"
	};
	$loadClass(ECDHKeyExchange$ECDHEPossessionGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECDHKeyExchange$ECDHEPossessionGenerator);
	});
	return class$;
}

$Class* ECDHKeyExchange$ECDHEPossessionGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun