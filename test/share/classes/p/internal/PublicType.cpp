#include <p/internal/PublicType.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {
	namespace internal {

$MethodInfo _PublicType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PublicType, init$, void)},
	{}
};

$ClassInfo _PublicType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p.internal.PublicType",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PublicType_MethodInfo_
};

$Object* allocate$PublicType($Class* clazz) {
	return $of($alloc(PublicType));
}

void PublicType::init$() {
}

PublicType::PublicType() {
}

$Class* PublicType::load$($String* name, bool initialize) {
	$loadClass(PublicType, name, initialize, &_PublicType_ClassInfo_, allocate$PublicType);
	return class$;
}

$Class* PublicType::class$ = nullptr;

	} // internal
} // p