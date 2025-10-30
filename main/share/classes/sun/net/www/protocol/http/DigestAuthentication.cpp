#include <sun/net/www/protocol/http/DigestAuthentication.h>

#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/net/PasswordAuthentication.h>
#include <java/net/ProtocolException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/nio/charset/Charset.h>
#include <java/security/AccessController.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <sun/net/www/HeaderParser.h>
#include <sun/net/www/protocol/http/AuthScheme.h>
#include <sun/net/www/protocol/http/AuthenticationInfo.h>
#include <sun/net/www/protocol/http/DigestAuthentication$1.h>
#include <sun/net/www/protocol/http/DigestAuthentication$Parameters.h>
#include <sun/net/www/protocol/http/HttpURLConnection$TunnelState.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <sun/nio/cs/ISO_8859_1.h>
#include <jcpp.h>

#undef DIGEST
#undef INSTANCE
#undef PROXY_AUTHENTICATION
#undef SERVER_AUTHENTICATION
#undef SETUP

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $ProtocolException = ::java::net::ProtocolException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Charset = ::java::nio::charset::Charset;
using $AccessController = ::java::security::AccessController;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $HeaderParser = ::sun::net::www::HeaderParser;
using $AuthScheme = ::sun::net::www::protocol::http::AuthScheme;
using $AuthenticationInfo = ::sun::net::www::protocol::http::AuthenticationInfo;
using $DigestAuthentication$1 = ::sun::net::www::protocol::http::DigestAuthentication$1;
using $DigestAuthentication$Parameters = ::sun::net::www::protocol::http::DigestAuthentication$Parameters;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;
using $HttpURLConnection$TunnelState = ::sun::net::www::protocol::http::HttpURLConnection$TunnelState;
using $ISO_8859_1 = ::sun::nio::cs::ISO_8859_1;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _DigestAuthentication_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DigestAuthentication, $assertionsDisabled)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestAuthentication, serialVersionUID)},
	{"authMethod", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DigestAuthentication, authMethod)},
	{"compatPropName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestAuthentication, compatPropName)},
	{"delimCompatFlag", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestAuthentication, delimCompatFlag)},
	{"params", "Lsun/net/www/protocol/http/DigestAuthentication$Parameters;", nullptr, 0, $field(DigestAuthentication, params)},
	{"charArray", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestAuthentication, charArray)},
	{"zeroPad", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestAuthentication, zeroPad)},
	{}
};

$MethodInfo _DigestAuthentication_MethodInfo_[] = {
	{"<init>", "(ZLjava/net/URL;Ljava/lang/String;Ljava/lang/String;Ljava/net/PasswordAuthentication;Lsun/net/www/protocol/http/DigestAuthentication$Parameters;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DigestAuthentication::*)(bool,$URL*,$String*,$String*,$PasswordAuthentication*,$DigestAuthentication$Parameters*,$String*)>(&DigestAuthentication::init$))},
	{"<init>", "(ZLjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/net/PasswordAuthentication;Lsun/net/www/protocol/http/DigestAuthentication$Parameters;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DigestAuthentication::*)(bool,$String*,int32_t,$String*,$String*,$PasswordAuthentication*,$DigestAuthentication$Parameters*,$String*)>(&DigestAuthentication::init$))},
	{"checkResponse", "(Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"checkResponse", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"computeDigest", "(ZLjava/lang/String;[CLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DigestAuthentication::*)(bool,$String*,$chars*,$String*,$String*,$String*,$String*,$String*,$String*)>(&DigestAuthentication::computeDigest)), "java.security.NoSuchAlgorithmException"},
	{"encode", "(Ljava/lang/String;[CLjava/security/MessageDigest;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DigestAuthentication::*)($String*,$chars*,$MessageDigest*)>(&DigestAuthentication::encode))},
	{"getHeaderValue", "(Ljava/net/URL;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHeaderValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"getHeaderValueImpl", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DigestAuthentication::*)($String*,$String*)>(&DigestAuthentication::getHeaderValueImpl))},
	{"isAuthorizationStale", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"setHeaders", "(Lsun/net/www/protocol/http/HttpURLConnection;Lsun/net/www/HeaderParser;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"supportsPreemptiveAuthorization", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DigestAuthentication_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.DigestAuthentication$Parameters", "sun.net.www.protocol.http.DigestAuthentication", "Parameters", $STATIC},
	{"sun.net.www.protocol.http.DigestAuthentication$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DigestAuthentication_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.DigestAuthentication",
	"sun.net.www.protocol.http.AuthenticationInfo",
	nullptr,
	_DigestAuthentication_FieldInfo_,
	_DigestAuthentication_MethodInfo_,
	nullptr,
	nullptr,
	_DigestAuthentication_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.DigestAuthentication$Parameters,sun.net.www.protocol.http.DigestAuthentication$1"
};

$Object* allocate$DigestAuthentication($Class* clazz) {
	return $of($alloc(DigestAuthentication));
}

bool DigestAuthentication::$assertionsDisabled = false;
$String* DigestAuthentication::compatPropName = nullptr;
bool DigestAuthentication::delimCompatFlag = false;
$chars* DigestAuthentication::charArray = nullptr;
$StringArray* DigestAuthentication::zeroPad = nullptr;

void DigestAuthentication::init$(bool isProxy, $URL* url, $String* realm, $String* authMethod, $PasswordAuthentication* pw, $DigestAuthentication$Parameters* params, $String* authenticatorKey) {
	$init($AuthScheme);
	$AuthenticationInfo::init$(isProxy ? $AuthenticationInfo::PROXY_AUTHENTICATION : $AuthenticationInfo::SERVER_AUTHENTICATION, $AuthScheme::DIGEST, url, realm, $cast($String, $Objects::requireNonNull(authenticatorKey)));
	$set(this, authMethod, authMethod);
	$set(this, pw, pw);
	$set(this, params, params);
}

void DigestAuthentication::init$(bool isProxy, $String* host, int32_t port, $String* realm, $String* authMethod, $PasswordAuthentication* pw, $DigestAuthentication$Parameters* params, $String* authenticatorKey) {
	$init($AuthScheme);
	$AuthenticationInfo::init$(isProxy ? $AuthenticationInfo::PROXY_AUTHENTICATION : $AuthenticationInfo::SERVER_AUTHENTICATION, $AuthScheme::DIGEST, host, port, realm, $cast($String, $Objects::requireNonNull(authenticatorKey)));
	$set(this, authMethod, authMethod);
	$set(this, pw, pw);
	$set(this, params, params);
}

bool DigestAuthentication::supportsPreemptiveAuthorization() {
	return true;
}

$String* DigestAuthentication::getHeaderValue($URL* url, $String* method) {
	return getHeaderValueImpl($($nc(url)->getFile()), method);
}

$String* DigestAuthentication::getHeaderValue($String* requestURI, $String* method) {
	return getHeaderValueImpl(requestURI, method);
}

bool DigestAuthentication::isAuthorizationStale($String* header) {
	$useLocalCurrentObjectStackCache();
	$var($HeaderParser, p, $new($HeaderParser, header));
	$var($String, s, p->findValue("stale"_s));
	if (s == nullptr || !$nc(s)->equals("true"_s)) {
		return false;
	}
	$var($String, newNonce, p->findValue("nonce"_s));
	if (newNonce == nullptr || $nc(newNonce)->isEmpty()) {
		return false;
	}
	$nc(this->params)->setNonce(newNonce);
	return true;
}

bool DigestAuthentication::setHeaders($HttpURLConnection* conn, $HeaderParser* p, $String* raw) {
	$useLocalCurrentObjectStackCache();
	if (!DigestAuthentication::$assertionsDisabled && !$nc(conn)->isLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$nc(this->params)->setNonce($($nc(p)->findValue("nonce"_s)));
	$nc(this->params)->setOpaque($($nc(p)->findValue("opaque"_s)));
	$nc(this->params)->setQop($($nc(p)->findValue("qop"_s)));
	$var($String, uri, ""_s);
	$var($String, method, nullptr);
	$init($HttpURLConnection$TunnelState);
	if (this->type == $AuthenticationInfo::PROXY_AUTHENTICATION && $nc(conn)->tunnelState() == $HttpURLConnection$TunnelState::SETUP) {
		$assign(uri, $HttpURLConnection::connectRequestURI($(conn->getURL())));
		$assign(method, "CONNECT"_s);
	} else {
		try {
			$assign(uri, conn->getRequestURI());
		} catch ($IOException& e) {
		}
		$assign(method, conn->getMethod());
	}
	if ($nc(this->params)->nonce == nullptr || this->authMethod == nullptr || this->pw == nullptr || this->realm == nullptr) {
		return false;
	}
	if ($nc(this->authMethod)->length() >= 1) {
		$var($String, var$0, $str($Character::toUpperCase($nc(this->authMethod)->charAt(0))));
		$set(this, authMethod, $concat(var$0, $($($nc(this->authMethod)->substring(1))->toLowerCase())));
	}
	$var($String, algorithm, $nc(p)->findValue("algorithm"_s));
	if (algorithm == nullptr || $nc(algorithm)->isEmpty()) {
		$assign(algorithm, "MD5"_s);
	}
	$nc(this->params)->setAlgorithm(algorithm);
	if ($nc(this->params)->authQop()) {
		$nc(this->params)->setNewCnonce();
	}
	$var($String, value, getHeaderValueImpl(uri, method));
	if (value != nullptr) {
		$nc(conn)->setAuthenticationProperty($(getHeaderName()), value);
		return true;
	} else {
		return false;
	}
}

$String* DigestAuthentication::getHeaderValueImpl($String* uri, $String* method) {
	$useLocalCurrentObjectStackCache();
	$var($String, response, nullptr);
	$var($chars, passwd, $nc(this->pw)->getPassword());
	bool qop = $nc(this->params)->authQop();
	$var($String, opaque, $nc(this->params)->getOpaque());
	$var($String, cnonce, $nc(this->params)->getCnonce());
	$var($String, nonce, $nc(this->params)->getNonce());
	$var($String, algorithm, $nc(this->params)->getAlgorithm());
	$nc(this->params)->incrementNC();
	int32_t nccount = $nc(this->params)->getNCCount();
	$var($String, ncstring, nullptr);
	if (nccount != -1) {
		$assign(ncstring, $nc($($Integer::toHexString(nccount)))->toLowerCase());
		int32_t len = ncstring->length();
		if (len < 8) {
			$assign(ncstring, $str({$nc(DigestAuthentication::zeroPad)->get(len), ncstring}));
		}
	}
	try {
		$assign(response, computeDigest(true, $($nc(this->pw)->getUserName()), passwd, this->realm, method, uri, nonce, cnonce, ncstring));
	} catch ($NoSuchAlgorithmException& ex) {
		return nullptr;
	}
	$var($String, ncfield, "\""_s);
	if (qop) {
		$assign(ncfield, $str({"\", nc="_s, ncstring}));
	}
	$var($String, algoS, nullptr);
	$var($String, qopS, nullptr);
	if (DigestAuthentication::delimCompatFlag) {
		$assign(algoS, $str({", algorithm=\""_s, algorithm, "\""_s}));
		$assign(qopS, ", qop=\"auth\""_s);
	} else {
		$assign(algoS, $str({", algorithm="_s, algorithm}));
		$assign(qopS, ", qop=auth"_s);
	}
	$var($String, value, $str({this->authMethod, " username=\""_s, $($nc(this->pw)->getUserName()), "\", realm=\""_s, this->realm, "\", nonce=\""_s, nonce, ncfield, ", uri=\""_s, uri, "\", response=\""_s, response, "\""_s, algoS}));
	if (opaque != nullptr) {
		$plusAssign(value, $$str({", opaque=\""_s, opaque, "\""_s}));
	}
	if (cnonce != nullptr) {
		$plusAssign(value, $$str({", cnonce=\""_s, cnonce, "\""_s}));
	}
	if (qop) {
		$plusAssign(value, qopS);
	}
	return value;
}

void DigestAuthentication::checkResponse($String* header, $String* method, $URL* url) {
	checkResponse(header, method, $($nc(url)->getFile()));
}

void DigestAuthentication::checkResponse($String* header, $String* method, $String* uri) {
	$useLocalCurrentObjectStackCache();
	$var($chars, passwd, $nc(this->pw)->getPassword());
	$var($String, username, $nc(this->pw)->getUserName());
	bool qop = $nc(this->params)->authQop();
	$var($String, opaque, $nc(this->params)->getOpaque());
	$var($String, cnonce, $nc(this->params)->cnonce);
	$var($String, nonce, $nc(this->params)->getNonce());
	$var($String, algorithm, $nc(this->params)->getAlgorithm());
	int32_t nccount = $nc(this->params)->getNCCount();
	$var($String, ncstring, nullptr);
	if (header == nullptr) {
		$throwNew($ProtocolException, "No authentication information in response"_s);
	}
	if (nccount != -1) {
		$assign(ncstring, $nc($($Integer::toHexString(nccount)))->toUpperCase());
		int32_t len = ncstring->length();
		if (len < 8) {
			$assign(ncstring, $str({$nc(DigestAuthentication::zeroPad)->get(len), ncstring}));
		}
	}
	try {
		$var($String, expected, computeDigest(false, username, passwd, this->realm, method, uri, nonce, cnonce, ncstring));
		$var($HeaderParser, p, $new($HeaderParser, header));
		$var($String, rspauth, p->findValue("rspauth"_s));
		if (rspauth == nullptr) {
			$throwNew($ProtocolException, "No digest in response"_s);
		}
		if (!$nc(rspauth)->equals(expected)) {
			$throwNew($ProtocolException, "Response digest invalid"_s);
		}
		$var($String, nextnonce, p->findValue("nextnonce"_s));
		if (nextnonce != nullptr && !nextnonce->isEmpty()) {
			$nc(this->params)->setNonce(nextnonce);
		}
	} catch ($NoSuchAlgorithmException& ex) {
		$throwNew($ProtocolException, "Unsupported algorithm in response"_s);
	}
}

$String* DigestAuthentication::computeDigest(bool isRequest, $String* userName, $chars* password, $String* realm, $String* connMethod, $String* requestURI, $String* nonceString, $String* cnonce, $String* ncValue) {
	$useLocalCurrentObjectStackCache();
	$var($String, A1, nullptr);
	$var($String, HashA1, nullptr);
	$var($String, algorithm, $nc(this->params)->getAlgorithm());
	bool md5sess = $nc(algorithm)->equalsIgnoreCase("MD5-sess"_s);
	$var($MessageDigest, md, $MessageDigest::getInstance(md5sess ? "MD5"_s : algorithm));
	if (md5sess) {
		if (($assign(HashA1, $nc(this->params)->getCachedHA1())) == nullptr) {
			$var($String, s, $str({userName, ":"_s, realm, ":"_s}));
			$var($String, s1, encode(s, password, md));
			$assign(A1, $str({s1, ":"_s, nonceString, ":"_s, cnonce}));
			$assign(HashA1, encode(A1, nullptr, md));
			$nc(this->params)->setCachedHA1(HashA1);
		}
	} else {
		$assign(A1, $str({userName, ":"_s, realm, ":"_s}));
		$assign(HashA1, encode(A1, password, md));
	}
	$var($String, A2, nullptr);
	if (isRequest) {
		$assign(A2, $str({connMethod, ":"_s, requestURI}));
	} else {
		$assign(A2, $str({":"_s, requestURI}));
	}
	$var($String, HashA2, encode(A2, nullptr, md));
	$var($String, combo, nullptr);
	$var($String, finalHash, nullptr);
	if ($nc(this->params)->authQop()) {
		$assign(combo, $str({HashA1, ":"_s, nonceString, ":"_s, ncValue, ":"_s, cnonce, ":auth:"_s, HashA2}));
	} else {
		$assign(combo, $str({HashA1, ":"_s, nonceString, ":"_s, HashA2}));
	}
	$assign(finalHash, encode(combo, nullptr, md));
	return finalHash;
}

$String* DigestAuthentication::encode($String* src, $chars* passwd, $MessageDigest* md) {
	$useLocalCurrentObjectStackCache();
	$init($ISO_8859_1);
	$nc(md)->update($($nc(src)->getBytes(static_cast<$Charset*>($ISO_8859_1::INSTANCE))));
	if (passwd != nullptr) {
		$var($bytes, passwdBytes, $new($bytes, passwd->length));
		for (int32_t i = 0; i < passwd->length; ++i) {
			passwdBytes->set(i, (int8_t)passwd->get(i));
		}
		md->update(passwdBytes);
		$Arrays::fill(passwdBytes, (int8_t)0);
	}
	$var($bytes, digest, md->digest());
	$var($StringBuilder, res, $new($StringBuilder, $nc(digest)->length * 2));
	for (int32_t i = 0; i < $nc(digest)->length; ++i) {
		int32_t hashchar = ((int32_t)(((int32_t)((uint32_t)digest->get(i) >> 4)) & (uint32_t)15));
		res->append($nc(DigestAuthentication::charArray)->get(hashchar));
		hashchar = ((int32_t)(digest->get(i) & (uint32_t)15));
		res->append($nc(DigestAuthentication::charArray)->get(hashchar));
	}
	return res->toString();
}

void clinit$DigestAuthentication($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(DigestAuthentication::compatPropName, "http.auth.digest.quoteParameters"_s);
	$beforeCallerSensitive();
	DigestAuthentication::$assertionsDisabled = !DigestAuthentication::class$->desiredAssertionStatus();
	{
		$var($Boolean, b, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DigestAuthentication$1)))));
		DigestAuthentication::delimCompatFlag = (b == nullptr) ? false : $nc(b)->booleanValue();
	}
	$assignStatic(DigestAuthentication::charArray, $new($chars, {
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'a',
		u'b',
		u'c',
		u'd',
		u'e',
		u'f'
	}));
	$assignStatic(DigestAuthentication::zeroPad, $new($StringArray, {
		"00000000"_s,
		"0000000"_s,
		"000000"_s,
		"00000"_s,
		"0000"_s,
		"000"_s,
		"00"_s,
		"0"_s
	}));
}

DigestAuthentication::DigestAuthentication() {
}

$Class* DigestAuthentication::load$($String* name, bool initialize) {
	$loadClass(DigestAuthentication, name, initialize, &_DigestAuthentication_ClassInfo_, clinit$DigestAuthentication, allocate$DigestAuthentication);
	return class$;
}

$Class* DigestAuthentication::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun