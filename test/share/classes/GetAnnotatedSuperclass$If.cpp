#include <GetAnnotatedSuperclass$If.h>

#include <GetAnnotatedSuperclass.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GetAnnotatedSuperclass = ::GetAnnotatedSuperclass;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _GetAnnotatedSuperclass$If_InnerClassesInfo_[] = {
	{"GetAnnotatedSuperclass$If", "GetAnnotatedSuperclass", "If", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GetAnnotatedSuperclass$If_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"GetAnnotatedSuperclass$If",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_GetAnnotatedSuperclass$If_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedSuperclass"
};

$Object* allocate$GetAnnotatedSuperclass$If($Class* clazz) {
	return $of($alloc(GetAnnotatedSuperclass$If));
}

$Class* GetAnnotatedSuperclass$If::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedSuperclass$If, name, initialize, &_GetAnnotatedSuperclass$If_ClassInfo_, allocate$GetAnnotatedSuperclass$If);
	return class$;
}

$Class* GetAnnotatedSuperclass$If::class$ = nullptr;