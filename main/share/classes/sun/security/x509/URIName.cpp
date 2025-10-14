#include <sun/security/x509/URIName.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(URIName::*)($DerValue*)>(&URIName::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URIName::*)($String*)>(&URIName::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/net/URI;Ljava/lang/String;Lsun/security/x509/DNSName;)V", nullptr, 0, $method(static_cast<void(URIName::*)($URI*,$String*,$DNSName*)>(&URIName::init$))},
	{"constrains", "(Lsun/security/x509/GeneralNameInterface;)I", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getHost", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHostObject", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getScheme", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"getURI", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"nameConstraint", "(Lsun/security/util/DerValue;)Lsun/security/x509/URIName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<URIName*(*)($DerValue*)>(&URIName::nameConstraint)), "java.io.IOException"},
	{"subtreeDepth", "()I", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
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
	try {
		$set(this, uri, $new($URI, name));
	} catch ($URISyntaxException&) {
		$var($URISyntaxException, use, $catch());
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
			} catch ($IOException&) {
				$var($IOException, ioe, $catch());
				$throwNew($IOException, $$str({"invalid URI name (host portion is not a valid IPv6 address):"_s, name}));
			}
		} else {
			try {
				$set(this, hostDNS, $new($DNSName, this->host));
			} catch ($IOException&) {
				$var($IOException, ioe, $catch());
				try {
					$set(this, hostIP, $new($IPAddressName, this->host));
				} catch ($Exception&) {
					$var($Exception, ioe2, $catch());
					$throwNew($IOException, $$str({"invalid URI name (host portion is not a valid DNSName, IPv4 address, or IPv6 address):"_s, name}));
				}
			}
		}
	}
}

URIName* URIName::nameConstraint($DerValue* value) {
	$init(URIName);
	$var($URI, uri, nullptr);
	$var($String, name, $nc(value)->getIA5String());
	try {
		$assign(uri, $new($URI, name));
	} catch ($URISyntaxException&) {
		$var($URISyntaxException, use, $catch());
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
		} catch ($IOException&) {
			$var($IOException, ioe, $catch());
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
	$var($DNSName, dnsName, nullptr);
	try {
		$assign(dnsName, $new($DNSName, this->host));
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
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