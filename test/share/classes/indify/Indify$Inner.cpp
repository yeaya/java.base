#include <indify/Indify$Inner.h>

#include <indify/Indify$Outer.h>
#include <indify/Indify.h>
#include <jcpp.h>

using $Indify$Outer = ::indify::Indify$Outer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace indify {

$MethodInfo _Indify$Inner_MethodInfo_[] = {
	{"linkOuter", "(Lindify/Indify$Outer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Indify$Inner, linkOuter, void, $Indify$Outer*)},
	{"outer", "()Lindify/Indify$Outer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Indify$Inner, outer, $Indify$Outer*)},
	{}
};

$InnerClassInfo _Indify$Inner_InnerClassesInfo_[] = {
	{"indify.Indify$Inner", "indify.Indify", "Inner", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Indify$Inner_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"indify.Indify$Inner",
	nullptr,
	nullptr,
	nullptr,
	_Indify$Inner_MethodInfo_,
	nullptr,
	nullptr,
	_Indify$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"indify.Indify"
};

$Object* allocate$Indify$Inner($Class* clazz) {
	return $of($alloc(Indify$Inner));
}

$Class* Indify$Inner::load$($String* name, bool initialize) {
	$loadClass(Indify$Inner, name, initialize, &_Indify$Inner_ClassInfo_, allocate$Indify$Inner);
	return class$;
}

$Class* Indify$Inner::class$ = nullptr;

} // indify