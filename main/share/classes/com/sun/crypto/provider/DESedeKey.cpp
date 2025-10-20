#include <com/sun/crypto/provider/DESedeKey.h>

#include <com/sun/crypto/provider/DESKeyGenerator.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Reference = ::java::lang::ref::Reference;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DESedeKey$$Lambda$lambda$new$0>());
	}
	$bytes* k = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DESedeKey$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"k", "[B", nullptr, $PUBLIC, $field(DESedeKey$$Lambda$lambda$new$0, k)},
	{}
};
$MethodInfo DESedeKey$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(DESedeKey$$Lambda$lambda$new$0::*)($bytes*)>(&DESedeKey$$Lambda$lambda$new$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DESedeKey$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.crypto.provider.DESedeKey$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* DESedeKey$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(DESedeKey$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DESedeKey$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _DESedeKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DESedeKey, serialVersionUID)},
	{"key", "[B", nullptr, $PRIVATE, $field(DESedeKey, key)},
	{}
};

$MethodInfo _DESedeKey_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(DESedeKey::*)($bytes*)>(&DESedeKey::init$)), "java.security.InvalidKeyException"},
	{"<init>", "([BI)V", nullptr, 0, $method(static_cast<void(DESedeKey::*)($bytes*,int32_t)>(&DESedeKey::init$)), "java.security.InvalidKeyException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEncoded", "()[B", nullptr, $PUBLIC},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"lambda$new$0", "([B)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($bytes*)>(&DESedeKey::lambda$new$0))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DESedeKey::*)($ObjectInputStream*)>(&DESedeKey::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(DESedeKey::*)()>(&DESedeKey::writeReplace)), "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _DESedeKey_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.DESedeKey",
	"java.lang.Object",
	"javax.crypto.SecretKey",
	_DESedeKey_FieldInfo_,
	_DESedeKey_MethodInfo_
};

$Object* allocate$DESedeKey($Class* clazz) {
	return $of($alloc(DESedeKey));
}

void DESedeKey::init$($bytes* key) {
	DESedeKey::init$(key, 0);
}

void DESedeKey::init$($bytes* key, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	if (key == nullptr || (($nc(key)->length - offset) < $DESedeKeySpec::DES_EDE_KEY_LEN)) {
		$throwNew($InvalidKeyException, "Wrong key size"_s);
	}
	$set(this, key, $new($bytes, $DESedeKeySpec::DES_EDE_KEY_LEN));
	$System::arraycopy(key, offset, this->key, 0, $DESedeKeySpec::DES_EDE_KEY_LEN);
	$DESKeyGenerator::setParityBit(this->key, 0);
	$DESKeyGenerator::setParityBit(this->key, 8);
	$DESKeyGenerator::setParityBit(this->key, 16);
	$var($bytes, k, this->key);
	$nc($($CleanerFactory::cleaner()))->register$(this, static_cast<$Runnable*>($$new(DESedeKey$$Lambda$lambda$new$0, k)));
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
		retval += $nc(this->key)->get(i) * i;
	}
	return (retval ^= "desede"_s->hashCode());
}

bool DESedeKey::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf($SecretKey, obj))) {
		return false;
	}
	$var($String, thatAlg, $nc(($cast($SecretKey, obj)))->getAlgorithm());
	bool var$0 = !($nc(thatAlg)->equalsIgnoreCase("DESede"_s));
	if (var$0 && !(thatAlg->equalsIgnoreCase("TripleDES"_s))) {
		return false;
	}
	$var($bytes, thatKey, ($cast($SecretKey, obj))->getEncoded());
	bool ret = $MessageDigest::isEqual(this->key, thatKey);
	$Arrays::fill(thatKey, (int8_t)0);
	return ret;
}

void DESedeKey::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$set(this, key, $cast($bytes, $nc(this->key)->clone()));
}

$Object* DESedeKey::writeReplace() {
	$useLocalCurrentObjectStackCache();
	$init($KeyRep$Type);
	$var($KeyRep$Type, var$0, $KeyRep$Type::SECRET);
	$var($String, var$1, getAlgorithm());
	return $of($new($KeyRep, var$0, var$1, $(getFormat()), this->key));
}

void DESedeKey::lambda$new$0($bytes* k) {
	$init(DESedeKey);
	$Arrays::fill(k, (int8_t)0);
}

DESedeKey::DESedeKey() {
}

$Class* DESedeKey::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DESedeKey$$Lambda$lambda$new$0::classInfo$.name)) {
			return DESedeKey$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(DESedeKey, name, initialize, &_DESedeKey_ClassInfo_, allocate$DESedeKey);
	return class$;
}

$Class* DESedeKey::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com