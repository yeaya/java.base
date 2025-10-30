#include <java/lang/constant/Constable.h>

#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {
		namespace constant {

$MethodInfo _Constable_MethodInfo_[] = {
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<+Ljava/lang/constant/ConstantDesc;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Constable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.constant.Constable",
	nullptr,
	nullptr,
	nullptr,
	_Constable_MethodInfo_
};

$Object* allocate$Constable($Class* clazz) {
	return $of($alloc(Constable));
}

$Class* Constable::load$($String* name, bool initialize) {
	$loadClass(Constable, name, initialize, &_Constable_ClassInfo_, allocate$Constable);
	return class$;
}

$Class* Constable::class$ = nullptr;

		} // constant
	} // lang
} // java