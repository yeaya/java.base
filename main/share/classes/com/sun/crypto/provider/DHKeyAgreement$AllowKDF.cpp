#include <com/sun/crypto/provider/DHKeyAgreement$AllowKDF.h>
#include <com/sun/crypto/provider/DHKeyAgreement.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

#undef VALUE

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
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
};
$Class* DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.crypto.provider.DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0);
	});
	return class$;
}
$Class* DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0::class$ = nullptr;

bool DHKeyAgreement$AllowKDF::VALUE = false;

void DHKeyAgreement$AllowKDF::init$() {
}

bool DHKeyAgreement$AllowKDF::getValue() {
	$init(DHKeyAgreement$AllowKDF);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	return $$sure($Boolean, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0))))->booleanValue();
}

$Boolean* DHKeyAgreement$AllowKDF::lambda$getValue$0() {
	$init(DHKeyAgreement$AllowKDF);
	return $Boolean::valueOf($Boolean::getBoolean("jdk.crypto.KeyAgreement.legacyKDF"_s));
}

void DHKeyAgreement$AllowKDF::clinit$($Class* clazz) {
	DHKeyAgreement$AllowKDF::VALUE = DHKeyAgreement$AllowKDF::getValue();
}

DHKeyAgreement$AllowKDF::DHKeyAgreement$AllowKDF() {
}

$Class* DHKeyAgreement$AllowKDF::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.crypto.provider.DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0")) {
			return DHKeyAgreement$AllowKDF$$Lambda$lambda$getValue$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"VALUE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DHKeyAgreement$AllowKDF, VALUE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DHKeyAgreement$AllowKDF, init$, void)},
		{"getValue", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(DHKeyAgreement$AllowKDF, getValue, bool)},
		{"lambda$getValue$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DHKeyAgreement$AllowKDF, lambda$getValue$0, $Boolean*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.DHKeyAgreement$AllowKDF", "com.sun.crypto.provider.DHKeyAgreement", "AllowKDF", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.crypto.provider.DHKeyAgreement$AllowKDF",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.DHKeyAgreement"
	};
	$loadClass(DHKeyAgreement$AllowKDF, name, initialize, &classInfo$$, DHKeyAgreement$AllowKDF::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DHKeyAgreement$AllowKDF);
	});
	return class$;
}

$Class* DHKeyAgreement$AllowKDF::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com