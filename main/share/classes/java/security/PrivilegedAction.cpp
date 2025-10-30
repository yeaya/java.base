#include <java/security/PrivilegedAction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$CompoundAttribute _PrivilegedAction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _PrivilegedAction_MethodInfo_[] = {
	{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrivilegedAction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.PrivilegedAction",
	nullptr,
	nullptr,
	nullptr,
	_PrivilegedAction_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_PrivilegedAction_Annotations_
};

$Object* allocate$PrivilegedAction($Class* clazz) {
	return $of($alloc(PrivilegedAction));
}

$Class* PrivilegedAction::load$($String* name, bool initialize) {
	$loadClass(PrivilegedAction, name, initialize, &_PrivilegedAction_ClassInfo_, allocate$PrivilegedAction);
	return class$;
}

$Class* PrivilegedAction::class$ = nullptr;

	} // security
} // java