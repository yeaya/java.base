#include <sun/security/provider/certpath/X509CertificatePair.h>
#include <java/io/IOException.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/CertificateEncodingException.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/X509Certificate.h>
#include <java/security/interfaces/DSAParams.h>
#include <java/security/interfaces/DSAPublicKey.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/provider/X509Factory.h>
#include <sun/security/util/Cache$EqualByteArray.h>
#include <sun/security/util/Cache.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

#undef TAG_CONTEXT
#undef TAG_FORWARD
#undef TAG_REVERSE

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $PublicKey = ::java::security::PublicKey;
using $CertificateEncodingException = ::java::security::cert::CertificateEncodingException;
using $CertificateException = ::java::security::cert::CertificateException;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $DSAPublicKey = ::java::security::interfaces::DSAPublicKey;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $X509Factory = ::sun::security::provider::X509Factory;
using $Cache = ::sun::security::util::Cache;
using $Cache$EqualByteArray = ::sun::security::util::Cache$EqualByteArray;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$Cache* X509CertificatePair::cache = nullptr;

void X509CertificatePair::init$() {
}

void X509CertificatePair::init$($X509Certificate* forward, $X509Certificate* reverse) {
	if (forward == nullptr && reverse == nullptr) {
		$throwNew($CertificateException, "at least one of certificate pair must be non-null"_s);
	}
	$set(this, forward, forward);
	$set(this, reverse, reverse);
	checkPair();
}

void X509CertificatePair::init$($bytes* encoded) {
	$useLocalObjectStack();
	try {
		parse($$new($DerValue, encoded));
		$set(this, encoded, encoded);
	} catch ($IOException& ex) {
		$throwNew($CertificateException, $(ex->toString()));
	}
	checkPair();
}

void X509CertificatePair::clearCache() {
	$init(X509CertificatePair);
	$synchronized(class$) {
		$nc(X509CertificatePair::cache)->clear();
	}
}

X509CertificatePair* X509CertificatePair::generateCertificatePair($bytes* encoded) {
	$init(X509CertificatePair);
	$synchronized(class$) {
		$useLocalObjectStack();
		$var($Object, key, $new($Cache$EqualByteArray, encoded));
		$var(X509CertificatePair, pair, $cast(X509CertificatePair, $nc(X509CertificatePair::cache)->get(key)));
		if (pair != nullptr) {
			return pair;
		}
		$assign(pair, $new(X509CertificatePair, encoded));
		$assign(key, $new($Cache$EqualByteArray, pair->encoded));
		X509CertificatePair::cache->put(key, pair);
		return pair;
	}
}

void X509CertificatePair::setForward($X509Certificate* cert) {
	checkPair();
	$set(this, forward, cert);
}

void X509CertificatePair::setReverse($X509Certificate* cert) {
	checkPair();
	$set(this, reverse, cert);
}

$X509Certificate* X509CertificatePair::getForward() {
	return this->forward;
}

$X509Certificate* X509CertificatePair::getReverse() {
	return this->reverse;
}

$bytes* X509CertificatePair::getEncoded() {
	$useLocalObjectStack();
	try {
		if (this->encoded == nullptr) {
			$var($DerOutputStream, tmp, $new($DerOutputStream));
			emit(tmp);
			$set(this, encoded, tmp->toByteArray());
		}
	} catch ($IOException& ex) {
		$throwNew($CertificateEncodingException, $(ex->toString()));
	}
	return this->encoded;
}

$String* X509CertificatePair::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("X.509 Certificate Pair: [\n"_s);
	if (this->forward != nullptr) {
		sb->append("  Forward: "_s)->append(this->forward)->append("\n"_s);
	}
	if (this->reverse != nullptr) {
		sb->append("  Reverse: "_s)->append(this->reverse)->append("\n"_s);
	}
	sb->append("]"_s);
	return sb->toString();
}

void X509CertificatePair::parse($DerValue* val) {
	$useLocalObjectStack();
	if ($nc(val)->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Sequence tag missing for X509CertificatePair"_s);
	}
	while (val->data$ != nullptr && val->data$->available() != 0) {
		$var($DerValue, opt, val->data$->getDerValue());
		int16_t tag = (int8_t)($nc(opt)->tag & 0x1f);
		switch (tag) {
		case X509CertificatePair::TAG_FORWARD:
			{
				bool var$0 = opt->isContextSpecific();
				if (var$0 && opt->isConstructed()) {
					if (this->forward != nullptr) {
						$throwNew($IOException, "Duplicate forward certificate in X509CertificatePair"_s);
					}
					$assign(opt, $nc(opt->data$)->getDerValue());
					$set(this, forward, $X509Factory::intern($$new($X509CertImpl, $($nc(opt)->toByteArray()))));
				}
				break;
			}
		case X509CertificatePair::TAG_REVERSE:
			{
				bool var$1 = opt->isContextSpecific();
				if (var$1 && opt->isConstructed()) {
					if (this->reverse != nullptr) {
						$throwNew($IOException, "Duplicate reverse certificate in X509CertificatePair"_s);
					}
					$assign(opt, $nc(opt->data$)->getDerValue());
					$set(this, reverse, $X509Factory::intern($$new($X509CertImpl, $($nc(opt)->toByteArray()))));
				}
				break;
			}
		default:
			$throwNew($IOException, "Invalid encoding of X509CertificatePair"_s);
		}
	}
	if (this->forward == nullptr && this->reverse == nullptr) {
		$throwNew($CertificateException, "at least one of certificate pair must be non-null"_s);
	}
}

