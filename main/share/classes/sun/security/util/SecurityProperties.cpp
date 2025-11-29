#include <sun/security/util/SecurityProperties.h>

#include <java/io/Serializable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Security.h>
#include <jcpp.h>

#undef INCLUDE_JAR_NAME_IN_EXCEPTIONS

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;

namespace sun {
	namespace security {
		namespace util {

class SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0 : public $PrivilegedAction {
	$class(SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* propName) {
		$set(this, propName, propName);
	}
	virtual $Object* run() override {
		 return $of(SecurityProperties::lambda$privilegedGetOverridable$0(propName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0>());
	}
	$String* propName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0::fieldInfos[2] = {
	{"propName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0, propName)},
	{}
};
$MethodInfo SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0::*)($String*)>(&SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.util.SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0::load$($String* name, bool initialize) {
	$loadClass(SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0::class$ = nullptr;

$FieldInfo _SecurityProperties_FieldInfo_[] = {
	{"INCLUDE_JAR_NAME_IN_EXCEPTIONS", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityProperties, INCLUDE_JAR_NAME_IN_EXCEPTIONS)},
	{}
};

$MethodInfo _SecurityProperties_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SecurityProperties::*)()>(&SecurityProperties::init$))},
	{"getOverridableProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&SecurityProperties::getOverridableProperty))},
	{"includedInExceptions", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&SecurityProperties::includedInExceptions))},
	{"lambda$privilegedGetOverridable$0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&SecurityProperties::lambda$privilegedGetOverridable$0))},
	{"privilegedGetOverridable", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&SecurityProperties::privilegedGetOverridable))},
	{}
};

$ClassInfo _SecurityProperties_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.SecurityProperties",
	"java.lang.Object",
	nullptr,
	_SecurityProperties_FieldInfo_,
	_SecurityProperties_MethodInfo_
};

$Object* allocate$SecurityProperties($Class* clazz) {
	return $of($alloc(SecurityProperties));
}

bool SecurityProperties::INCLUDE_JAR_NAME_IN_EXCEPTIONS = false;

void SecurityProperties::init$() {
}

$String* SecurityProperties::privilegedGetOverridable($String* propName) {
	$init(SecurityProperties);
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return getOverridableProperty(propName);
	} else {
		return $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0, propName))));
	}
}

$String* SecurityProperties::getOverridableProperty($String* propName) {
	$init(SecurityProperties);
	$var($String, val, $System::getProperty(propName));
	if (val == nullptr) {
		return $Security::getProperty(propName);
	} else {
		return val;
	}
}

bool SecurityProperties::includedInExceptions($String* refName) {
	$init(SecurityProperties);
	$useLocalCurrentObjectStackCache();
	$var($String, val, privilegedGetOverridable("jdk.includeInExceptions"_s));
	if (val == nullptr) {
		return false;
	}
	$var($StringArray, tokens, $nc(val)->split(","_s));
	{
		$var($StringArray, arr$, tokens);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, token, arr$->get(i$));
			{
				$assign(token, $nc(token)->trim());
				if (token->equalsIgnoreCase(refName)) {
					return true;
				}
			}
		}
	}
	return false;
}

$String* SecurityProperties::lambda$privilegedGetOverridable$0($String* propName) {
	$init(SecurityProperties);
	return getOverridableProperty(propName);
}

void clinit$SecurityProperties($Class* class$) {
	SecurityProperties::INCLUDE_JAR_NAME_IN_EXCEPTIONS = SecurityProperties::includedInExceptions("jar"_s);
}

SecurityProperties::SecurityProperties() {
}

$Class* SecurityProperties::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0::classInfo$.name)) {
			return SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0::load$(name, initialize);
		}
	}
	$loadClass(SecurityProperties, name, initialize, &_SecurityProperties_ClassInfo_, clinit$SecurityProperties, allocate$SecurityProperties);
	return class$;
}

$Class* SecurityProperties::class$ = nullptr;

		} // util
	} // security
} // sun