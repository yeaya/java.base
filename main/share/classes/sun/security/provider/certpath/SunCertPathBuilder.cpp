#include <sun/security/provider/certpath/SunCertPathBuilder.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathBuilderException.h>
#include <java/security/cert/CertPathBuilderResult.h>
#include <java/security/cert/CertPathBuilderSpi.h>
#include <java/security/cert/CertPathChecker.h>
#include <java/security/cert/CertPathParameters.h>
#include <java/security/cert/CertPathValidatorException$BasicReason.h>
#include <java/security/cert/CertPathValidatorException$Reason.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <java/security/cert/CertSelector.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/CertificateFactory.h>
#include <java/security/cert/PKIXCertPathBuilderResult.h>
#include <java/security/cert/PKIXCertPathChecker.h>
#include <java/security/cert/PKIXReason.h>
#include <java/security/cert/PKIXRevocationChecker.h>
#include <java/security/cert/PolicyNode.h>
#include <java/security/cert/TrustAnchor.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Date.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/provider/certpath/AdjacencyList.h>
#include <sun/security/provider/certpath/AlgorithmChecker.h>
#include <sun/security/provider/certpath/BasicChecker.h>
#include <sun/security/provider/certpath/ForwardBuilder.h>
#include <sun/security/provider/certpath/ForwardState.h>
#include <sun/security/provider/certpath/PKIX$BuilderParams.h>
#include <sun/security/provider/certpath/PKIX$ValidatorParams.h>
#include <sun/security/provider/certpath/PKIX.h>
#include <sun/security/provider/certpath/PolicyChecker.h>
#include <sun/security/provider/certpath/PolicyNodeImpl.h>
#include <sun/security/provider/certpath/RevocationChecker.h>
#include <sun/security/provider/certpath/State.h>
#include <sun/security/provider/certpath/SunCertPathBuilderException.h>
#include <sun/security/provider/certpath/SunCertPathBuilderResult.h>
#include <sun/security/provider/certpath/UntrustedChecker.h>
#include <sun/security/provider/certpath/Vertex.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef ANY_POLICY
#undef REVOKED
#undef UNRECOGNIZED_CRIT_EXT

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $PublicKey = ::java::security::PublicKey;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathBuilderException = ::java::security::cert::CertPathBuilderException;
using $CertPathBuilderResult = ::java::security::cert::CertPathBuilderResult;
using $CertPathBuilderSpi = ::java::security::cert::CertPathBuilderSpi;
using $CertPathChecker = ::java::security::cert::CertPathChecker;
using $CertPathParameters = ::java::security::cert::CertPathParameters;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $CertPathValidatorException$BasicReason = ::java::security::cert::CertPathValidatorException$BasicReason;
using $CertPathValidatorException$Reason = ::java::security::cert::CertPathValidatorException$Reason;
using $CertSelector = ::java::security::cert::CertSelector;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateFactory = ::java::security::cert::CertificateFactory;
using $PKIXCertPathBuilderResult = ::java::security::cert::PKIXCertPathBuilderResult;
using $PKIXCertPathChecker = ::java::security::cert::PKIXCertPathChecker;
using $PKIXReason = ::java::security::cert::PKIXReason;
using $PKIXRevocationChecker = ::java::security::cert::PKIXRevocationChecker;
using $PolicyNode = ::java::security::cert::PolicyNode;
using $TrustAnchor = ::java::security::cert::TrustAnchor;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $X509Extension = ::java::security::cert::X509Extension;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Date = ::java::util::Date;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $AdjacencyList = ::sun::security::provider::certpath::AdjacencyList;
using $AlgorithmChecker = ::sun::security::provider::certpath::AlgorithmChecker;
using $BasicChecker = ::sun::security::provider::certpath::BasicChecker;
using $ForwardBuilder = ::sun::security::provider::certpath::ForwardBuilder;
using $ForwardState = ::sun::security::provider::certpath::ForwardState;
using $PKIX = ::sun::security::provider::certpath::PKIX;
using $PKIX$BuilderParams = ::sun::security::provider::certpath::PKIX$BuilderParams;
using $PKIX$ValidatorParams = ::sun::security::provider::certpath::PKIX$ValidatorParams;
using $PolicyChecker = ::sun::security::provider::certpath::PolicyChecker;
using $PolicyNodeImpl = ::sun::security::provider::certpath::PolicyNodeImpl;
using $RevocationChecker = ::sun::security::provider::certpath::RevocationChecker;
using $State = ::sun::security::provider::certpath::State;
using $SunCertPathBuilderException = ::sun::security::provider::certpath::SunCertPathBuilderException;
using $SunCertPathBuilderResult = ::sun::security::provider::certpath::SunCertPathBuilderResult;
using $UntrustedChecker = ::sun::security::provider::certpath::UntrustedChecker;
using $Vertex = ::sun::security::provider::certpath::Vertex;
using $Debug = ::sun::security::util::Debug;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _SunCertPathBuilder_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunCertPathBuilder, debug)},
	{"buildParams", "Lsun/security/provider/certpath/PKIX$BuilderParams;", nullptr, $PRIVATE, $field(SunCertPathBuilder, buildParams)},
	{"cf", "Ljava/security/cert/CertificateFactory;", nullptr, $PRIVATE, $field(SunCertPathBuilder, cf)},
	{"pathCompleted", "Z", nullptr, $PRIVATE, $field(SunCertPathBuilder, pathCompleted)},
	{"policyTreeResult", "Ljava/security/cert/PolicyNode;", nullptr, $PRIVATE, $field(SunCertPathBuilder, policyTreeResult)},
	{"trustAnchor", "Ljava/security/cert/TrustAnchor;", nullptr, $PRIVATE, $field(SunCertPathBuilder, trustAnchor)},
	{"finalPublicKey", "Ljava/security/PublicKey;", nullptr, $PRIVATE, $field(SunCertPathBuilder, finalPublicKey)},
	{}
};

