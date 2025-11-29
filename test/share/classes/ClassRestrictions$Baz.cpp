#include <ClassRestrictions$Baz.h>

#include <ClassRestrictions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ClassRestrictions$Baz_MethodInfo_[] = {
	{"foo", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ClassRestrictions$Baz_InnerClassesInfo_[] = {
	{"ClassRestrictions$Baz", "ClassRestrictions", "Baz", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ClassRestrictions$Baz_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"ClassRestrictions$Baz",
	nullptr,
	nullptr,
	nullptr,
	_ClassRestrictions$Baz_MethodInfo_,
	nullptr,
	nullptr,
	_ClassRestrictions$Baz_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ClassRestrictions"
};

$Object* allocate$ClassRestrictions$Baz($Class* clazz) {
	return $of($alloc(ClassRestrictions$Baz));
}

$Class* ClassRestrictions$Baz::load$($String* name, bool initialize) {
	$loadClass(ClassRestrictions$Baz, name, initialize, &_ClassRestrictions$Baz_ClassInfo_, allocate$ClassRestrictions$Baz);
	return class$;
}

$Class* ClassRestrictions$Baz::class$ = nullptr;