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
	$String* propName = nullptr;
};
$Class* SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"propName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0, propName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0, init$, void, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.security.util.SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0);
	});
	return class$;
}
$Class* SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0::class$ = nullptr;

bool SecurityProperties::INCLUDE_JAR_NAME_IN_EXCEPTIONS = false;

void SecurityProperties::init$() {
}

$String* SecurityProperties::privilegedGetOverridable($String* propName) {
	$init(SecurityProperties);
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return getOverridableProperty(propName);
	} else {
		return $cast($String, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0, propName))));
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
	$useLocalObjectStack();
	$var($String, val, privilegedGetOverridable("jdk.includeInExceptions"_s));
	if (val == nullptr) {
		return false;
	}
	$var($StringArray, tokens, $nc(val)->split(","_s));
	{
		$var($StringArray, arr$, tokens);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
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

void SecurityProperties::clinit$($Class* clazz) {
	SecurityProperties::INCLUDE_JAR_NAME_IN_EXCEPTIONS = SecurityProperties::includedInExceptions("jar"_s);
}

SecurityProperties::SecurityProperties() {
}

$Class* SecurityProperties::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.security.util.SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0")) {
			return SecurityProperties$$Lambda$lambda$privilegedGetOverridable$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"INCLUDE_JAR_NAME_IN_EXCEPTIONS", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityProperties, INCLUDE_JAR_NAME_IN_EXCEPTIONS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SecurityProperties, init$, void)},
		{"getOverridableProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SecurityProperties, getOverridableProperty, $String*, $String*)},
		{"includedInExceptions", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SecurityProperties, includedInExceptions, bool, $String*)},
		{"lambda$privilegedGetOverridable$0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecurityProperties, lambda$privilegedGetOverridable$0, $String*, $String*)},
		{"privilegedGetOverridable", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecurityProperties, privilegedGetOverridable, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.SecurityProperties",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SecurityProperties, name, initialize, &classInfo$$, SecurityProperties::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityProperties);
	});
	return class$;
}

$Class* SecurityProperties::class$ = nullptr;

		} // util
	} // security
} // sun