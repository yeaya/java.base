#include <sun/security/provider/certpath/RevocationChecker$RejectKeySelector.h>
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
using $Certificate = ::java::security::cert::Certificate;
using $X509CertSelector = ::java::security::cert::X509CertSelector;
using $Set = ::java::util::Set;
using $RevocationChecker = ::sun::security::provider::certpath::RevocationChecker;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

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
			$RevocationChecker::debug->println("RejectKeySelector.match: bad key"_s);
		}
		return false;
	}
	$init($RevocationChecker);
	if ($RevocationChecker::debug != nullptr) {
		$RevocationChecker::debug->println("RejectKeySelector.match: returning true"_s);
	}
	return true;
}

$String* RevocationChecker$RejectKeySelector::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("RejectKeySelector: [\n"_s);
	sb->append($($X509CertSelector::toString()));
	sb->append(this->badKeySet);
	sb->append("]"_s);
	return sb->toString();
}

RevocationChecker$RejectKeySelector::RevocationChecker$RejectKeySelector() {
}

$Class* RevocationChecker$RejectKeySelector::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"badKeySet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/security/PublicKey;>;", $PRIVATE | $FINAL, $field(RevocationChecker$RejectKeySelector, badKeySet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/security/PublicKey;>;)V", 0, $method(RevocationChecker$RejectKeySelector, init$, void, $Set*)},
		{"match", "(Ljava/security/cert/Certificate;)Z", nullptr, $PUBLIC, $virtualMethod(RevocationChecker$RejectKeySelector, match, bool, $Certificate*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RevocationChecker$RejectKeySelector, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.RevocationChecker$RejectKeySelector", "sun.security.provider.certpath.RevocationChecker", "RejectKeySelector", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.RevocationChecker$RejectKeySelector",
		"java.security.cert.X509CertSelector",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.RevocationChecker"
	};
	$loadClass(RevocationChecker$RejectKeySelector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RevocationChecker$RejectKeySelector);
	});
	return class$;
}

$Class* RevocationChecker$RejectKeySelector::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun