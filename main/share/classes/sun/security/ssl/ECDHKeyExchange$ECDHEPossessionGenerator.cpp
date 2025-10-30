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
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $SecureRandom = ::java::security::SecureRandom;
using $List = ::java::util::List;
using $ECDHKeyExchange = ::sun::security::ssl::ECDHKeyExchange;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;
using $SupportedGroupsExtension$SupportedGroups = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ECDHKeyExchange$ECDHEPossessionGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ECDHKeyExchange$ECDHEPossessionGenerator::*)()>(&ECDHKeyExchange$ECDHEPossessionGenerator::init$))},
	{"createPossession", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLPossession;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ECDHKeyExchange$ECDHEPossessionGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHKeyExchange$ECDHEPossessionGenerator", "sun.security.ssl.ECDHKeyExchange", "ECDHEPossessionGenerator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ECDHKeyExchange$ECDHEPossessionGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECDHKeyExchange$ECDHEPossessionGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLPossessionGenerator",
	nullptr,
	_ECDHKeyExchange$ECDHEPossessionGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_ECDHKeyExchange$ECDHEPossessionGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHKeyExchange"
};

$Object* allocate$ECDHKeyExchange$ECDHEPossessionGenerator($Class* clazz) {
	return $of($alloc(ECDHKeyExchange$ECDHEPossessionGenerator));
}

void ECDHKeyExchange$ECDHEPossessionGenerator::init$() {
}

$SSLPossession* ECDHKeyExchange$ECDHEPossessionGenerator::createPossession($HandshakeContext* context) {
	$useLocalCurrentObjectStackCache();
	$NamedGroup* preferableNamedGroup = nullptr;
	if (($nc(context)->clientRequestedNamedGroups != nullptr) && (!$nc(context->clientRequestedNamedGroups)->isEmpty())) {
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
		return preferableNamedGroup->createPossession($($nc($nc(context)->sslContext)->getSecureRandom()));
	}
	return nullptr;
}

ECDHKeyExchange$ECDHEPossessionGenerator::ECDHKeyExchange$ECDHEPossessionGenerator() {
}

$Class* ECDHKeyExchange$ECDHEPossessionGenerator::load$($String* name, bool initialize) {
	$loadClass(ECDHKeyExchange$ECDHEPossessionGenerator, name, initialize, &_ECDHKeyExchange$ECDHEPossessionGenerator_ClassInfo_, allocate$ECDHKeyExchange$ECDHEPossessionGenerator);
	return class$;
}

$Class* ECDHKeyExchange$ECDHEPossessionGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun