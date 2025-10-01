#include <javax/net/ssl/SSLParameters.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SNIMatcher.h>
#include <javax/net/ssl/SNIServerName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SNIMatcher = ::javax::net::ssl::SNIMatcher;
using $SNIServerName = ::javax::net::ssl::SNIServerName;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLParameters_FieldInfo_[] = {
	{"cipherSuites", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(SSLParameters, cipherSuites)},
	{"protocols", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(SSLParameters, protocols)},
	{"wantClientAuth", "Z", nullptr, $PRIVATE, $field(SSLParameters, wantClientAuth)},
	{"needClientAuth", "Z", nullptr, $PRIVATE, $field(SSLParameters, needClientAuth)},
	{"identificationAlgorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SSLParameters, identificationAlgorithm)},
	{"algorithmConstraints", "Ljava/security/AlgorithmConstraints;", nullptr, $PRIVATE, $field(SSLParameters, algorithmConstraints)},
	{"sniNames", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljavax/net/ssl/SNIServerName;>;", $PRIVATE, $field(SSLParameters, sniNames)},
	{"sniMatchers", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljavax/net/ssl/SNIMatcher;>;", $PRIVATE, $field(SSLParameters, sniMatchers)},
	{"preferLocalCipherSuites", "Z", nullptr, $PRIVATE, $field(SSLParameters, preferLocalCipherSuites)},
	{"enableRetransmissions", "Z", nullptr, $PRIVATE, $field(SSLParameters, enableRetransmissions)},
	{"maximumPacketSize", "I", nullptr, $PRIVATE, $field(SSLParameters, maximumPacketSize)},
	{"applicationProtocols", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(SSLParameters, applicationProtocols)},
	{}
};

$MethodInfo _SSLParameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SSLParameters::*)()>(&SSLParameters::init$))},
	{"<init>", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SSLParameters::*)($StringArray*)>(&SSLParameters::init$))},
	{"<init>", "([Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SSLParameters::*)($StringArray*,$StringArray*)>(&SSLParameters::init$))},
	{"clone", "([Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringArray*(*)($StringArray*)>(&SSLParameters::clone))},
	{"getAlgorithmConstraints", "()Ljava/security/AlgorithmConstraints;", nullptr, $PUBLIC},
	{"getApplicationProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEnableRetransmissions", "()Z", nullptr, $PUBLIC},
	{"getEndpointIdentificationAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMaximumPacketSize", "()I", nullptr, $PUBLIC},
	{"getNeedClientAuth", "()Z", nullptr, $PUBLIC},
	{"getProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSNIMatchers", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljavax/net/ssl/SNIMatcher;>;", $PUBLIC | $FINAL, $method(static_cast<$Collection*(SSLParameters::*)()>(&SSLParameters::getSNIMatchers))},
	{"getServerNames", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;", $PUBLIC | $FINAL, $method(static_cast<$List*(SSLParameters::*)()>(&SSLParameters::getServerNames))},
	{"getUseCipherSuitesOrder", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(SSLParameters::*)()>(&SSLParameters::getUseCipherSuitesOrder))},
	{"getWantClientAuth", "()Z", nullptr, $PUBLIC},
	{"setAlgorithmConstraints", "(Ljava/security/AlgorithmConstraints;)V", nullptr, $PUBLIC},
	{"setApplicationProtocols", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setCipherSuites", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setEnableRetransmissions", "(Z)V", nullptr, $PUBLIC},
	{"setEndpointIdentificationAlgorithm", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setMaximumPacketSize", "(I)V", nullptr, $PUBLIC},
	{"setNeedClientAuth", "(Z)V", nullptr, $PUBLIC},
	{"setProtocols", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setSNIMatchers", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<Ljavax/net/ssl/SNIMatcher;>;)V", $PUBLIC | $FINAL, $method(static_cast<void(SSLParameters::*)($Collection*)>(&SSLParameters::setSNIMatchers))},
	{"setServerNames", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;)V", $PUBLIC | $FINAL, $method(static_cast<void(SSLParameters::*)($List*)>(&SSLParameters::setServerNames))},
	{"setUseCipherSuitesOrder", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(SSLParameters::*)(bool)>(&SSLParameters::setUseCipherSuitesOrder))},
	{"setWantClientAuth", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SSLParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.SSLParameters",
	"java.lang.Object",
	nullptr,
	_SSLParameters_FieldInfo_,
	_SSLParameters_MethodInfo_
};

$Object* allocate$SSLParameters($Class* clazz) {
	return $of($alloc(SSLParameters));
}

void SSLParameters::init$() {
	$set(this, sniNames, nullptr);
	$set(this, sniMatchers, nullptr);
	this->enableRetransmissions = true;
	this->maximumPacketSize = 0;
	$set(this, applicationProtocols, $new($StringArray, 0));
}

void SSLParameters::init$($StringArray* cipherSuites) {
	$set(this, sniNames, nullptr);
	$set(this, sniMatchers, nullptr);
	this->enableRetransmissions = true;
	this->maximumPacketSize = 0;
	$set(this, applicationProtocols, $new($StringArray, 0));
	setCipherSuites(cipherSuites);
}

void SSLParameters::init$($StringArray* cipherSuites, $StringArray* protocols) {
	$set(this, sniNames, nullptr);
	$set(this, sniMatchers, nullptr);
	this->enableRetransmissions = true;
	this->maximumPacketSize = 0;
	$set(this, applicationProtocols, $new($StringArray, 0));
	setCipherSuites(cipherSuites);
	setProtocols(protocols);
}

$StringArray* SSLParameters::clone($StringArray* s) {
	return (s == nullptr) ? ($StringArray*)nullptr : $cast($StringArray, $nc(s)->clone());
}

$StringArray* SSLParameters::getCipherSuites() {
	return clone(this->cipherSuites);
}

void SSLParameters::setCipherSuites($StringArray* cipherSuites) {
	$set(this, cipherSuites, clone(cipherSuites));
}

$StringArray* SSLParameters::getProtocols() {
	return clone(this->protocols);
}

void SSLParameters::setProtocols($StringArray* protocols) {
	$set(this, protocols, clone(protocols));
}

bool SSLParameters::getWantClientAuth() {
	return this->wantClientAuth;
}

void SSLParameters::setWantClientAuth(bool wantClientAuth) {
	this->wantClientAuth = wantClientAuth;
	this->needClientAuth = false;
}

bool SSLParameters::getNeedClientAuth() {
	return this->needClientAuth;
}

void SSLParameters::setNeedClientAuth(bool needClientAuth) {
	this->wantClientAuth = false;
	this->needClientAuth = needClientAuth;
}

$AlgorithmConstraints* SSLParameters::getAlgorithmConstraints() {
	return this->algorithmConstraints;
}

void SSLParameters::setAlgorithmConstraints($AlgorithmConstraints* constraints) {
	$set(this, algorithmConstraints, constraints);
}

$String* SSLParameters::getEndpointIdentificationAlgorithm() {
	return this->identificationAlgorithm;
}

void SSLParameters::setEndpointIdentificationAlgorithm($String* algorithm) {
	$set(this, identificationAlgorithm, algorithm);
}

void SSLParameters::setServerNames($List* serverNames) {
	if (serverNames != nullptr) {
		if (!serverNames->isEmpty()) {
			$set(this, sniNames, $new($LinkedHashMap, serverNames->size()));
			{
				$var($Iterator, i$, serverNames->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($SNIServerName, serverName, $cast($SNIServerName, i$->next()));
					{
						if ($nc(this->sniNames)->put($($Integer::valueOf($nc(serverName)->getType())), serverName) != nullptr) {
							$throwNew($IllegalArgumentException, $$str({"Duplicated server name of type "_s, $$str($nc(serverName)->getType())}));
						}
					}
				}
			}
		} else {
			$set(this, sniNames, $Collections::emptyMap());
		}
	} else {
		$set(this, sniNames, nullptr);
	}
}

$List* SSLParameters::getServerNames() {
	if (this->sniNames != nullptr) {
		if (!$nc(this->sniNames)->isEmpty()) {
			return $Collections::unmodifiableList($$new($ArrayList, $($nc(this->sniNames)->values())));
		} else {
			return $Collections::emptyList();
		}
	}
	return nullptr;
}

void SSLParameters::setSNIMatchers($Collection* matchers) {
	if (matchers != nullptr) {
		if (!matchers->isEmpty()) {
			$set(this, sniMatchers, $new($HashMap, matchers->size()));
			{
				$var($Iterator, i$, matchers->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($SNIMatcher, matcher, $cast($SNIMatcher, i$->next()));
					{
						if ($nc(this->sniMatchers)->put($($Integer::valueOf($nc(matcher)->getType())), matcher) != nullptr) {
							$throwNew($IllegalArgumentException, $$str({"Duplicated server name of type "_s, $$str($nc(matcher)->getType())}));
						}
					}
				}
			}
		} else {
			$set(this, sniMatchers, $Collections::emptyMap());
		}
	} else {
		$set(this, sniMatchers, nullptr);
	}
}

$Collection* SSLParameters::getSNIMatchers() {
	if (this->sniMatchers != nullptr) {
		if (!$nc(this->sniMatchers)->isEmpty()) {
			return $Collections::unmodifiableList($$new($ArrayList, $($nc(this->sniMatchers)->values())));
		} else {
			return $Collections::emptyList();
		}
	}
	return nullptr;
}

void SSLParameters::setUseCipherSuitesOrder(bool honorOrder) {
	this->preferLocalCipherSuites = honorOrder;
}

bool SSLParameters::getUseCipherSuitesOrder() {
	return this->preferLocalCipherSuites;
}

void SSLParameters::setEnableRetransmissions(bool enableRetransmissions) {
	this->enableRetransmissions = enableRetransmissions;
}

bool SSLParameters::getEnableRetransmissions() {
	return this->enableRetransmissions;
}

void SSLParameters::setMaximumPacketSize(int32_t maximumPacketSize) {
	if (maximumPacketSize < 0) {
		$throwNew($IllegalArgumentException, "The maximum packet size cannot be negative"_s);
	}
	this->maximumPacketSize = maximumPacketSize;
}

int32_t SSLParameters::getMaximumPacketSize() {
	return this->maximumPacketSize;
}

$StringArray* SSLParameters::getApplicationProtocols() {
	return $cast($StringArray, $nc(this->applicationProtocols)->clone());
}

void SSLParameters::setApplicationProtocols($StringArray* protocols) {
	if (protocols == nullptr) {
		$throwNew($IllegalArgumentException, "protocols was null"_s);
	}
	$var($StringArray, tempProtocols, $cast($StringArray, $nc(protocols)->clone()));
	{
		$var($StringArray, arr$, tempProtocols);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, p, arr$->get(i$));
			{
				if (p == nullptr || $nc(p)->isEmpty()) {
					$throwNew($IllegalArgumentException, "An element of protocols was null/empty"_s);
				}
			}
		}
	}
	$set(this, applicationProtocols, tempProtocols);
}

SSLParameters::SSLParameters() {
}

$Class* SSLParameters::load$($String* name, bool initialize) {
	$loadClass(SSLParameters, name, initialize, &_SSLParameters_ClassInfo_, allocate$SSLParameters);
	return class$;
}

$Class* SSLParameters::class$ = nullptr;

		} // ssl
	} // net
} // javax