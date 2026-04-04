#include <com/sun/crypto/provider/DESedeKey.h>
#include <com/sun/crypto/provider/DESKeyGenerator.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/ref/Reference.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/KeyRep$Type.h>
#include <java/security/KeyRep.h>
#include <java/security/MessageDigest.h>
#include <java/util/Arrays.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/DESedeKeySpec.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jcpp.h>

#undef DES_EDE_KEY_LEN
#undef SECRET

using $DESKeyGenerator = ::com::sun::crypto::provider::DESKeyGenerator;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Reference = ::java::lang::ref::Reference;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $KeyRep = ::java::security::KeyRep;
using $KeyRep$Type = ::java::security::KeyRep$Type;
using $MessageDigest = ::java::security::MessageDigest;
using $Arrays = ::java::util::Arrays;
using $SecretKey = ::javax::crypto::SecretKey;
using $DESedeKeySpec = ::javax::crypto::spec::DESedeKeySpec;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class DESedeKey$$Lambda$lambda$new$0 : public $Runnable {
	$class(DESedeKey$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($bytes* k) {
		$set(this, k, k);
	}
	virtual void run() override {
		DESedeKey::lambda$new$0(k);
	}
	$bytes* k = nullptr;
};
$Class* DESedeKey$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"k", "[B", nullptr, $PUBLIC, $field(DESedeKey$$Lambda$lambda$new$0, k)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(DESedeKey$$Lambda$lambda$new$0, init$, void, $bytes*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DESedeKey$$Lambda$lambda$new$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.crypto.provider.DESedeKey$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DESedeKey$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DESedeKey$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* DESedeKey$$Lambda$lambda$new$0::class$ = nullptr;

void DESedeKey::init$($bytes* key) {
	DESedeKey::init$(key, 0);
}

void DESedeKey::init$($bytes* key, int32_t offset) {
	$useLocalObjectStack();
	if (key == nullptr || ((key->length - offset) < $DESedeKeySpec::DES_EDE_KEY_LEN)) {
		$throwNew($InvalidKeyException, "Wrong key size"_s);
	}
	$set(this, key, $new($bytes, $DESedeKeySpec::DES_EDE_KEY_LEN));
	$System::arraycopy(key, offset, this->key, 0, $DESedeKeySpec::DES_EDE_KEY_LEN);
	$DESKeyGenerator::setParityBit(this->key, 0);
	$DESKeyGenerator::setParityBit(this->key, 8);
	$DESKeyGenerator::setParityBit(this->key, 16);
	$var($bytes, k, this->key);
	$$nc($CleanerFactory::cleaner())->register$(this, $$new(DESedeKey$$Lambda$lambda$new$0, k));
}

$bytes* DESedeKey::getEncoded() {
	$var($bytes, result, $cast($bytes, $nc(this->key)->clone()));
	$Reference::reachabilityFence(this);
	return result;
}

$String* DESedeKey::getAlgorithm() {
	return "DESede"_s;
}

$String* DESedeKey::getFormat() {
	return "RAW"_s;
}

int32_t DESedeKey::hashCode() {
	int32_t retval = 0;
	for (int32_t i = 1; i < $nc(this->key)->length; ++i) {
		retval += this->key->get(i) * i;
	}
	return (retval ^= "desede"_s->hashCode());
}

bool DESedeKey::equals(Object$* obj) {
	$useLocalObjectStack();
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf($SecretKey, obj))) {
		return false;
	}
	$var($String, thatAlg, $nc($cast($SecretKey, obj))->getAlgorithm());
	bool var$0 = !($nc(thatAlg)->equalsIgnoreCase("DESede"_s));
	if (var$0 && !(thatAlg->equalsIgnoreCase("TripleDES"_s))) {
		return false;
	}
	$var($bytes, thatKey, $cast($SecretKey, obj)->getEncoded());
	bool ret = $MessageDigest::isEqual(this->key, thatKey);
	$Arrays::fill(thatKey, (int8_t)0);
	return ret;
}

void DESedeKey::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$set(this, key, $cast($bytes, $nc(this->key)->clone()));
}

$Object* DESedeKey::writeReplace() {
	$useLocalObjectStack();
	$init($KeyRep$Type);
	$var($KeyRep$Type, var$0, $KeyRep$Type::SECRET);
	$var($String, var$1, getAlgorithm());
	return $new($KeyRep, var$0, var$1, $(getFormat()), this->key);
}

void DESedeKey::lambda$new$0($bytes* k) {
	$init(DESedeKey);
	$Arrays::fill(k, (int8_t)0);
}

DESedeKey::DESedeKey() {
}

$Class* DESedeKey::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.crypto.provider.DESedeKey$$Lambda$lambda$new$0")) {
			return DESedeKey$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DESedeKey, serialVersionUID)},
		{"key", "[B", nullptr, $PRIVATE, $field(DESedeKey, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, 0, $method(DESedeKey, init$, void, $bytes*), "java.security.InvalidKeyException"},
		{"<init>", "([BI)V", nullptr, 0, $method(DESedeKey, init$, void, $bytes*, int32_t), "java.security.InvalidKeyException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DESedeKey, equals, bool, Object$*)},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DESedeKey, getAlgorithm, $String*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC, $virtualMethod(DESedeKey, getEncoded, $bytes*)},
		{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DESedeKey, getFormat, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DESedeKey, hashCode, int32_t)},
		{"lambda$new$0", "([B)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DESedeKey, lambda$new$0, void, $bytes*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(DESedeKey, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(DESedeKey, writeReplace, $Object*), "java.io.ObjectStreamException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.DESedeKey",
		"java.lang.Object",
		"javax.crypto.SecretKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DESedeKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DESedeKey));
	});
	return class$;
}

$Class* DESedeKey::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com