#include <sun/security/provider/certpath/ConstraintsChecker.h>
#include <java/io/IOException.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/PKIXCertPathChecker.h>
#include <java/security/cert/PKIXReason.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/NameConstraintsExtension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

#undef INVALID_NAME
#undef MAX_VALUE
#undef NOT_CA_CERT
#undef PATH_TOO_LONG

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateException = ::java::security::cert::CertificateException;
using $PKIXCertPathChecker = ::java::security::cert::PKIXCertPathChecker;
using $PKIXReason = ::java::security::cert::PKIXReason;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $Debug = ::sun::security::util::Debug;
using $NameConstraintsExtension = ::sun::security::x509::NameConstraintsExtension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$Debug* ConstraintsChecker::debug = nullptr;

void ConstraintsChecker::init$(int32_t certPathLength) {
	$PKIXCertPathChecker::init$();
	this->certPathLength = certPathLength;
}

void ConstraintsChecker::init(bool forward) {
	if (!forward) {
		this->i = 0;
		this->maxPathLength = this->certPathLength;
		$set(this, prevNC, nullptr);
	} else {
		$throwNew($CertPathValidatorException, "forward checking not supported"_s);
	}
}

bool ConstraintsChecker::isForwardCheckingSupported() {
	return false;
}

$Set* ConstraintsChecker::getSupportedExtensions() {
	$useLocalObjectStack();
	if (this->supportedExts == nullptr) {
		$set(this, supportedExts, $new($HashSet, 2));
		$init($PKIXExtensions);
		this->supportedExts->add($($nc($PKIXExtensions::BasicConstraints_Id)->toString()));
		this->supportedExts->add($($nc($PKIXExtensions::NameConstraints_Id)->toString()));
		$set(this, supportedExts, $Collections::unmodifiableSet(this->supportedExts));
	}
	return this->supportedExts;
}

void ConstraintsChecker::check($Certificate* cert, $Collection* unresCritExts) {
	$useLocalObjectStack();
	$var($X509Certificate, currCert, $cast($X509Certificate, cert));
	++this->i;
	checkBasicConstraints(currCert);
	verifyNameConstraints(currCert);
	if (unresCritExts != nullptr && !unresCritExts->isEmpty()) {
		$init($PKIXExtensions);
		unresCritExts->remove($($nc($PKIXExtensions::BasicConstraints_Id)->toString()));
		unresCritExts->remove($($nc($PKIXExtensions::NameConstraints_Id)->toString()));
	}
}

void ConstraintsChecker::verifyNameConstraints($X509Certificate* currCert) {
	$useLocalObjectStack();
	$var($String, msg, "name constraints"_s);
	if (ConstraintsChecker::debug != nullptr) {
		ConstraintsChecker::debug->println($$str({"---checking "_s, msg, "..."_s}));
	}
	if (this->prevNC != nullptr && ((this->i == this->certPathLength) || !$X509CertImpl::isSelfIssued(currCert))) {
		if (ConstraintsChecker::debug != nullptr) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("prevNC = "_s);
			var$0->append(this->prevNC);
			var$0->append(", currDN = "_s);
			var$0->append($($nc(currCert)->getSubjectX500Principal()));
			ConstraintsChecker::debug->println($$str(var$0));
		}
		try {
			if (!this->prevNC->verify(currCert)) {
				$init($PKIXReason);
				$throwNew($CertPathValidatorException, $$str({msg, " check failed"_s}), nullptr, nullptr, -1, $PKIXReason::INVALID_NAME);
			}
		} catch ($IOException& ioe) {
			$throwNew($CertPathValidatorException, ioe);
		}
	}
	$set(this, prevNC, mergeNameConstraints(currCert, this->prevNC));
	if (ConstraintsChecker::debug != nullptr) {
		ConstraintsChecker::debug->println($$str({msg, " verified."_s}));
	}
}

$NameConstraintsExtension* ConstraintsChecker::mergeNameConstraints($X509Certificate* currCert, $NameConstraintsExtension* prevNC) {
	$init(ConstraintsChecker);
	$useLocalObjectStack();
	$var($X509CertImpl, currCertImpl, nullptr);
	try {
		$assign(currCertImpl, $X509CertImpl::toImpl(currCert));
	} catch ($CertificateException& ce) {
		$throwNew($CertPathValidatorException, ce);
	}
	$var($NameConstraintsExtension, newConstraints, $nc(currCertImpl)->getNameConstraintsExtension());
	if (ConstraintsChecker::debug != nullptr) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("prevNC = "_s);
		var$0->append(prevNC);
		var$0->append(", newNC = "_s);
		var$0->append($($String::valueOf(newConstraints)));
		ConstraintsChecker::debug->println($$str(var$0));
	}
	if (prevNC == nullptr) {
		if (ConstraintsChecker::debug != nullptr) {
			ConstraintsChecker::debug->println($$str({"mergedNC = "_s, $($String::valueOf(newConstraints))}));
		}
		if (newConstraints == nullptr) {
			return newConstraints;
		} else {
			return $cast($NameConstraintsExtension, newConstraints->clone());
		}
	} else {
		try {
			prevNC->merge(newConstraints);
		} catch ($IOException& ioe) {
			$throwNew($CertPathValidatorException, ioe);
		}
		if (ConstraintsChecker::debug != nullptr) {
			ConstraintsChecker::debug->println($$str({"mergedNC = "_s, prevNC}));
		}
		return prevNC;
	}
}

