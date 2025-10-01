#include <sun/security/provider/certpath/RevocationChecker$RejectKeySelector.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/X509CertSelector.h>
#include <java/util/Set.h>
#include <sun/security/provider/certpath/RevocationChecker.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $Certificate = ::java::security::cert::Certificate;
using $X509CertSelector = ::java::security::cert::X509CertSelector;
using $Set = ::java::util::Set;
using $RevocationChecker = ::sun::security::provider::certpath::RevocationChecker;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _RevocationChecker$RejectKeySelector_FieldInfo_[] = {
	{"badKeySet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/security/PublicKey;>;", $PRIVATE | $FINAL, $field(RevocationChecker$RejectKeySelector, badKeySet)},
	{}
};

$MethodInfo _RevocationChecker$RejectKeySelector_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/security/PublicKey;>;)V", 0, $method(static_cast<void(RevocationChecker$RejectKeySelector::*)($Set*)>(&RevocationChecker$RejectKeySelector::init$))},
	{"match", "(Ljava/security/cert/Certificate;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RevocationChecker$RejectKeySelector_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.RevocationChecker$RejectKeySelector", "sun.security.provider.certpath.RevocationChecker", "RejectKeySelector", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _RevocationChecker$RejectKeySelector_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.RevocationChecker$RejectKeySelector",
	"java.security.cert.X509CertSelector",
	nullptr,
	_RevocationChecker$RejectKeySelector_FieldInfo_,
	_RevocationChecker$RejectKeySelector_MethodInfo_,
	nullptr,
	nullptr,
	_RevocationChecker$RejectKeySelector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.RevocationChecker"
};

$Object* allocate$RevocationChecker$RejectKeySelector($Class* clazz) {
	return $of($alloc(RevocationChecker$RejectKeySelector));
}

void RevocationChecker$RejectKeySelector::init$($Set* badPublicKeys) {
	$X509CertSelector::init$();
	$set(this, badKeySet, badPublicKeys);
}

bool RevocationChecker$RejectKeySelector::match($Certificate* cert) {
	if (!$X509CertSelector::match(cert)) {
		return (false);
	}
	if ($nc(this->badKeySet)->contains($($nc(cert)->getPublicKey()))) {
		$init($RevocationChecker);
		if ($RevocationChecker::debug != nullptr) {
			$nc($RevocationChecker::debug)->println("RejectKeySelector.match: bad key"_s);
		}
		return false;
	}
	$init($RevocationChecker);
	if ($RevocationChecker::debug != nullptr) {
		$nc($RevocationChecker::debug)->println("RejectKeySelector.match: returning true"_s);
	}
	return true;
}

$String* RevocationChecker$RejectKeySelector::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("RejectKeySelector: [\n"_s);
	sb->append($($X509CertSelector::toString()));
	sb->append($of(this->badKeySet));
	sb->append("]"_s);
	return sb->toString();
}

RevocationChecker$RejectKeySelector::RevocationChecker$RejectKeySelector() {
}

$Class* RevocationChecker$RejectKeySelector::load$($String* name, bool initialize) {
	$loadClass(RevocationChecker$RejectKeySelector, name, initialize, &_RevocationChecker$RejectKeySelector_ClassInfo_, allocate$RevocationChecker$RejectKeySelector);
	return class$;
}

$Class* RevocationChecker$RejectKeySelector::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun