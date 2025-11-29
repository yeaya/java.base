#include <java/util/ResourceBundle$CacheKeyReference.h>

#include <java/util/ResourceBundle$CacheKey.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$MethodInfo _ResourceBundle$CacheKeyReference_MethodInfo_[] = {
	{"getCacheKey", "()Ljava/util/ResourceBundle$CacheKey;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ResourceBundle$CacheKeyReference_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$CacheKeyReference", "java.util.ResourceBundle", "CacheKeyReference", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ResourceBundle$CacheKeyReference_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.util.ResourceBundle$CacheKeyReference",
	nullptr,
	nullptr,
	nullptr,
	_ResourceBundle$CacheKeyReference_MethodInfo_,
	nullptr,
	nullptr,
	_ResourceBundle$CacheKeyReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ResourceBundle"
};

$Object* allocate$ResourceBundle$CacheKeyReference($Class* clazz) {
	return $of($alloc(ResourceBundle$CacheKeyReference));
}

$Class* ResourceBundle$CacheKeyReference::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$CacheKeyReference, name, initialize, &_ResourceBundle$CacheKeyReference_ClassInfo_, allocate$ResourceBundle$CacheKeyReference);
	return class$;
}

$Class* ResourceBundle$CacheKeyReference::class$ = nullptr;

	} // util
} // java