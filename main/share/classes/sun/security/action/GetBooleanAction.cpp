#include <sun/security/action/GetBooleanAction.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;

namespace sun {
	namespace security {
		namespace action {

void GetBooleanAction::init$($String* theProp) {
	$set(this, theProp, theProp);
}

$Object* GetBooleanAction::run() {
	return $of($Boolean::valueOf($Boolean::getBoolean(this->theProp)));
}

bool GetBooleanAction::privilegedGetProperty($String* theProp) {
	$init(GetBooleanAction);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return $Boolean::getBoolean(theProp);
	} else {
		return $$sure($Boolean, $AccessController::doPrivileged($$new(GetBooleanAction, theProp)))->booleanValue();
	}
}

GetBooleanAction::GetBooleanAction() {
}

$Class* GetBooleanAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theProp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GetBooleanAction, theProp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(GetBooleanAction, init$, void, $String*)},
		{"privilegedGetProperty", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(GetBooleanAction, privilegedGetProperty, bool, $String*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(GetBooleanAction, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.action.GetBooleanAction",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;"
	};
	$loadClass(GetBooleanAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetBooleanAction);
	});
	return class$;
}

$Class* GetBooleanAction::class$ = nullptr;

		} // action
	} // security
} // sun