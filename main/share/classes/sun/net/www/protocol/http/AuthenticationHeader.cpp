#include <sun/net/www/protocol/http/AuthenticationHeader.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <sun/net/www/HeaderParser.h>
#include <sun/net/www/MessageHeader.h>
#include <sun/net/www/protocol/http/AuthenticationHeader$SchemeMapValue.h>
#include <sun/net/www/protocol/http/HttpCallerInfo.h>
#include <sun/net/www/protocol/http/NTLMAuthenticationProxy.h>
#include <sun/net/www/protocol/http/NegotiateAuthentication.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $HeaderParser = ::sun::net::www::HeaderParser;
using $MessageHeader = ::sun::net::www::MessageHeader;
using $AuthenticationHeader$SchemeMapValue = ::sun::net::www::protocol::http::AuthenticationHeader$SchemeMapValue;
using $HttpCallerInfo = ::sun::net::www::protocol::http::HttpCallerInfo;
using $NTLMAuthenticationProxy = ::sun::net::www::protocol::http::NTLMAuthenticationProxy;
using $NegotiateAuthentication = ::sun::net::www::protocol::http::NegotiateAuthentication;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _AuthenticationHeader_FieldInfo_[] = {
	{"rsp", "Lsun/net/www/MessageHeader;", nullptr, 0, $field(AuthenticationHeader, rsp)},
	{"preferred", "Lsun/net/www/HeaderParser;", nullptr, 0, $field(AuthenticationHeader, preferred)},
	{"preferred_r", "Ljava/lang/String;", nullptr, 0, $field(AuthenticationHeader, preferred_r)},
	{"hci", "Lsun/net/www/protocol/http/HttpCallerInfo;", nullptr, $PRIVATE | $FINAL, $field(AuthenticationHeader, hci)},
	{"dontUseNegotiate", "Z", nullptr, 0, $field(AuthenticationHeader, dontUseNegotiate)},
	{"authPref", "Ljava/lang/String;", nullptr, $STATIC, $staticField(AuthenticationHeader, authPref)},
	{"hdrname", "Ljava/lang/String;", nullptr, 0, $field(AuthenticationHeader, hdrname)},
	{"schemes", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Lsun/net/www/protocol/http/AuthenticationHeader$SchemeMapValue;>;", 0, $field(AuthenticationHeader, schemes)},
	{}
};

$MethodInfo _AuthenticationHeader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lsun/net/www/MessageHeader;Lsun/net/www/protocol/http/HttpCallerInfo;Z)V", nullptr, $PUBLIC, $method(static_cast<void(AuthenticationHeader::*)($String*,$MessageHeader*,$HttpCallerInfo*,bool)>(&AuthenticationHeader::init$))},
	{"<init>", "(Ljava/lang/String;Lsun/net/www/MessageHeader;Lsun/net/www/protocol/http/HttpCallerInfo;ZLjava/util/Set;)V", "(Ljava/lang/String;Lsun/net/www/MessageHeader;Lsun/net/www/protocol/http/HttpCallerInfo;ZLjava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(AuthenticationHeader::*)($String*,$MessageHeader*,$HttpCallerInfo*,bool,$Set*)>(&AuthenticationHeader::init$))},
	{"getHttpCallerInfo", "()Lsun/net/www/protocol/http/HttpCallerInfo;", nullptr, $PUBLIC},
	{"headerParser", "()Lsun/net/www/HeaderParser;", nullptr, $PUBLIC},
	{"isPresent", "()Z", nullptr, $PUBLIC},
	{"parse", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(AuthenticationHeader::*)($Set*)>(&AuthenticationHeader::parse))},
	{"raw", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"scheme", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AuthenticationHeader_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.AuthenticationHeader$SchemeMapValue", "sun.net.www.protocol.http.AuthenticationHeader", "SchemeMapValue", $STATIC},
	{}
};

$ClassInfo _AuthenticationHeader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.protocol.http.AuthenticationHeader",
	"java.lang.Object",
	nullptr,
	_AuthenticationHeader_FieldInfo_,
	_AuthenticationHeader_MethodInfo_,
	nullptr,
	nullptr,
	_AuthenticationHeader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.AuthenticationHeader$SchemeMapValue"
};

$Object* allocate$AuthenticationHeader($Class* clazz) {
	return $of($alloc(AuthenticationHeader));
}

$String* AuthenticationHeader::authPref = nullptr;

$String* AuthenticationHeader::toString() {
	return $str({"AuthenticationHeader: prefer "_s, this->preferred_r});
}

void AuthenticationHeader::init$($String* hdrname, $MessageHeader* response, $HttpCallerInfo* hci, bool dontUseNegotiate) {
	AuthenticationHeader::init$(hdrname, response, hci, dontUseNegotiate, $($Collections::emptySet()));
}

void AuthenticationHeader::init$($String* hdrname, $MessageHeader* response, $HttpCallerInfo* hci, bool dontUseNegotiate, $Set* disabledSchemes) {
	this->dontUseNegotiate = false;
	$set(this, hci, hci);
	this->dontUseNegotiate = dontUseNegotiate;
	$set(this, rsp, response);
	$set(this, hdrname, hdrname);
	$set(this, schemes, $new($HashMap));
	parse(disabledSchemes);
}

$HttpCallerInfo* AuthenticationHeader::getHttpCallerInfo() {
	return this->hci;
}

