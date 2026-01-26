#include <sun/security/action/GetLongAction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace action {

$FieldInfo _GetLongAction_FieldInfo_[] = {
	{"theProp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GetLongAction, theProp)},
	{"defaultVal", "J", nullptr, $PRIVATE, $field(GetLongAction, defaultVal)},
	{"defaultSet", "Z", nullptr, $PRIVATE, $field(GetLongAction, defaultSet)},
	{}
};

$MethodInfo _GetLongAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(GetLongAction, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;J)V", nullptr, $PUBLIC, $method(GetLongAction, init$, void, $String*, int64_t)},
	{"run", "()Ljava/lang/Long;", nullptr, $PUBLIC, $virtualMethod(GetLongAction, run, $Object*)},
	{}
};

$ClassInfo _GetLongAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.action.GetLongAction",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_GetLongAction_FieldInfo_,
	_GetLongAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Long;>;"
};

$Object* allocate$GetLongAction($Class* clazz) {
	return $of($alloc(GetLongAction));
}

void GetLongAction::init$($String* theProp) {
	this->defaultSet = false;
	$set(this, theProp, theProp);
}

void GetLongAction::init$($String* theProp, int64_t defaultVal) {
	this->defaultSet = false;
	$set(this, theProp, theProp);
	this->defaultVal = defaultVal;
	this->defaultSet = true;
}

$Object* GetLongAction::run() {
	$var($Long, value, $Long::getLong(this->theProp));
	if ((value == nullptr) && this->defaultSet) {
		return $of($Long::valueOf(this->defaultVal));
	}
	return $of(value);
}

GetLongAction::GetLongAction() {
}

$Class* GetLongAction::load$($String* name, bool initialize) {
	$loadClass(GetLongAction, name, initialize, &_GetLongAction_ClassInfo_, allocate$GetLongAction);
	return class$;
}

$Class* GetLongAction::class$ = nullptr;

		} // action
	} // security
} // sun