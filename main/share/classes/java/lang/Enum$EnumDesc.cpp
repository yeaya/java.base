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
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {

$MethodInfo _Enum$EnumDesc_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/constant/ClassDesc;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Enum$EnumDesc::*)($ClassDesc*,$String*)>(&Enum$EnumDesc::init$))},
	{"of", "(Ljava/lang/constant/ClassDesc;Ljava/lang/String;)Ljava/lang/Enum$EnumDesc;", "<E:Ljava/lang/Enum<TE;>;>(Ljava/lang/constant/ClassDesc;Ljava/lang/String;)Ljava/lang/Enum$EnumDesc<TE;>;", $PUBLIC | $STATIC, $method(static_cast<Enum$EnumDesc*(*)($ClassDesc*,$String*)>(&Enum$EnumDesc::of))},
	{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Enum;", "(Ljava/lang/invoke/MethodHandles$Lookup;)TE;", $PUBLIC, nullptr, "java.lang.ReflectiveOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Enum$EnumDesc_InnerClassesInfo_[] = {
	{"java.lang.Enum$EnumDesc", "java.lang.Enum", "EnumDesc", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _Enum$EnumDesc_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Enum$EnumDesc",
	"java.lang.constant.DynamicConstantDesc",
	nullptr,
	nullptr,
	_Enum$EnumDesc_MethodInfo_,
	"<E:Ljava/lang/Enum<TE;>;>Ljava/lang/constant/DynamicConstantDesc<TE;>;",
	nullptr,
	_Enum$EnumDesc_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Enum"
};

$Object* allocate$Enum$EnumDesc($Class* clazz) {
	return $of($alloc(Enum$EnumDesc));
}

void Enum$EnumDesc::init$($ClassDesc* constantClass, $String* constantName) {
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	$Class* var$0 = $cast($Class, $nc($(constantType()))->resolveConstantDesc(lookup));
	return $of($Enum::valueOf(var$0, $(constantName())));
}

$String* Enum$EnumDesc::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("EnumDesc[%s.%s]"_s, $$new($ObjectArray, {
		$($of($nc($(constantType()))->displayName())),
		$($of(constantName()))
	}));
}

Enum$EnumDesc::Enum$EnumDesc() {
}

$Class* Enum$EnumDesc::load$($String* name, bool initialize) {
	$loadClass(Enum$EnumDesc, name, initialize, &_Enum$EnumDesc_ClassInfo_, allocate$Enum$EnumDesc);
	return class$;
}

$Class* Enum$EnumDesc::class$ = nullptr;

	} // lang
} // java