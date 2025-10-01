#include <sun/security/provider/certpath/X509CertificatePair.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $PublicKey = ::java::security::PublicKey;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateEncodingException = ::java::security::cert::CertificateEncodingException;
using $CertificateException = ::java::security::cert::CertificateException;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $DSAKey = ::java::security::interfaces::DSAKey;
using $DSAParams = ::java::security::interfaces::DSAParams;
using $DSAPublicKey = ::java::security::interfaces::DSAPublicKey;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $X509Factory = ::sun::security::provider::X509Factory;
using $Cache = ::sun::security::util::Cache;
using $Cache$EqualByteArray = ::sun::security::util::Cache$EqualByteArray;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _X509CertificatePair_FieldInfo_[] = {
	{"TAG_FORWARD", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X509CertificatePair, TAG_FORWARD)},
	{"TAG_REVERSE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X509CertificatePair, TAG_REVERSE)},
	{"forward", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE, $field(X509CertificatePair, forward)},
	{"reverse", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE, $field(X509CertificatePair, reverse)},
	{"encoded", "[B", nullptr, $PRIVATE, $field(X509CertificatePair, encoded)},
	{"cache", "Lsun/security/util/Cache;", "Lsun/security/util/Cache<Ljava/lang/Object;Lsun/security/provider/certpath/X509CertificatePair;>;", $PRIVATE | $STATIC | $FINAL, $staticField(X509CertificatePair, cache)},
	{}
};

$MethodInfo _X509CertificatePair_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X509CertificatePair::*)()>(&X509CertificatePair::init$))},
	{"<init>", "(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(static_cast<void(X509CertificatePair::*)($X509Certificate*,$X509Certificate*)>(&X509CertificatePair::init$)), "java.security.cert.CertificateException"},
	{"<init>", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(X509CertificatePair::*)($bytes*)>(&X509CertificatePair::init$)), "java.security.cert.CertificateException"},
	{"checkPair", "()V", nullptr, $PRIVATE, $method(static_cast<void(X509CertificatePair::*)()>(&X509CertificatePair::checkPair)), "java.security.cert.CertificateException"},
	{"clearCache", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&X509CertificatePair::clearCache))},
	{"emit", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(X509CertificatePair::*)($DerOutputStream*)>(&X509CertificatePair::emit)), "java.io.IOException,java.security.cert.CertificateEncodingException"},
	{"generateCertificatePair", "([B)Lsun/security/provider/certpath/X509CertificatePair;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<X509CertificatePair*(*)($bytes*)>(&X509CertificatePair::generateCertificatePair)), "java.security.cert.CertificateException"},
	{"getEncoded", "()[B", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateEncodingException"},
	{"getForward", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC},
	{"getReverse", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC},
	{"parse", "(Lsun/security/util/DerValue;)V", nullptr, $PRIVATE, $method(static_cast<void(X509CertificatePair::*)($DerValue*)>(&X509CertificatePair::parse)), "java.io.IOException,java.security.cert.CertificateException"},
	{"setForward", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException"},
	{"setReverse", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _X509CertificatePair_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.certpath.X509CertificatePair",
	"java.lang.Object",
	nullptr,
	_X509CertificatePair_FieldInfo_,
	_X509CertificatePair_MethodInfo_
};

$Object* allocate$X509CertificatePair($Class* clazz) {
	return $of($alloc(X509CertificatePair));
}

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
	try {
		parse($$new($DerValue, encoded));
		$set(this, encoded, encoded);
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$throwNew($CertificateException, $(ex->toString()));
	}
	checkPair();
}

void X509CertificatePair::clearCache() {
	$load(X509CertificatePair);
	$synchronized(class$) {
		$init(X509CertificatePair);
		$nc(X509CertificatePair::cache)->clear();
	}
}

X509CertificatePair* X509CertificatePair::generateCertificatePair($bytes* encoded) {
	$load(X509CertificatePair);
	$synchronized(class$) {
		$init(X509CertificatePair);
		$var($Object, key, $new($Cache$EqualByteArray, encoded));
		$var(X509CertificatePair, pair, $cast(X509CertificatePair, $nc(X509CertificatePair::cache)->get(key)));
		if (pair != nullptr) {
			return pair;
		}
		$assign(pair, $new(X509CertificatePair, encoded));
		$assign(key, $new($Cache$EqualByteArray, pair->encoded));
		$nc(X509CertificatePair::cache)->put(key, pair);
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
	try {
		if (this->encoded == nullptr) {
			$var($DerOutputStream, tmp, $new($DerOutputStream));
			emit(tmp);
			$set(this, encoded, tmp->toByteArray());
		}
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$throwNew($CertificateEncodingException, $(ex->toString()));
	}
	return this->encoded;
}

$String* X509CertificatePair::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("X.509 Certificate Pair: [\n"_s);
	if (this->forward != nullptr) {
		sb->append("  Forward: "_s)->append($of(this->forward))->append("\n"_s);
	}
	if (this->reverse != nullptr) {
		sb->append("  Reverse: "_s)->append($of(this->reverse))->append("\n"_s);
	}
	sb->append("]"_s);
	return sb->toString();
}

void X509CertificatePair::parse($DerValue* val) {
	if ($nc(val)->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Sequence tag missing for X509CertificatePair"_s);
	}
	while ($nc(val)->data$ != nullptr && $nc(val->data$)->available() != 0) {
		$var($DerValue, opt, $nc(val->data$)->getDerValue());
		int16_t tag = (int8_t)((int32_t)($nc(opt)->tag & (uint32_t)31));
		switch (tag) {
		case X509CertificatePair::TAG_FORWARD:
			{
				bool var$0 = opt->isContextSpecific();
				if (var$0 && opt->isConstructed()) {
					if (this->forward != nullptr) {
						$throwNew($IOException, "Duplicate forward certificate in X509CertificatePair"_s);
					}
					$assign(opt, $nc(opt->data$)->getDerValue());
					$set(this, forward, $X509Factory::intern(static_cast<$X509Certificate*>($$new($X509CertImpl, $($nc(opt)->toByteArray())))));
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
					$set(this, reverse, $X509Factory::intern(static_cast<$X509Certificate*>($$new($X509CertImpl, $($nc(opt)->toByteArray())))));
				}
				break;
			}
		default:
			{
				$throwNew($IOException, "Invalid encoding of X509CertificatePair"_s);
			}
		}
	}
	if (this->forward == nullptr && this->reverse == nullptr) {
		$throwNew($CertificateException, "at least one of certificate pair must be non-null"_s);
	}
}

void X509CertificatePair::emit($DerOutputStream* out) {
	$var($DerOutputStream, tagged, $new($DerOutputStream));
	if (this->forward != nullptr) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putDerValue($$new($DerValue, $($nc(this->forward)->getEncoded())));
		tagged->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, X509CertificatePair::TAG_FORWARD), tmp);
	}
	if (this->reverse != nullptr) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putDerValue($$new($DerValue, $($nc(this->reverse)->getEncoded())));
		tagged->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, X509CertificatePair::TAG_REVERSE), tmp);
	}
	$nc(out)->write($DerValue::tag_Sequence, tagged);
}

void X509CertificatePair::checkPair() {
	if (this->forward == nullptr || this->reverse == nullptr) {
		return;
	}
	$var($X500Principal, fwSubject, $nc(this->forward)->getSubjectX500Principal());
	$var($X500Principal, fwIssuer, $nc(this->forward)->getIssuerX500Principal());
	$var($X500Principal, rvSubject, $nc(this->reverse)->getSubjectX500Principal());
	$var($X500Principal, rvIssuer, $nc(this->reverse)->getIssuerX500Principal());
	bool var$0 = !$nc(fwIssuer)->equals(rvSubject);
	if (var$0 || !$nc(rvIssuer)->equals(fwSubject)) {
		$throwNew($CertificateException, "subject and issuer names in forward and reverse certificates do not match"_s);
	}
	try {
		$var($PublicKey, pk, $nc(this->reverse)->getPublicKey());
		if (!($instanceOf($DSAPublicKey, pk)) || $nc(($cast($DSAPublicKey, pk)))->getParams() != nullptr) {
			$nc(this->forward)->verify(pk);
		}
		$assign(pk, $nc(this->forward)->getPublicKey());
		if (!($instanceOf($DSAPublicKey, pk)) || $nc(($cast($DSAPublicKey, pk)))->getParams() != nullptr) {
			$nc(this->reverse)->verify(pk);
		}
	} catch ($GeneralSecurityException&) {
		$var($GeneralSecurityException, e, $catch());
		$throwNew($CertificateException, $$str({"invalid signature: "_s, $(e->getMessage())}));
	}
}

void clinit$X509CertificatePair($Class* class$) {
	$assignStatic(X509CertificatePair::cache, $Cache::newSoftMemoryCache(750));
}

X509CertificatePair::X509CertificatePair() {
}

$Class* X509CertificatePair::load$($String* name, bool initialize) {
	$loadClass(X509CertificatePair, name, initialize, &_X509CertificatePair_ClassInfo_, clinit$X509CertificatePair, allocate$X509CertificatePair);
	return class$;
}

$Class* X509CertificatePair::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun