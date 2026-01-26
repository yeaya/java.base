#include <sun/security/x509/URIName.h>

#include <java/io/IOException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/DNSName.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <sun/security/x509/IPAddressName.h>
#include <jcpp.h>

#undef NAME_DIFF_TYPE
#undef NAME_MATCH
#undef NAME_NARROWS
#undef NAME_SAME_TYPE
#undef NAME_URI
#undef NAME_WIDENS

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $DNSName = ::sun::security::x509::DNSName;
using $GeneralNameInterface = ::sun::security::x509::GeneralNameInterface;
using $IPAddressName = ::sun::security::x509::IPAddressName;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _URIName_FieldInfo_[] = {
	{"uri", "Ljava/net/URI;", nullptr, $PRIVATE, $field(URIName, uri)},
	{"host", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URIName, host)},
	{"hostDNS", "Lsun/security/x509/DNSName;", nullptr, $PRIVATE, $field(URIName, hostDNS)},
	{"hostIP", "Lsun/security/x509/IPAddressName;", nullptr, $PRIVATE, $field(URIName, hostIP)},
	{}
};

$MethodInfo _URIName_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(URIName, init$, void, $DerValue*), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(URIName, init$, void, $String*), "java.io.IOException"},
	{"<init>", "(Ljava/net/URI;Ljava/lang/String;Lsun/security/x509/DNSName;)V", nullptr, 0, $method(URIName, init$, void, $URI*, $String*, $DNSName*)},
	{"constrains", "(Lsun/security/x509/GeneralNameInterface;)I", nullptr, $PUBLIC, $virtualMethod(URIName, constrains, int32_t, $GeneralNameInterface*), "java.lang.UnsupportedOperationException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(URIName, encode, void, $DerOutputStream*), "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(URIName, equals, bool, Object$*)},
	{"getHost", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URIName, getHost, $String*)},
	{"getHostObject", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(URIName, getHostObject, $Object*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URIName, getName, $String*)},
	{"getScheme", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URIName, getScheme, $String*)},
	{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(URIName, getType, int32_t)},
	{"getURI", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(URIName, getURI, $URI*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(URIName, hashCode, int32_t)},
	{"nameConstraint", "(Lsun/security/util/DerValue;)Lsun/security/x509/URIName;", nullptr, $PUBLIC | $STATIC, $staticMethod(URIName, nameConstraint, URIName*, $DerValue*), "java.io.IOException"},
	{"subtreeDepth", "()I", nullptr, $PUBLIC, $virtualMethod(URIName, subtreeDepth, int32_t), "java.lang.UnsupportedOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URIName, toString, $String*)},
	{}
};

$ClassInfo _URIName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.URIName",
	"java.lang.Object",
	"sun.security.x509.GeneralNameInterface",
	_URIName_FieldInfo_,
	_URIName_MethodInfo_
};

$Object* allocate$URIName($Class* clazz) {
	return $of($alloc(URIName));
}

void URIName::init$($DerValue* derValue) {
	URIName::init$($($nc(derValue)->getIA5String()));
}

void URIName::init$($String* name) {
	$useLocalCurrentObjectStackCache();
	try {
		$set(this, uri, $new($URI, name));
	} catch ($URISyntaxException& use) {
		$throwNew($IOException, $$str({"invalid URI name:"_s, name}), use);
	}
	if ($nc(this->uri)->getScheme() == nullptr) {
		$throwNew($IOException, $$str({"URI name must include scheme:"_s, name}));
	}
	$set(this, host, $nc(this->uri)->getHost());
	if (this->host != nullptr) {
		if ($nc(this->host)->charAt(0) == u'[') {
			$var($String, ipV6Host, $nc(this->host)->substring(1, $nc(this->host)->length() - 1));
			try {
				$set(this, hostIP, $new($IPAddressName, ipV6Host));
			} catch ($IOException& ioe) {
				$throwNew($IOException, $$str({"invalid URI name (host portion is not a valid IPv6 address):"_s, name}));
			}
		} else {
			try {
				$set(this, hostDNS, $new($DNSName, this->host));
			} catch ($IOException& ioe) {
				try {
					$set(this, hostIP, $new($IPAddressName, this->host));
				} catch ($Exception& ioe2) {
					$throwNew($IOException, $$str({"invalid URI name (host portion is not a valid DNSName, IPv4 address, or IPv6 address):"_s, name}));
				}
			}
		}
	}
}

URIName* URIName::nameConstraint($DerValue* value) {
	$init(URIName);
	$useLocalCurrentObjectStackCache();
	$var($URI, uri, nullptr);
	$var($String, name, $nc(value)->getIA5String());
	try {
		$assign(uri, $new($URI, name));
	} catch ($URISyntaxException& use) {
		$throwNew($IOException, $$str({"invalid URI name constraint:"_s, name}), use);
	}
	if ($nc(uri)->getScheme() == nullptr) {
		$var($String, host, uri->getSchemeSpecificPart());
		try {
			$var($DNSName, hostDNS, nullptr);
			if ($nc(host)->startsWith("."_s)) {
				$assign(hostDNS, $new($DNSName, $(host->substring(1))));
			} else {
				$assign(hostDNS, $new($DNSName, host));
			}
			return $new(URIName, uri, host, hostDNS);
		} catch ($IOException& ioe) {
			$throwNew($IOException, $$str({"invalid URI name constraint:"_s, name}), ioe);
		}
	} else {
		$throwNew($IOException, $$str({"invalid URI name constraint (should not include scheme):"_s, name}));
	}
	$shouldNotReachHere();
}

void URIName::init$($URI* uri, $String* host, $DNSName* hostDNS) {
	$set(this, uri, uri);
	$set(this, host, host);
	$set(this, hostDNS, hostDNS);
}

int32_t URIName::getType() {
	return $GeneralNameInterface::NAME_URI;
}

void URIName::encode($DerOutputStream* out) {
	$nc(out)->putIA5String($($nc(this->uri)->toASCIIString()));
}

$String* URIName::toString() {
	return $str({"URIName: "_s, $($nc(this->uri)->toString())});
}

bool URIName::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(URIName, obj))) {
		return false;
	}
	$var(URIName, other, $cast(URIName, obj));
	return $nc(this->uri)->equals($($nc(other)->getURI()));
}

$URI* URIName::getURI() {
	return this->uri;
}

$String* URIName::getName() {
	return $nc(this->uri)->toString();
}

$String* URIName::getScheme() {
	return $nc(this->uri)->getScheme();
}

$String* URIName::getHost() {
	return this->host;
}

$Object* URIName::getHostObject() {
	if (this->hostIP != nullptr) {
		return $of(this->hostIP);
	} else {
		return $of(this->hostDNS);
	}
}

int32_t URIName::hashCode() {
	return $nc(this->uri)->hashCode();
}

int32_t URIName::constrains($GeneralNameInterface* inputName) {
	$useLocalCurrentObjectStackCache();
	int32_t constraintType = 0;
	if (inputName == nullptr) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else if ($nc(inputName)->getType() != $GeneralNameInterface::NAME_URI) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else {
		$var($String, otherHost, $nc(($cast(URIName, inputName)))->getHost());
		if ($nc(otherHost)->equalsIgnoreCase(this->host)) {
			constraintType = $GeneralNameInterface::NAME_MATCH;
		} else {
			$var($Object, otherHostObject, ($cast(URIName, inputName))->getHostObject());
			if ((this->hostDNS == nullptr) || !($instanceOf($DNSName, otherHostObject))) {
				constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
			} else {
				bool thisDomain = ($nc(this->host)->charAt(0) == u'.');
				bool otherDomain = (otherHost->charAt(0) == u'.');
				$var($DNSName, otherDNS, $cast($DNSName, otherHostObject));
				constraintType = $nc(this->hostDNS)->constrains(otherDNS);
				if ((!thisDomain && !otherDomain) && ((constraintType == $GeneralNameInterface::NAME_WIDENS) || (constraintType == $GeneralNameInterface::NAME_NARROWS))) {
					constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
				}
				if ((thisDomain != otherDomain) && (constraintType == $GeneralNameInterface::NAME_MATCH)) {
					if (thisDomain) {
						constraintType = $GeneralNameInterface::NAME_WIDENS;
					} else {
						constraintType = $GeneralNameInterface::NAME_NARROWS;
					}
				}
			}
		}
	}
	return constraintType;
}

int32_t URIName::subtreeDepth() {
	$useLocalCurrentObjectStackCache();
	$var($DNSName, dnsName, nullptr);
	try {
		$assign(dnsName, $new($DNSName, this->host));
	} catch ($IOException& ioe) {
		$throwNew($UnsupportedOperationException, $(ioe->getMessage()));
	}
	return $nc(dnsName)->subtreeDepth();
}

URIName::URIName() {
}

$Class* URIName::load$($String* name, bool initialize) {
	$loadClass(URIName, name, initialize, &_URIName_ClassInfo_, allocate$URIName);
	return class$;
}

$Class* URIName::class$ = nullptr;

		} // x509
	} // security
} // sun