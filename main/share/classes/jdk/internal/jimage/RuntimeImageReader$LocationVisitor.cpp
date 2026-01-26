#include <jdk/internal/jimage/RuntimeImageReader$LocationVisitor.h>

#include <jdk/internal/jimage/RuntimeImageLocation.h>
#include <jdk/internal/jimage/RuntimeImageReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeImageLocation = ::jdk::internal::jimage::RuntimeImageLocation;

namespace jdk {
	namespace internal {
		namespace jimage {

$MethodInfo _RuntimeImageReader$LocationVisitor_MethodInfo_[] = {
	{"visit", "(Ljdk/internal/jimage/RuntimeImageLocation;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeImageReader$LocationVisitor, visit, void, $RuntimeImageLocation*)},
	{}
};

$InnerClassInfo _RuntimeImageReader$LocationVisitor_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.RuntimeImageReader$LocationVisitor", "jdk.internal.jimage.RuntimeImageReader", "LocationVisitor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RuntimeImageReader$LocationVisitor_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.internal.jimage.RuntimeImageReader$LocationVisitor",
	nullptr,
	nullptr,
	nullptr,
	_RuntimeImageReader$LocationVisitor_MethodInfo_,
	nullptr,
	nullptr,
	_RuntimeImageReader$LocationVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jimage.RuntimeImageReader"
};

$Object* allocate$RuntimeImageReader$LocationVisitor($Class* clazz) {
	return $of($alloc(RuntimeImageReader$LocationVisitor));
}

$Class* RuntimeImageReader$LocationVisitor::load$($String* name, bool initialize) {
	$loadClass(RuntimeImageReader$LocationVisitor, name, initialize, &_RuntimeImageReader$LocationVisitor_ClassInfo_, allocate$RuntimeImageReader$LocationVisitor);
	return class$;
}

$Class* RuntimeImageReader$LocationVisitor::class$ = nullptr;

		} // jimage
	} // internal
} // jdk