#include <sun/security/action/GetIntegerAction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace sun {
	namespace security {
		namespace action {

$FieldInfo _GetIntegerAction_FieldInfo_[] = {
	{"theProp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GetIntegerAction, theProp)},
	{"defaultVal", "I", nullptr, $PRIVATE, $field(GetIntegerAction, defaultVal)},
	{"defaultSet", "Z", nullptr, $PRIVATE, $field(GetIntegerAction, defaultSet)},
	{}
};

$MethodInfo _GetIntegerAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(GetIntegerAction::*)($String*)>(&GetIntegerAction::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(GetIntegerAction::*)($String*,int32_t)>(&GetIntegerAction::init$))},
	{"privilegedGetProperty", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Integer*(*)($String*)>(&GetIntegerAction::privilegedGetProperty))},
	{"privilegedGetProperty", "(Ljava/lang/String;I)Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Integer*(*)($String*,int32_t)>(&GetIntegerAction::privilegedGetProperty))},
	{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GetIntegerAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.action.GetIntegerAction",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_GetIntegerAction_FieldInfo_,
	_GetIntegerAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Integer;>;"
};

$Object* allocate$GetIntegerAction($Class* clazz) {
	return $of($alloc(GetIntegerAction));
}

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
		return $cast($Integer, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(GetIntegerAction, theProp))));
	}
}

$Integer* GetIntegerAction::privilegedGetProperty($String* theProp, int32_t defaultVal) {
	$init(GetIntegerAction);
	$beforeCallerSensitive();
	$var($Integer, value, nullptr);
	if ($System::getSecurityManager() == nullptr) {
		$assign(value, $Integer::getInteger(theProp));
	} else {
		$assign(value, $cast($Integer, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(GetIntegerAction, theProp)))));
	}
	return $Integer::valueOf((value != nullptr) ? $nc(value)->intValue() : defaultVal);
}

GetIntegerAction::GetIntegerAction() {
}

$Class* GetIntegerAction::load$($String* name, bool initialize) {
	$loadClass(GetIntegerAction, name, initialize, &_GetIntegerAction_ClassInfo_, allocate$GetIntegerAction);
	return class$;
}

$Class* GetIntegerAction::class$ = nullptr;

		} // action
	} // security
} // sun