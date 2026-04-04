#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

namespace java {
	namespace lang {
		namespace constant {

$Class* ConstantDesc::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConstantDesc, resolveConstantDesc, $Object*, $MethodHandles$Lookup*), "java.lang.ReflectiveOperationException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.constant.ConstantDesc",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ConstantDesc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConstantDesc);
	});
	return class$;
}

$Class* ConstantDesc::class$ = nullptr;

		} // constant
	} // lang
} // java