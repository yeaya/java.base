#include <com/sun/security/ntlm/Server.h>

#include <com/sun/security/ntlm/NTLM$Reader.h>
#include <com/sun/security/ntlm/NTLM$Writer.h>
#include <com/sun/security/ntlm/NTLM.h>
#include <com/sun/security/ntlm/NTLMException.h>
#include <com/sun/security/ntlm/Version.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef AUTH_FAILED
#undef NTLM
#undef NTLM2
#undef PROTOCOL
#undef US
#undef USER_UNKNOWN

using $NTLM = ::com::sun::security::ntlm::NTLM;
using $NTLM$Reader = ::com::sun::security::ntlm::NTLM$Reader;
using $NTLM$Writer = ::com::sun::security::ntlm::NTLM$Writer;
using $NTLMException = ::com::sun::security::ntlm::NTLMException;
using $Version = ::com::sun::security::ntlm::Version;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

$FieldInfo _Server_FieldInfo_[] = {
	{"domain", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Server, domain)},
	{"allVersion", "Z", nullptr, $PRIVATE | $FINAL, $field(Server, allVersion)},
	{}
};

$MethodInfo _Server_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Server::*)($String*,$String*)>(&Server::init$)), "com.sun.security.ntlm.NTLMException"},
	{"debug", "([B)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"debug", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getPassword", "(Ljava/lang/String;Ljava/lang/String;)[C", nullptr, $PUBLIC | $ABSTRACT},
	{"type2", "([B[B)[B", nullptr, $PUBLIC, nullptr, "com.sun.security.ntlm.NTLMException"},
	{"verify", "([B[B)[Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "com.sun.security.ntlm.NTLMException"},
	{}
};

$ClassInfo _Server_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.security.ntlm.Server",
	"com.sun.security.ntlm.NTLM",
	nullptr,
	_Server_FieldInfo_,
	_Server_MethodInfo_
};

$Object* allocate$Server($Class* clazz) {
	return $of($alloc(Server));
}

void Server::init$($String* version, $String* domain) {
	$NTLM::init$(version);
	if (domain == nullptr) {
		$throwNew($NTLMException, $NTLMException::PROTOCOL, "domain cannot be null"_s);
	}
	this->allVersion = (version == nullptr);
	$set(this, domain, domain);
	debug("NTLM Server: (t,version) = (%s,%s)\n"_s, $$new($ObjectArray, {
		$of(domain),
		$of(version)
	}));
}

$bytes* Server::type2($bytes* type1, $bytes* nonce) {
	if (nonce == nullptr) {
		$throwNew($NTLMException, $NTLMException::PROTOCOL, "nonce cannot be null"_s);
	}
	debug("NTLM Server: Type 1 received\n"_s, $$new($ObjectArray, 0));
	if (type1 != nullptr) {
		debug(type1);
	}
	$var($NTLM$Writer, p, $new($NTLM$Writer, 2, 32));
	int32_t flags = 0x00090205;
	p->writeSecurityBuffer(12, this->domain, true);
	p->writeInt(20, flags);
	p->writeBytes(24, nonce);
	debug("NTLM Server: Type 2 created\n"_s, $$new($ObjectArray, 0));
	debug($(p->getBytes()));
	return p->getBytes();
}

