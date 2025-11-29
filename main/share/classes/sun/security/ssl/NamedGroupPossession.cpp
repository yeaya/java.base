#include <sun/security/ssl/NamedGroupPossession.h>

#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <sun/security/ssl/NamedGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _NamedGroupPossession_MethodInfo_[] = {
	{"getNamedGroup", "()Lsun/security/ssl/NamedGroup;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrivateKey", "()Ljava/security/PrivateKey;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NamedGroupPossession_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.NamedGroupPossession",
	nullptr,
	"sun.security.ssl.SSLPossession",
	nullptr,
	_NamedGroupPossession_MethodInfo_
};

$Object* allocate$NamedGroupPossession($Class* clazz) {
	return $of($alloc(NamedGroupPossession));
}

$Class* NamedGroupPossession::load$($String* name, bool initialize) {
	$loadClass(NamedGroupPossession, name, initialize, &_NamedGroupPossession_ClassInfo_, allocate$NamedGroupPossession);
	return class$;
}

$Class* NamedGroupPossession::class$ = nullptr;

		} // ssl
	} // security
} // sun