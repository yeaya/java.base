#include <Intf.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

$FieldInfo _Intf_FieldInfo_[] = {
	{"i", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Intf, i)},
	{}
};

$ClassInfo _Intf_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"Intf",
	nullptr,
	nullptr,
	_Intf_FieldInfo_
};

$Object* allocate$Intf($Class* clazz) {
	return $of($alloc(Intf));
}

$Class* Intf::load$($String* name, bool initialize) {
	$loadClass(Intf, name, initialize, &_Intf_ClassInfo_, allocate$Intf);
	return class$;
}

$Class* Intf::class$ = nullptr;