#include <com/sun/security/ntlm/Client.h>

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
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/util/Arrays.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef NTLM
#undef PROTOCOL
#undef NTLM2
#undef US

using $NTLM = ::com::sun::security::ntlm::NTLM;
using $NTLM$Reader = ::com::sun::security::ntlm::NTLM$Reader;
using $NTLM$Writer = ::com::sun::security::ntlm::NTLM$Writer;
using $NTLMException = ::com::sun::security::ntlm::NTLMException;
using $Version = ::com::sun::security::ntlm::Version;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Arrays = ::java::util::Arrays;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

$FieldInfo _Client_FieldInfo_[] = {
	{"hostname", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Client, hostname)},
	{"username", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Client, username)},
	{"domain", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Client, domain)},
	{"pw1", "[B", nullptr, $PRIVATE, $field(Client, pw1)},
	{"pw2", "[B", nullptr, $PRIVATE, $field(Client, pw2)},
	{}
};

$MethodInfo _Client_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[C)V", nullptr, $PUBLIC, $method(static_cast<void(Client::*)($String*,$String*,$String*,$String*,$chars*)>(&Client::init$)), "com.sun.security.ntlm.NTLMException"},
	{"debug", "([B)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"debug", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC, $method(static_cast<void(Client::*)()>(&Client::dispose))},
	{"getDomain", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Client::*)()>(&Client::getDomain))},
	{"type1", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(Client::*)()>(&Client::type1))},
	{"type3", "([B[B)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(Client::*)($bytes*,$bytes*)>(&Client::type3)), "com.sun.security.ntlm.NTLMException"},
	{}
};

$ClassInfo _Client_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.security.ntlm.Client",
	"com.sun.security.ntlm.NTLM",
	nullptr,
	_Client_FieldInfo_,
	_Client_MethodInfo_
};

$Object* allocate$Client($Class* clazz) {
	return $of($alloc(Client));
}

void Client::init$($String* version, $String* hostname, $String* username, $String* domain, $chars* password) {
	$NTLM::init$(version);
	if (username == nullptr || password == nullptr) {
		$throwNew($NTLMException, $NTLMException::PROTOCOL, "username/password cannot be null"_s);
	}
	$set(this, hostname, hostname);
	$set(this, username, username);
	$set(this, domain, domain == nullptr ? ""_s : domain);
	$set(this, pw1, getP1(password));
	$set(this, pw2, getP2(password));
	debug("NTLM Client: (h,u,t,version(v)) = (%s,%s,%s,%s(%s))\n"_s, $$new($ObjectArray, {
		$of(hostname),
		$of(username),
		$of(domain),
		$of(version),
		$($of(this->v->toString()))
	}));
}

$bytes* Client::type1() {
	$var($NTLM$Writer, p, $new($NTLM$Writer, 1, 32));
	int32_t flags = 0x00008207;
	$init($Version);
	if (this->v != $Version::NTLM) {
		flags |= 0x00080000;
	}
	p->writeInt(12, flags);
	debug("NTLM Client: Type 1 created\n"_s, $$new($ObjectArray, 0));
	debug($(p->getBytes()));
	return p->getBytes();
}

