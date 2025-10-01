#include <sun/security/provider/certpath/ForwardBuilder$PKIXCertComparator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/X509CertSelector.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/provider/certpath/Builder.h>
#include <sun/security/provider/certpath/ForwardBuilder.h>
#include <sun/security/util/Debug.h>
#include <sun/security/x509/AuthorityKeyIdentifierExtension.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <sun/security/x509/X500Name.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef METHOD_NME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;
using $X509CertSelector = ::java::security::cert::X509CertSelector;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $Builder = ::sun::security::provider::certpath::Builder;
using $ForwardBuilder = ::sun::security::provider::certpath::ForwardBuilder;
using $Debug = ::sun::security::util::Debug;
using $AuthorityKeyIdentifierExtension = ::sun::security::x509::AuthorityKeyIdentifierExtension;
using $GeneralNameInterface = ::sun::security::x509::GeneralNameInterface;
using $X500Name = ::sun::security::x509::X500Name;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _ForwardBuilder$PKIXCertComparator_FieldInfo_[] = {
	{"METHOD_NME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ForwardBuilder$PKIXCertComparator, METHOD_NME)},
	{"trustedSubjectDNs", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/security/auth/x500/X500Principal;>;", $PRIVATE | $FINAL, $field(ForwardBuilder$PKIXCertComparator, trustedSubjectDNs)},
	{"certSkidSelector", "Ljava/security/cert/X509CertSelector;", nullptr, $PRIVATE | $FINAL, $field(ForwardBuilder$PKIXCertComparator, certSkidSelector)},
	{}
};

$MethodInfo _ForwardBuilder$PKIXCertComparator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;Lsun/security/x509/X509CertImpl;)V", "(Ljava/util/Set<Ljavax/security/auth/x500/X500Principal;>;Lsun/security/x509/X509CertImpl;)V", 0, $method(static_cast<void(ForwardBuilder$PKIXCertComparator::*)($Set*,$X509CertImpl*)>(&ForwardBuilder$PKIXCertComparator::init$)), "java.io.IOException"},
	{"compare", "(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSelector", "(Lsun/security/x509/X509CertImpl;)Ljava/security/cert/X509CertSelector;", nullptr, $PRIVATE, $method(static_cast<$X509CertSelector*(ForwardBuilder$PKIXCertComparator::*)($X509CertImpl*)>(&ForwardBuilder$PKIXCertComparator::getSelector)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ForwardBuilder$PKIXCertComparator_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.ForwardBuilder$PKIXCertComparator", "sun.security.provider.certpath.ForwardBuilder", "PKIXCertComparator", $STATIC},
	{}
};

$ClassInfo _ForwardBuilder$PKIXCertComparator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.ForwardBuilder$PKIXCertComparator",
	"java.lang.Object",
	"java.util.Comparator",
	_ForwardBuilder$PKIXCertComparator_FieldInfo_,
	_ForwardBuilder$PKIXCertComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/security/cert/X509Certificate;>;",
	nullptr,
	_ForwardBuilder$PKIXCertComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.ForwardBuilder"
};

$Object* allocate$ForwardBuilder$PKIXCertComparator($Class* clazz) {
	return $of($alloc(ForwardBuilder$PKIXCertComparator));
}

$String* ForwardBuilder$PKIXCertComparator::METHOD_NME = nullptr;

void ForwardBuilder$PKIXCertComparator::init$($Set* trustedSubjectDNs, $X509CertImpl* previousCert) {
	$set(this, trustedSubjectDNs, trustedSubjectDNs);
	$set(this, certSkidSelector, getSelector(previousCert));
}

$X509CertSelector* ForwardBuilder$PKIXCertComparator::getSelector($X509CertImpl* previousCert) {
	if (previousCert != nullptr) {
		$var($AuthorityKeyIdentifierExtension, akidExt, previousCert->getAuthorityKeyIdentifierExtension());
		if (akidExt != nullptr) {
			$var($bytes, skid, akidExt->getEncodedKeyIdentifier());
			if (skid != nullptr) {
				$var($X509CertSelector, selector, $new($X509CertSelector));
				selector->setSubjectKeyIdentifier(skid);
				return selector;
			}
		}
	}
	return nullptr;
}

int32_t ForwardBuilder$PKIXCertComparator::compare($X509Certificate* oCert1, $X509Certificate* oCert2) {
	if ($nc(oCert1)->equals(oCert2)) {
		return 0;
	}
	if (this->certSkidSelector != nullptr) {
		if ($nc(this->certSkidSelector)->match(oCert1)) {
			return -1;
		}
		if ($nc(this->certSkidSelector)->match(oCert2)) {
			return 1;
		}
	}
	$var($X500Principal, cIssuer1, $nc(oCert1)->getIssuerX500Principal());
	$var($X500Principal, cIssuer2, $nc(oCert2)->getIssuerX500Principal());
	$var($X500Name, cIssuer1Name, $X500Name::asX500Name(cIssuer1));
	$var($X500Name, cIssuer2Name, $X500Name::asX500Name(cIssuer2));
	$init($ForwardBuilder);
	if ($ForwardBuilder::debug != nullptr) {
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " o1 Issuer:  "_s, cIssuer1}));
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " o2 Issuer:  "_s, cIssuer2}));
	}
	if ($ForwardBuilder::debug != nullptr) {
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " MATCH TRUSTED SUBJECT TEST..."_s}));
	}
	bool m1 = $nc(this->trustedSubjectDNs)->contains(cIssuer1);
	bool m2 = $nc(this->trustedSubjectDNs)->contains(cIssuer2);
	if ($ForwardBuilder::debug != nullptr) {
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " m1: "_s, $$str(m1)}));
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " m2: "_s, $$str(m2)}));
	}
	if (m1 && m2) {
		return -1;
	} else if (m1) {
		return -1;
	} else if (m2) {
		return 1;
	}
	if ($ForwardBuilder::debug != nullptr) {
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " NAMING DESCENDANT TEST..."_s}));
	}
	{
		$var($Iterator, i$, $nc(this->trustedSubjectDNs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($X500Principal, tSubject, $cast($X500Principal, i$->next()));
			{
				$var($X500Name, tSubjectName, $X500Name::asX500Name(tSubject));
				int32_t distanceTto1 = $Builder::distance(tSubjectName, cIssuer1Name, -1);
				int32_t distanceTto2 = $Builder::distance(tSubjectName, cIssuer2Name, -1);
				if ($ForwardBuilder::debug != nullptr) {
					$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " distanceTto1: "_s, $$str(distanceTto1)}));
					$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " distanceTto2: "_s, $$str(distanceTto2)}));
				}
				if (distanceTto1 > 0 || distanceTto2 > 0) {
					if (distanceTto1 == distanceTto2) {
						return -1;
					} else if (distanceTto1 > 0 && distanceTto2 <= 0) {
						return -1;
					} else if (distanceTto1 <= 0 && distanceTto2 > 0) {
						return 1;
					} else if (distanceTto1 < distanceTto2) {
						return -1;
					} else {
						return 1;
					}
				}
			}
		}
	}
	if ($ForwardBuilder::debug != nullptr) {
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " NAMING ANCESTOR TEST..."_s}));
	}
	{
		$var($Iterator, i$, $nc(this->trustedSubjectDNs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($X500Principal, tSubject, $cast($X500Principal, i$->next()));
			{
				$var($X500Name, tSubjectName, $X500Name::asX500Name(tSubject));
				int32_t distanceTto1 = $Builder::distance(tSubjectName, cIssuer1Name, $Integer::MAX_VALUE);
				int32_t distanceTto2 = $Builder::distance(tSubjectName, cIssuer2Name, $Integer::MAX_VALUE);
				if ($ForwardBuilder::debug != nullptr) {
					$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " distanceTto1: "_s, $$str(distanceTto1)}));
					$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " distanceTto2: "_s, $$str(distanceTto2)}));
				}
				if (distanceTto1 < 0 || distanceTto2 < 0) {
					if (distanceTto1 == distanceTto2) {
						return -1;
					} else if (distanceTto1 < 0 && distanceTto2 >= 0) {
						return -1;
					} else if (distanceTto1 >= 0 && distanceTto2 < 0) {
						return 1;
					} else if (distanceTto1 > distanceTto2) {
						return -1;
					} else {
						return 1;
					}
				}
			}
		}
	}
	if ($ForwardBuilder::debug != nullptr) {
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " SAME NAMESPACE AS TRUSTED TEST..."_s}));
	}
	{
		$var($Iterator, i$, $nc(this->trustedSubjectDNs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($X500Principal, tSubject, $cast($X500Principal, i$->next()));
			{
				$var($X500Name, tSubjectName, $X500Name::asX500Name(tSubject));
				$var($X500Name, tAo1, $nc(tSubjectName)->commonAncestor(cIssuer1Name));
				$var($X500Name, tAo2, tSubjectName->commonAncestor(cIssuer2Name));
				if ($ForwardBuilder::debug != nullptr) {
					$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " tAo1: "_s, $($String::valueOf($of(tAo1)))}));
					$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " tAo2: "_s, $($String::valueOf($of(tAo2)))}));
				}
				if (tAo1 != nullptr || tAo2 != nullptr) {
					if (tAo1 != nullptr && tAo2 != nullptr) {
						int32_t hopsTto1 = $Builder::hops(tSubjectName, cIssuer1Name, $Integer::MAX_VALUE);
						int32_t hopsTto2 = $Builder::hops(tSubjectName, cIssuer2Name, $Integer::MAX_VALUE);
						if ($ForwardBuilder::debug != nullptr) {
							$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " hopsTto1: "_s, $$str(hopsTto1)}));
							$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " hopsTto2: "_s, $$str(hopsTto2)}));
						}
						if (hopsTto1 == hopsTto2) {
						} else if (hopsTto1 > hopsTto2) {
							return 1;
						} else {
							return -1;
						}
					} else if (tAo1 == nullptr) {
						return 1;
					} else {
						return -1;
					}
				}
			}
		}
	}
	if ($ForwardBuilder::debug != nullptr) {
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " CERT ISSUER/SUBJECT COMPARISON TEST..."_s}));
	}
	$var($X500Principal, cSubject1, oCert1->getSubjectX500Principal());
	$var($X500Principal, cSubject2, oCert2->getSubjectX500Principal());
	$var($X500Name, cSubject1Name, $X500Name::asX500Name(cSubject1));
	$var($X500Name, cSubject2Name, $X500Name::asX500Name(cSubject2));
	if ($ForwardBuilder::debug != nullptr) {
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " o1 Subject: "_s, cSubject1}));
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " o2 Subject: "_s, cSubject2}));
	}
	int32_t distanceStoI1 = $Builder::distance(cSubject1Name, cIssuer1Name, $Integer::MAX_VALUE);
	int32_t distanceStoI2 = $Builder::distance(cSubject2Name, cIssuer2Name, $Integer::MAX_VALUE);
	if ($ForwardBuilder::debug != nullptr) {
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " distanceStoI1: "_s, $$str(distanceStoI1)}));
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " distanceStoI2: "_s, $$str(distanceStoI2)}));
	}
	if (distanceStoI2 > distanceStoI1) {
		return -1;
	} else if (distanceStoI2 < distanceStoI1) {
		return 1;
	}
	if ($ForwardBuilder::debug != nullptr) {
		$nc($ForwardBuilder::debug)->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " no tests matched; RETURN 0"_s}));
	}
	return -1;
}

int32_t ForwardBuilder$PKIXCertComparator::compare(Object$* oCert1, Object$* oCert2) {
	return this->compare($cast($X509Certificate, oCert1), $cast($X509Certificate, oCert2));
}

ForwardBuilder$PKIXCertComparator::ForwardBuilder$PKIXCertComparator() {
}

void clinit$ForwardBuilder$PKIXCertComparator($Class* class$) {
	$assignStatic(ForwardBuilder$PKIXCertComparator::METHOD_NME, "PKIXCertComparator.compare()"_s);
}

$Class* ForwardBuilder$PKIXCertComparator::load$($String* name, bool initialize) {
	$loadClass(ForwardBuilder$PKIXCertComparator, name, initialize, &_ForwardBuilder$PKIXCertComparator_ClassInfo_, clinit$ForwardBuilder$PKIXCertComparator, allocate$ForwardBuilder$PKIXCertComparator);
	return class$;
}

$Class* ForwardBuilder$PKIXCertComparator::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun