#include <sun/security/action/GetPropertyAction.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/util/Properties.h>
#include <sun/security/action/GetPropertyAction$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Properties = ::java::util::Properties;
using $GetPropertyAction$1 = ::sun::security::action::GetPropertyAction$1;

namespace sun {
	namespace security {
		namespace action {

void GetPropertyAction::init$($String* theProp) {
	$set(this, theProp, theProp);
}

void GetPropertyAction::init$($String* theProp, $String* defaultVal) {
	$set(this, theProp, theProp);
	$set(this, defaultVal, defaultVal);
}

$Object* GetPropertyAction::run() {
	$var($String, value, $System::getProperty(this->theProp));
	return $of((value == nullptr) ? this->defaultVal : value);
}

$String* GetPropertyAction::privilegedGetProperty($String* theProp) {
	$init(GetPropertyAction);
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return $System::getProperty(theProp);
	} else {
		return $cast($String, $AccessController::doPrivileged($$new(GetPropertyAction, theProp)));
	}
}

$String* GetPropertyAction::privilegedGetProperty($String* theProp, $String* defaultVal) {
	$init(GetPropertyAction);
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return $System::getProperty(theProp, defaultVal);
	} else {
		return $cast($String, $AccessController::doPrivileged($$new(GetPropertyAction, theProp, defaultVal)));
	}
}

$Properties* GetPropertyAction::privilegedGetProperties() {
	$init(GetPropertyAction);
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return $System::getProperties();
	} else {
		return $cast($Properties, $AccessController::doPrivileged($$new($GetPropertyAction$1)));
	}
}

GetPropertyAction::GetPropertyAction() {
}

$Class* GetPropertyAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theProp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GetPropertyAction, theProp)},
		{"defaultVal", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GetPropertyAction, defaultVal)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(GetPropertyAction, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(GetPropertyAction, init$, void, $String*, $String*)},
		{"privilegedGetProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC | $STATIC, $staticMethod(GetPropertyAction, privilegedGetProperties, $Properties*)},
		{"privilegedGetProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(GetPropertyAction, privilegedGetProperty, $String*, $String*)},
		{"privilegedGetProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(GetPropertyAction, privilegedGetProperty, $String*, $String*, $String*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GetPropertyAction, run, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.action.GetPropertyAction$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.action.GetPropertyAction",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.action.GetPropertyAction$1"
	};
	$loadClass(GetPropertyAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetPropertyAction);
	});
	return class$;
}

$Class* GetPropertyAction::class$ = nullptr;

		} // action
	} // security
} // sun