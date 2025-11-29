#include <javax/crypto/SealedObject.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutput.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/util/Arrays.h>
#include <javax/crypto/BadPaddingException.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/IllegalBlockSizeException.h>
#include <javax/crypto/NoSuchPaddingException.h>
#include <javax/crypto/extObjectInputStream.h>
#include <jdk/internal/access/JavaxCryptoSealedObjectAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef DECRYPT_MODE

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $Arrays = ::java::util::Arrays;
using $BadPaddingException = ::javax::crypto::BadPaddingException;
using $Cipher = ::javax::crypto::Cipher;
using $IllegalBlockSizeException = ::javax::crypto::IllegalBlockSizeException;
using $NoSuchPaddingException = ::javax::crypto::NoSuchPaddingException;
using $extObjectInputStream = ::javax::crypto::extObjectInputStream;
using $JavaxCryptoSealedObjectAccess = ::jdk::internal::access::JavaxCryptoSealedObjectAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace javax {
	namespace crypto {

class SealedObject$$Lambda$lambda$static$0 : public $JavaxCryptoSealedObjectAccess {
	$class(SealedObject$$Lambda$lambda$static$0, $NO_CLASS_INIT, $JavaxCryptoSealedObjectAccess)
public:
	void init$() {
	}
	virtual $ObjectInputStream* getExtObjectInputStream(SealedObject* obj, $Cipher* c) override {
		 return SealedObject::lambda$static$0(obj, c);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SealedObject$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SealedObject$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SealedObject$$Lambda$lambda$static$0::*)()>(&SealedObject$$Lambda$lambda$static$0::init$))},
	{"getExtObjectInputStream", "(Ljavax/crypto/SealedObject;Ljavax/crypto/Cipher;)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SealedObject$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.crypto.SealedObject$$Lambda$lambda$static$0",
	"java.lang.Object",
	"jdk.internal.access.JavaxCryptoSealedObjectAccess",
	nullptr,
	methodInfos
};
$Class* SealedObject$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(SealedObject$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SealedObject$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _SealedObject_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SealedObject, serialVersionUID)},
	{"encryptedContent", "[B", nullptr, $PRIVATE, $field(SealedObject, encryptedContent)},
	{"sealAlg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SealedObject, sealAlg)},
	{"paramsAlg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SealedObject, paramsAlg)},
	{"encodedParams", "[B", nullptr, $PROTECTED, $field(SealedObject, encodedParams)},
	{}
};

$MethodInfo _SealedObject_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Serializable;Ljavax/crypto/Cipher;)V", nullptr, $PUBLIC, $method(static_cast<void(SealedObject::*)($Serializable*,$Cipher*)>(&SealedObject::init$)), "java.io.IOException,javax.crypto.IllegalBlockSizeException"},
	{"<init>", "(Ljavax/crypto/SealedObject;)V", nullptr, $PROTECTED, $method(static_cast<void(SealedObject::*)(SealedObject*)>(&SealedObject::init$))},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(SealedObject::*)()>(&SealedObject::getAlgorithm))},
	{"getExtObjectInputStream", "(Ljavax/crypto/Cipher;)Ljava/io/ObjectInputStream;", nullptr, $PRIVATE, $method(static_cast<$ObjectInputStream*(SealedObject::*)($Cipher*)>(&SealedObject::getExtObjectInputStream)), "javax.crypto.BadPaddingException,javax.crypto.IllegalBlockSizeException,java.io.IOException"},
	{"getObject", "(Ljava/security/Key;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(SealedObject::*)($Key*)>(&SealedObject::getObject)), "java.io.IOException,java.lang.ClassNotFoundException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException"},
	{"getObject", "(Ljavax/crypto/Cipher;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(SealedObject::*)($Cipher*)>(&SealedObject::getObject)), "java.io.IOException,java.lang.ClassNotFoundException,javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
	{"getObject", "(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(SealedObject::*)($Key*,$String*)>(&SealedObject::getObject)), "java.io.IOException,java.lang.ClassNotFoundException,java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException,java.security.InvalidKeyException"},
	{"lambda$static$0", "(Ljavax/crypto/SealedObject;Ljavax/crypto/Cipher;)Ljava/io/ObjectInputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ObjectInputStream*(*)(SealedObject*,$Cipher*)>(&SealedObject::lambda$static$0)), "javax.crypto.BadPaddingException,javax.crypto.IllegalBlockSizeException,java.io.IOException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(SealedObject::*)($ObjectInputStream*)>(&SealedObject::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"unseal", "(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(SealedObject::*)($Key*,$String*)>(&SealedObject::unseal)), "java.io.IOException,java.lang.ClassNotFoundException,java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException,java.security.InvalidKeyException,javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
	{}
};

$ClassInfo _SealedObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.SealedObject",
	"java.lang.Object",
	"java.io.Serializable",
	_SealedObject_FieldInfo_,
	_SealedObject_MethodInfo_
};

$Object* allocate$SealedObject($Class* clazz) {
	return $of($alloc(SealedObject));
}

void SealedObject::init$($Serializable* object, $Cipher* c) {
	$useLocalCurrentObjectStackCache();
	$set(this, encryptedContent, nullptr);
	$set(this, sealAlg, nullptr);
	$set(this, paramsAlg, nullptr);
	$set(this, encodedParams, nullptr);
	$var($ByteArrayOutputStream, b, $new($ByteArrayOutputStream));
	$var($ObjectOutput, a, $new($ObjectOutputStream, b));
	$var($bytes, content, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			a->writeObject(object);
			a->flush();
			$assign(content, b->toByteArray());
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			a->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	{
		$var($Throwable, var$2, nullptr);
		try {
			try {
				$set(this, encryptedContent, $nc(c)->doFinal(content));
			} catch ($BadPaddingException& ex) {
			}
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			$Arrays::fill(content, (int8_t)0);
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
	if ($nc(c)->getParameters() != nullptr) {
		$set(this, encodedParams, $nc($(c->getParameters()))->getEncoded());
		$set(this, paramsAlg, $nc($(c->getParameters()))->getAlgorithm());
	}
	$set(this, sealAlg, $nc(c)->getAlgorithm());
}

void SealedObject::init$(SealedObject* so) {
	$set(this, encryptedContent, nullptr);
	$set(this, sealAlg, nullptr);
	$set(this, paramsAlg, nullptr);
	$set(this, encodedParams, nullptr);
	$set(this, encryptedContent, $cast($bytes, $nc($nc(so)->encryptedContent)->clone()));
	$set(this, sealAlg, so->sealAlg);
	$set(this, paramsAlg, so->paramsAlg);
	if (so->encodedParams != nullptr) {
		$set(this, encodedParams, $cast($bytes, $nc(so->encodedParams)->clone()));
	} else {
		$set(this, encodedParams, nullptr);
	}
}

$String* SealedObject::getAlgorithm() {
	return this->sealAlg;
}

$Object* SealedObject::getObject($Key* key) {
	$useLocalCurrentObjectStackCache();
	if (key == nullptr) {
		$throwNew($NullPointerException, "key is null"_s);
	}
	try {
		return $of(unseal(key, nullptr));
	} catch ($NoSuchProviderException& nspe) {
		$throwNew($NoSuchAlgorithmException, "algorithm not found"_s);
	} catch ($IllegalBlockSizeException& ibse) {
		$throwNew($InvalidKeyException, $(ibse->getMessage()));
	} catch ($BadPaddingException& bpe) {
		$throwNew($InvalidKeyException, $(bpe->getMessage()));
	}
	$shouldNotReachHere();
}

$Object* SealedObject::getObject($Cipher* c) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInput, a, getExtObjectInputStream(c));
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Object, obj, $nc(a)->readObject());
			$assign(var$2, obj);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(a)->close();
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

$Object* SealedObject::getObject($Key* key, $String* provider) {
	$useLocalCurrentObjectStackCache();
	if (key == nullptr) {
		$throwNew($NullPointerException, "key is null"_s);
	}
	if (provider == nullptr || $nc(provider)->isEmpty()) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	try {
		return $of(unseal(key, provider));
	} catch ($IllegalBlockSizeException& ex) {
		$throwNew($InvalidKeyException, $(ex->getMessage()));
	} catch ($BadPaddingException& ex) {
		$throwNew($InvalidKeyException, $(ex->getMessage()));
	}
	$shouldNotReachHere();
}

$Object* SealedObject::unseal($Key* key, $String* provider) {
	$useLocalCurrentObjectStackCache();
	$var($AlgorithmParameters, params, nullptr);
	if (this->encodedParams != nullptr) {
		try {
			if (provider != nullptr) {
				$assign(params, $AlgorithmParameters::getInstance(this->paramsAlg, provider));
			} else {
				$assign(params, $AlgorithmParameters::getInstance(this->paramsAlg));
			}
		} catch ($NoSuchProviderException& nspe) {
			if (provider == nullptr) {
				$throwNew($NoSuchAlgorithmException, $$str({this->paramsAlg, " not found"_s}));
			} else {
				$throwNew($NoSuchProviderException, $(nspe->getMessage()));
			}
		}
		$nc(params)->init(this->encodedParams);
	}
	$var($Cipher, c, nullptr);
	try {
		if (provider != nullptr) {
			$assign(c, $Cipher::getInstance(this->sealAlg, provider));
		} else {
			$assign(c, $Cipher::getInstance(this->sealAlg));
		}
	} catch ($NoSuchPaddingException& nspe) {
		$throwNew($NoSuchAlgorithmException, "Padding that was used in sealing operation not available"_s);
	} catch ($NoSuchProviderException& nspe) {
		if (provider == nullptr) {
			$throwNew($NoSuchAlgorithmException, $$str({this->sealAlg, " not found"_s}));
		} else {
			$throwNew($NoSuchProviderException, $(nspe->getMessage()));
		}
	}
	try {
		if (params != nullptr) {
			$nc(c)->init($Cipher::DECRYPT_MODE, key, params);
		} else {
			$nc(c)->init($Cipher::DECRYPT_MODE, key);
		}
	} catch ($InvalidAlgorithmParameterException& iape) {
		$throwNew($RuntimeException, $(iape->getMessage()));
	}
	$var($ObjectInput, a, getExtObjectInputStream(c));
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Object, obj, $nc(a)->readObject());
			$assign(var$2, obj);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(a)->close();
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

void SealedObject::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (this->encryptedContent != nullptr) {
		$set(this, encryptedContent, $cast($bytes, $nc(this->encryptedContent)->clone()));
	}
	if (this->encodedParams != nullptr) {
		$set(this, encodedParams, $cast($bytes, $nc(this->encodedParams)->clone()));
	}
}

$ObjectInputStream* SealedObject::getExtObjectInputStream($Cipher* c) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, content, $nc(c)->doFinal(this->encryptedContent));
	$var($ByteArrayInputStream, b, $new($ByteArrayInputStream, content));
	return $new($extObjectInputStream, b);
}

$ObjectInputStream* SealedObject::lambda$static$0(SealedObject* obj, $Cipher* c) {
	$init(SealedObject);
	return $nc(obj)->getExtObjectInputStream(c);
}

void clinit$SealedObject($Class* class$) {
	{
		$SharedSecrets::setJavaxCryptoSealedObjectAccess(static_cast<$JavaxCryptoSealedObjectAccess*>($$new(SealedObject$$Lambda$lambda$static$0)));
	}
}

SealedObject::SealedObject() {
}

$Class* SealedObject::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SealedObject$$Lambda$lambda$static$0::classInfo$.name)) {
			return SealedObject$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(SealedObject, name, initialize, &_SealedObject_ClassInfo_, clinit$SealedObject, allocate$SealedObject);
	return class$;
}

$Class* SealedObject::class$ = nullptr;

	} // crypto
} // javax