#include <sun/util/resources/Bundles$CacheKeyReference.h>

#include <sun/util/resources/Bundles$CacheKey.h>
#include <sun/util/resources/Bundles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Bundles$CacheKey = ::sun::util::resources::Bundles$CacheKey;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _Bundles$CacheKeyReference_MethodInfo_[] = {
	{"getCacheKey", "()Lsun/util/resources/Bundles$CacheKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Bundles$CacheKeyReference, getCacheKey, $Bundles$CacheKey*)},
	{}
};

$InnerClassInfo _Bundles$CacheKeyReference_InnerClassesInfo_[] = {
	{"sun.util.resources.Bundles$CacheKeyReference", "sun.util.resources.Bundles", "CacheKeyReference", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Bundles$CacheKeyReference_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.util.resources.Bundles$CacheKeyReference",
	nullptr,
	nullptr,
	nullptr,
	_Bundles$CacheKeyReference_MethodInfo_,
	nullptr,
	nullptr,
	_Bundles$CacheKeyReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.Bundles"
};

$Object* allocate$Bundles$CacheKeyReference($Class* clazz) {
	return $of($alloc(Bundles$CacheKeyReference));
}

$Class* Bundles$CacheKeyReference::load$($String* name, bool initialize) {
	$loadClass(Bundles$CacheKeyReference, name, initialize, &_Bundles$CacheKeyReference_ClassInfo_, allocate$Bundles$CacheKeyReference);
	return class$;
}

$Class* Bundles$CacheKeyReference::class$ = nullptr;

		} // resources
	} // util
} // sun