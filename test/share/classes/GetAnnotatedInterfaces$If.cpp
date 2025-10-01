#include <GetAnnotatedInterfaces$If.h>

#include <GetAnnotatedInterfaces.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GetAnnotatedInterfaces = ::GetAnnotatedInterfaces;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _GetAnnotatedInterfaces$If_InnerClassesInfo_[] = {
	{"GetAnnotatedInterfaces$If", "GetAnnotatedInterfaces", "If", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GetAnnotatedInterfaces$If_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"GetAnnotatedInterfaces$If",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_GetAnnotatedInterfaces$If_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedInterfaces"
};

$Object* allocate$GetAnnotatedInterfaces$If($Class* clazz) {
	return $of($alloc(GetAnnotatedInterfaces$If));
}

$Class* GetAnnotatedInterfaces$If::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedInterfaces$If, name, initialize, &_GetAnnotatedInterfaces$If_ClassInfo_, allocate$GetAnnotatedInterfaces$If);
	return class$;
}

$Class* GetAnnotatedInterfaces$If::class$ = nullptr;