$StringArray* Server::verify($bytes* type3, $bytes* nonce) {
	if (type3 == nullptr || nonce == nullptr) {
		$throwNew($NTLMException, $NTLMException::PROTOCOL, "type1 or nonce cannot be null"_s);
	}
	debug("NTLM Server: Type 3 received\n"_s, $$new($ObjectArray, 0));
	if (type3 != nullptr) {
		debug(type3);
	}
	$var($NTLM$Reader, r, $new($NTLM$Reader, type3));
	$var($String, username, r->readSecurityBuffer(36, true));
	$var($String, hostname, r->readSecurityBuffer(44, true));
	$var($String, incomingDomain, r->readSecurityBuffer(28, true));
	bool verified = false;
	$var($chars, password, getPassword(incomingDomain, username));
	if (password == nullptr) {
		$throwNew($NTLMException, $NTLMException::USER_UNKNOWN, "Unknown user"_s);
	}
	$var($bytes, incomingLM, r->readSecurityBuffer(12));
	$var($bytes, incomingNTLM, r->readSecurityBuffer(20));
	$init($Version);
	if (!verified && (this->allVersion || this->v == $Version::NTLM)) {
		if ($nc(incomingLM)->length > 0) {
			$var($bytes, pw1, getP1(password));
			$var($bytes, lmhash, calcLMHash(pw1));
			$var($bytes, lmresponse, calcResponse(lmhash, nonce));
			if ($Arrays::equals(lmresponse, incomingLM)) {
				verified = true;
			}
		}
		if ($nc(incomingNTLM)->length > 0) {
			$var($bytes, pw2, getP2(password));
			$var($bytes, nthash, calcNTHash(pw2));
			$var($bytes, ntresponse, calcResponse(nthash, nonce));
			if ($Arrays::equals(ntresponse, incomingNTLM)) {
				verified = true;
			}
		}
		debug($$str({"NTLM Server: verify using NTLM: "_s, $$str(verified), "\n"_s}), $$new($ObjectArray, 0));
	}
	if (!verified && (this->allVersion || this->v == $Version::NTLM2)) {
		$var($bytes, pw2, getP2(password));
		$var($bytes, nthash, calcNTHash(pw2));
		$var($bytes, clientNonce, $Arrays::copyOf(incomingLM, 8));
		$var($bytes, ntlmresponse, ntlm2NTLM(nthash, clientNonce, nonce));
		if ($Arrays::equals(incomingNTLM, ntlmresponse)) {
			verified = true;
		}
		debug($$str({"NTLM Server: verify using NTLM2: "_s, $$str(verified), "\n"_s}), $$new($ObjectArray, 0));
	}
	if (!verified && (this->allVersion || this->v == $Version::NTLMv2)) {
		$var($bytes, pw2, getP2(password));
		$var($bytes, nthash, calcNTHash(pw2));
		if ($nc(incomingLM)->length > 0) {
			$var($bytes, clientNonce, $Arrays::copyOfRange(incomingLM, 16, incomingLM->length));
			$init($Locale);
			$var($bytes, lmresponse, calcV2(nthash, $$str({$($nc(username)->toUpperCase($Locale::US)), incomingDomain}), clientNonce, nonce));
			if ($Arrays::equals(lmresponse, incomingLM)) {
				verified = true;
			}
		}
		if ($nc(incomingNTLM)->length > 0) {
			$var($bytes, clientBlob, $Arrays::copyOfRange(incomingNTLM, 16, incomingNTLM->length));
			$init($Locale);
			$var($bytes, ntlmresponse, calcV2(nthash, $$str({$($nc(username)->toUpperCase($Locale::US)), incomingDomain}), clientBlob, nonce));
			if ($Arrays::equals(ntlmresponse, incomingNTLM)) {
				verified = true;
			}
		}
		debug($$str({"NTLM Server: verify using NTLMv2: "_s, $$str(verified), "\n"_s}), $$new($ObjectArray, 0));
	}
	if (!verified) {
		$throwNew($NTLMException, $NTLMException::AUTH_FAILED, "None of LM and NTLM verified"_s);
	}
	return $new($StringArray, {
		username,
		hostname,
		incomingDomain
	});
}

void Server::debug($bytes* bytes) {
	$NTLM::debug(bytes);
}

void Server::debug($String* format, $ObjectArray* args) {
	$NTLM::debug(format, args);
}

Server::Server() {
}

$Class* Server::load$($String* name, bool initialize) {
	$loadClass(Server, name, initialize, &_Server_ClassInfo_, allocate$Server);
	return class$;
}

$Class* Server::class$ = nullptr;

			} // ntlm
		} // security
	} // sun
} // com