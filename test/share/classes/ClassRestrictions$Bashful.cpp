#include <ClassRestrictions$Bashful.h>

#include <ClassRestrictions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ClassRestrictions$Bashful_MethodInfo_[] = {
	{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassRestrictions$Bashful, foo, void)},
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