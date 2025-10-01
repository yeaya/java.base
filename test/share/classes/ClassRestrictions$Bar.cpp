#include <ClassRestrictions$Bar.h>

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

$MethodInfo _ClassRestrictions$Bar_MethodInfo_[] = {
	{"foo", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ClassRestrictions$Bar_InnerClassesInfo_[] = {
	{"ClassRestrictions$Bar", "ClassRestrictions", "Bar", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ClassRestrictions$Bar_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"ClassRestrictions$Bar",
	nullptr,
	nullptr,
	nullptr,
	_ClassRestrictions$Bar_MethodInfo_,
	nullptr,
	nullptr,
	_ClassRestrictions$Bar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ClassRestrictions"
};

$Object* allocate$ClassRestrictions$Bar($Class* clazz) {
	return $of($alloc(ClassRestrictions$Bar));
}

$Class* ClassRestrictions$Bar::load$($String* name, bool initialize) {
	$loadClass(ClassRestrictions$Bar, name, initialize, &_ClassRestrictions$Bar_ClassInfo_, allocate$ClassRestrictions$Bar);
	return class$;
}

$Class* ClassRestrictions$Bar::class$ = nullptr;