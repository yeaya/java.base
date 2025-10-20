#include <sun/security/util/ECUtil.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/Key.h>
#include <java/security/KeyFactory.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/PrivateKey.h>
#include <java/security/Provider.h>
#include <java/security/PublicKey.h>
#include <java/security/SignatureException.h>
#include <java/security/interfaces/ECPrivateKey.h>
#include <java/security/interfaces/ECPublicKey.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/ECField.h>
#include <java/security/spec/ECGenParameterSpec.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/ECPoint.h>
#include <java/security/spec/ECPrivateKeySpec.h>
#include <java/security/spec/ECPublicKeySpec.h>
#include <java/security/spec/EllipticCurve.h>
#include <java/security/spec/EncodedKeySpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/security/spec/NamedParameterSpec.h>
#include <java/security/spec/PKCS8EncodedKeySpec.h>
#include <java/security/spec/X509EncodedKeySpec.h>
#include <java/util/Arrays.h>
#include <jdk/internal/access/JavaSecuritySpecAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/security/util/ArrayUtil.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ECKeySizeParameterSpec.h>
#include <jcpp.h>

using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Key = ::java::security::Key;
using $KeyFactory = ::java::security::KeyFactory;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $PrivateKey = ::java::security::PrivateKey;
using $Provider = ::java::security::Provider;
using $PublicKey = ::java::security::PublicKey;
using $SignatureException = ::java::security::SignatureException;
using $ECPrivateKey = ::java::security::interfaces::ECPrivateKey;
using $ECPublicKey = ::java::security::interfaces::ECPublicKey;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $ECField = ::java::security::spec::ECField;
using $ECGenParameterSpec = ::java::security::spec::ECGenParameterSpec;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $ECPoint = ::java::security::spec::ECPoint;
using $ECPrivateKeySpec = ::java::security::spec::ECPrivateKeySpec;
using $ECPublicKeySpec = ::java::security::spec::ECPublicKeySpec;
using $EllipticCurve = ::java::security::spec::EllipticCurve;
using $EncodedKeySpec = ::java::security::spec::EncodedKeySpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;
using $PKCS8EncodedKeySpec = ::java::security::spec::PKCS8EncodedKeySpec;
using $X509EncodedKeySpec = ::java::security::spec::X509EncodedKeySpec;
using $Arrays = ::java::util::Arrays;
using $JavaSecuritySpecAccess = ::jdk::internal::access::JavaSecuritySpecAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ArrayUtil = ::sun::security::util::ArrayUtil;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ECKeySizeParameterSpec = ::sun::security::util::ECKeySizeParameterSpec;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _ECUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ECUtil::*)()>(&ECUtil::init$))},
	{"decodePKCS8ECPrivateKey", "([B)Ljava/security/interfaces/ECPrivateKey;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ECPrivateKey*(*)($bytes*)>(&ECUtil::decodePKCS8ECPrivateKey)), "java.security.spec.InvalidKeySpecException"},
	{"decodePoint", "([BLjava/security/spec/EllipticCurve;)Ljava/security/spec/ECPoint;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ECPoint*(*)($bytes*,$EllipticCurve*)>(&ECUtil::decodePoint)), "java.io.IOException"},
	{"decodeSignature", "([B)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&ECUtil::decodeSignature)), "java.security.SignatureException"},
	{"decodeX509ECPublicKey", "([B)Ljava/security/interfaces/ECPublicKey;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ECPublicKey*(*)($bytes*)>(&ECUtil::decodeX509ECPublicKey)), "java.security.spec.InvalidKeySpecException"},
	{"encodeECParameterSpec", "(Ljava/security/Provider;Ljava/security/spec/ECParameterSpec;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($Provider*,$ECParameterSpec*)>(&ECUtil::encodeECParameterSpec))},
	{"encodePoint", "(Ljava/security/spec/ECPoint;Ljava/security/spec/EllipticCurve;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($ECPoint*,$EllipticCurve*)>(&ECUtil::encodePoint))},
	{"encodeSignature", "([B)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&ECUtil::encodeSignature)), "java.security.SignatureException"},
	{"equals", "(Ljava/security/spec/ECParameterSpec;Ljava/security/spec/ECParameterSpec;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ECParameterSpec*,$ECParameterSpec*)>(&ECUtil::equals))},
	{"generateECPrivateKey", "(Ljava/math/BigInteger;Ljava/security/spec/ECParameterSpec;)Ljava/security/interfaces/ECPrivateKey;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ECPrivateKey*(*)($BigInteger*,$ECParameterSpec*)>(&ECUtil::generateECPrivateKey)), "java.security.spec.InvalidKeySpecException"},
	{"getCurveName", "(Ljava/security/Provider;Ljava/security/spec/ECParameterSpec;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Provider*,$ECParameterSpec*)>(&ECUtil::getCurveName))},
	{"getECParameterSpec", "(Ljava/security/Provider;Ljava/security/spec/ECParameterSpec;)Ljava/security/spec/ECParameterSpec;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ECParameterSpec*(*)($Provider*,$ECParameterSpec*)>(&ECUtil::getECParameterSpec))},
	{"getECParameterSpec", "(Ljava/security/Provider;[B)Ljava/security/spec/ECParameterSpec;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ECParameterSpec*(*)($Provider*,$bytes*)>(&ECUtil::getECParameterSpec)), "java.io.IOException"},
	{"getECParameterSpec", "(Ljava/security/Provider;Ljava/lang/String;)Ljava/security/spec/ECParameterSpec;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ECParameterSpec*(*)($Provider*,$String*)>(&ECUtil::getECParameterSpec))},
	{"getECParameterSpec", "(Ljava/security/Provider;I)Ljava/security/spec/ECParameterSpec;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ECParameterSpec*(*)($Provider*,int32_t)>(&ECUtil::getECParameterSpec))},
	{"getECParameters", "(Ljava/security/Provider;)Ljava/security/AlgorithmParameters;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AlgorithmParameters*(*)($Provider*)>(&ECUtil::getECParameters))},
	{"getKeyFactory", "()Ljava/security/KeyFactory;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$KeyFactory*(*)()>(&ECUtil::getKeyFactory))},
	{"sArray", "(Ljava/math/BigInteger;Ljava/security/spec/ECParameterSpec;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($BigInteger*,$ECParameterSpec*)>(&ECUtil::sArray))},
	{"trimZeroes", "([B)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&ECUtil::trimZeroes))},
	{"x509EncodeECPublicKey", "(Ljava/security/spec/ECPoint;Ljava/security/spec/ECParameterSpec;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($ECPoint*,$ECParameterSpec*)>(&ECUtil::x509EncodeECPublicKey)), "java.security.spec.InvalidKeySpecException"},
	{}
};

$ClassInfo _ECUtil_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.util.ECUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ECUtil_MethodInfo_
};

$Object* allocate$ECUtil($Class* clazz) {
	return $of($alloc(ECUtil));
}

$bytes* ECUtil::sArray($BigInteger* s, $ECParameterSpec* params) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, arr, $nc(s)->toByteArray());
	$ArrayUtil::reverse(arr);
	int32_t byteLength = ($nc($($nc(params)->getOrder()))->bitLength() + 7) / 8;
	$var($bytes, arrayS, $new($bytes, byteLength));
	int32_t length = $Math::min(byteLength, $nc(arr)->length);
	$System::arraycopy(arr, 0, arrayS, 0, length);
	return arrayS;
}

$ECPoint* ECUtil::decodePoint($bytes* data, $EllipticCurve* curve) {
	$useLocalCurrentObjectStackCache();
	if (($nc(data)->length == 0) || ($nc(data)->get(0) != 4)) {
		$throwNew($IOException, "Only uncompressed point format supported"_s);
	}
	int32_t n = ($nc(data)->length - 1) / 2;
	if (n != (($nc($($nc(curve)->getField()))->getFieldSize() + 7) >> 3)) {
		$throwNew($IOException, "Point does not match field size"_s);
	}
	$var($bytes, xb, $Arrays::copyOfRange(data, 1, 1 + n));
	$var($bytes, yb, $Arrays::copyOfRange(data, n + 1, n + 1 + n));
	$var($BigInteger, var$0, $new($BigInteger, 1, xb));
	return $new($ECPoint, var$0, $$new($BigInteger, 1, yb));
}

$bytes* ECUtil::encodePoint($ECPoint* point, $EllipticCurve* curve) {
	$useLocalCurrentObjectStackCache();
	int32_t n = ($nc($($nc(curve)->getField()))->getFieldSize() + 7) >> 3;
	$var($bytes, xb, trimZeroes($($nc($($nc(point)->getAffineX()))->toByteArray())));
	$var($bytes, yb, trimZeroes($($nc($($nc(point)->getAffineY()))->toByteArray())));
	if (($nc(xb)->length > n) || ($nc(yb)->length > n)) {
		$throwNew($RuntimeException, "Point coordinates do not match field size"_s);
	}
	$var($bytes, b, $new($bytes, 1 + (n << 1)));
	b->set(0, (int8_t)4);
	$System::arraycopy(xb, 0, b, n - $nc(xb)->length + 1, xb->length);
	$System::arraycopy(yb, 0, b, b->length - $nc(yb)->length, yb->length);
	return b;
}

$bytes* ECUtil::trimZeroes($bytes* b) {
	int32_t i = 0;
	while ((i < $nc(b)->length - 1) && (b->get(i) == 0)) {
		++i;
	}
	if (i == 0) {
		return b;
	}
	return $Arrays::copyOfRange(b, i, $nc(b)->length);
}

$KeyFactory* ECUtil::getKeyFactory() {
	$useLocalCurrentObjectStackCache();
	try {
		return $KeyFactory::getInstance("EC"_s, "SunEC"_s);
	} catch ($NoSuchAlgorithmException&) {
		$var($GeneralSecurityException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($NoSuchProviderException&) {
		$var($GeneralSecurityException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$ECPublicKey* ECUtil::decodeX509ECPublicKey($bytes* encoded) {
	$useLocalCurrentObjectStackCache();
	$var($KeyFactory, keyFactory, getKeyFactory());
	$var($X509EncodedKeySpec, keySpec, $new($X509EncodedKeySpec, encoded));
	return $cast($ECPublicKey, $nc(keyFactory)->generatePublic(keySpec));
}

$bytes* ECUtil::x509EncodeECPublicKey($ECPoint* w, $ECParameterSpec* params) {
	$useLocalCurrentObjectStackCache();
	$var($KeyFactory, keyFactory, getKeyFactory());
	$var($ECPublicKeySpec, keySpec, $new($ECPublicKeySpec, w, params));
	$var($Key, key, $nc(keyFactory)->generatePublic(keySpec));
	return $nc(key)->getEncoded();
}

$ECPrivateKey* ECUtil::decodePKCS8ECPrivateKey($bytes* encoded) {
	$useLocalCurrentObjectStackCache();
	$var($KeyFactory, keyFactory, getKeyFactory());
	$var($PKCS8EncodedKeySpec, keySpec, $new($PKCS8EncodedKeySpec, encoded));
	{
		$var($Throwable, var$0, nullptr);
		$var($ECPrivateKey, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $cast($ECPrivateKey, $nc(keyFactory)->generatePrivate(keySpec)));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc($($SharedSecrets::getJavaSecuritySpecAccess()))->clearEncodedKeySpec(keySpec);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ECPrivateKey* ECUtil::generateECPrivateKey($BigInteger* s, $ECParameterSpec* params) {
	$useLocalCurrentObjectStackCache();
	$var($KeyFactory, keyFactory, getKeyFactory());
	$var($ECPrivateKeySpec, keySpec, $new($ECPrivateKeySpec, s, params));
	return $cast($ECPrivateKey, $nc(keyFactory)->generatePrivate(keySpec));
}

$AlgorithmParameters* ECUtil::getECParameters($Provider* p) {
	try {
		if (p != nullptr) {
			return $AlgorithmParameters::getInstance("EC"_s, p);
		}
		return $AlgorithmParameters::getInstance("EC"_s);
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, nsae, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(nsae));
	}
	$shouldNotReachHere();
}

$bytes* ECUtil::encodeECParameterSpec($Provider* p, $ECParameterSpec* spec) {
	$useLocalCurrentObjectStackCache();
	$var($AlgorithmParameters, parameters, getECParameters(p));
	try {
		$nc(parameters)->init(static_cast<$AlgorithmParameterSpec*>(spec));
	} catch ($InvalidParameterSpecException&) {
		$var($InvalidParameterSpecException, ipse, $catch());
		$throwNew($RuntimeException, $$str({"Not a known named curve: "_s, spec}));
	}
	try {
		return $nc(parameters)->getEncoded();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(ioe));
	}
	$shouldNotReachHere();
}

$ECParameterSpec* ECUtil::getECParameterSpec($Provider* p, $ECParameterSpec* spec) {
	$useLocalCurrentObjectStackCache();
	$var($AlgorithmParameters, parameters, getECParameters(p));
	try {
		$nc(parameters)->init(static_cast<$AlgorithmParameterSpec*>(spec));
		$load($ECParameterSpec);
		return $cast($ECParameterSpec, parameters->getParameterSpec($ECParameterSpec::class$));
	} catch ($InvalidParameterSpecException&) {
		$var($InvalidParameterSpecException, ipse, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$ECParameterSpec* ECUtil::getECParameterSpec($Provider* p, $bytes* params) {
	$useLocalCurrentObjectStackCache();
	$var($AlgorithmParameters, parameters, getECParameters(p));
	$nc(parameters)->init(params);
	try {
		$load($ECParameterSpec);
		return $cast($ECParameterSpec, parameters->getParameterSpec($ECParameterSpec::class$));
	} catch ($InvalidParameterSpecException&) {
		$var($InvalidParameterSpecException, ipse, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$ECParameterSpec* ECUtil::getECParameterSpec($Provider* p, $String* name) {
	$useLocalCurrentObjectStackCache();
	$var($AlgorithmParameters, parameters, getECParameters(p));
	try {
		$nc(parameters)->init(static_cast<$AlgorithmParameterSpec*>($$new($ECGenParameterSpec, name)));
		$load($ECParameterSpec);
		return $cast($ECParameterSpec, parameters->getParameterSpec($ECParameterSpec::class$));
	} catch ($InvalidParameterSpecException&) {
		$var($InvalidParameterSpecException, ipse, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$ECParameterSpec* ECUtil::getECParameterSpec($Provider* p, int32_t keySize) {
	$useLocalCurrentObjectStackCache();
	$var($AlgorithmParameters, parameters, getECParameters(p));
	try {
		$nc(parameters)->init(static_cast<$AlgorithmParameterSpec*>($$new($ECKeySizeParameterSpec, keySize)));
		$load($ECParameterSpec);
		return $cast($ECParameterSpec, parameters->getParameterSpec($ECParameterSpec::class$));
	} catch ($InvalidParameterSpecException&) {
		$var($InvalidParameterSpecException, ipse, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* ECUtil::getCurveName($Provider* p, $ECParameterSpec* spec) {
	$useLocalCurrentObjectStackCache();
	$var($ECGenParameterSpec, nameSpec, nullptr);
	$var($AlgorithmParameters, parameters, getECParameters(p));
	try {
		$nc(parameters)->init(static_cast<$AlgorithmParameterSpec*>(spec));
		$load($ECGenParameterSpec);
		$assign(nameSpec, $cast($ECGenParameterSpec, parameters->getParameterSpec($ECGenParameterSpec::class$)));
	} catch ($InvalidParameterSpecException&) {
		$var($InvalidParameterSpecException, ipse, $catch());
		return nullptr;
	}
	if (nameSpec == nullptr) {
		return nullptr;
	}
	return $nc(nameSpec)->getName();
}

bool ECUtil::equals($ECParameterSpec* spec1, $ECParameterSpec* spec2) {
	$useLocalCurrentObjectStackCache();
	if (spec1 == spec2) {
		return true;
	}
	if (spec1 == nullptr || spec2 == nullptr) {
		return false;
	}
	int32_t var$3 = $nc(spec1)->getCofactor();
	bool var$2 = var$3 == $nc(spec2)->getCofactor();
	bool var$1 = var$2 && $nc($(spec1->getOrder()))->equals($(spec2->getOrder()));
	bool var$0 = var$1 && $nc($(spec1->getCurve()))->equals($(spec2->getCurve()));
	return (var$0 && $nc($(spec1->getGenerator()))->equals($(spec2->getGenerator())));
}

$bytes* ECUtil::encodeSignature($bytes* signature) {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t n = $nc(signature)->length >> 1;
		$var($bytes, bytes, $new($bytes, n));
		$System::arraycopy(signature, 0, bytes, 0, n);
		$var($BigInteger, r, $new($BigInteger, 1, bytes));
		$System::arraycopy(signature, n, bytes, 0, n);
		$var($BigInteger, s, $new($BigInteger, 1, bytes));
		$var($DerOutputStream, out, $new($DerOutputStream, signature->length + 10));
		out->putInteger(r);
		out->putInteger(s);
		$var($DerValue, result, $new($DerValue, $DerValue::tag_Sequence, $(out->toByteArray())));
		return result->toByteArray();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($SignatureException, "Could not encode signature"_s, e);
	}
	$shouldNotReachHere();
}

$bytes* ECUtil::decodeSignature($bytes* sig) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($DerInputStream, in, $new($DerInputStream, sig, 0, $nc(sig)->length, false));
		$var($DerValueArray, values, in->getSequence(2));
		if (($nc(values)->length != 2) || (in->available() != 0)) {
			$throwNew($IOException, "Invalid encoding for signature"_s);
		}
		$var($BigInteger, r, $nc($nc(values)->get(0))->getPositiveBigInteger());
		$var($BigInteger, s, $nc(values->get(1))->getPositiveBigInteger());
		$var($bytes, rBytes, trimZeroes($($nc(r)->toByteArray())));
		$var($bytes, sBytes, trimZeroes($($nc(s)->toByteArray())));
		int32_t k = $Math::max($nc(rBytes)->length, $nc(sBytes)->length);
		$var($bytes, result, $new($bytes, k << 1));
		$System::arraycopy(rBytes, 0, result, k - $nc(rBytes)->length, rBytes->length);
		$System::arraycopy(sBytes, 0, result, result->length - $nc(sBytes)->length, sBytes->length);
		return result;
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($SignatureException, "Invalid encoding for signature"_s, e);
	}
	$shouldNotReachHere();
}

void ECUtil::init$() {
}

ECUtil::ECUtil() {
}

$Class* ECUtil::load$($String* name, bool initialize) {
	$loadClass(ECUtil, name, initialize, &_ECUtil_ClassInfo_, allocate$ECUtil);
	return class$;
}

$Class* ECUtil::class$ = nullptr;

		} // util
	} // security
} // sun