$MethodInfo _SunCertPathBuilder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunCertPathBuilder::*)()>(&SunCertPathBuilder::init$)), "java.security.cert.CertPathBuilderException"},
	{"addVertices", "(Ljava/util/Collection;Ljava/util/List;)Ljava/util/List;", "(Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;Ljava/util/List<Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;>;)Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($Collection*,$List*)>(&SunCertPathBuilder::addVertices))},
	{"anchorIsTarget", "(Ljava/security/cert/TrustAnchor;Ljava/security/cert/CertSelector;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($TrustAnchor*,$CertSelector*)>(&SunCertPathBuilder::anchorIsTarget))},
	{"build", "()Ljava/security/cert/PKIXCertPathBuilderResult;", nullptr, $PRIVATE, $method(static_cast<$PKIXCertPathBuilderResult*(SunCertPathBuilder::*)()>(&SunCertPathBuilder::build)), "java.security.cert.CertPathBuilderException"},
	{"buildCertPath", "(ZLjava/util/List;)Ljava/security/cert/PKIXCertPathBuilderResult;", "(ZLjava/util/List<Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;>;)Ljava/security/cert/PKIXCertPathBuilderResult;", $PRIVATE, $method(static_cast<$PKIXCertPathBuilderResult*(SunCertPathBuilder::*)(bool,$List*)>(&SunCertPathBuilder::buildCertPath)), "java.security.cert.CertPathBuilderException"},
	{"buildForward", "(Ljava/util/List;Ljava/util/LinkedList;Z)V", "(Ljava/util/List<Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;>;Ljava/util/LinkedList<Ljava/security/cert/X509Certificate;>;Z)V", $PRIVATE, $method(static_cast<void(SunCertPathBuilder::*)($List*,$LinkedList*,bool)>(&SunCertPathBuilder::buildForward)), "java.security.GeneralSecurityException,java.io.IOException"},
	{"depthFirstSearchForward", "(Ljavax/security/auth/x500/X500Principal;Lsun/security/provider/certpath/ForwardState;Lsun/security/provider/certpath/ForwardBuilder;Ljava/util/List;Ljava/util/LinkedList;)V", "(Ljavax/security/auth/x500/X500Principal;Lsun/security/provider/certpath/ForwardState;Lsun/security/provider/certpath/ForwardBuilder;Ljava/util/List<Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;>;Ljava/util/LinkedList<Ljava/security/cert/X509Certificate;>;)V", $PRIVATE, $method(static_cast<void(SunCertPathBuilder::*)($X500Principal*,$ForwardState*,$ForwardBuilder*,$List*,$LinkedList*)>(&SunCertPathBuilder::depthFirstSearchForward)), "java.security.GeneralSecurityException,java.io.IOException"},
	{"engineBuild", "(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;", nullptr, $PUBLIC, nullptr, "java.security.cert.CertPathBuilderException,java.security.InvalidAlgorithmParameterException"},
	{"engineGetRevocationChecker", "()Ljava/security/cert/CertPathChecker;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SunCertPathBuilder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.certpath.SunCertPathBuilder",
	"java.security.cert.CertPathBuilderSpi",
	nullptr,
	_SunCertPathBuilder_FieldInfo_,
	_SunCertPathBuilder_MethodInfo_
};

$Object* allocate$SunCertPathBuilder($Class* clazz) {
	return $of($alloc(SunCertPathBuilder));
}

$Debug* SunCertPathBuilder::debug = nullptr;

void SunCertPathBuilder::init$() {
	$CertPathBuilderSpi::init$();
	this->pathCompleted = false;
	try {
		$set(this, cf, $CertificateFactory::getInstance("X.509"_s));
	} catch ($CertificateException&) {
		$var($CertificateException, e, $catch());
		$throwNew($CertPathBuilderException, static_cast<$Throwable*>(e));
	}
}

$CertPathChecker* SunCertPathBuilder::engineGetRevocationChecker() {
	return $new($RevocationChecker);
}

$CertPathBuilderResult* SunCertPathBuilder::engineBuild($CertPathParameters* params) {
	if (SunCertPathBuilder::debug != nullptr) {
		$nc(SunCertPathBuilder::debug)->println($$str({"SunCertPathBuilder.engineBuild("_s, params, ")"_s}));
	}
	$set(this, buildParams, $PKIX::checkBuilderParams(params));
	return build();
}

$PKIXCertPathBuilderResult* SunCertPathBuilder::build() {
	$var($List, adjList, $new($ArrayList));
	$var($PKIXCertPathBuilderResult, result, buildCertPath(false, adjList));
	if (result == nullptr) {
		if (SunCertPathBuilder::debug != nullptr) {
			$nc(SunCertPathBuilder::debug)->println("SunCertPathBuilder.engineBuild: 2nd pass; try building again searching all certstores"_s);
		}
		adjList->clear();
		$assign(result, buildCertPath(true, adjList));
		if (result == nullptr) {
			$throwNew($SunCertPathBuilderException, "unable to find valid certification path to requested target"_s, $$new($AdjacencyList, adjList));
		}
	}
	return result;
}

$PKIXCertPathBuilderResult* SunCertPathBuilder::buildCertPath(bool searchAllCertStores, $List* adjList) {
	this->pathCompleted = false;
	$set(this, trustAnchor, nullptr);
	$set(this, finalPublicKey, nullptr);
	$set(this, policyTreeResult, nullptr);
	$var($LinkedList, certPathList, $new($LinkedList));
	try {
		buildForward(adjList, certPathList, searchAllCertStores);
	} catch ($GeneralSecurityException&) {
		$var($Exception, e, $catch());
		if (SunCertPathBuilder::debug != nullptr) {
			$nc(SunCertPathBuilder::debug)->println("SunCertPathBuilder.engineBuild() exception in build"_s);
			e->printStackTrace();
		}
		$throwNew($SunCertPathBuilderException, "unable to find valid certification path to requested target"_s, e, $$new($AdjacencyList, adjList));
	} catch ($IOException&) {
		$var($Exception, e, $catch());
		if (SunCertPathBuilder::debug != nullptr) {
			$nc(SunCertPathBuilder::debug)->println("SunCertPathBuilder.engineBuild() exception in build"_s);
			e->printStackTrace();
		}
		$throwNew($SunCertPathBuilderException, "unable to find valid certification path to requested target"_s, e, $$new($AdjacencyList, adjList));
	}
	try {
		if (this->pathCompleted) {
			if (SunCertPathBuilder::debug != nullptr) {
				$nc(SunCertPathBuilder::debug)->println("SunCertPathBuilder.engineBuild() pathCompleted"_s);
			}
			$Collections::reverse(certPathList);
			$var($CertPath, var$0, $nc(this->cf)->generateCertPath(static_cast<$List*>(certPathList)));
			$var($TrustAnchor, var$1, this->trustAnchor);
			$var($PolicyNode, var$2, this->policyTreeResult);
			$var($PublicKey, var$3, this->finalPublicKey);
			return $new($SunCertPathBuilderResult, var$0, var$1, var$2, var$3, $$new($AdjacencyList, adjList));
		}
	} catch ($CertificateException&) {
		$var($CertificateException, e, $catch());
		if (SunCertPathBuilder::debug != nullptr) {
			$nc(SunCertPathBuilder::debug)->println("SunCertPathBuilder.engineBuild() exception in wrap-up"_s);
			e->printStackTrace();
		}
		$throwNew($SunCertPathBuilderException, "unable to find valid certification path to requested target"_s, e, $$new($AdjacencyList, adjList));
	}
	return nullptr;
}

void SunCertPathBuilder::buildForward($List* adjacencyList, $LinkedList* certPathList, bool searchAllCertStores) {
	if (SunCertPathBuilder::debug != nullptr) {
		$nc(SunCertPathBuilder::debug)->println("SunCertPathBuilder.buildForward()..."_s);
	}
	$var($ForwardState, currentState, $new($ForwardState));
	currentState->initState($($nc(this->buildParams)->certPathCheckers()));
	$nc(adjacencyList)->clear();
	adjacencyList->add($$new($LinkedList));
	$set(currentState, untrustedChecker, $new($UntrustedChecker));
	$var($X500Principal, var$0, $nc(this->buildParams)->targetSubject());
	$var($ForwardState, var$1, currentState);
	depthFirstSearchForward(var$0, var$1, $$new($ForwardBuilder, this->buildParams, searchAllCertStores), adjacencyList, certPathList);
}

void SunCertPathBuilder::depthFirstSearchForward($X500Principal* dN, $ForwardState* currentState, $ForwardBuilder* builder, $List* adjList, $LinkedList* cpList) {
	if (SunCertPathBuilder::debug != nullptr) {
		$var($String, var$1, $$str({"SunCertPathBuilder.depthFirstSearchForward("_s, dN, ", "_s}));
		$var($String, var$0, $$concat(var$1, $($nc(currentState)->toString())));
		$nc(SunCertPathBuilder::debug)->println($$concat(var$0, ")"));
	}
	$var($Collection, certs, $nc(builder)->getMatchingCerts(currentState, $($nc(this->buildParams)->certStores())));
	$var($List, vertices, addVertices(certs, adjList));
	if (SunCertPathBuilder::debug != nullptr) {
		$nc(SunCertPathBuilder::debug)->println($$str({"SunCertPathBuilder.depthFirstSearchForward(): certs.size="_s, $$str($nc(vertices)->size())}));
	}
	bool vertices$continue = false;
	{
		$var($Iterator, i$, $nc(vertices)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Vertex, vertex, $cast($Vertex, i$->next()));
			{
				$var($ForwardState, nextState, $cast($ForwardState, $nc(currentState)->clone()));
				$var($X509Certificate, cert, $nc(vertex)->getCertificate());
				try {
					builder->verifyCert(cert, nextState, cpList);
				} catch ($GeneralSecurityException&) {
					$var($GeneralSecurityException, gse, $catch());
					if (SunCertPathBuilder::debug != nullptr) {
						$nc(SunCertPathBuilder::debug)->println($$str({"SunCertPathBuilder.depthFirstSearchForward(): validation failed: "_s, gse}));
						gse->printStackTrace();
					}
					vertex->setThrowable(gse);
					continue;
				}
				if (builder->isPathCompleted(cert)) {
					if (SunCertPathBuilder::debug != nullptr) {
						$nc(SunCertPathBuilder::debug)->println("SunCertPathBuilder.depthFirstSearchForward(): commencing final verification"_s);
					}
					$var($List, appendedCerts, $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$AbstractSequentialList*>(cpList))))));
					if ($nc(builder->trustAnchor)->getTrustedCert() == nullptr) {
						appendedCerts->add(0, cert);
					}
					$init($PolicyChecker);
					$var($Set, initExpPolSet, $Collections::singleton($PolicyChecker::ANY_POLICY));
					$var($PolicyNodeImpl, rootNode, $new($PolicyNodeImpl, nullptr, $PolicyChecker::ANY_POLICY, nullptr, false, initExpPolSet, false));
					$var($List, checkers, $new($ArrayList));
					$var($Set, var$2, $nc(this->buildParams)->initialPolicies());
					int32_t var$3 = appendedCerts->size();
					bool var$4 = $nc(this->buildParams)->explicitPolicyRequired();
					bool var$5 = $nc(this->buildParams)->policyMappingInhibited();
					bool var$6 = $nc(this->buildParams)->anyPolicyInhibited();
					$var($PolicyChecker, policyChecker, $new($PolicyChecker, var$2, var$3, var$4, var$5, var$6, $nc(this->buildParams)->policyQualifiersRejected(), rootNode));
					checkers->add(policyChecker);
					$var($TrustAnchor, var$7, builder->trustAnchor);
					$var($Date, var$8, $nc(this->buildParams)->date());
					checkers->add($$new($AlgorithmChecker, var$7, var$8, $($nc(this->buildParams)->variant())));
					$var($BasicChecker, basicChecker, nullptr);
					if ($nc(nextState)->keyParamsNeeded()) {
						$var($PublicKey, rootKey, $nc(cert)->getPublicKey());
						if ($nc(builder->trustAnchor)->getTrustedCert() == nullptr) {
							$assign(rootKey, $nc(builder->trustAnchor)->getCAPublicKey());
							if (SunCertPathBuilder::debug != nullptr) {
								$nc(SunCertPathBuilder::debug)->println($$str({"SunCertPathBuilder.depthFirstSearchForward using buildParams public key: "_s, $($nc($of(rootKey))->toString())}));
							}
						}
						$var($TrustAnchor, anchor, $new($TrustAnchor, $(cert->getSubjectX500Principal()), rootKey, ($bytes*)nullptr));
						$var($TrustAnchor, var$9, anchor);
						$var($Date, var$10, $nc(this->buildParams)->date());
						$assign(basicChecker, $new($BasicChecker, var$9, var$10, $($nc(this->buildParams)->sigProvider()), true));
						checkers->add(basicChecker);
					}
					$nc(this->buildParams)->setCertPath($($nc(this->cf)->generateCertPath(appendedCerts)));
					bool revCheckerAdded = false;
					$var($List, ckrs, $nc(this->buildParams)->certPathCheckers());
					{
						$var($Iterator, i$, $nc(ckrs)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($PKIXCertPathChecker, ckr, $cast($PKIXCertPathChecker, i$->next()));
							{
								if ($instanceOf($PKIXRevocationChecker, ckr)) {
									if (revCheckerAdded) {
										$throwNew($CertPathValidatorException, "Only one PKIXRevocationChecker can be specified"_s);
									}
									revCheckerAdded = true;
									if ($instanceOf($RevocationChecker, ckr)) {
										$nc(($cast($RevocationChecker, ckr)))->init(builder->trustAnchor, this->buildParams);
									}
								}
							}
						}
					}
					if ($nc(this->buildParams)->revocationEnabled() && !revCheckerAdded) {
						checkers->add($$new($RevocationChecker, builder->trustAnchor, this->buildParams));
					}
					checkers->addAll(ckrs);
					for (int32_t i = 0; i < appendedCerts->size(); ++i) {
						$var($X509Certificate, currCert, $cast($X509Certificate, appendedCerts->get(i)));
						if (SunCertPathBuilder::debug != nullptr) {
							$nc(SunCertPathBuilder::debug)->println($$str({"current subject = "_s, $($nc(currCert)->getSubjectX500Principal())}));
						}
						$var($Set, unresCritExts, $nc(currCert)->getCriticalExtensionOIDs());
						if (unresCritExts == nullptr) {
							$assign(unresCritExts, $Collections::emptySet());
						}
						{
							$var($Iterator, i$, checkers->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($PKIXCertPathChecker, currChecker, $cast($PKIXCertPathChecker, i$->next()));
								{
									if (!$nc(currChecker)->isForwardCheckingSupported()) {
										if (i == 0) {
											currChecker->init(false);
											if ($instanceOf($AlgorithmChecker, currChecker)) {
												$nc(($cast($AlgorithmChecker, currChecker)))->trySetTrustAnchor(builder->trustAnchor);
											}
										}
										try {
											currChecker->check(currCert, unresCritExts);
										} catch ($CertPathValidatorException&) {
											$var($CertPathValidatorException, cpve, $catch());
											if (SunCertPathBuilder::debug != nullptr) {
												$nc(SunCertPathBuilder::debug)->println($$str({"SunCertPathBuilder.depthFirstSearchForward(): final verification failed: "_s, cpve}));
											}
											bool var$11 = $nc($($nc(this->buildParams)->targetCertConstraints()))->match(currCert);
											$init($CertPathValidatorException$BasicReason);
											if (var$11 && $equals(cpve->getReason(), $CertPathValidatorException$BasicReason::REVOKED)) {
												$throw(cpve);
											}
											vertex->setThrowable(cpve);
											vertices$continue = true;
											break;
										}
									}
								}
							}
							if (vertices$continue) {
								break;
							}
						}
						{
							$var($Iterator, i$, $nc($($nc(this->buildParams)->certPathCheckers()))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($PKIXCertPathChecker, checker, $cast($PKIXCertPathChecker, i$->next()));
								{
									if ($nc(checker)->isForwardCheckingSupported()) {
										$var($Set, suppExts, checker->getSupportedExtensions());
										if (suppExts != nullptr) {
											$nc(unresCritExts)->removeAll(suppExts);
										}
									}
								}
							}
						}
						if (!$nc(unresCritExts)->isEmpty()) {
							$init($PKIXExtensions);
							unresCritExts->remove($($nc($PKIXExtensions::BasicConstraints_Id)->toString()));
							unresCritExts->remove($($nc($PKIXExtensions::NameConstraints_Id)->toString()));
							unresCritExts->remove($($nc($PKIXExtensions::CertificatePolicies_Id)->toString()));
							unresCritExts->remove($($nc($PKIXExtensions::PolicyMappings_Id)->toString()));
							unresCritExts->remove($($nc($PKIXExtensions::PolicyConstraints_Id)->toString()));
							unresCritExts->remove($($nc($PKIXExtensions::InhibitAnyPolicy_Id)->toString()));
							unresCritExts->remove($($nc($PKIXExtensions::SubjectAlternativeName_Id)->toString()));
							unresCritExts->remove($($nc($PKIXExtensions::KeyUsage_Id)->toString()));
							unresCritExts->remove($($nc($PKIXExtensions::ExtendedKeyUsage_Id)->toString()));
							if (!unresCritExts->isEmpty()) {
								$init($PKIXReason);
								$throwNew($CertPathValidatorException, "unrecognized critical extension(s)"_s, nullptr, nullptr, -1, $PKIXReason::UNRECOGNIZED_CRIT_EXT);
							}
						}
					}
					if (vertices$continue) {
						vertices$continue = false;
						continue;
					}
					if (SunCertPathBuilder::debug != nullptr) {
						$nc(SunCertPathBuilder::debug)->println("SunCertPathBuilder.depthFirstSearchForward(): final verification succeeded - path completed!"_s);
					}
					this->pathCompleted = true;
					if ($nc(builder->trustAnchor)->getTrustedCert() == nullptr) {
						builder->addCertToPath(cert, cpList);
					}
					$set(this, trustAnchor, builder->trustAnchor);
					if (basicChecker != nullptr) {
						$set(this, finalPublicKey, basicChecker->getPublicKey());
					} else {
						$var($Certificate, finalCert, nullptr);
						if ($nc(cpList)->isEmpty()) {
							$assign(finalCert, $nc(builder->trustAnchor)->getTrustedCert());
						} else {
							$assign(finalCert, $cast($Certificate, cpList->getLast()));
						}
						$set(this, finalPublicKey, $nc(finalCert)->getPublicKey());
					}
					$set(this, policyTreeResult, policyChecker->getPolicyTree());
					return;
				} else {
					builder->addCertToPath(cert, cpList);
				}
				$nc(nextState)->updateState(cert);
				$nc(adjList)->add($$new($LinkedList));
				vertex->setIndex(adjList->size() - 1);
				depthFirstSearchForward($($nc(cert)->getIssuerX500Principal()), nextState, builder, adjList, cpList);
				if (this->pathCompleted) {
					return;
				} else {
					if (SunCertPathBuilder::debug != nullptr) {
						$nc(SunCertPathBuilder::debug)->println("SunCertPathBuilder.depthFirstSearchForward(): backtracking"_s);
					}
					builder->removeFinalCertFromPath(cpList);
				}
			}
		}
	}
}

$List* SunCertPathBuilder::addVertices($Collection* certs, $List* adjList) {
	$init(SunCertPathBuilder);
	$var($List, l, $cast($List, $nc(adjList)->get(adjList->size() - 1)));
	{
		$var($Iterator, i$, $nc(certs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($X509Certificate, cert, $cast($X509Certificate, i$->next()));
			{
				$var($Vertex, v, $new($Vertex, cert));
				$nc(l)->add(v);
			}
		}
	}
	return l;
}

bool SunCertPathBuilder::anchorIsTarget($TrustAnchor* anchor, $CertSelector* sel) {
	$init(SunCertPathBuilder);
	$var($X509Certificate, anchorCert, $nc(anchor)->getTrustedCert());
	if (anchorCert != nullptr) {
		return $nc(sel)->match(anchorCert);
	}
	return false;
}

void clinit$SunCertPathBuilder($Class* class$) {
	$assignStatic(SunCertPathBuilder::debug, $Debug::getInstance("certpath"_s));
}

SunCertPathBuilder::SunCertPathBuilder() {
}

$Class* SunCertPathBuilder::load$($String* name, bool initialize) {
	$loadClass(SunCertPathBuilder, name, initialize, &_SunCertPathBuilder_ClassInfo_, clinit$SunCertPathBuilder, allocate$SunCertPathBuilder);
	return class$;
}

$Class* SunCertPathBuilder::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun