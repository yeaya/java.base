#include <SampleNest$StaticIface.h>

#include <SampleNest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _SampleNest$StaticIface_InnerClassesInfo_[] = {
	{"SampleNest$StaticIface", "SampleNest", "StaticIface", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SampleNest$StaticIface_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"SampleNest$StaticIface",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_SampleNest$StaticIface_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SampleNest"
};

$Object* allocate$SampleNest$StaticIface($Class* clazz) {
	return $of($alloc(SampleNest$StaticIface));
}

$Class* SampleNest$StaticIface::load$($String* name, bool initialize) {
	$loadClass(SampleNest$StaticIface, name, initialize, &_SampleNest$StaticIface_ClassInfo_, allocate$SampleNest$StaticIface);
	return class$;
}

$Class* SampleNest$StaticIface::class$ = nullptr;