void X509CertificatePair::emit($DerOutputStream* out) {
	$useLocalObjectStack();
	$var($DerOutputStream, tagged, $new($DerOutputStream));
	if (this->forward != nullptr) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putDerValue($$new($DerValue, $(this->forward->getEncoded())));
		tagged->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, X509CertificatePair::TAG_FORWARD), tmp);
	}
	if (this->reverse != nullptr) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putDerValue($$new($DerValue, $(this->reverse->getEncoded())));
		tagged->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, X509CertificatePair::TAG_REVERSE), tmp);
	}
	$nc(out)->write($DerValue::tag_Sequence, tagged);
}

void X509CertificatePair::checkPair() {
	$useLocalObjectStack();
	if (this->forward == nullptr || this->reverse == nullptr) {
		return;
	}
	$var($X500Principal, fwSubject, $nc(this->forward)->getSubjectX500Principal());
	$var($X500Principal, fwIssuer, this->forward->getIssuerX500Principal());
	$var($X500Principal, rvSubject, $nc(this->reverse)->getSubjectX500Principal());
	$var($X500Principal, rvIssuer, this->reverse->getIssuerX500Principal());
	bool var$0 = !$nc(fwIssuer)->equals(rvSubject);
	if (var$0 || !$nc(rvIssuer)->equals(fwSubject)) {
		$throwNew($CertificateException, "subject and issuer names in forward and reverse certificates do not match"_s);
	}
	try {
		$var($PublicKey, pk, $nc(this->reverse)->getPublicKey());
		if (!($instanceOf($DSAPublicKey, pk)) || $cast($DSAPublicKey, pk)->getParams() != nullptr) {
			$nc(this->forward)->verify(pk);
		}
		$assign(pk, $nc(this->forward)->getPublicKey());
		if (!($instanceOf($DSAPublicKey, pk)) || $cast($DSAPublicKey, pk)->getParams() != nullptr) {
			$nc(this->reverse)->verify(pk);
		}
	} catch ($GeneralSecurityException& e) {
		$throwNew($CertificateException, $$str({"invalid signature: "_s, $(e->getMessage())}));
	}
}

void X509CertificatePair::clinit$($Class* clazz) {
	$assignStatic(X509CertificatePair::cache, $Cache::newSoftMemoryCache(750));
}

X509CertificatePair::X509CertificatePair() {
}

$Class* X509CertificatePair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TAG_FORWARD", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X509CertificatePair, TAG_FORWARD)},
		{"TAG_REVERSE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X509CertificatePair, TAG_REVERSE)},
		{"forward", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE, $field(X509CertificatePair, forward)},
		{"reverse", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE, $field(X509CertificatePair, reverse)},
		{"encoded", "[B", nullptr, $PRIVATE, $field(X509CertificatePair, encoded)},
		{"cache", "Lsun/security/util/Cache;", "Lsun/security/util/Cache<Ljava/lang/Object;Lsun/security/provider/certpath/X509CertificatePair;>;", $PRIVATE | $STATIC | $FINAL, $staticField(X509CertificatePair, cache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(X509CertificatePair, init$, void)},
		{"<init>", "(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(X509CertificatePair, init$, void, $X509Certificate*, $X509Certificate*), "java.security.cert.CertificateException"},
		{"<init>", "([B)V", nullptr, $PRIVATE, $method(X509CertificatePair, init$, void, $bytes*), "java.security.cert.CertificateException"},
		{"checkPair", "()V", nullptr, $PRIVATE, $method(X509CertificatePair, checkPair, void), "java.security.cert.CertificateException"},
		{"clearCache", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(X509CertificatePair, clearCache, void)},
		{"emit", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PRIVATE, $method(X509CertificatePair, emit, void, $DerOutputStream*), "java.io.IOException,java.security.cert.CertificateEncodingException"},
		{"generateCertificatePair", "([B)Lsun/security/provider/certpath/X509CertificatePair;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(X509CertificatePair, generateCertificatePair, X509CertificatePair*, $bytes*), "java.security.cert.CertificateException"},
		{"getEncoded", "()[B", nullptr, $PUBLIC, $virtualMethod(X509CertificatePair, getEncoded, $bytes*), "java.security.cert.CertificateEncodingException"},
		{"getForward", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $virtualMethod(X509CertificatePair, getForward, $X509Certificate*)},
		{"getReverse", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $virtualMethod(X509CertificatePair, getReverse, $X509Certificate*)},
		{"parse", "(Lsun/security/util/DerValue;)V", nullptr, $PRIVATE, $method(X509CertificatePair, parse, void, $DerValue*), "java.io.IOException,java.security.cert.CertificateException"},
		{"setForward", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $virtualMethod(X509CertificatePair, setForward, void, $X509Certificate*), "java.security.cert.CertificateException"},
		{"setReverse", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $virtualMethod(X509CertificatePair, setReverse, void, $X509Certificate*), "java.security.cert.CertificateException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(X509CertificatePair, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.provider.certpath.X509CertificatePair",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(X509CertificatePair, name, initialize, &classInfo$$, X509CertificatePair::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(X509CertificatePair);
	});
	return class$;
}

$Class* X509CertificatePair::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun