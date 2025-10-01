#include <sun/security/action/GetBooleanAction.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace sun {
	namespace security {
		namespace action {

$FieldInfo _GetBooleanAction_FieldInfo_[] = {
	{"theProp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GetBooleanAction, theProp)},
	{}
};

$MethodInfo _GetBooleanAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(GetBooleanAction::*)($String*)>(&GetBooleanAction::init$))},
	{"privilegedGetProperty", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&GetBooleanAction::privilegedGetProperty))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GetBooleanAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.action.GetBooleanAction",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_GetBooleanAction_FieldInfo_,
	_GetBooleanAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;"
};

$Object* allocate$GetBooleanAction($Class* clazz) {
	return $of($alloc(GetBooleanAction));
}

void GetBooleanAction::init$($String* theProp) {
	$set(this, theProp, theProp);
}

$Object* GetBooleanAction::run() {
	return $of($Boolean::valueOf($Boolean::getBoolean(this->theProp)));
}

bool GetBooleanAction::privilegedGetProperty($String* theProp) {
	$init(GetBooleanAction);
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return $Boolean::getBoolean(theProp);
	} else {
		return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(GetBooleanAction, theProp)))))))->booleanValue();
	}
}

GetBooleanAction::GetBooleanAction() {
}

$Class* GetBooleanAction::load$($String* name, bool initialize) {
	$loadClass(GetBooleanAction, name, initialize, &_GetBooleanAction_ClassInfo_, allocate$GetBooleanAction);
	return class$;
}

$Class* GetBooleanAction::class$ = nullptr;

		} // action
	} // security
} // sun