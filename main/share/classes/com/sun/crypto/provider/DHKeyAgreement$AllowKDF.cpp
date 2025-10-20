#include <com/sun/crypto/provider/DHKeyAgreement$AllowKDF.h>

#include <com/sun/crypto/provider/DHKeyAgreement.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

#undef VALUE

using $DHKeyAgreement = ::com::sun::crypto::provider::DHKeyAgreement;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0 : public $PrivilegedAction {
	$class(DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(DHKeyAgreement$AllowKDF::lambda$getValue$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0::*)()>(&DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.crypto.provider.DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0::load$($String* name, bool initialize) {
	$loadClass(DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0::class$ = nullptr;

$FieldInfo _DHKeyAgreement$AllowKDF_FieldInfo_[] = {
	{"VALUE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DHKeyAgreement$AllowKDF, VALUE)},
	{}
};

$MethodInfo _DHKeyAgreement$AllowKDF_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DHKeyAgreement$AllowKDF::*)()>(&DHKeyAgreement$AllowKDF::init$))},
	{"getValue", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&DHKeyAgreement$AllowKDF::getValue))},
	{"lambda$getValue$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)()>(&DHKeyAgreement$AllowKDF::lambda$getValue$0))},
	{}
};

$InnerClassInfo _DHKeyAgreement$AllowKDF_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.DHKeyAgreement$AllowKDF", "com.sun.crypto.provider.DHKeyAgreement", "AllowKDF", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DHKeyAgreement$AllowKDF_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.crypto.provider.DHKeyAgreement$AllowKDF",
	"java.lang.Object",
	nullptr,
	_DHKeyAgreement$AllowKDF_FieldInfo_,
	_DHKeyAgreement$AllowKDF_MethodInfo_,
	nullptr,
	nullptr,
	_DHKeyAgreement$AllowKDF_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.DHKeyAgreement"
};

$Object* allocate$DHKeyAgreement$AllowKDF($Class* clazz) {
	return $of($alloc(DHKeyAgreement$AllowKDF));
}

bool DHKeyAgreement$AllowKDF::VALUE = false;

void DHKeyAgreement$AllowKDF::init$() {
}

bool DHKeyAgreement$AllowKDF::getValue() {
	$init(DHKeyAgreement$AllowKDF);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0)))))))->booleanValue();
}

$Boolean* DHKeyAgreement$AllowKDF::lambda$getValue$0() {
	$init(DHKeyAgreement$AllowKDF);
	return $Boolean::valueOf($Boolean::getBoolean("jdk.crypto.KeyAgreement.legacyKDF"_s));
}

void clinit$DHKeyAgreement$AllowKDF($Class* class$) {
	DHKeyAgreement$AllowKDF::VALUE = DHKeyAgreement$AllowKDF::getValue();
}

DHKeyAgreement$AllowKDF::DHKeyAgreement$AllowKDF() {
}

$Class* DHKeyAgreement$AllowKDF::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0::classInfo$.name)) {
			return DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0::load$(name, initialize);
		}
	}
	$loadClass(DHKeyAgreement$AllowKDF, name, initialize, &_DHKeyAgreement$AllowKDF_ClassInfo_, clinit$DHKeyAgreement$AllowKDF, allocate$DHKeyAgreement$AllowKDF);
	return class$;
}

$Class* DHKeyAgreement$AllowKDF::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com