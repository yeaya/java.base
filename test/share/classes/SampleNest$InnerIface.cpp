#include <SampleNest$InnerIface.h>

#include <SampleNest.h>
#include <jcpp.h>

using $SampleNest = ::SampleNest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _SampleNest$InnerIface_InnerClassesInfo_[] = {
	{"SampleNest$InnerIface", "SampleNest", "InnerIface", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SampleNest$InnerIface_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"SampleNest$InnerIface",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_SampleNest$InnerIface_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SampleNest"
};

$Object* allocate$SampleNest$InnerIface($Class* clazz) {
	return $of($alloc(SampleNest$InnerIface));
}

$Class* SampleNest$InnerIface::load$($String* name, bool initialize) {
	$loadClass(SampleNest$InnerIface, name, initialize, &_SampleNest$InnerIface_ClassInfo_, allocate$SampleNest$InnerIface);
	return class$;
}

$Class* SampleNest$InnerIface::class$ = nullptr;