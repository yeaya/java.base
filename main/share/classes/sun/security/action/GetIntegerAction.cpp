#include <sun/security/action/GetIntegerAction.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;

namespace sun {
	namespace security {
		namespace action {

void GetIntegerAction::init$($String* theProp) {
	$set(this, theProp, theProp);
}

void GetIntegerAction::init$($String* theProp, int32_t defaultVal) {
	$set(this, theProp, theProp);
	this->defaultVal = defaultVal;
	this->defaultSet = true;
}

$Object* GetIntegerAction::run() {
	$var($Integer, value, $Integer::getInteger(this->theProp));
	if ((value == nullptr) && this->defaultSet) {
		return $of($Integer::valueOf(this->defaultVal));
	}
	return $of(value);
}

$Integer* GetIntegerAction::privilegedGetProperty($String* theProp) {
	$init(GetIntegerAction);
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return $Integer::getInteger(theProp);
	} else {
		return $cast($Integer, $AccessController::doPrivileged($$new(GetIntegerAction, theProp)));
	}
}

$Integer* GetIntegerAction::privilegedGetProperty($String* theProp, int32_t defaultVal) {
	$init(GetIntegerAction);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Integer, value, nullptr);
	if ($System::getSecurityManager() == nullptr) {
		$assign(value, $Integer::getInteger(theProp));
	} else {
		$assign(value, $cast($Integer, $AccessController::doPrivileged($$new(GetIntegerAction, theProp))));
	}
	return $Integer::valueOf((value != nullptr) ? value->intValue() : defaultVal);
}

GetIntegerAction::GetIntegerAction() {
}

$Class* GetIntegerAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theProp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GetIntegerAction, theProp)},
		{"defaultVal", "I", nullptr, $PRIVATE, $field(GetIntegerAction, defaultVal)},
		{"defaultSet", "Z", nullptr, $PRIVATE, $field(GetIntegerAction, defaultSet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(GetIntegerAction, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(GetIntegerAction, init$, void, $String*, int32_t)},
		{"privilegedGetProperty", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC, $staticMethod(GetIntegerAction, privilegedGetProperty, $Integer*, $String*)},
		{"privilegedGetProperty", "(Ljava/lang/String;I)Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC, $staticMethod(GetIntegerAction, privilegedGetProperty, $Integer*, $String*, int32_t)},
		{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(GetIntegerAction, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.action.GetIntegerAction",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Integer;>;"
	};
	$loadClass(GetIntegerAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetIntegerAction);
	});
	return class$;
}

$Class* GetIntegerAction::class$ = nullptr;

		} // action
	} // security
} // sun