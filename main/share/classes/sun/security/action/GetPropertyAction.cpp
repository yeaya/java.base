#include <sun/security/action/GetPropertyAction.h>

#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Properties.h>
#include <sun/security/action/GetPropertyAction$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Properties = ::java::util::Properties;
using $GetPropertyAction$1 = ::sun::security::action::GetPropertyAction$1;

namespace sun {
	namespace security {
		namespace action {

$FieldInfo _GetPropertyAction_FieldInfo_[] = {
	{"theProp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GetPropertyAction, theProp)},
	{"defaultVal", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GetPropertyAction, defaultVal)},
	{}
};

$MethodInfo _GetPropertyAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(GetPropertyAction::*)($String*)>(&GetPropertyAction::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(GetPropertyAction::*)($String*,$String*)>(&GetPropertyAction::init$))},
	{"privilegedGetProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Properties*(*)()>(&GetPropertyAction::privilegedGetProperties))},
	{"privilegedGetProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&GetPropertyAction::privilegedGetProperty))},
	{"privilegedGetProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&GetPropertyAction::privilegedGetProperty))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetPropertyAction_InnerClassesInfo_[] = {
	{"sun.security.action.GetPropertyAction$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetPropertyAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.action.GetPropertyAction",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_GetPropertyAction_FieldInfo_,
	_GetPropertyAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	nullptr,
	_GetPropertyAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.action.GetPropertyAction$1"
};

$Object* allocate$GetPropertyAction($Class* clazz) {
	return $of($alloc(GetPropertyAction));
}

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
		return $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(GetPropertyAction, theProp))));
	}
}

$String* GetPropertyAction::privilegedGetProperty($String* theProp, $String* defaultVal) {
	$init(GetPropertyAction);
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return $System::getProperty(theProp, defaultVal);
	} else {
		return $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(GetPropertyAction, theProp, defaultVal))));
	}
}

$Properties* GetPropertyAction::privilegedGetProperties() {
	$init(GetPropertyAction);
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return $System::getProperties();
	} else {
		return $cast($Properties, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction$1))));
	}
}

GetPropertyAction::GetPropertyAction() {
}

$Class* GetPropertyAction::load$($String* name, bool initialize) {
	$loadClass(GetPropertyAction, name, initialize, &_GetPropertyAction_ClassInfo_, allocate$GetPropertyAction);
	return class$;
}

$Class* GetPropertyAction::class$ = nullptr;

		} // action
	} // security
} // sun