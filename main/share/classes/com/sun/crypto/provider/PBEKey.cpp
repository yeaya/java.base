#include <com/sun/crypto/provider/PBEKey.h>
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
#include <java/security/Key.h>
#include <java/security/KeyRep$Type.h>
#include <java/security/KeyRep.h>
#include <java/security/MessageDigest.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/PBEKeySpec.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jcpp.h>

#undef ENGLISH
#undef SECRET

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Reference = ::java::lang::ref::Reference;
using $KeyRep = ::java::security::KeyRep;
using $KeyRep$Type = ::java::security::KeyRep$Type;
using $MessageDigest = ::java::security::MessageDigest;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $SecretKey = ::javax::crypto::SecretKey;
using $PBEKeySpec = ::javax::crypto::spec::PBEKeySpec;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class PBEKey$$Lambda$lambda$new$0 : public $Runnable {
	$class(PBEKey$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($bytes* k) {
		$set(this, k, k);
	}
	virtual void run() override {
		PBEKey::lambda$new$0(k);
	}
	$bytes* k = nullptr;
};
$Class* PBEKey$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"k", "[B", nullptr, $PUBLIC, $field(PBEKey$$Lambda$lambda$new$0, k)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(PBEKey$$Lambda$lambda$new$0, init$, void, $bytes*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PBEKey$$Lambda$lambda$new$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.crypto.provider.PBEKey$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PBEKey$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBEKey$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* PBEKey$$Lambda$lambda$new$0::class$ = nullptr;

void PBEKey::init$($PBEKeySpec* keySpec, $String* keytype, bool useCleaner) {
	$useLocalObjectStack();
	$var($chars, passwd, $nc(keySpec)->getPassword());
	if (passwd == nullptr) {
		$assign(passwd, $new($chars, 0));
	}
	if (!($nc(passwd)->length == 1 && passwd->get(0) == 0)) {
		for (int32_t i = 0; i < passwd->length; ++i) {
			if ((passwd->get(i) < u' ') || (passwd->get(i) > u'~')) {
				$throwNew($InvalidKeySpecException, "Password is not ASCII"_s);
			}
		}
	}
	$set(this, key, $new($bytes, passwd->length));
	for (int32_t i = 0; i < passwd->length; ++i) {
		this->key->set(i, (int8_t)(passwd->get(i) & 0x7f));
	}
	$Arrays::fill(passwd, u'\0');
	$set(this, type, keytype);
	if (useCleaner) {
		$var($bytes, k, this->key);
		$$nc($CleanerFactory::cleaner())->register$(this, $$new(PBEKey$$Lambda$lambda$new$0, k));
	}
}

$bytes* PBEKey::getEncoded() {
	$var($bytes, result, $cast($bytes, $nc(this->key)->clone()));
	$Reference::reachabilityFence(this);
	return result;
}

$String* PBEKey::getAlgorithm() {
	return this->type;
}

$String* PBEKey::getFormat() {
	return "RAW"_s;
}

int32_t PBEKey::hashCode() {
	$useLocalObjectStack();
	int32_t retval = 0;
	for (int32_t i = 1; i < $nc(this->key)->length; ++i) {
		retval += this->key->get(i) * i;
	}
	$init($Locale);
	return (retval ^= $($$nc(getAlgorithm())->toLowerCase($Locale::ENGLISH))->hashCode());
}

bool PBEKey::equals(Object$* obj) {
	$useLocalObjectStack();
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf($SecretKey, obj))) {
		return false;
	}
	$var($SecretKey, that, $cast($SecretKey, obj));
	if (!($$nc($nc(that)->getAlgorithm())->equalsIgnoreCase(this->type))) {
		return false;
	}
	$var($bytes, thatEncoded, that->getEncoded());
	bool ret = $MessageDigest::isEqual(this->key, thatEncoded);
	$Arrays::fill(thatEncoded, (int8_t)0);
	return ret;
}

void PBEKey::destroy() {
	if (this->key != nullptr) {
		$Arrays::fill(this->key, (int8_t)0);
		$set(this, key, nullptr);
	}
}

void PBEKey::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$set(this, key, $cast($bytes, $nc(this->key)->clone()));
}

$Object* PBEKey::writeReplace() {
	$useLocalObjectStack();
	$init($KeyRep$Type);
	$var($KeyRep$Type, var$0, $KeyRep$Type::SECRET);
	$var($String, var$1, getAlgorithm());
	return $new($KeyRep, var$0, var$1, $(getFormat()), this->key);
}

void PBEKey::lambda$new$0($bytes* k) {
	$init(PBEKey);
	$Arrays::fill(k, (int8_t)0);
}

PBEKey::PBEKey() {
}

$Class* PBEKey::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.crypto.provider.PBEKey$$Lambda$lambda$new$0")) {
			return PBEKey$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(PBEKey, serialVersionUID)},
		{"key", "[B", nullptr, $PRIVATE, $field(PBEKey, key)},
		{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PBEKey, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/crypto/spec/PBEKeySpec;Ljava/lang/String;Z)V", nullptr, 0, $method(PBEKey, init$, void, $PBEKeySpec*, $String*, bool), "java.security.spec.InvalidKeySpecException"},
		{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(PBEKey, destroy, void)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PBEKey, equals, bool, Object$*)},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PBEKey, getAlgorithm, $String*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC, $virtualMethod(PBEKey, getEncoded, $bytes*)},
		{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PBEKey, getFormat, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PBEKey, hashCode, int32_t)},
		{"lambda$new$0", "([B)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PBEKey, lambda$new$0, void, $bytes*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(PBEKey, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(PBEKey, writeReplace, $Object*), "java.io.ObjectStreamException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBEKey",
		"java.lang.Object",
		"javax.crypto.SecretKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PBEKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PBEKey));
	});
	return class$;
}

$Class* PBEKey::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com