$bytes* Client::type3($bytes* type2, $bytes* nonce) {
	$init($Version);
	if (type2 == nullptr || (this->v != $Version::NTLM && nonce == nullptr)) {
		$throwNew($NTLMException, $NTLMException::PROTOCOL, "type2 and nonce cannot be null"_s);
	}
	debug("NTLM Client: Type 2 received\n"_s, $$new($ObjectArray, 0));
	debug(type2);
	$var($NTLM$Reader, r, $new($NTLM$Reader, type2));
	$var($bytes, challenge, r->readBytes(24, 8));
	int32_t inputFlags = r->readInt(20);
	bool unicode = ((int32_t)(inputFlags & (uint32_t)1)) == 1;
	int32_t flags = 0x00088200 | ((int32_t)(inputFlags & (uint32_t)3));
	$var($NTLM$Writer, p, $new($NTLM$Writer, 3, 64));
	$var($bytes, lm, nullptr);
	$var($bytes, ntlm, nullptr);
	p->writeSecurityBuffer(28, this->domain, unicode);
	p->writeSecurityBuffer(36, this->username, unicode);
	p->writeSecurityBuffer(44, this->hostname, unicode);
	if (this->v == $Version::NTLM) {
		$var($bytes, lmhash, calcLMHash(this->pw1));
		$var($bytes, nthash, calcNTHash(this->pw2));
		if (this->writeLM) {
			$assign(lm, calcResponse(lmhash, challenge));
		}
		if (this->writeNTLM) {
			$assign(ntlm, calcResponse(nthash, challenge));
		}
	} else {
		if (this->v == $Version::NTLM2) {
			$var($bytes, nthash, calcNTHash(this->pw2));
			$assign(lm, ntlm2LM(nonce));
			$assign(ntlm, ntlm2NTLM(nthash, nonce, challenge));
		} else {
			$var($bytes, nthash, calcNTHash(this->pw2));
			if (this->writeLM) {
				$init($Locale);
				$assign(lm, calcV2(nthash, $$str({$($nc(this->username)->toUpperCase($Locale::US)), this->domain}), nonce, challenge));
			}
			if (this->writeNTLM) {
				$var($bytes, alist, (((int32_t)(inputFlags & (uint32_t)0x00800000)) != 0) ? r->readSecurityBuffer(40) : $new($bytes, 0));
				$var($bytes, blob, $new($bytes, 32 + $nc(alist)->length));
				$System::arraycopy($$new($bytes, {
					(int8_t)1,
					(int8_t)1,
					(int8_t)0,
					(int8_t)0,
					(int8_t)0,
					(int8_t)0,
					(int8_t)0,
					(int8_t)0
				}), 0, blob, 0, 8);
				$var($bytes, time, $nc($($nc($($nc($($BigInteger::valueOf($$new($Date)->getTime())))->add($$new($BigInteger, "11644473600000"_s))))->multiply($($BigInteger::valueOf((int64_t)10000)))))->toByteArray());
				for (int32_t i = 0; i < $nc(time)->length; ++i) {
					blob->set(8 + time->length - i - 1, time->get(i));
				}
				$System::arraycopy(nonce, 0, blob, 16, 8);
				$System::arraycopy($$new($bytes, {
					(int8_t)0,
					(int8_t)0,
					(int8_t)0,
					(int8_t)0
				}), 0, blob, 24, 4);
				$System::arraycopy(alist, 0, blob, 28, alist->length);
				$System::arraycopy($$new($bytes, {
					(int8_t)0,
					(int8_t)0,
					(int8_t)0,
					(int8_t)0
				}), 0, blob, 28 + alist->length, 4);
				$init($Locale);
				$assign(ntlm, calcV2(nthash, $$str({$($nc(this->username)->toUpperCase($Locale::US)), this->domain}), blob, challenge));
			}
		}
	}
	p->writeSecurityBuffer(12, lm);
	p->writeSecurityBuffer(20, ntlm);
	p->writeSecurityBuffer(52, $$new($bytes, 0));
	p->writeInt(60, flags);
	debug("NTLM Client: Type 3 created\n"_s, $$new($ObjectArray, 0));
	debug($(p->getBytes()));
	return p->getBytes();
}

$String* Client::getDomain() {
	return this->domain;
}

void Client::dispose() {
	$Arrays::fill(this->pw1, (int8_t)0);
	$Arrays::fill(this->pw2, (int8_t)0);
}

void Client::debug($bytes* bytes) {
	$NTLM::debug(bytes);
}

void Client::debug($String* format, $ObjectArray* args) {
	$NTLM::debug(format, args);
}

Client::Client() {
}

$Class* Client::load$($String* name, bool initialize) {
	$loadClass(Client, name, initialize, &_Client_ClassInfo_, allocate$Client);
	return class$;
}

$Class* Client::class$ = nullptr;

			} // ntlm
		} // security
	} // sun
} // com