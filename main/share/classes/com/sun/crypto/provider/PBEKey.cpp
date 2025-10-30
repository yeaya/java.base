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
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Reference = ::java::lang::ref::Reference;
using $Key = ::java::security::Key;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PBEKey$$Lambda$lambda$new$0>());
	}
	$bytes* k = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PBEKey$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"k", "[B", nullptr, $PUBLIC, $field(PBEKey$$Lambda$lambda$new$0, k)},
	{}
};
$MethodInfo PBEKey$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(PBEKey$$Lambda$lambda$new$0::*)($bytes*)>(&PBEKey$$Lambda$lambda$new$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PBEKey$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.crypto.provider.PBEKey$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* PBEKey$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(PBEKey$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PBEKey$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _PBEKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(PBEKey, serialVersionUID)},
	{"key", "[B", nullptr, $PRIVATE, $field(PBEKey, key)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PBEKey, type)},
	{}
};

$MethodInfo _PBEKey_MethodInfo_[] = {
	{"<init>", "(Ljavax/crypto/spec/PBEKeySpec;Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(PBEKey::*)($PBEKeySpec*,$String*,bool)>(&PBEKey::init$)), "java.security.spec.InvalidKeySpecException"},
	{"destroy", "()V", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEncoded", "()[B", nullptr, $PUBLIC},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"lambda$new$0", "([B)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($bytes*)>(&PBEKey::lambda$new$0))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PBEKey::*)($ObjectInputStream*)>(&PBEKey::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(PBEKey::*)()>(&PBEKey::writeReplace)), "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _PBEKey_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBEKey",
	"java.lang.Object",
	"javax.crypto.SecretKey",
	_PBEKey_FieldInfo_,
	_PBEKey_MethodInfo_
};

$Object* allocate$PBEKey($Class* clazz) {
	return $of($alloc(PBEKey));
}

void PBEKey::init$($PBEKeySpec* keySpec, $String* keytype, bool useCleaner) {
	$useLocalCurrentObjectStackCache();
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
	$set(this, key, $new($bytes, $nc(passwd)->length));
	for (int32_t i = 0; i < passwd->length; ++i) {
		$nc(this->key)->set(i, (int8_t)((int32_t)(passwd->get(i) & (uint32_t)127)));
	}
	$Arrays::fill(passwd, u'\0');
	$set(this, type, keytype);
	if (useCleaner) {
		$var($bytes, k, this->key);
		$nc($($CleanerFactory::cleaner()))->register$(this, static_cast<$Runnable*>($$new(PBEKey$$Lambda$lambda$new$0, k)));
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
	$useLocalCurrentObjectStackCache();
	int32_t retval = 0;
	for (int32_t i = 1; i < $nc(this->key)->length; ++i) {
		retval += $nc(this->key)->get(i) * i;
	}
	$init($Locale);
	return (retval ^= $($nc($(getAlgorithm()))->toLowerCase($Locale::ENGLISH))->hashCode());
}

bool PBEKey::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf($SecretKey, obj))) {
		return false;
	}
	$var($SecretKey, that, $cast($SecretKey, obj));
	if (!($nc($($nc(that)->getAlgorithm()))->equalsIgnoreCase(this->type))) {
		return false;
	}
	$var($bytes, thatEncoded, $nc(that)->getEncoded());
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
	$useLocalCurrentObjectStackCache();
	$init($KeyRep$Type);
	$var($KeyRep$Type, var$0, $KeyRep$Type::SECRET);
	$var($String, var$1, getAlgorithm());
	return $of($new($KeyRep, var$0, var$1, $(getFormat()), this->key));
}

void PBEKey::lambda$new$0($bytes* k) {
	$init(PBEKey);
	$Arrays::fill(k, (int8_t)0);
}

PBEKey::PBEKey() {
}

$Class* PBEKey::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PBEKey$$Lambda$lambda$new$0::classInfo$.name)) {
			return PBEKey$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(PBEKey, name, initialize, &_PBEKey_ClassInfo_, allocate$PBEKey);
	return class$;
}

$Class* PBEKey::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com