void AuthenticationHeader::parse($Set* disabledSchemes) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, iter, $nc(this->rsp)->multiValueIterator(this->hdrname));
	while ($nc(iter)->hasNext()) {
		$var($String, raw, $cast($String, iter->next()));
		$var($HeaderParser, hp, $new($HeaderParser, raw));
		$var($Iterator, keys, hp->keys());
		int32_t i = 0;
		int32_t lastSchemeIndex = 0;
		for (i = 0, lastSchemeIndex = -1; $nc(keys)->hasNext(); ++i) {
			keys->next();
			if (hp->findValue(i) == nullptr) {
				if (lastSchemeIndex != -1) {
					$var($HeaderParser, hpn, hp->subsequence(lastSchemeIndex, i));
					$var($String, scheme, $nc(hpn)->findKey(0));
					if (!$nc(disabledSchemes)->contains(scheme)) {
						$nc(this->schemes)->put(scheme, $$new($AuthenticationHeader$SchemeMapValue, hpn, raw));
					}
				}
				lastSchemeIndex = i;
			}
		}
		if (i > lastSchemeIndex) {
			$var($HeaderParser, hpn, hp->subsequence(lastSchemeIndex, i));
			$var($String, scheme, $nc(hpn)->findKey(0));
			if (!$nc(disabledSchemes)->contains(scheme)) {
				$nc(this->schemes)->put(scheme, $$new($AuthenticationHeader$SchemeMapValue, hpn, raw));
			}
		}
	}
	$var($AuthenticationHeader$SchemeMapValue, v, nullptr);
	if (AuthenticationHeader::authPref == nullptr || ($assign(v, $cast($AuthenticationHeader$SchemeMapValue, $nc(this->schemes)->get(AuthenticationHeader::authPref)))) == nullptr) {
		if (v == nullptr && !this->dontUseNegotiate) {
			$var($AuthenticationHeader$SchemeMapValue, tmp, $cast($AuthenticationHeader$SchemeMapValue, $nc(this->schemes)->get("negotiate"_s)));
			if (tmp != nullptr) {
				if (this->hci == nullptr || !$NegotiateAuthentication::isSupported($$new($HttpCallerInfo, this->hci, "Negotiate"_s))) {
					$assign(tmp, nullptr);
				}
				$assign(v, tmp);
			}
		}
		if (v == nullptr && !this->dontUseNegotiate) {
			$var($AuthenticationHeader$SchemeMapValue, tmp, $cast($AuthenticationHeader$SchemeMapValue, $nc(this->schemes)->get("kerberos"_s)));
			if (tmp != nullptr) {
				if (this->hci == nullptr || !$NegotiateAuthentication::isSupported($$new($HttpCallerInfo, this->hci, "Kerberos"_s))) {
					$assign(tmp, nullptr);
				}
				$assign(v, tmp);
			}
		}
		if (v == nullptr) {
			if (($assign(v, $cast($AuthenticationHeader$SchemeMapValue, $nc(this->schemes)->get("digest"_s)))) == nullptr) {
				$init($NTLMAuthenticationProxy);
				if (!$NTLMAuthenticationProxy::supported || (($assign(v, $cast($AuthenticationHeader$SchemeMapValue, $nc(this->schemes)->get("ntlm"_s)))) == nullptr)) {
					$assign(v, $cast($AuthenticationHeader$SchemeMapValue, $nc(this->schemes)->get("basic"_s)));
				}
			}
		}
	} else if (this->dontUseNegotiate && $nc(AuthenticationHeader::authPref)->equals("negotiate"_s)) {
		$assign(v, nullptr);
	}
	if (v != nullptr) {
		$set(this, preferred, v->parser);
		$set(this, preferred_r, v->raw);
	}
}

$HeaderParser* AuthenticationHeader::headerParser() {
	return this->preferred;
}

$String* AuthenticationHeader::scheme() {
	if (this->preferred != nullptr) {
		return $nc(this->preferred)->findKey(0);
	} else {
		return nullptr;
	}
}

$String* AuthenticationHeader::raw() {
	return this->preferred_r;
}

bool AuthenticationHeader::isPresent() {
	return this->preferred != nullptr;
}

void clinit$AuthenticationHeader($Class* class$) {
	$assignStatic(AuthenticationHeader::authPref, nullptr);
	{
		$assignStatic(AuthenticationHeader::authPref, $GetPropertyAction::privilegedGetProperty("http.auth.preference"_s));
		if (AuthenticationHeader::authPref != nullptr) {
			$assignStatic(AuthenticationHeader::authPref, $nc(AuthenticationHeader::authPref)->toLowerCase());
			bool var$0 = $nc(AuthenticationHeader::authPref)->equals("spnego"_s);
			if (var$0 || $nc(AuthenticationHeader::authPref)->equals("kerberos"_s)) {
				$assignStatic(AuthenticationHeader::authPref, "negotiate"_s);
			}
		}
	}
}

AuthenticationHeader::AuthenticationHeader() {
}

$Class* AuthenticationHeader::load$($String* name, bool initialize) {
	$loadClass(AuthenticationHeader, name, initialize, &_AuthenticationHeader_ClassInfo_, clinit$AuthenticationHeader, allocate$AuthenticationHeader);
	return class$;
}

$Class* AuthenticationHeader::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun