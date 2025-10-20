#include <sun/security/provider/DSAPublicKeyImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/KeyRep$Type.h>
#include <java/security/KeyRep.h>
#include <sun/security/provider/DSAPublicKey.h>
#include <sun/security/x509/X509Key.h>
#include <jcpp.h>

#undef PUBLIC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $KeyRep = ::java::security::KeyRep;
using $KeyRep$Type = ::java::security::KeyRep$Type;
using $DSAPublicKey = ::sun::security::provider::DSAPublicKey;
using $X509Key = ::sun::security::x509::X509Key;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _DSAPublicKeyImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DSAPublicKeyImpl, serialVersionUID)},
	{}
};

$MethodInfo _DSAPublicKeyImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(DSAPublicKeyImpl::*)($BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*)>(&DSAPublicKeyImpl::init$)), "java.security.InvalidKeyException"},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(DSAPublicKeyImpl::*)($bytes*)>(&DSAPublicKeyImpl::init$)), "java.security.InvalidKeyException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED, $method(static_cast<$Object*(DSAPublicKeyImpl::*)()>(&DSAPublicKeyImpl::writeReplace)), "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _DSAPublicKeyImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSAPublicKeyImpl",
	"sun.security.provider.DSAPublicKey",
	nullptr,
	_DSAPublicKeyImpl_FieldInfo_,
	_DSAPublicKeyImpl_MethodInfo_
};

$Object* allocate$DSAPublicKeyImpl($Class* clazz) {
	return $of($alloc(DSAPublicKeyImpl));
}

void DSAPublicKeyImpl::init$($BigInteger* y, $BigInteger* p, $BigInteger* q, $BigInteger* g) {
	$DSAPublicKey::init$(y, p, q, g);
}

void DSAPublicKeyImpl::init$($bytes* encoded) {
	$DSAPublicKey::init$(encoded);
}

$Object* DSAPublicKeyImpl::writeReplace() {
	$useLocalCurrentObjectStackCache();
	$init($KeyRep$Type);
	$var($KeyRep$Type, var$0, $KeyRep$Type::PUBLIC);
	$var($String, var$1, getAlgorithm());
	$var($String, var$2, getFormat());
	return $of($new($KeyRep, var$0, var$1, var$2, $(getEncoded())));
}

DSAPublicKeyImpl::DSAPublicKeyImpl() {
}

$Class* DSAPublicKeyImpl::load$($String* name, bool initialize) {
	$loadClass(DSAPublicKeyImpl, name, initialize, &_DSAPublicKeyImpl_ClassInfo_, allocate$DSAPublicKeyImpl);
	return class$;
}

$Class* DSAPublicKeyImpl::class$ = nullptr;

		} // provider
	} // security
} // sun