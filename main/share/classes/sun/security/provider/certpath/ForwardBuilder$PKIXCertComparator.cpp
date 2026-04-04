#include <sun/security/provider/certpath/ForwardBuilder$PKIXCertComparator.h>
#include <java/security/cert/X509CertSelector.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/provider/certpath/Builder.h>
#include <sun/security/provider/certpath/ForwardBuilder.h>
#include <sun/security/util/Debug.h>
#include <sun/security/x509/AuthorityKeyIdentifierExtension.h>
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
using $X509CertSelector = ::java::security::cert::X509CertSelector;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $Builder = ::sun::security::provider::certpath::Builder;
using $ForwardBuilder = ::sun::security::provider::certpath::ForwardBuilder;
using $AuthorityKeyIdentifierExtension = ::sun::security::x509::AuthorityKeyIdentifierExtension;
using $X500Name = ::sun::security::x509::X500Name;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$String* ForwardBuilder$PKIXCertComparator::METHOD_NME = nullptr;

void ForwardBuilder$PKIXCertComparator::init$($Set* trustedSubjectDNs, $X509CertImpl* previousCert) {
	$set(this, trustedSubjectDNs, trustedSubjectDNs);
	$set(this, certSkidSelector, getSelector(previousCert));
}

$X509CertSelector* ForwardBuilder$PKIXCertComparator::getSelector($X509CertImpl* previousCert) {
	$useLocalObjectStack();
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
	$useLocalObjectStack();
	if ($nc(oCert1)->equals(oCert2)) {
		return 0;
	}
	if (this->certSkidSelector != nullptr) {
		if (this->certSkidSelector->match(oCert1)) {
			return -1;
		}
		if (this->certSkidSelector->match(oCert2)) {
			return 1;
		}
	}
	$var($X500Principal, cIssuer1, oCert1->getIssuerX500Principal());
	$var($X500Principal, cIssuer2, $nc(oCert2)->getIssuerX500Principal());
	$var($X500Name, cIssuer1Name, $X500Name::asX500Name(cIssuer1));
	$var($X500Name, cIssuer2Name, $X500Name::asX500Name(cIssuer2));
	$init($ForwardBuilder);
	if ($ForwardBuilder::debug != nullptr) {
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " o1 Issuer:  "_s, cIssuer1}));
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " o2 Issuer:  "_s, cIssuer2}));
	}
	if ($ForwardBuilder::debug != nullptr) {
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " MATCH TRUSTED SUBJECT TEST..."_s}));
	}
	bool m1 = $nc(this->trustedSubjectDNs)->contains(cIssuer1);
	bool m2 = this->trustedSubjectDNs->contains(cIssuer2);
	if ($ForwardBuilder::debug != nullptr) {
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " m1: "_s, $$str(m1)}));
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " m2: "_s, $$str(m2)}));
	}
	if (m1 && m2) {
		return -1;
	} else if (m1) {
		return -1;
	} else if (m2) {
		return 1;
	}
	if ($ForwardBuilder::debug != nullptr) {
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " NAMING DESCENDANT TEST..."_s}));
	}
	{
		$var($Iterator, i$, this->trustedSubjectDNs->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($X500Principal, tSubject, $cast($X500Principal, i$->next()));
			{
				$var($X500Name, tSubjectName, $X500Name::asX500Name(tSubject));
				int32_t distanceTto1 = $Builder::distance(tSubjectName, cIssuer1Name, -1);
				int32_t distanceTto2 = $Builder::distance(tSubjectName, cIssuer2Name, -1);
				if ($ForwardBuilder::debug != nullptr) {
					$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " distanceTto1: "_s, $$str(distanceTto1)}));
					$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " distanceTto2: "_s, $$str(distanceTto2)}));
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
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " NAMING ANCESTOR TEST..."_s}));
	}
	{
		$var($Iterator, i$, this->trustedSubjectDNs->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($X500Principal, tSubject, $cast($X500Principal, i$->next()));
			{
				$var($X500Name, tSubjectName, $X500Name::asX500Name(tSubject));
				int32_t distanceTto1 = $Builder::distance(tSubjectName, cIssuer1Name, $Integer::MAX_VALUE);
				int32_t distanceTto2 = $Builder::distance(tSubjectName, cIssuer2Name, $Integer::MAX_VALUE);
				if ($ForwardBuilder::debug != nullptr) {
					$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " distanceTto1: "_s, $$str(distanceTto1)}));
					$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " distanceTto2: "_s, $$str(distanceTto2)}));
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
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " SAME NAMESPACE AS TRUSTED TEST..."_s}));
	}
	{
		$var($Iterator, i$, this->trustedSubjectDNs->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($X500Principal, tSubject, $cast($X500Principal, i$->next()));
			{
				$var($X500Name, tSubjectName, $X500Name::asX500Name(tSubject));
				$var($X500Name, tAo1, $nc(tSubjectName)->commonAncestor(cIssuer1Name));
				$var($X500Name, tAo2, tSubjectName->commonAncestor(cIssuer2Name));
				if ($ForwardBuilder::debug != nullptr) {
					$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " tAo1: "_s, $($String::valueOf(tAo1))}));
					$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " tAo2: "_s, $($String::valueOf(tAo2))}));
				}
				if (tAo1 != nullptr || tAo2 != nullptr) {
					if (tAo1 != nullptr && tAo2 != nullptr) {
						int32_t hopsTto1 = $Builder::hops(tSubjectName, cIssuer1Name, $Integer::MAX_VALUE);
						int32_t hopsTto2 = $Builder::hops(tSubjectName, cIssuer2Name, $Integer::MAX_VALUE);
						if ($ForwardBuilder::debug != nullptr) {
							$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " hopsTto1: "_s, $$str(hopsTto1)}));
							$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " hopsTto2: "_s, $$str(hopsTto2)}));
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
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " CERT ISSUER/SUBJECT COMPARISON TEST..."_s}));
	}
	$var($X500Principal, cSubject1, oCert1->getSubjectX500Principal());
	$var($X500Principal, cSubject2, oCert2->getSubjectX500Principal());
	$var($X500Name, cSubject1Name, $X500Name::asX500Name(cSubject1));
	$var($X500Name, cSubject2Name, $X500Name::asX500Name(cSubject2));
	if ($ForwardBuilder::debug != nullptr) {
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " o1 Subject: "_s, cSubject1}));
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " o2 Subject: "_s, cSubject2}));
	}
	int32_t distanceStoI1 = $Builder::distance(cSubject1Name, cIssuer1Name, $Integer::MAX_VALUE);
	int32_t distanceStoI2 = $Builder::distance(cSubject2Name, cIssuer2Name, $Integer::MAX_VALUE);
	if ($ForwardBuilder::debug != nullptr) {
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " distanceStoI1: "_s, $$str(distanceStoI1)}));
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " distanceStoI2: "_s, $$str(distanceStoI2)}));
	}
	if (distanceStoI2 > distanceStoI1) {
		return -1;
	} else if (distanceStoI2 < distanceStoI1) {
		return 1;
	}
	if ($ForwardBuilder::debug != nullptr) {
		$ForwardBuilder::debug->println($$str({ForwardBuilder$PKIXCertComparator::METHOD_NME, " no tests matched; RETURN 0"_s}));
	}
	return -1;
}

