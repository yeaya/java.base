#include <java/lang/Enum$EnumDesc.h>
#include <java/lang/Enum.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef BSM_ENUM_CONSTANT

using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {

void Enum$EnumDesc::init$($ClassDesc* constantClass, $String* constantName) {
	$useLocalObjectStack();
	$init($ConstantDescs);
	$var($DirectMethodHandleDesc, var$0, $ConstantDescs::BSM_ENUM_CONSTANT);
	$var($String, var$1, $cast($String, $Objects::requireNonNull(constantName)));
	$DynamicConstantDesc::init$(var$0, var$1, $cast($ClassDesc, $Objects::requireNonNull(constantClass)), $$new($ConstantDescArray, 0));
}

Enum$EnumDesc* Enum$EnumDesc::of($ClassDesc* enumClass, $String* constantName) {
	$init(Enum$EnumDesc);
	return $new(Enum$EnumDesc, enumClass, constantName);
}

$Object* Enum$EnumDesc::resolveConstantDesc($MethodHandles$Lookup* lookup) {
	$useLocalObjectStack();
	$Class* var$0 = $cast($Class, $$nc(constantType())->resolveConstantDesc(lookup));
	return $of($Enum::valueOf(var$0, $(constantName())));
}

$String* Enum$EnumDesc::toString() {
	$useLocalObjectStack();
	return $String::format("EnumDesc[%s.%s]"_s, $$new($ObjectArray, {
		$($$nc(constantType())->displayName()),
		$(constantName())
	}));
}

Enum$EnumDesc::Enum$EnumDesc() {
}

$Class* Enum$EnumDesc::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/constant/ClassDesc;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Enum$EnumDesc, init$, void, $ClassDesc*, $String*)},
		{"of", "(Ljava/lang/constant/ClassDesc;Ljava/lang/String;)Ljava/lang/Enum$EnumDesc;", "<E:Ljava/lang/Enum<TE;>;>(Ljava/lang/constant/ClassDesc;Ljava/lang/String;)Ljava/lang/Enum$EnumDesc<TE;>;", $PUBLIC | $STATIC, $staticMethod(Enum$EnumDesc, of, Enum$EnumDesc*, $ClassDesc*, $String*)},
		{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Enum;", "(Ljava/lang/invoke/MethodHandles$Lookup;)TE;", $PUBLIC, $virtualMethod(Enum$EnumDesc, resolveConstantDesc, $Object*, $MethodHandles$Lookup*), "java.lang.ReflectiveOperationException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Enum$EnumDesc, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Enum$EnumDesc", "java.lang.Enum", "EnumDesc", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.Enum$EnumDesc",
		"java.lang.constant.DynamicConstantDesc",
		nullptr,
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Enum<TE;>;>Ljava/lang/constant/DynamicConstantDesc<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Enum"
	};
	$loadClass(Enum$EnumDesc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Enum$EnumDesc);
	});
	return class$;
}

$Class* Enum$EnumDesc::class$ = nullptr;

	} // lang
} // java