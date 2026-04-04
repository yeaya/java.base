#include <com/sun/crypto/provider/SealedObjectForKeyProtector$DeserializationChecker.h>
#include <com/sun/crypto/provider/SealedObjectForKeyProtector.h>
#include <java/io/ObjectInputFilter$Config.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <java/io/ObjectInputFilter$Status.h>
#include <java/io/ObjectInputFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Security.h>
#include <jcpp.h>

#undef OWN_FILTER
#undef REJECTED
#undef UNDECIDED

using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputFilter$Config = ::java::io::ObjectInputFilter$Config;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ObjectInputFilter$Status = ::java::io::ObjectInputFilter$Status;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(SealedObjectForKeyProtector$DeserializationChecker::lambda$static$0());
	}
};
$Class* SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.crypto.provider.SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0::class$ = nullptr;

$ObjectInputFilter* SealedObjectForKeyProtector$DeserializationChecker::OWN_FILTER = nullptr;

void SealedObjectForKeyProtector$DeserializationChecker::init$(int32_t maxLength) {
	this->maxLength = maxLength;
}

$ObjectInputFilter$Status* SealedObjectForKeyProtector$DeserializationChecker::checkInput($ObjectInputFilter$FilterInfo* info) {
	if ($nc(info)->arrayLength() > this->maxLength) {
		$init($ObjectInputFilter$Status);
		return $ObjectInputFilter$Status::REJECTED;
	}
	if (info->serialClass() == $Object::class$) {
		$init($ObjectInputFilter$Status);
		return $ObjectInputFilter$Status::UNDECIDED;
	}
	if (SealedObjectForKeyProtector$DeserializationChecker::OWN_FILTER != nullptr) {
		$ObjectInputFilter$Status* result = SealedObjectForKeyProtector$DeserializationChecker::OWN_FILTER->checkInput(info);
		$init($ObjectInputFilter$Status);
		if (result != $ObjectInputFilter$Status::UNDECIDED) {
			return result;
		}
	}
	$var($ObjectInputFilter, defaultFilter, $ObjectInputFilter$Config::getSerialFilter());
	if (defaultFilter != nullptr) {
		return defaultFilter->checkInput(info);
	}
	$init($ObjectInputFilter$Status);
	return $ObjectInputFilter$Status::UNDECIDED;
}

$String* SealedObjectForKeyProtector$DeserializationChecker::lambda$static$0() {
	$init(SealedObjectForKeyProtector$DeserializationChecker);
	$var($String, tmp, $System::getProperty("jceks.key.serialFilter"_s));
	if (tmp != nullptr) {
		return tmp;
	} else {
		return $Security::getProperty("jceks.key.serialFilter"_s);
	}
}

void SealedObjectForKeyProtector$DeserializationChecker::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		$var($String, prop, $cast($String, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0)))));
		$assignStatic(SealedObjectForKeyProtector$DeserializationChecker::OWN_FILTER, prop == nullptr ? ($ObjectInputFilter*)nullptr : $ObjectInputFilter$Config::createFilter(prop));
	}
}

SealedObjectForKeyProtector$DeserializationChecker::SealedObjectForKeyProtector$DeserializationChecker() {
}

$Class* SealedObjectForKeyProtector$DeserializationChecker::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.crypto.provider.SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0")) {
			return SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"OWN_FILTER", "Ljava/io/ObjectInputFilter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SealedObjectForKeyProtector$DeserializationChecker, OWN_FILTER)},
		{"maxLength", "I", nullptr, $PRIVATE | $FINAL, $field(SealedObjectForKeyProtector$DeserializationChecker, maxLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PRIVATE, $method(SealedObjectForKeyProtector$DeserializationChecker, init$, void, int32_t)},
		{"checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC, $virtualMethod(SealedObjectForKeyProtector$DeserializationChecker, checkInput, $ObjectInputFilter$Status*, $ObjectInputFilter$FilterInfo*)},
		{"lambda$static$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SealedObjectForKeyProtector$DeserializationChecker, lambda$static$0, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.SealedObjectForKeyProtector$DeserializationChecker", "com.sun.crypto.provider.SealedObjectForKeyProtector", "DeserializationChecker", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.crypto.provider.SealedObjectForKeyProtector$DeserializationChecker",
		"java.lang.Object",
		"java.io.ObjectInputFilter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.SealedObjectForKeyProtector"
	};
	$loadClass(SealedObjectForKeyProtector$DeserializationChecker, name, initialize, &classInfo$$, SealedObjectForKeyProtector$DeserializationChecker::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SealedObjectForKeyProtector$DeserializationChecker);
	});
	return class$;
}

$Class* SealedObjectForKeyProtector$DeserializationChecker::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com