int32_t ForwardBuilder$PKIXCertComparator::compare(Object$* oCert1, Object$* oCert2) {
	return this->compare($cast($X509Certificate, oCert1), $cast($X509Certificate, oCert2));
}

ForwardBuilder$PKIXCertComparator::ForwardBuilder$PKIXCertComparator() {
}

void ForwardBuilder$PKIXCertComparator::clinit$($Class* clazz) {
	$assignStatic(ForwardBuilder$PKIXCertComparator::METHOD_NME, "PKIXCertComparator.compare()"_s);
}

$Class* ForwardBuilder$PKIXCertComparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"METHOD_NME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ForwardBuilder$PKIXCertComparator, METHOD_NME)},
		{"trustedSubjectDNs", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/security/auth/x500/X500Principal;>;", $PRIVATE | $FINAL, $field(ForwardBuilder$PKIXCertComparator, trustedSubjectDNs)},
		{"certSkidSelector", "Ljava/security/cert/X509CertSelector;", nullptr, $PRIVATE | $FINAL, $field(ForwardBuilder$PKIXCertComparator, certSkidSelector)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;Lsun/security/x509/X509CertImpl;)V", "(Ljava/util/Set<Ljavax/security/auth/x500/X500Principal;>;Lsun/security/x509/X509CertImpl;)V", 0, $method(ForwardBuilder$PKIXCertComparator, init$, void, $Set*, $X509CertImpl*), "java.io.IOException"},
		{"compare", "(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;)I", nullptr, $PUBLIC, $virtualMethod(ForwardBuilder$PKIXCertComparator, compare, int32_t, $X509Certificate*, $X509Certificate*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ForwardBuilder$PKIXCertComparator, compare, int32_t, Object$*, Object$*)},
		{"getSelector", "(Lsun/security/x509/X509CertImpl;)Ljava/security/cert/X509CertSelector;", nullptr, $PRIVATE, $method(ForwardBuilder$PKIXCertComparator, getSelector, $X509CertSelector*, $X509CertImpl*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.ForwardBuilder$PKIXCertComparator", "sun.security.provider.certpath.ForwardBuilder", "PKIXCertComparator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.ForwardBuilder$PKIXCertComparator",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/security/cert/X509Certificate;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.ForwardBuilder"
	};
	$loadClass(ForwardBuilder$PKIXCertComparator, name, initialize, &classInfo$$, ForwardBuilder$PKIXCertComparator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ForwardBuilder$PKIXCertComparator);
	});
	return class$;
}

$Class* ForwardBuilder$PKIXCertComparator::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun