#include <java/security/PrivilegedExceptionAction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$CompoundAttribute _PrivilegedExceptionAction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _PrivilegedExceptionAction_MethodInfo_[] = {
	{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _PrivilegedExceptionAction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.PrivilegedExceptionAction",
	nullptr,
	nullptr,
	nullptr,
	_PrivilegedExceptionAction_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_PrivilegedExceptionAction_Annotations_
};

$Object* allocate$PrivilegedExceptionAction($Class* clazz) {
	return $of($alloc(PrivilegedExceptionAction));
}

$Class* PrivilegedExceptionAction::load$($String* name, bool initialize) {
	$loadClass(PrivilegedExceptionAction, name, initialize, &_PrivilegedExceptionAction_ClassInfo_, allocate$PrivilegedExceptionAction);
	return class$;
}

$Class* PrivilegedExceptionAction::class$ = nullptr;

	} // security
} // java