#include <com/sun/crypto/provider/PBES2Parameters.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmParametersSpi.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <javax/crypto/spec/IvParameterSpec.h>
#include <javax/crypto/spec/PBEParameterSpec.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

#undef PBES2

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParametersSpi = ::java::security::AlgorithmParametersSpi;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;
using $PBEParameterSpec = ::javax::crypto::spec::PBEParameterSpec;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _PBES2Parameters_FieldInfo_[] = {
	{"pkcs5PBKDF2_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE | $STATIC, $staticField(PBES2Parameters, pkcs5PBKDF2_OID)},
	{"pkcs5PBES2_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE | $STATIC, $staticField(PBES2Parameters, pkcs5PBES2_OID)},
	{"aes128CBC_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE | $STATIC, $staticField(PBES2Parameters, aes128CBC_OID)},
	{"aes192CBC_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE | $STATIC, $staticField(PBES2Parameters, aes192CBC_OID)},
	{"aes256CBC_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE | $STATIC, $staticField(PBES2Parameters, aes256CBC_OID)},
	{"pbes2AlgorithmName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PBES2Parameters, pbes2AlgorithmName)},
	{"salt", "[B", nullptr, $PRIVATE, $field(PBES2Parameters, salt)},
	{"iCount", "I", nullptr, $PRIVATE, $field(PBES2Parameters, iCount)},
	{"cipherParam", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE, $field(PBES2Parameters, cipherParam)},
	{"kdfAlgo_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE, $field(PBES2Parameters, kdfAlgo_OID)},
	{"cipherAlgo_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE, $field(PBES2Parameters, cipherAlgo_OID)},
	{"keysize", "I", nullptr, $PRIVATE, $field(PBES2Parameters, keysize)},
	{}
};

$MethodInfo _PBES2Parameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PBES2Parameters::*)()>(&PBES2Parameters::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(PBES2Parameters::*)($String*)>(&PBES2Parameters::init$)), "java.security.NoSuchAlgorithmException"},
	{"engineGetEncoded", "()[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "([B)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"parseES", "(Lsun/security/util/DerValue;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PBES2Parameters::*)($DerValue*)>(&PBES2Parameters::parseES)), "java.io.IOException"},
	{"parseKDF", "(Lsun/security/util/DerValue;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PBES2Parameters::*)($DerValue*)>(&PBES2Parameters::parseKDF)), "java.io.IOException"},
	{}
};

$InnerClassInfo _PBES2Parameters_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBES2Parameters$HmacSHA512AndAES_256", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA512AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBES2Parameters$HmacSHA384AndAES_256", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA384AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBES2Parameters$HmacSHA256AndAES_256", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA256AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBES2Parameters$HmacSHA224AndAES_256", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA224AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBES2Parameters$HmacSHA1AndAES_256", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA1AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBES2Parameters$HmacSHA512AndAES_128", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA512AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBES2Parameters$HmacSHA384AndAES_128", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA384AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBES2Parameters$HmacSHA256AndAES_128", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA256AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBES2Parameters$HmacSHA224AndAES_128", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA224AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBES2Parameters$HmacSHA1AndAES_128", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA1AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBES2Parameters$General", "com.sun.crypto.provider.PBES2Parameters", "General", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBES2Parameters_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.crypto.provider.PBES2Parameters",
	"java.security.AlgorithmParametersSpi",
	nullptr,
	_PBES2Parameters_FieldInfo_,
	_PBES2Parameters_MethodInfo_,
	nullptr,
	nullptr,
	_PBES2Parameters_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBES2Parameters$HmacSHA512AndAES_256,com.sun.crypto.provider.PBES2Parameters$HmacSHA384AndAES_256,com.sun.crypto.provider.PBES2Parameters$HmacSHA256AndAES_256,com.sun.crypto.provider.PBES2Parameters$HmacSHA224AndAES_256,com.sun.crypto.provider.PBES2Parameters$HmacSHA1AndAES_256,com.sun.crypto.provider.PBES2Parameters$HmacSHA512AndAES_128,com.sun.crypto.provider.PBES2Parameters$HmacSHA384AndAES_128,com.sun.crypto.provider.PBES2Parameters$HmacSHA256AndAES_128,com.sun.crypto.provider.PBES2Parameters$HmacSHA224AndAES_128,com.sun.crypto.provider.PBES2Parameters$HmacSHA1AndAES_128,com.sun.crypto.provider.PBES2Parameters$General"
};

$Object* allocate$PBES2Parameters($Class* clazz) {
	return $of($alloc(PBES2Parameters));
}

$ObjectIdentifier* PBES2Parameters::pkcs5PBKDF2_OID = nullptr;
$ObjectIdentifier* PBES2Parameters::pkcs5PBES2_OID = nullptr;
$ObjectIdentifier* PBES2Parameters::aes128CBC_OID = nullptr;
$ObjectIdentifier* PBES2Parameters::aes192CBC_OID = nullptr;
$ObjectIdentifier* PBES2Parameters::aes256CBC_OID = nullptr;

void PBES2Parameters::init$() {
	$AlgorithmParametersSpi::init$();
	$set(this, pbes2AlgorithmName, nullptr);
	$set(this, salt, nullptr);
	this->iCount = 0;
	$set(this, cipherParam, nullptr);
	$init($KnownOIDs);
	$set(this, kdfAlgo_OID, $ObjectIdentifier::of($KnownOIDs::HmacSHA1));
	$set(this, cipherAlgo_OID, nullptr);
	this->keysize = -1;
}

void PBES2Parameters::init$($String* pbes2AlgorithmName) {
	$AlgorithmParametersSpi::init$();
	$set(this, pbes2AlgorithmName, nullptr);
	$set(this, salt, nullptr);
	this->iCount = 0;
	$set(this, cipherParam, nullptr);
	$init($KnownOIDs);
	$set(this, kdfAlgo_OID, $ObjectIdentifier::of($KnownOIDs::HmacSHA1));
	$set(this, cipherAlgo_OID, nullptr);
	this->keysize = -1;
	int32_t and$ = 0;
	$var($String, kdfAlgo, nullptr);
	$var($String, cipherAlgo, nullptr);
	$set(this, pbes2AlgorithmName, pbes2AlgorithmName);
	bool var$0 = $nc(pbes2AlgorithmName)->startsWith("PBEWith"_s);
	if (var$0 && (and$ = pbes2AlgorithmName->indexOf("And"_s, 7 + 1)) > 0) {
		$assign(kdfAlgo, pbes2AlgorithmName->substring(7, and$));
		$assign(cipherAlgo, pbes2AlgorithmName->substring(and$ + 3));
		int32_t underscore = 0;
		if ((underscore = cipherAlgo->indexOf((int32_t)u'_')) > 0) {
			int32_t slash = 0;
			if ((slash = cipherAlgo->indexOf((int32_t)u'/', underscore + 1)) > 0) {
				this->keysize = $Integer::parseInt($(cipherAlgo->substring(underscore + 1, slash)));
			} else {
				this->keysize = $Integer::parseInt($(cipherAlgo->substring(underscore + 1)));
			}
			$assign(cipherAlgo, cipherAlgo->substring(0, underscore));
		}
	} else {
		$throwNew($NoSuchAlgorithmException, $$str({"No crypto implementation for "_s, pbes2AlgorithmName}));
	}
	{
		$var($String, s5894$, kdfAlgo);
		int32_t tmp5894$ = -1;
		switch ($nc(s5894$)->hashCode()) {
		case 0x687BD5AC:
			{
				if (s5894$->equals("HmacSHA1"_s)) {
					tmp5894$ = 0;
				}
				break;
			}
		case 0x38DD24AF:
			{
				if (s5894$->equals("HmacSHA224"_s)) {
					tmp5894$ = 1;
				}
				break;
			}
		case 0x38DD250E:
			{
				if (s5894$->equals("HmacSHA256"_s)) {
					tmp5894$ = 2;
				}
				break;
			}
		case 0x38DD292A:
			{
				if (s5894$->equals("HmacSHA384"_s)) {
					tmp5894$ = 3;
				}
				break;
			}
		case 0x38DD2FD1:
			{
				if (s5894$->equals("HmacSHA512"_s)) {
					tmp5894$ = 4;
				}
				break;
			}
		}
		switch (tmp5894$) {
		case 0:
			{}
		case 1:
			{}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{
				$set(this, kdfAlgo_OID, $ObjectIdentifier::of($($KnownOIDs::findMatch(kdfAlgo))));
				break;
			}
		default:
			{
				$throwNew($NoSuchAlgorithmException, $$str({"No crypto implementation for "_s, kdfAlgo}));
			}
		}
	}
	if ($nc(cipherAlgo)->equals("AES"_s)) {
		this->keysize = this->keysize;
		switch (this->keysize) {
		case 128:
			{
				$set(this, cipherAlgo_OID, PBES2Parameters::aes128CBC_OID);
				break;
			}
		case 256:
			{
				$set(this, cipherAlgo_OID, PBES2Parameters::aes256CBC_OID);
				break;
			}
		default:
			{
				$throwNew($NoSuchAlgorithmException, $$str({"No Cipher implementation for "_s, $$str(this->keysize), "-bit "_s, cipherAlgo}));
			}
		}
	} else {
		$throwNew($NoSuchAlgorithmException, $$str({"No Cipher implementation for "_s, cipherAlgo}));
	}
}

void PBES2Parameters::engineInit($AlgorithmParameterSpec* paramSpec) {
	if (!($instanceOf($PBEParameterSpec, paramSpec))) {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
	$set(this, salt, $cast($bytes, $nc($($nc(($cast($PBEParameterSpec, paramSpec)))->getSalt()))->clone()));
	this->iCount = ($cast($PBEParameterSpec, paramSpec))->getIterationCount();
	$set(this, cipherParam, ($cast($PBEParameterSpec, paramSpec))->getParameterSpec());
}

void PBES2Parameters::engineInit($bytes* encoded) {
	$var($String, kdfAlgo, nullptr);
	$var($String, cipherAlgo, nullptr);
	$var($DerValue, pBES2_params, $new($DerValue, encoded));
	if (pBES2_params->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "PBE parameter parsing error: not an ASN.1 SEQUENCE tag"_s);
	}
	$var($DerValue, kdf, $nc(pBES2_params->data$)->getDerValue());
	if ($nc(kdf)->getTag() == $DerValue::tag_ObjectId) {
		$assign(pBES2_params, $nc(pBES2_params->data$)->getDerValue());
		$assign(kdf, $nc($nc(pBES2_params)->data$)->getDerValue());
	}
	$assign(kdfAlgo, parseKDF(kdf));
	if (pBES2_params->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "PBE parameter parsing error: not an ASN.1 SEQUENCE tag"_s);
	}
	$assign(cipherAlgo, parseES($($nc(pBES2_params->data$)->getDerValue())));
	$set(this, pbes2AlgorithmName, $$new($StringBuilder)->append("PBEWith"_s)->append(kdfAlgo)->append("And"_s)->append(cipherAlgo)->toString());
}

$String* PBES2Parameters::parseKDF($DerValue* keyDerivationFunc) {
	if (!$nc(PBES2Parameters::pkcs5PBKDF2_OID)->equals($($nc($nc(keyDerivationFunc)->data$)->getOID()))) {
		$throwNew($IOException, "PBE parameter parsing error: expecting the object identifier for PBKDF2"_s);
	}
	if ($nc(keyDerivationFunc)->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "PBE parameter parsing error: not an ASN.1 SEQUENCE tag"_s);
	}
	$var($DerValue, pBKDF2_params, $nc($nc(keyDerivationFunc)->data$)->getDerValue());
	if ($nc(pBKDF2_params)->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "PBE parameter parsing error: not an ASN.1 SEQUENCE tag"_s);
	}
	$var($DerValue, specified, $nc($nc(pBKDF2_params)->data$)->getDerValue());
	if ($nc(specified)->tag == $DerValue::tag_OctetString) {
		$set(this, salt, specified->getOctetString());
	} else {
		$throwNew($IOException, "PBE parameter parsing error: not an ASN.1 OCTET STRING tag"_s);
	}
	this->iCount = $nc(pBKDF2_params->data$)->getInteger();
	$var($DerValue, prf, nullptr);
	if ($nc(pBKDF2_params->data$)->available() > 0) {
		$var($DerValue, keyLength, $nc(pBKDF2_params->data$)->getDerValue());
		if ($nc(keyLength)->tag == $DerValue::tag_Integer) {
			this->keysize = keyLength->getInteger() * 8;
		} else {
			$assign(prf, keyLength);
		}
	}
	$var($String, kdfAlgo, "HmacSHA1"_s);
	if (prf == nullptr) {
		if ($nc(pBKDF2_params->data$)->available() > 0) {
			$assign(prf, $nc(pBKDF2_params->data$)->getDerValue());
		}
	}
	if (prf != nullptr) {
		$set(this, kdfAlgo_OID, $nc(prf->data$)->getOID());
		$KnownOIDs* o = $KnownOIDs::findMatch($($nc(this->kdfAlgo_OID)->toString()));
		bool var$0 = o == nullptr;
		if (!var$0) {
			bool var$4 = !$nc($($nc(o)->stdName()))->equals("HmacSHA1"_s);
			bool var$3 = var$4 && !$nc($(o->stdName()))->equals("HmacSHA224"_s);
			bool var$2 = var$3 && !$nc($(o->stdName()))->equals("HmacSHA256"_s);
			bool var$1 = var$2 && !$nc($(o->stdName()))->equals("HmacSHA384"_s);
			var$0 = (var$1 && !$nc($(o->stdName()))->equals("HmacSHA512"_s));
		}
		if (var$0) {
			$throwNew($IOException, "PBE parameter parsing error: expecting the object identifier for a HmacSHA key derivation function"_s);
		}
		$assign(kdfAlgo, $nc(o)->stdName());
		if ($nc(prf->data$)->available() != 0) {
			$var($DerValue, parameter, $nc(prf->data$)->getDerValue());
			if ($nc(parameter)->tag != $DerValue::tag_Null) {
				$throwNew($IOException, "PBE parameter parsing error: not an ASN.1 NULL tag"_s);
			}
		}
	}
	return kdfAlgo;
}

$String* PBES2Parameters::parseES($DerValue* encryptionScheme) {
	$var($String, cipherAlgo, nullptr);
	$set(this, cipherAlgo_OID, $nc($nc(encryptionScheme)->data$)->getOID());
	if ($nc(PBES2Parameters::aes128CBC_OID)->equals(this->cipherAlgo_OID)) {
		$assign(cipherAlgo, "AES_128"_s);
		$set(this, cipherParam, $new($IvParameterSpec, $($nc(encryptionScheme->data$)->getOctetString())));
		this->keysize = 128;
	} else if ($nc(PBES2Parameters::aes256CBC_OID)->equals(this->cipherAlgo_OID)) {
		$assign(cipherAlgo, "AES_256"_s);
		$set(this, cipherParam, $new($IvParameterSpec, $($nc($nc(encryptionScheme)->data$)->getOctetString())));
		this->keysize = 256;
	} else {
		$throwNew($IOException, "PBE parameter parsing error: expecting the object identifier for AES cipher"_s);
	}
	return cipherAlgo;
}

void PBES2Parameters::engineInit($bytes* encoded, $String* decodingMethod) {
	engineInit(encoded);
}

$AlgorithmParameterSpec* PBES2Parameters::engineGetParameterSpec($Class* paramSpec) {
	$load($PBEParameterSpec);
	if ($PBEParameterSpec::class$->isAssignableFrom(paramSpec)) {
		return $cast($AlgorithmParameterSpec, $nc(paramSpec)->cast($$new($PBEParameterSpec, this->salt, this->iCount, this->cipherParam)));
	} else {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
}

$bytes* PBES2Parameters::engineGetEncoded() {
	$var($DerOutputStream, out, $new($DerOutputStream));
	$var($DerOutputStream, pBES2_params, $new($DerOutputStream));
	$var($DerOutputStream, keyDerivationFunc, $new($DerOutputStream));
	keyDerivationFunc->putOID(PBES2Parameters::pkcs5PBKDF2_OID);
	$var($DerOutputStream, pBKDF2_params, $new($DerOutputStream));
	pBKDF2_params->putOctetString(this->salt);
	pBKDF2_params->putInteger(this->iCount);
	if (this->keysize > 0) {
		pBKDF2_params->putInteger(this->keysize / 8);
	}
	$var($DerOutputStream, prf, $new($DerOutputStream));
	prf->putOID(this->kdfAlgo_OID);
	prf->putNull();
	pBKDF2_params->write($DerValue::tag_Sequence, prf);
	keyDerivationFunc->write($DerValue::tag_Sequence, pBKDF2_params);
	pBES2_params->write($DerValue::tag_Sequence, keyDerivationFunc);
	$var($DerOutputStream, encryptionScheme, $new($DerOutputStream));
	encryptionScheme->putOID(this->cipherAlgo_OID);
	if (this->cipherParam != nullptr && $instanceOf($IvParameterSpec, this->cipherParam)) {
		encryptionScheme->putOctetString($($nc(($cast($IvParameterSpec, this->cipherParam)))->getIV()));
	} else {
		$throwNew($IOException, "Wrong parameter type: IV expected"_s);
	}
	pBES2_params->write($DerValue::tag_Sequence, encryptionScheme);
	out->write($DerValue::tag_Sequence, pBES2_params);
	return out->toByteArray();
}

$bytes* PBES2Parameters::engineGetEncoded($String* encodingMethod) {
	return engineGetEncoded();
}

$String* PBES2Parameters::engineToString() {
	return this->pbes2AlgorithmName;
}

void clinit$PBES2Parameters($Class* class$) {
	$init($KnownOIDs);
	$assignStatic(PBES2Parameters::pkcs5PBKDF2_OID, $ObjectIdentifier::of($KnownOIDs::PBKDF2WithHmacSHA1));
	$assignStatic(PBES2Parameters::pkcs5PBES2_OID, $ObjectIdentifier::of($KnownOIDs::PBES2));
	$assignStatic(PBES2Parameters::aes128CBC_OID, $ObjectIdentifier::of($KnownOIDs::AES_128$CBC$NoPadding));
	$assignStatic(PBES2Parameters::aes192CBC_OID, $ObjectIdentifier::of($KnownOIDs::AES_192$CBC$NoPadding));
	$assignStatic(PBES2Parameters::aes256CBC_OID, $ObjectIdentifier::of($KnownOIDs::AES_256$CBC$NoPadding));
}

PBES2Parameters::PBES2Parameters() {
}

$Class* PBES2Parameters::load$($String* name, bool initialize) {
	$loadClass(PBES2Parameters, name, initialize, &_PBES2Parameters_ClassInfo_, clinit$PBES2Parameters, allocate$PBES2Parameters);
	return class$;
}

$Class* PBES2Parameters::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com