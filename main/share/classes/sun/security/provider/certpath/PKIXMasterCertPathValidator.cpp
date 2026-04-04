#include <sun/security/provider/certpath/PKIXMasterCertPathValidator.h>
#include <java/lang/CharSequence.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException$Reason.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <java/security/cert/PKIXCertPathChecker.h>
#include <java/security/cert/PKIXReason.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/StringJoiner.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef UNRECOGNIZED_CRIT_EXT

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $PKIXCertPathChecker = ::java::security::cert::PKIXCertPathChecker;
using $PKIXReason = ::java::security::cert::PKIXReason;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $StringJoiner = ::java::util::StringJoiner;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$Debug* PKIXMasterCertPathValidator::debug = nullptr;

void PKIXMasterCertPathValidator::init$() {
}

void PKIXMasterCertPathValidator::validate($CertPath* cpOriginal, $List* reversedCertList, $List* certPathCheckers) {
	$init(PKIXMasterCertPathValidator);
	$useLocalObjectStack();
	int32_t cpSize = $nc(reversedCertList)->size();
	if (PKIXMasterCertPathValidator::debug != nullptr) {
		PKIXMasterCertPathValidator::debug->println("--------------------------------------------------------------"_s);
		PKIXMasterCertPathValidator::debug->println("Executing PKIX certification path validation algorithm."_s);
	}
	for (int32_t i = 0; i < cpSize; ++i) {
		$var($X509Certificate, currCert, $cast($X509Certificate, reversedCertList->get(i)));
		if (PKIXMasterCertPathValidator::debug != nullptr) {
			PKIXMasterCertPathValidator::debug->println($$str({"Checking cert"_s, $$str((i + 1)), " - Subject: "_s, $($nc(currCert)->getSubjectX500Principal())}));
		}
		$var($Set, unresCritExts, $nc(currCert)->getCriticalExtensionOIDs());
		if (unresCritExts == nullptr) {
			$assign(unresCritExts, $Collections::emptySet());
		}
		if (PKIXMasterCertPathValidator::debug != nullptr && !$nc(unresCritExts)->isEmpty()) {
			$var($StringJoiner, joiner, $new($StringJoiner, ", "_s, "{"_s, "}"_s));
			{
				$var($Iterator, i$, unresCritExts->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, oid, $cast($String, i$->next()));
					{
						joiner->add(oid);
					}
				}
			}
			PKIXMasterCertPathValidator::debug->println($$str({"Set of critical extensions: "_s, $(joiner->toString())}));
		}
		for (int32_t j = 0; j < $nc(certPathCheckers)->size(); ++j) {
			$var($PKIXCertPathChecker, currChecker, $cast($PKIXCertPathChecker, certPathCheckers->get(j)));
			if (PKIXMasterCertPathValidator::debug != nullptr) {
				PKIXMasterCertPathValidator::debug->println($$str({"-Using checker"_s, $$str((j + 1)), " ... ["_s, $($nc($of(currChecker))->getClass()->getName()), "]"_s}));
			}
			if (i == 0) {
				$nc(currChecker)->init(false);
			}
			try {
				$nc(currChecker)->check(currCert, unresCritExts);
				if (PKIXMasterCertPathValidator::debug != nullptr) {
					PKIXMasterCertPathValidator::debug->println($$str({"-checker"_s, $$str((j + 1)), " validation succeeded"_s}));
				}
			} catch ($CertPathValidatorException& cpve) {
				$var($String, var$0, cpve->getMessage());
				$var($Throwable, var$1, (cpve->getCause() != nullptr) ? cpve->getCause() : $cast($Throwable, cpve));
				int32_t var$2 = cpSize - (i + 1);
				$throwNew($CertPathValidatorException, var$0, var$1, cpOriginal, var$2, $(cpve->getReason()));
			}
		}
		if (!$nc(unresCritExts)->isEmpty()) {
			$init($PKIXReason);
			$throwNew($CertPathValidatorException, "unrecognized critical extension(s)"_s, nullptr, cpOriginal, cpSize - (i + 1), $PKIXReason::UNRECOGNIZED_CRIT_EXT);
		}
		if (PKIXMasterCertPathValidator::debug != nullptr) {
			PKIXMasterCertPathValidator::debug->println($$str({"\ncert"_s, $$str((i + 1)), " validation succeeded.\n"_s}));
		}
	}
	if (PKIXMasterCertPathValidator::debug != nullptr) {
		PKIXMasterCertPathValidator::debug->println("Cert path validation succeeded. (PKIX validation algorithm)"_s);
		PKIXMasterCertPathValidator::debug->println("--------------------------------------------------------------"_s);
	}
}

void PKIXMasterCertPathValidator::clinit$($Class* clazz) {
	$assignStatic(PKIXMasterCertPathValidator::debug, $Debug::getInstance("certpath"_s));
}

PKIXMasterCertPathValidator::PKIXMasterCertPathValidator() {
}

$Class* PKIXMasterCertPathValidator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PKIXMasterCertPathValidator, debug)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PKIXMasterCertPathValidator, init$, void)},
		{"validate", "(Ljava/security/cert/CertPath;Ljava/util/List;Ljava/util/List;)V", "(Ljava/security/cert/CertPath;Ljava/util/List<Ljava/security/cert/X509Certificate;>;Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;)V", $STATIC, $staticMethod(PKIXMasterCertPathValidator, validate, void, $CertPath*, $List*, $List*), "java.security.cert.CertPathValidatorException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.PKIXMasterCertPathValidator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PKIXMasterCertPathValidator, name, initialize, &classInfo$$, PKIXMasterCertPathValidator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PKIXMasterCertPathValidator);
	});
	return class$;
}

$Class* PKIXMasterCertPathValidator::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun