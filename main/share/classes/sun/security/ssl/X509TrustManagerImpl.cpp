#include <sun/security/ssl/X509TrustManagerImpl.h>

#include <java/net/Socket.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/PKIXBuilderParameters.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <javax/net/ssl/ExtendedSSLSession.h>
#include <javax/net/ssl/SNIHostName.h>
#include <javax/net/ssl/SNIServerName.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLParameters.h>
#include <javax/net/ssl/SSLSession.h>
#include <javax/net/ssl/SSLSocket.h>
#include <javax/net/ssl/StandardConstants.h>
#include <javax/net/ssl/X509ExtendedTrustManager.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLAlgorithmConstraints.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/util/AnchorCertificates.h>
#include <sun/security/util/HostnameChecker.h>
#include <sun/security/validator/Validator.h>
#include <jcpp.h>

#undef SNI_HOST_NAME
#undef TYPE_LDAP
#undef TYPE_TLS
#undef VAR_TLS_CLIENT
#undef VAR_TLS_SERVER

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $CertificateException = ::java::security::cert::CertificateException;
using $PKIXBuilderParameters = ::java::security::cert::PKIXBuilderParameters;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $ExtendedSSLSession = ::javax::net::ssl::ExtendedSSLSession;
using $SNIHostName = ::javax::net::ssl::SNIHostName;
using $SNIServerName = ::javax::net::ssl::SNIServerName;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $SSLSession = ::javax::net::ssl::SSLSession;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $StandardConstants = ::javax::net::ssl::StandardConstants;
using $X509ExtendedTrustManager = ::javax::net::ssl::X509ExtendedTrustManager;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLAlgorithmConstraints = ::sun::security::ssl::SSLAlgorithmConstraints;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $AnchorCertificates = ::sun::security::util::AnchorCertificates;
using $HostnameChecker = ::sun::security::util::HostnameChecker;
using $Validator = ::sun::security::validator::Validator;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _X509TrustManagerImpl_FieldInfo_[] = {
	{"validatorType", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(X509TrustManagerImpl, validatorType)},
	{"trustedCerts", "Ljava/util/Collection;", "Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;", $PRIVATE | $FINAL, $field(X509TrustManagerImpl, trustedCerts)},
	{"pkixParams", "Ljava/security/cert/PKIXBuilderParameters;", nullptr, $PRIVATE | $FINAL, $field(X509TrustManagerImpl, pkixParams)},
	{"clientValidator", "Lsun/security/validator/Validator;", nullptr, $PRIVATE | $VOLATILE, $field(X509TrustManagerImpl, clientValidator)},
	{"serverValidator", "Lsun/security/validator/Validator;", nullptr, $PRIVATE | $VOLATILE, $field(X509TrustManagerImpl, serverValidator)},
	{"validatorLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(X509TrustManagerImpl, validatorLock)},
	{}
};

$MethodInfo _X509TrustManagerImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/Collection;)V", "(Ljava/lang/String;Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;)V", 0, $method(X509TrustManagerImpl, init$, void, $String*, $Collection*)},
	{"<init>", "(Ljava/lang/String;Ljava/security/cert/PKIXBuilderParameters;)V", nullptr, 0, $method(X509TrustManagerImpl, init$, void, $String*, $PKIXBuilderParameters*)},
	{"checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(X509TrustManagerImpl, checkClientTrusted, void, $X509CertificateArray*, $String*), "java.security.cert.CertificateException"},
	{"checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V", nullptr, $PUBLIC, $virtualMethod(X509TrustManagerImpl, checkClientTrusted, void, $X509CertificateArray*, $String*, $Socket*), "java.security.cert.CertificateException"},
	{"checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V", nullptr, $PUBLIC, $virtualMethod(X509TrustManagerImpl, checkClientTrusted, void, $X509CertificateArray*, $String*, $SSLEngine*), "java.security.cert.CertificateException"},
	{"checkIdentity", "(Ljavax/net/ssl/SSLSession;[Ljava/security/cert/X509Certificate;Ljava/lang/String;Z)V", nullptr, $STATIC, $staticMethod(X509TrustManagerImpl, checkIdentity, void, $SSLSession*, $X509CertificateArray*, $String*, bool), "java.security.cert.CertificateException"},
	{"checkIdentity", "(Ljava/lang/String;Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(X509TrustManagerImpl, checkIdentity, void, $String*, $X509Certificate*, $String*), "java.security.cert.CertificateException"},
	{"checkIdentity", "(Ljava/lang/String;Ljava/security/cert/X509Certificate;Ljava/lang/String;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(X509TrustManagerImpl, checkIdentity, void, $String*, $X509Certificate*, $String*, bool), "java.security.cert.CertificateException"},
	{"checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(X509TrustManagerImpl, checkServerTrusted, void, $X509CertificateArray*, $String*), "java.security.cert.CertificateException"},
	{"checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V", nullptr, $PUBLIC, $virtualMethod(X509TrustManagerImpl, checkServerTrusted, void, $X509CertificateArray*, $String*, $Socket*), "java.security.cert.CertificateException"},
	{"checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V", nullptr, $PUBLIC, $virtualMethod(X509TrustManagerImpl, checkServerTrusted, void, $X509CertificateArray*, $String*, $SSLEngine*), "java.security.cert.CertificateException"},
	{"checkTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;Z)V", nullptr, $PRIVATE, $method(X509TrustManagerImpl, checkTrusted, void, $X509CertificateArray*, $String*, $Socket*, bool), "java.security.cert.CertificateException"},
	{"checkTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;Z)V", nullptr, $PRIVATE, $method(X509TrustManagerImpl, checkTrusted, void, $X509CertificateArray*, $String*, $SSLEngine*, bool), "java.security.cert.CertificateException"},
	{"checkTrustedInit", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Z)Lsun/security/validator/Validator;", nullptr, $PRIVATE, $method(X509TrustManagerImpl, checkTrustedInit, $Validator*, $X509CertificateArray*, $String*, bool)},
	{"getAcceptedIssuers", "()[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $virtualMethod(X509TrustManagerImpl, getAcceptedIssuers, $X509CertificateArray*)},
	{"getHostNameInSNI", "(Ljava/util/List;)Ljava/lang/String;", "(Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;)Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(X509TrustManagerImpl, getHostNameInSNI, $String*, $List*)},
	{"getRequestedServerNames", "(Ljava/net/Socket;)Ljava/util/List;", "(Ljava/net/Socket;)Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;", $STATIC, $staticMethod(X509TrustManagerImpl, getRequestedServerNames, $List*, $Socket*)},
	{"getRequestedServerNames", "(Ljavax/net/ssl/SSLEngine;)Ljava/util/List;", "(Ljavax/net/ssl/SSLEngine;)Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;", $STATIC, $staticMethod(X509TrustManagerImpl, getRequestedServerNames, $List*, $SSLEngine*)},
	{"getRequestedServerNames", "(Ljavax/net/ssl/SSLSession;)Ljava/util/List;", "(Ljavax/net/ssl/SSLSession;)Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;", $PRIVATE | $STATIC, $staticMethod(X509TrustManagerImpl, getRequestedServerNames, $List*, $SSLSession*)},
	{"getValidator", "(Ljava/lang/String;)Lsun/security/validator/Validator;", nullptr, $PRIVATE, $method(X509TrustManagerImpl, getValidator, $Validator*, $String*)},
	{}
};

$ClassInfo _X509TrustManagerImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.X509TrustManagerImpl",
	"javax.net.ssl.X509ExtendedTrustManager",
	nullptr,
	_X509TrustManagerImpl_FieldInfo_,
	_X509TrustManagerImpl_MethodInfo_
};

$Object* allocate$X509TrustManagerImpl($Class* clazz) {
	return $of($alloc(X509TrustManagerImpl));
}

void X509TrustManagerImpl::init$($String* validatorType, $Collection* trustedCerts$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Collection, trustedCerts, trustedCerts$renamed);
	$X509ExtendedTrustManager::init$();
	$set(this, validatorLock, $new($ReentrantLock));
	$set(this, validatorType, validatorType);
	$set(this, pkixParams, nullptr);
	if (trustedCerts == nullptr) {
		$assign(trustedCerts, $Collections::emptySet());
	}
	$set(this, trustedCerts, trustedCerts);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,trustmanager"_s)) {
		$SSLLogger::fine("adding as trusted certificates"_s, $($nc(trustedCerts)->toArray($$new($X509CertificateArray, 0))));
	}
}

void X509TrustManagerImpl::init$($String* validatorType, $PKIXBuilderParameters* params) {
	$useLocalCurrentObjectStackCache();
	$X509ExtendedTrustManager::init$();
	$set(this, validatorLock, $new($ReentrantLock));
	$set(this, validatorType, validatorType);
	$set(this, pkixParams, params);
	$init($Validator);
	$var($Validator, v, getValidator($Validator::VAR_TLS_SERVER));
	$set(this, trustedCerts, $nc(v)->getTrustedCertificates());
	$set(this, serverValidator, v);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,trustmanager"_s)) {
		$SSLLogger::fine("adding as trusted certificates"_s, $($nc(this->trustedCerts)->toArray($$new($X509CertificateArray, 0))));
	}
}

void X509TrustManagerImpl::checkClientTrusted($X509CertificateArray* chain, $String* authType) {
	checkTrusted(chain, authType, ($Socket*)nullptr, true);
}

void X509TrustManagerImpl::checkServerTrusted($X509CertificateArray* chain, $String* authType) {
	checkTrusted(chain, authType, ($Socket*)nullptr, false);
}

$X509CertificateArray* X509TrustManagerImpl::getAcceptedIssuers() {
	$var($X509CertificateArray, certsArray, $new($X509CertificateArray, $nc(this->trustedCerts)->size()));
	$nc(this->trustedCerts)->toArray(certsArray);
	return certsArray;
}

void X509TrustManagerImpl::checkClientTrusted($X509CertificateArray* chain, $String* authType, $Socket* socket) {
	checkTrusted(chain, authType, socket, true);
}

void X509TrustManagerImpl::checkServerTrusted($X509CertificateArray* chain, $String* authType, $Socket* socket) {
	checkTrusted(chain, authType, socket, false);
}

void X509TrustManagerImpl::checkClientTrusted($X509CertificateArray* chain, $String* authType, $SSLEngine* engine) {
	checkTrusted(chain, authType, engine, true);
}

void X509TrustManagerImpl::checkServerTrusted($X509CertificateArray* chain, $String* authType, $SSLEngine* engine) {
	checkTrusted(chain, authType, engine, false);
}

$Validator* X509TrustManagerImpl::checkTrustedInit($X509CertificateArray* chain, $String* authType, bool checkClientTrusted) {
	$useLocalCurrentObjectStackCache();
	if (chain == nullptr || $nc(chain)->length == 0) {
		$throwNew($IllegalArgumentException, "null or zero-length certificate chain"_s);
	}
	if (authType == nullptr || $nc(authType)->isEmpty()) {
		$throwNew($IllegalArgumentException, "null or zero-length authentication type"_s);
	}
	$var($Validator, v, nullptr);
	if (checkClientTrusted) {
		$assign(v, this->clientValidator);
		if (v == nullptr) {
			$nc(this->validatorLock)->lock();
			{
				$var($Throwable, var$0, nullptr);
				try {
					$assign(v, this->clientValidator);
					if (v == nullptr) {
						$init($Validator);
						$assign(v, getValidator($Validator::VAR_TLS_CLIENT));
						$set(this, clientValidator, v);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$nc(this->validatorLock)->unlock();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	} else {
		$assign(v, this->serverValidator);
		if (v == nullptr) {
			$nc(this->validatorLock)->lock();
			{
				$var($Throwable, var$2, nullptr);
				try {
					$assign(v, this->serverValidator);
					if (v == nullptr) {
						$init($Validator);
						$assign(v, getValidator($Validator::VAR_TLS_SERVER));
						$set(this, serverValidator, v);
					}
				} catch ($Throwable& var$3) {
					$assign(var$2, var$3);
				} /*finally*/ {
					$nc(this->validatorLock)->unlock();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		}
	}
	return v;
}

void X509TrustManagerImpl::checkTrusted($X509CertificateArray* chain, $String* authType, $Socket* socket, bool checkClientTrusted) {
	$useLocalCurrentObjectStackCache();
	$var($Validator, v, checkTrustedInit(chain, authType, checkClientTrusted));
	$var($X509CertificateArray, trustedChain, nullptr);
	if ((socket != nullptr) && socket->isConnected() && ($instanceOf($SSLSocket, socket))) {
		$var($SSLSocket, sslSocket, $cast($SSLSocket, socket));
		$var($SSLSession, session, sslSocket->getHandshakeSession());
		if (session == nullptr) {
			$throwNew($CertificateException, "No handshake session"_s);
		}
		bool isExtSession = ($instanceOf($ExtendedSSLSession, session));
		$var($AlgorithmConstraints, constraints, nullptr);
		if (isExtSession && $ProtocolVersion::useTLS12PlusSpec($($nc(session)->getProtocol()))) {
			$var($ExtendedSSLSession, extSession, $cast($ExtendedSSLSession, session));
			$var($StringArray, localSupportedSignAlgs, $nc(extSession)->getLocalSupportedSignatureAlgorithms());
			$assign(constraints, $new($SSLAlgorithmConstraints, sslSocket, localSupportedSignAlgs, false));
		} else {
			$assign(constraints, $new($SSLAlgorithmConstraints, sslSocket, false));
		}
		$var($List, responseList, $Collections::emptyList());
		if (!checkClientTrusted && isExtSession) {
			$assign(responseList, $nc(($cast($ExtendedSSLSession, session)))->getStatusResponses());
		}
		$assign(trustedChain, $nc(v)->validate(chain, nullptr, responseList, constraints, checkClientTrusted ? ($Object*)nullptr : $of(authType)));
		$var($String, identityAlg, $nc($(sslSocket->getSSLParameters()))->getEndpointIdentificationAlgorithm());
		if (identityAlg != nullptr && !identityAlg->isEmpty()) {
			checkIdentity(session, trustedChain, identityAlg, checkClientTrusted);
		}
	} else {
		$assign(trustedChain, $nc(v)->validate(chain, nullptr, $($Collections::emptyList()), nullptr, checkClientTrusted ? ($Object*)nullptr : $of(authType)));
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,trustmanager"_s)) {
		$SSLLogger::fine("Found trusted certificate"_s, $$new($ObjectArray, {$of($nc(trustedChain)->get(trustedChain->length - 1))}));
	}
}

void X509TrustManagerImpl::checkTrusted($X509CertificateArray* chain, $String* authType, $SSLEngine* engine, bool checkClientTrusted) {
	$useLocalCurrentObjectStackCache();
	$var($Validator, v, checkTrustedInit(chain, authType, checkClientTrusted));
	$var($X509CertificateArray, trustedChain, nullptr);
	if (engine != nullptr) {
		$var($SSLSession, session, engine->getHandshakeSession());
		if (session == nullptr) {
			$throwNew($CertificateException, "No handshake session"_s);
		}
		bool isExtSession = ($instanceOf($ExtendedSSLSession, session));
		$var($AlgorithmConstraints, constraints, nullptr);
		if (isExtSession && $ProtocolVersion::useTLS12PlusSpec($($nc(session)->getProtocol()))) {
			$var($ExtendedSSLSession, extSession, $cast($ExtendedSSLSession, session));
			$var($StringArray, localSupportedSignAlgs, $nc(extSession)->getLocalSupportedSignatureAlgorithms());
			$assign(constraints, $new($SSLAlgorithmConstraints, engine, localSupportedSignAlgs, false));
		} else {
			$assign(constraints, $new($SSLAlgorithmConstraints, engine, false));
		}
		$var($List, responseList, $Collections::emptyList());
		if (!checkClientTrusted && isExtSession) {
			$assign(responseList, $nc(($cast($ExtendedSSLSession, session)))->getStatusResponses());
		}
		$assign(trustedChain, $nc(v)->validate(chain, nullptr, responseList, constraints, checkClientTrusted ? ($Object*)nullptr : $of(authType)));
		$var($String, identityAlg, $nc($(engine->getSSLParameters()))->getEndpointIdentificationAlgorithm());
		if (identityAlg != nullptr && !identityAlg->isEmpty()) {
			checkIdentity(session, trustedChain, identityAlg, checkClientTrusted);
		}
	} else {
		$assign(trustedChain, $nc(v)->validate(chain, nullptr, $($Collections::emptyList()), nullptr, checkClientTrusted ? ($Object*)nullptr : $of(authType)));
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,trustmanager"_s)) {
		$SSLLogger::fine("Found trusted certificate"_s, $$new($ObjectArray, {$of($nc(trustedChain)->get(trustedChain->length - 1))}));
	}
}

$Validator* X509TrustManagerImpl::getValidator($String* variant) {
	$var($Validator, v, nullptr);
	if (this->pkixParams == nullptr) {
		$assign(v, $Validator::getInstance(this->validatorType, variant, this->trustedCerts));
	} else {
		$assign(v, $Validator::getInstance(this->validatorType, variant, this->pkixParams));
	}
	return v;
}

$String* X509TrustManagerImpl::getHostNameInSNI($List* sniNames) {
	$init(X509TrustManagerImpl);
	$useLocalCurrentObjectStackCache();
	$var($SNIHostName, hostname, nullptr);
	{
		$var($Iterator, i$, $nc(sniNames)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SNIServerName, sniName, $cast($SNIServerName, i$->next()));
			{
				if ($nc(sniName)->getType() != $StandardConstants::SNI_HOST_NAME) {
					continue;
				}
				if ($instanceOf($SNIHostName, sniName)) {
					$assign(hostname, $cast($SNIHostName, sniName));
				} else {
					try {
						$assign(hostname, $new($SNIHostName, $($nc(sniName)->getEncoded())));
					} catch ($IllegalArgumentException& iae) {
						$init($SSLLogger);
						if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,trustmanager"_s)) {
							$SSLLogger::fine($$str({"Illegal server name: "_s, sniName}), $$new($ObjectArray, 0));
						}
					}
				}
				break;
			}
		}
	}
	if (hostname != nullptr) {
		return hostname->getAsciiName();
	}
	return nullptr;
}

$List* X509TrustManagerImpl::getRequestedServerNames($Socket* socket) {
	$init(X509TrustManagerImpl);
	if (socket != nullptr && socket->isConnected() && $instanceOf($SSLSocket, socket)) {
		return getRequestedServerNames($($nc(($cast($SSLSocket, socket)))->getHandshakeSession()));
	}
	return $Collections::emptyList();
}

$List* X509TrustManagerImpl::getRequestedServerNames($SSLEngine* engine) {
	$init(X509TrustManagerImpl);
	if (engine != nullptr) {
		return getRequestedServerNames($(engine->getHandshakeSession()));
	}
	return $Collections::emptyList();
}

$List* X509TrustManagerImpl::getRequestedServerNames($SSLSession* session) {
	$init(X509TrustManagerImpl);
	if ($instanceOf($ExtendedSSLSession, session)) {
		return $nc(($cast($ExtendedSSLSession, session)))->getRequestedServerNames();
	}
	return $Collections::emptyList();
}

void X509TrustManagerImpl::checkIdentity($SSLSession* session, $X509CertificateArray* trustedChain, $String* algorithm, bool checkClientTrusted) {
	$init(X509TrustManagerImpl);
	$useLocalCurrentObjectStackCache();
	bool chainsToPublicCA = $AnchorCertificates::contains($nc(trustedChain)->get(trustedChain->length - 1));
	bool identifiable = false;
	$var($String, peerHost, $nc(session)->getPeerHost());
	if (!checkClientTrusted) {
		$var($List, sniNames, getRequestedServerNames(session));
		$var($String, sniHostName, getHostNameInSNI(sniNames));
		if (sniHostName != nullptr) {
			try {
				checkIdentity(sniHostName, $nc(trustedChain)->get(0), algorithm, chainsToPublicCA);
				identifiable = true;
			} catch ($CertificateException& ce) {
				if (sniHostName->equalsIgnoreCase(peerHost)) {
					$throw(ce);
				}
			}
		}
	}
	if (!identifiable) {
		checkIdentity(peerHost, $nc(trustedChain)->get(0), algorithm, chainsToPublicCA);
	}
}

void X509TrustManagerImpl::checkIdentity($String* hostname, $X509Certificate* cert, $String* algorithm) {
	$init(X509TrustManagerImpl);
	checkIdentity(hostname, cert, algorithm, false);
}

void X509TrustManagerImpl::checkIdentity($String* hostname$renamed, $X509Certificate* cert, $String* algorithm, bool chainsToPublicCA) {
	$init(X509TrustManagerImpl);
	$useLocalCurrentObjectStackCache();
	$var($String, hostname, hostname$renamed);
	if (algorithm != nullptr && !algorithm->isEmpty()) {
		bool var$0 = (hostname != nullptr) && hostname->startsWith("["_s);
		if (var$0 && hostname->endsWith("]"_s)) {
			$assign(hostname, hostname->substring(1, hostname->length() - 1));
		}
		if (algorithm->equalsIgnoreCase("HTTPS"_s)) {
			$nc($($HostnameChecker::getInstance($HostnameChecker::TYPE_TLS)))->match(hostname, cert, chainsToPublicCA);
		} else {
			bool var$2 = algorithm->equalsIgnoreCase("LDAP"_s);
			if (var$2 || algorithm->equalsIgnoreCase("LDAPS"_s)) {
				$nc($($HostnameChecker::getInstance($HostnameChecker::TYPE_LDAP)))->match(hostname, cert, chainsToPublicCA);
			} else {
				$throwNew($CertificateException, $$str({"Unknown identification algorithm: "_s, algorithm}));
			}
		}
	}
}

X509TrustManagerImpl::X509TrustManagerImpl() {
}

$Class* X509TrustManagerImpl::load$($String* name, bool initialize) {
	$loadClass(X509TrustManagerImpl, name, initialize, &_X509TrustManagerImpl_ClassInfo_, allocate$X509TrustManagerImpl);
	return class$;
}

$Class* X509TrustManagerImpl::class$ = nullptr;

		} // ssl
	} // security
} // sun