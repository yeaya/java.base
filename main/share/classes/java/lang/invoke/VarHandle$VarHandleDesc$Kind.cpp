#include <java/lang/invoke/VarHandle$VarHandleDesc$Kind.h>

#include <java/lang/Enum.h>
#include <java/lang/InternalError.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/invoke/VarHandle$2.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <jcpp.h>

#undef ARRAY
#undef BSM_VARHANDLE_ARRAY
#undef BSM_VARHANDLE_FIELD
#undef BSM_VARHANDLE_STATIC_FIELD
#undef FIELD
#undef STATIC_FIELD

using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $VarHandle$VarHandleDesc$KindArray = $Array<::java::lang::invoke::VarHandle$VarHandleDesc$Kind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $VarHandle$2 = ::java::lang::invoke::VarHandle$2;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _VarHandle$VarHandleDesc$Kind_FieldInfo_[] = {
	{"FIELD", "Ljava/lang/invoke/VarHandle$VarHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$VarHandleDesc$Kind, FIELD)},
	{"STATIC_FIELD", "Ljava/lang/invoke/VarHandle$VarHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$VarHandleDesc$Kind, STATIC_FIELD)},
	{"ARRAY", "Ljava/lang/invoke/VarHandle$VarHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$VarHandleDesc$Kind, ARRAY)},
	{"$VALUES", "[Ljava/lang/invoke/VarHandle$VarHandleDesc$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(VarHandle$VarHandleDesc$Kind, $VALUES)},
	{"bootstrapMethod", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $FINAL, $field(VarHandle$VarHandleDesc$Kind, bootstrapMethod)},
	{}
};

$MethodInfo _VarHandle$VarHandleDesc$Kind_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/invoke/VarHandle$VarHandleDesc$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$VarHandle$VarHandleDesc$KindArray*(*)()>(&VarHandle$VarHandleDesc$Kind::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/constant/DirectMethodHandleDesc;)V", "(Ljava/lang/constant/DirectMethodHandleDesc;)V", $PRIVATE, $method(static_cast<void(VarHandle$VarHandleDesc$Kind::*)($String*,int32_t,$DirectMethodHandleDesc*)>(&VarHandle$VarHandleDesc$Kind::init$))},
	{"toBSMArgs", "(Ljava/lang/constant/ClassDesc;Ljava/lang/constant/ClassDesc;)[Ljava/lang/constant/ConstantDesc;", nullptr, 0, $method(static_cast<$ConstantDescArray*(VarHandle$VarHandleDesc$Kind::*)($ClassDesc*,$ClassDesc*)>(&VarHandle$VarHandleDesc$Kind::toBSMArgs))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/invoke/VarHandle$VarHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<VarHandle$VarHandleDesc$Kind*(*)($String*)>(&VarHandle$VarHandleDesc$Kind::valueOf))},
	{"values", "()[Ljava/lang/invoke/VarHandle$VarHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$VarHandle$VarHandleDesc$KindArray*(*)()>(&VarHandle$VarHandleDesc$Kind::values))},
	{}
};

$InnerClassInfo _VarHandle$VarHandleDesc$Kind_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandle$VarHandleDesc", "java.lang.invoke.VarHandle", "VarHandleDesc", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.invoke.VarHandle$VarHandleDesc$Kind", "java.lang.invoke.VarHandle$VarHandleDesc", "Kind", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _VarHandle$VarHandleDesc$Kind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.lang.invoke.VarHandle$VarHandleDesc$Kind",
	"java.lang.Enum",
	nullptr,
	_VarHandle$VarHandleDesc$Kind_FieldInfo_,
	_VarHandle$VarHandleDesc$Kind_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/invoke/VarHandle$VarHandleDesc$Kind;>;",
	nullptr,
	_VarHandle$VarHandleDesc$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandle"
};

$Object* allocate$VarHandle$VarHandleDesc$Kind($Class* clazz) {
	return $of($alloc(VarHandle$VarHandleDesc$Kind));
}

VarHandle$VarHandleDesc$Kind* VarHandle$VarHandleDesc$Kind::FIELD = nullptr;
VarHandle$VarHandleDesc$Kind* VarHandle$VarHandleDesc$Kind::STATIC_FIELD = nullptr;
VarHandle$VarHandleDesc$Kind* VarHandle$VarHandleDesc$Kind::ARRAY = nullptr;
$VarHandle$VarHandleDesc$KindArray* VarHandle$VarHandleDesc$Kind::$VALUES = nullptr;

$VarHandle$VarHandleDesc$KindArray* VarHandle$VarHandleDesc$Kind::$values() {
	$init(VarHandle$VarHandleDesc$Kind);
	return $new($VarHandle$VarHandleDesc$KindArray, {
		VarHandle$VarHandleDesc$Kind::FIELD,
		VarHandle$VarHandleDesc$Kind::STATIC_FIELD,
		VarHandle$VarHandleDesc$Kind::ARRAY
	});
}

$VarHandle$VarHandleDesc$KindArray* VarHandle$VarHandleDesc$Kind::values() {
	$init(VarHandle$VarHandleDesc$Kind);
	return $cast($VarHandle$VarHandleDesc$KindArray, VarHandle$VarHandleDesc$Kind::$VALUES->clone());
}

VarHandle$VarHandleDesc$Kind* VarHandle$VarHandleDesc$Kind::valueOf($String* name) {
	$init(VarHandle$VarHandleDesc$Kind);
	return $cast(VarHandle$VarHandleDesc$Kind, $Enum::valueOf(VarHandle$VarHandleDesc$Kind::class$, name));
}

void VarHandle$VarHandleDesc$Kind::init$($String* $enum$name, int32_t $enum$ordinal, $DirectMethodHandleDesc* bootstrapMethod) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, bootstrapMethod, bootstrapMethod);
}

$ConstantDescArray* VarHandle$VarHandleDesc$Kind::toBSMArgs($ClassDesc* declaringClass, $ClassDesc* varType) {
	$init($VarHandle$2);

	$var($ConstantDescArray, var$0, nullptr)
	switch ($nc($VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$VarHandleDesc$Kind)->get((this)->ordinal())) {
	case 1:
		{}
	case 2:
		{
			$assign(var$0, $new($ConstantDescArray, {
				static_cast<$ConstantDesc*>(declaringClass),
				static_cast<$ConstantDesc*>(varType)
			}));
			break;
		}
	case 3:
		{
			$assign(var$0, $new($ConstantDescArray, {static_cast<$ConstantDesc*>(declaringClass)}));
			break;
		}
	default:
		{
			$throwNew($InternalError, "Cannot reach here"_s);
		}
	}
	return var$0;
}

void clinit$VarHandle$VarHandleDesc$Kind($Class* class$) {
	$init($ConstantDescs);
	$assignStatic(VarHandle$VarHandleDesc$Kind::FIELD, $new(VarHandle$VarHandleDesc$Kind, "FIELD"_s, 0, $ConstantDescs::BSM_VARHANDLE_FIELD));
	$assignStatic(VarHandle$VarHandleDesc$Kind::STATIC_FIELD, $new(VarHandle$VarHandleDesc$Kind, "STATIC_FIELD"_s, 1, $ConstantDescs::BSM_VARHANDLE_STATIC_FIELD));
	$assignStatic(VarHandle$VarHandleDesc$Kind::ARRAY, $new(VarHandle$VarHandleDesc$Kind, "ARRAY"_s, 2, $ConstantDescs::BSM_VARHANDLE_ARRAY));
	$assignStatic(VarHandle$VarHandleDesc$Kind::$VALUES, VarHandle$VarHandleDesc$Kind::$values());
}

VarHandle$VarHandleDesc$Kind::VarHandle$VarHandleDesc$Kind() {
}

$Class* VarHandle$VarHandleDesc$Kind::load$($String* name, bool initialize) {
	$loadClass(VarHandle$VarHandleDesc$Kind, name, initialize, &_VarHandle$VarHandleDesc$Kind_ClassInfo_, clinit$VarHandle$VarHandleDesc$Kind, allocate$VarHandle$VarHandleDesc$Kind);
	return class$;
}

$Class* VarHandle$VarHandleDesc$Kind::class$ = nullptr;

		} // invoke
	} // lang
} // java