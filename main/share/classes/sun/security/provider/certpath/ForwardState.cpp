#include <sun/security/provider/certpath/ForwardState.h>
#include <java/io/IOException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <java/security/cert/PKIXCertPathChecker.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/provider/certpath/PKIX.h>
#include <sun/security/provider/certpath/State.h>
#include <sun/security/provider/certpath/UntrustedChecker.h>
#include <sun/security/util/Debug.h>
#include <sun/security/x509/GeneralName.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <sun/security/x509/GeneralNames.h>
#include <sun/security/x509/SubjectAlternativeNameExtension.h>
#include <sun/security/x509/X500Name.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

#undef SUBJECT_NAME

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $PKIXCertPathChecker = ::java::security::cert::PKIXCertPathChecker;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $PKIX = ::sun::security::provider::certpath::PKIX;
using $State = ::sun::security::provider::certpath::State;
using $Debug = ::sun::security::util::Debug;
using $GeneralName = ::sun::security::x509::GeneralName;
using $GeneralNames = ::sun::security::x509::GeneralNames;
using $SubjectAlternativeNameExtension = ::sun::security::x509::SubjectAlternativeNameExtension;
using $X500Name = ::sun::security::x509::X500Name;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$Debug* ForwardState::debug = nullptr;

void ForwardState::init$() {
	this->init = true;
	this->keyParamsNeededFlag = false;
}

bool ForwardState::isInitial() {
	return this->init;
}

bool ForwardState::keyParamsNeeded() {
	return this->keyParamsNeededFlag;
}

$String* ForwardState::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("State ["_s);
	sb->append("\n  issuerDN of last cert: "_s)->append(this->issuerDN);
	sb->append("\n  traversedCACerts: "_s)->append(this->traversedCACerts);
	sb->append("\n  init: "_s)->append($($String::valueOf(this->init)));
	sb->append("\n  keyParamsNeeded: "_s)->append($($String::valueOf(this->keyParamsNeededFlag)));
	sb->append("\n  subjectNamesTraversed: \n"_s)->append(this->subjectNamesTraversed);
	sb->append("]\n"_s);
	return sb->toString();
}

void ForwardState::initState($List* certPathCheckers) {
	$useLocalObjectStack();
	$set(this, subjectNamesTraversed, $new($HashSet));
	this->traversedCACerts = 0;
	$set(this, forwardCheckers, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(certPathCheckers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($PKIXCertPathChecker, checker, $cast($PKIXCertPathChecker, i$->next()));
			if ($nc(checker)->isForwardCheckingSupported()) {
				checker->init(true);
				this->forwardCheckers->add(checker);
			}
		}
	}
	this->init = true;
}

void ForwardState::updateState($X509Certificate* cert) {
	$useLocalObjectStack();
	if (cert == nullptr) {
		return;
	}
	$var($X509CertImpl, icert, $X509CertImpl::toImpl(cert));
	if ($PKIX::isDSAPublicKeyWithoutParams($($nc(icert)->getPublicKey()))) {
		this->keyParamsNeededFlag = true;
	}
	$set(this, cert, icert);
	$set(this, issuerDN, $nc(cert)->getIssuerX500Principal());
	if (!$X509CertImpl::isSelfIssued(cert)) {
		if (!this->init && cert->getBasicConstraints() != -1) {
			++this->traversedCACerts;
		}
	}
	if (this->init || !$X509CertImpl::isSelfIssued(cert)) {
		$var($X500Principal, subjName, cert->getSubjectX500Principal());
		$nc(this->subjectNamesTraversed)->add($($X500Name::asX500Name(subjName)));
		try {
			$var($SubjectAlternativeNameExtension, subjAltNameExt, icert->getSubjectAlternativeNameExtension());
			if (subjAltNameExt != nullptr) {
				$init($SubjectAlternativeNameExtension);
				$var($GeneralNames, gNames, $cast($GeneralNames, subjAltNameExt->get($SubjectAlternativeNameExtension::SUBJECT_NAME)));
				{
					$var($Iterator, i$, $$nc($nc(gNames)->names())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($GeneralName, gName, $cast($GeneralName, i$->next()));
						{
							this->subjectNamesTraversed->add($($nc(gName)->getName()));
						}
					}
				}
			}
		} catch ($IOException& e) {
			if (ForwardState::debug != nullptr) {
				ForwardState::debug->println("ForwardState.updateState() unexpected exception"_s);
				e->printStackTrace();
			}
			$throwNew($CertPathValidatorException, e);
		}
	}
	this->init = false;
}

$Object* ForwardState::clone() {
	$useLocalObjectStack();
	try {
		$var(ForwardState, clonedState, $cast(ForwardState, $State::clone()));
		$set($nc(clonedState), forwardCheckers, $cast($ArrayList, $nc(this->forwardCheckers)->clone()));
		$var($ListIterator, li, $nc(clonedState->forwardCheckers)->listIterator());
		while ($nc(li)->hasNext()) {
			$var($PKIXCertPathChecker, checker, $cast($PKIXCertPathChecker, li->next()));
			if ($instanceOf($Cloneable, checker)) {
				li->set($$cast($PKIXCertPathChecker, checker->clone()));
			}
		}
		$set(clonedState, subjectNamesTraversed, $cast($HashSet, $nc(this->subjectNamesTraversed)->clone()));
		return clonedState;
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, $(e->toString()), e);
	}
	$shouldNotReachHere();
}

void ForwardState::clinit$($Class* clazz) {
	$assignStatic(ForwardState::debug, $Debug::getInstance("certpath"_s));
}

ForwardState::ForwardState() {
}

$Class* ForwardState::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ForwardState, debug)},
		{"issuerDN", "Ljavax/security/auth/x500/X500Principal;", nullptr, 0, $field(ForwardState, issuerDN)},
		{"cert", "Lsun/security/x509/X509CertImpl;", nullptr, 0, $field(ForwardState, cert)},
		{"subjectNamesTraversed", "Ljava/util/HashSet;", "Ljava/util/HashSet<Lsun/security/x509/GeneralNameInterface;>;", 0, $field(ForwardState, subjectNamesTraversed)},
		{"traversedCACerts", "I", nullptr, 0, $field(ForwardState, traversedCACerts)},
		{"init", "Z", nullptr, $PRIVATE, $field(ForwardState, init)},
		{"untrustedChecker", "Lsun/security/provider/certpath/UntrustedChecker;", nullptr, 0, $field(ForwardState, untrustedChecker)},
		{"forwardCheckers", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/security/cert/PKIXCertPathChecker;>;", 0, $field(ForwardState, forwardCheckers)},
		{"keyParamsNeededFlag", "Z", nullptr, 0, $field(ForwardState, keyParamsNeededFlag)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ForwardState, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ForwardState, clone, $Object*)},
		{"initState", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;)V", $PUBLIC, $virtualMethod(ForwardState, initState, void, $List*), "java.security.cert.CertPathValidatorException"},
		{"isInitial", "()Z", nullptr, $PUBLIC, $virtualMethod(ForwardState, isInitial, bool)},
		{"keyParamsNeeded", "()Z", nullptr, $PUBLIC, $virtualMethod(ForwardState, keyParamsNeeded, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ForwardState, toString, $String*)},
		{"updateState", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $virtualMethod(ForwardState, updateState, void, $X509Certificate*), "java.security.cert.CertificateException,java.io.IOException,java.security.cert.CertPathValidatorException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.ForwardState",
		"java.lang.Object",
		"sun.security.provider.certpath.State",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ForwardState, name, initialize, &classInfo$$, ForwardState::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ForwardState);
	});
	return class$;
}

$Class* ForwardState::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun