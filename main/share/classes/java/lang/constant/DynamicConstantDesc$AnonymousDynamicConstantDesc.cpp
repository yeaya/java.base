#include <java/lang/constant/DynamicConstantDesc$AnonymousDynamicConstantDesc.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <jcpp.h>

using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;

namespace java {
	namespace lang {
		namespace constant {

void DynamicConstantDesc$AnonymousDynamicConstantDesc::init$($DirectMethodHandleDesc* bootstrapMethod, $String* constantName, $ClassDesc* constantType, $ConstantDescArray* bootstrapArgs) {
	$DynamicConstantDesc::init$(bootstrapMethod, constantName, constantType, bootstrapArgs);
}

DynamicConstantDesc$AnonymousDynamicConstantDesc::DynamicConstantDesc$AnonymousDynamicConstantDesc() {
}

$Class* DynamicConstantDesc$AnonymousDynamicConstantDesc::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/constant/DirectMethodHandleDesc;Ljava/lang/String;Ljava/lang/constant/ClassDesc;[Ljava/lang/constant/ConstantDesc;)V", nullptr, $TRANSIENT, $method(DynamicConstantDesc$AnonymousDynamicConstantDesc, init$, void, $DirectMethodHandleDesc*, $String*, $ClassDesc*, $ConstantDescArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.constant.DynamicConstantDesc$AnonymousDynamicConstantDesc", "java.lang.constant.DynamicConstantDesc", "AnonymousDynamicConstantDesc", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.constant.DynamicConstantDesc$AnonymousDynamicConstantDesc",
		"java.lang.constant.DynamicConstantDesc",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/constant/DynamicConstantDesc<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.constant.DynamicConstantDesc"
	};
	$loadClass(DynamicConstantDesc$AnonymousDynamicConstantDesc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DynamicConstantDesc$AnonymousDynamicConstantDesc);
	});
	return class$;
}

$Class* DynamicConstantDesc$AnonymousDynamicConstantDesc::class$ = nullptr;

		} // constant
	} // lang
} // java