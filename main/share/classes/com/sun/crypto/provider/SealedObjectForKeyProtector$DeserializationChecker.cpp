#include <com/sun/crypto/provider/SealedObjectForKeyProtector$DeserializationChecker.h>

#include <com/sun/crypto/provider/SealedObjectForKeyProtector.h>
#include <java/io/ObjectInputFilter$Config.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <java/io/ObjectInputFilter$Status.h>
#include <java/io/ObjectInputFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Security.h>
#include <jcpp.h>

#undef OWN_FILTER
#undef REJECTED
#undef UNDECIDED

using $SealedObjectForKeyProtector = ::com::sun::crypto::provider::SealedObjectForKeyProtector;
using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputFilter$Config = ::java::io::ObjectInputFilter$Config;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ObjectInputFilter$Status = ::java::io::ObjectInputFilter$Status;
using $Serializable = ::java::io::Serializable;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0::*)()>(&SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.crypto.provider.SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _SealedObjectForKeyProtector$DeserializationChecker_FieldInfo_[] = {
	{"OWN_FILTER", "Ljava/io/ObjectInputFilter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SealedObjectForKeyProtector$DeserializationChecker, OWN_FILTER)},
	{"maxLength", "I", nullptr, $PRIVATE | $FINAL, $field(SealedObjectForKeyProtector$DeserializationChecker, maxLength)},
	{}
};

$MethodInfo _SealedObjectForKeyProtector$DeserializationChecker_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(SealedObjectForKeyProtector$DeserializationChecker::*)(int32_t)>(&SealedObjectForKeyProtector$DeserializationChecker::init$))},
	{"checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC},
	{"lambda$static$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&SealedObjectForKeyProtector$DeserializationChecker::lambda$static$0))},
	{}
};

$InnerClassInfo _SealedObjectForKeyProtector$DeserializationChecker_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.SealedObjectForKeyProtector$DeserializationChecker", "com.sun.crypto.provider.SealedObjectForKeyProtector", "DeserializationChecker", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SealedObjectForKeyProtector$DeserializationChecker_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.crypto.provider.SealedObjectForKeyProtector$DeserializationChecker",
	"java.lang.Object",
	"java.io.ObjectInputFilter",
	_SealedObjectForKeyProtector$DeserializationChecker_FieldInfo_,
	_SealedObjectForKeyProtector$DeserializationChecker_MethodInfo_,
	nullptr,
	nullptr,
	_SealedObjectForKeyProtector$DeserializationChecker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.SealedObjectForKeyProtector"
};

$Object* allocate$SealedObjectForKeyProtector$DeserializationChecker($Class* clazz) {
	return $of($alloc(SealedObjectForKeyProtector$DeserializationChecker));
}

$ObjectInputFilter* SealedObjectForKeyProtector$DeserializationChecker::OWN_FILTER = nullptr;

void SealedObjectForKeyProtector$DeserializationChecker::init$(int32_t maxLength) {
	this->maxLength = maxLength;
}

$ObjectInputFilter$Status* SealedObjectForKeyProtector$DeserializationChecker::checkInput($ObjectInputFilter$FilterInfo* info) {
	if ($nc(info)->arrayLength() > this->maxLength) {
		$init($ObjectInputFilter$Status);
		return $ObjectInputFilter$Status::REJECTED;
	}
	$load($Object);
	if ($nc(info)->serialClass() == $Object::class$) {
		$init($ObjectInputFilter$Status);
		return $ObjectInputFilter$Status::UNDECIDED;
	}
	if (SealedObjectForKeyProtector$DeserializationChecker::OWN_FILTER != nullptr) {
		$ObjectInputFilter$Status* result = $nc(SealedObjectForKeyProtector$DeserializationChecker::OWN_FILTER)->checkInput(info);
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

void clinit$SealedObjectForKeyProtector$DeserializationChecker($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($String, prop, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0)))));
		$assignStatic(SealedObjectForKeyProtector$DeserializationChecker::OWN_FILTER, prop == nullptr ? ($ObjectInputFilter*)nullptr : $ObjectInputFilter$Config::createFilter(prop));
	}
}

SealedObjectForKeyProtector$DeserializationChecker::SealedObjectForKeyProtector$DeserializationChecker() {
}

$Class* SealedObjectForKeyProtector$DeserializationChecker::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0::classInfo$.name)) {
			return SealedObjectForKeyProtector$DeserializationChecker$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(SealedObjectForKeyProtector$DeserializationChecker, name, initialize, &_SealedObjectForKeyProtector$DeserializationChecker_ClassInfo_, clinit$SealedObjectForKeyProtector$DeserializationChecker, allocate$SealedObjectForKeyProtector$DeserializationChecker);
	return class$;
}

$Class* SealedObjectForKeyProtector$DeserializationChecker::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com