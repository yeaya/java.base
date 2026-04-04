#include <java/lang/constant/Constable.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {
		namespace constant {

$Class* Constable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<+Ljava/lang/constant/ConstantDesc;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Constable, describeConstable, $Optional*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.constant.Constable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Constable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Constable);
	});
	return class$;
}

$Class* Constable::class$ = nullptr;

		} // constant
	} // lang
} // java