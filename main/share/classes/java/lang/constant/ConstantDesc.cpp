#include <java/lang/constant/ConstantDesc.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

namespace java {
	namespace lang {
		namespace constant {

$MethodInfo _ConstantDesc_MethodInfo_[] = {
	{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.ReflectiveOperationException"},
	{}
};

$ClassInfo _ConstantDesc_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.constant.ConstantDesc",
	nullptr,
	nullptr,
	nullptr,
	_ConstantDesc_MethodInfo_
};

$Object* allocate$ConstantDesc($Class* clazz) {
	return $of($alloc(ConstantDesc));
}

$Class* ConstantDesc::load$($String* name, bool initialize) {
	$loadClass(ConstantDesc, name, initialize, &_ConstantDesc_ClassInfo_, allocate$ConstantDesc);
	return class$;
}

$Class* ConstantDesc::class$ = nullptr;

		} // constant
	} // lang
} // java