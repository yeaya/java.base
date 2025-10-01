#include <ClassRestrictions$Bashful.h>

#include <ClassRestrictions.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassRestrictions = ::ClassRestrictions;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ClassRestrictions$Bashful_MethodInfo_[] = {
	{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ClassRestrictions$Bashful_InnerClassesInfo_[] = {
	{"ClassRestrictions$Bashful", "ClassRestrictions", "Bashful", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ClassRestrictions$Bashful_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"ClassRestrictions$Bashful",
	nullptr,
	nullptr,
	nullptr,
	_ClassRestrictions$Bashful_MethodInfo_,
	nullptr,
	nullptr,
	_ClassRestrictions$Bashful_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ClassRestrictions"
};

$Object* allocate$ClassRestrictions$Bashful($Class* clazz) {
	return $of($alloc(ClassRestrictions$Bashful));
}

$Class* ClassRestrictions$Bashful::load$($String* name, bool initialize) {
	$loadClass(ClassRestrictions$Bashful, name, initialize, &_ClassRestrictions$Bashful_ClassInfo_, allocate$ClassRestrictions$Bashful);
	return class$;
}

$Class* ClassRestrictions$Bashful::class$ = nullptr;