void ConstraintsChecker::checkBasicConstraints($X509Certificate* currCert) {
	$useLocalObjectStack();
	$var($String, msg, "basic constraints"_s);
	if (ConstraintsChecker::debug != nullptr) {
		ConstraintsChecker::debug->println($$str({"---checking "_s, msg, "..."_s}));
		ConstraintsChecker::debug->println($$str({"i = "_s, $$str(this->i), ", maxPathLength = "_s, $$str(this->maxPathLength)}));
	}
	if (this->i < this->certPathLength) {
		int32_t pathLenConstraint = -1;
		if ($nc(currCert)->getVersion() < 3) {
			if (this->i == 1) {
				if ($X509CertImpl::isSelfIssued(currCert)) {
					pathLenConstraint = $Integer::MAX_VALUE;
				}
			}
		} else {
			pathLenConstraint = currCert->getBasicConstraints();
		}
		if (pathLenConstraint == -1) {
			$init($PKIXReason);
			$throwNew($CertPathValidatorException, $$str({msg, " check failed: this is not a CA certificate"_s}), nullptr, nullptr, -1, $PKIXReason::NOT_CA_CERT);
		}
		if (!$X509CertImpl::isSelfIssued(currCert)) {
			if (this->maxPathLength <= 0) {
				$init($PKIXReason);
				$throwNew($CertPathValidatorException, $$str({msg, " check failed: pathLenConstraint violated - this cert must be the last cert in the certification path"_s}), nullptr, nullptr, -1, $PKIXReason::PATH_TOO_LONG);
			}
			--this->maxPathLength;
		}
		if (pathLenConstraint < this->maxPathLength) {
			this->maxPathLength = pathLenConstraint;
		}
	}
	if (ConstraintsChecker::debug != nullptr) {
		ConstraintsChecker::debug->println($$str({"after processing, maxPathLength = "_s, $$str(this->maxPathLength)}));
		ConstraintsChecker::debug->println($$str({msg, " verified."_s}));
	}
}

int32_t ConstraintsChecker::mergeBasicConstraints($X509Certificate* cert, int32_t maxPathLength) {
	$init(ConstraintsChecker);
	int32_t pathLenConstraint = $nc(cert)->getBasicConstraints();
	if (!$X509CertImpl::isSelfIssued(cert)) {
		--maxPathLength;
	}
	if (pathLenConstraint < maxPathLength) {
		maxPathLength = pathLenConstraint;
	}
	return maxPathLength;
}

void ConstraintsChecker::clinit$($Class* clazz) {
	$assignStatic(ConstraintsChecker::debug, $Debug::getInstance("certpath"_s));
}

ConstraintsChecker::ConstraintsChecker() {
}

$Class* ConstraintsChecker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConstraintsChecker, debug)},
		{"certPathLength", "I", nullptr, $PRIVATE | $FINAL, $field(ConstraintsChecker, certPathLength)},
		{"maxPathLength", "I", nullptr, $PRIVATE, $field(ConstraintsChecker, maxPathLength)},
		{"i", "I", nullptr, $PRIVATE, $field(ConstraintsChecker, i)},
		{"prevNC", "Lsun/security/x509/NameConstraintsExtension;", nullptr, $PRIVATE, $field(ConstraintsChecker, prevNC)},
		{"supportedExts", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(ConstraintsChecker, supportedExts)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(ConstraintsChecker, init$, void, int32_t)},
		{"check", "(Ljava/security/cert/Certificate;Ljava/util/Collection;)V", "(Ljava/security/cert/Certificate;Ljava/util/Collection<Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(ConstraintsChecker, check, void, $Certificate*, $Collection*), "java.security.cert.CertPathValidatorException"},
		{"checkBasicConstraints", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PRIVATE, $method(ConstraintsChecker, checkBasicConstraints, void, $X509Certificate*), "java.security.cert.CertPathValidatorException"},
		{"getSupportedExtensions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ConstraintsChecker, getSupportedExtensions, $Set*)},
		{"init", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ConstraintsChecker, init, void, bool), "java.security.cert.CertPathValidatorException"},
		{"isForwardCheckingSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(ConstraintsChecker, isForwardCheckingSupported, bool)},
		{"mergeBasicConstraints", "(Ljava/security/cert/X509Certificate;I)I", nullptr, $STATIC, $staticMethod(ConstraintsChecker, mergeBasicConstraints, int32_t, $X509Certificate*, int32_t)},
		{"mergeNameConstraints", "(Ljava/security/cert/X509Certificate;Lsun/security/x509/NameConstraintsExtension;)Lsun/security/x509/NameConstraintsExtension;", nullptr, $STATIC, $staticMethod(ConstraintsChecker, mergeNameConstraints, $NameConstraintsExtension*, $X509Certificate*, $NameConstraintsExtension*), "java.security.cert.CertPathValidatorException"},
		{"verifyNameConstraints", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PRIVATE, $method(ConstraintsChecker, verifyNameConstraints, void, $X509Certificate*), "java.security.cert.CertPathValidatorException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.ConstraintsChecker",
		"java.security.cert.PKIXCertPathChecker",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConstraintsChecker, name, initialize, &classInfo$$, ConstraintsChecker::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConstraintsChecker));
	});
	return class$;
}

$Class* ConstraintsChecker::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun