#include <javax/crypto/SealedObject.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutput.h>
#include <java/io/ObjectOutputStream.h>
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
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
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
};
$Class* SealedObject$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SealedObject$$Lambda$lambda$static$0, init$, void)},
		{"getExtObjectInputStream", "(Ljavax/crypto/SealedObject;Ljavax/crypto/Cipher;)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC, $virtualMethod(SealedObject$$Lambda$lambda$static$0, getExtObjectInputStream, $ObjectInputStream*, SealedObject*, $Cipher*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.crypto.SealedObject$$Lambda$lambda$static$0",
		"java.lang.Object",
		"jdk.internal.access.JavaxCryptoSealedObjectAccess",
		nullptr,
		methodInfos$$
	};
	$loadClass(SealedObject$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SealedObject$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* SealedObject$$Lambda$lambda$static$0::class$ = nullptr;

void SealedObject::init$($Serializable* object, $Cipher* c) {
	$useLocalObjectStack();
	$set(this, encryptedContent, nullptr);
	$set(this, sealAlg, nullptr);
	$set(this, paramsAlg, nullptr);
	$set(this, encodedParams, nullptr);
	$var($ByteArrayOutputStream, b, $new($ByteArrayOutputStream));
	$var($ObjectOutput, a, $new($ObjectOutputStream, b));
	$var($bytes, content, nullptr);
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
	if ($nc(c)->getParameters() != nullptr) {
		$set(this, encodedParams, $$nc(c->getParameters())->getEncoded());
		$set(this, paramsAlg, $$nc(c->getParameters())->getAlgorithm());
	}
	$set(this, sealAlg, c->getAlgorithm());
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
		$set(this, encodedParams, $cast($bytes, so->encodedParams->clone()));
	} else {
		$set(this, encodedParams, nullptr);
	}
}

$String* SealedObject::getAlgorithm() {
	return this->sealAlg;
}

$Object* SealedObject::getObject($Key* key) {
	$useLocalObjectStack();
	if (key == nullptr) {
		$throwNew($NullPointerException, "key is null"_s);
	}
	try {
		return unseal(key, nullptr);
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
	$useLocalObjectStack();
	$var($ObjectInput, a, getExtObjectInputStream(c));
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
	$shouldNotReachHere();
}

$Object* SealedObject::getObject($Key* key, $String* provider) {
	$useLocalObjectStack();
	if (key == nullptr) {
		$throwNew($NullPointerException, "key is null"_s);
	}
	if (provider == nullptr || provider->isEmpty()) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	try {
		return unseal(key, provider);
	} catch ($IllegalBlockSizeException& ex) {
		$throwNew($InvalidKeyException, $(ex->getMessage()));
	} catch ($BadPaddingException& ex) {
		$throwNew($InvalidKeyException, $(ex->getMessage()));
	}
	$shouldNotReachHere();
}

$Object* SealedObject::unseal($Key* key, $String* provider) {
	$useLocalObjectStack();
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
	$shouldNotReachHere();
}

void SealedObject::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (this->encryptedContent != nullptr) {
		$set(this, encryptedContent, $cast($bytes, this->encryptedContent->clone()));
	}
	if (this->encodedParams != nullptr) {
		$set(this, encodedParams, $cast($bytes, this->encodedParams->clone()));
	}
}

$ObjectInputStream* SealedObject::getExtObjectInputStream($Cipher* c) {
	$useLocalObjectStack();
	$var($bytes, content, $nc(c)->doFinal(this->encryptedContent));
	$var($ByteArrayInputStream, b, $new($ByteArrayInputStream, content));
	return $new($extObjectInputStream, b);
}

$ObjectInputStream* SealedObject::lambda$static$0(SealedObject* obj, $Cipher* c) {
	$init(SealedObject);
	return $nc(obj)->getExtObjectInputStream(c);
}

void SealedObject::clinit$($Class* clazz) {
	{
		$SharedSecrets::setJavaxCryptoSealedObjectAccess($$new(SealedObject$$Lambda$lambda$static$0));
	}
}

SealedObject::SealedObject() {
}

$Class* SealedObject::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.crypto.SealedObject$$Lambda$lambda$static$0")) {
			return SealedObject$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SealedObject, serialVersionUID)},
		{"encryptedContent", "[B", nullptr, $PRIVATE, $field(SealedObject, encryptedContent)},
		{"sealAlg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SealedObject, sealAlg)},
		{"paramsAlg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SealedObject, paramsAlg)},
		{"encodedParams", "[B", nullptr, $PROTECTED, $field(SealedObject, encodedParams)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/Serializable;Ljavax/crypto/Cipher;)V", nullptr, $PUBLIC, $method(SealedObject, init$, void, $Serializable*, $Cipher*), "java.io.IOException,javax.crypto.IllegalBlockSizeException"},
		{"<init>", "(Ljavax/crypto/SealedObject;)V", nullptr, $PROTECTED, $method(SealedObject, init$, void, SealedObject*)},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(SealedObject, getAlgorithm, $String*)},
		{"getExtObjectInputStream", "(Ljavax/crypto/Cipher;)Ljava/io/ObjectInputStream;", nullptr, $PRIVATE, $method(SealedObject, getExtObjectInputStream, $ObjectInputStream*, $Cipher*), "javax.crypto.BadPaddingException,javax.crypto.IllegalBlockSizeException,java.io.IOException"},
		{"getObject", "(Ljava/security/Key;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(SealedObject, getObject, $Object*, $Key*), "java.io.IOException,java.lang.ClassNotFoundException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException"},
		{"getObject", "(Ljavax/crypto/Cipher;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(SealedObject, getObject, $Object*, $Cipher*), "java.io.IOException,java.lang.ClassNotFoundException,javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
		{"getObject", "(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(SealedObject, getObject, $Object*, $Key*, $String*), "java.io.IOException,java.lang.ClassNotFoundException,java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException,java.security.InvalidKeyException"},
		{"lambda$static$0", "(Ljavax/crypto/SealedObject;Ljavax/crypto/Cipher;)Ljava/io/ObjectInputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SealedObject, lambda$static$0, $ObjectInputStream*, SealedObject*, $Cipher*), "javax.crypto.BadPaddingException,javax.crypto.IllegalBlockSizeException,java.io.IOException"},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(SealedObject, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"unseal", "(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(SealedObject, unseal, $Object*, $Key*, $String*), "java.io.IOException,java.lang.ClassNotFoundException,java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException,java.security.InvalidKeyException,javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.SealedObject",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SealedObject, name, initialize, &classInfo$$, SealedObject::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SealedObject);
	});
	return class$;
}

$Class* SealedObject::class$ = nullptr;

	} // crypto
} // javax