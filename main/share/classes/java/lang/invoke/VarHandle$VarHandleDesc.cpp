#include <java/lang/invoke/VarHandle$VarHandleDesc.h>

#include <java/lang/InternalError.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/VarHandle$2.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc$Kind.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef ARRAY
#undef DEFAULT_NAME
#undef FIELD
#undef STATIC_FIELD

using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$2 = ::java::lang::invoke::VarHandle$2;
using $VarHandle$VarHandleDesc$Kind = ::java::lang::invoke::VarHandle$VarHandleDesc$Kind;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _VarHandle$VarHandleDesc_FieldInfo_[] = {
	{"kind", "Ljava/lang/invoke/VarHandle$VarHandleDesc$Kind;", nullptr, $PRIVATE | $FINAL, $field(VarHandle$VarHandleDesc, kind)},
	{"declaringClass", "Ljava/lang/constant/ClassDesc;", nullptr, $PRIVATE | $FINAL, $field(VarHandle$VarHandleDesc, declaringClass)},
	{"varType", "Ljava/lang/constant/ClassDesc;", nullptr, $PRIVATE | $FINAL, $field(VarHandle$VarHandleDesc, varType$)},
	{}
};

$MethodInfo _VarHandle$VarHandleDesc_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/VarHandle$VarHandleDesc$Kind;Ljava/lang/String;Ljava/lang/constant/ClassDesc;Ljava/lang/constant/ClassDesc;)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandle$VarHandleDesc::*)($VarHandle$VarHandleDesc$Kind*,$String*,$ClassDesc*,$ClassDesc*)>(&VarHandle$VarHandleDesc::init$))},
	{"ofArray", "(Ljava/lang/constant/ClassDesc;)Ljava/lang/invoke/VarHandle$VarHandleDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<VarHandle$VarHandleDesc*(*)($ClassDesc*)>(&VarHandle$VarHandleDesc::ofArray))},
	{"ofField", "(Ljava/lang/constant/ClassDesc;Ljava/lang/String;Ljava/lang/constant/ClassDesc;)Ljava/lang/invoke/VarHandle$VarHandleDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<VarHandle$VarHandleDesc*(*)($ClassDesc*,$String*,$ClassDesc*)>(&VarHandle$VarHandleDesc::ofField))},
	{"ofStaticField", "(Ljava/lang/constant/ClassDesc;Ljava/lang/String;Ljava/lang/constant/ClassDesc;)Ljava/lang/invoke/VarHandle$VarHandleDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<VarHandle$VarHandleDesc*(*)($ClassDesc*,$String*,$ClassDesc*)>(&VarHandle$VarHandleDesc::ofStaticField))},
	{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC, nullptr, "java.lang.ReflectiveOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"varType", "()Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC, $method(static_cast<$ClassDesc*(VarHandle$VarHandleDesc::*)()>(&VarHandle$VarHandleDesc::varType))},
	{}
};

$InnerClassInfo _VarHandle$VarHandleDesc_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandle$VarHandleDesc", "java.lang.invoke.VarHandle", "VarHandleDesc", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.invoke.VarHandle$VarHandleDesc$Kind", "java.lang.invoke.VarHandle$VarHandleDesc", "Kind", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _VarHandle$VarHandleDesc_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandle$VarHandleDesc",
	"java.lang.constant.DynamicConstantDesc",
	nullptr,
	_VarHandle$VarHandleDesc_FieldInfo_,
	_VarHandle$VarHandleDesc_MethodInfo_,
	"Ljava/lang/constant/DynamicConstantDesc<Ljava/lang/invoke/VarHandle;>;",
	nullptr,
	_VarHandle$VarHandleDesc_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandle"
};

$Object* allocate$VarHandle$VarHandleDesc($Class* clazz) {
	return $of($alloc(VarHandle$VarHandleDesc));
}

void VarHandle$VarHandleDesc::init$($VarHandle$VarHandleDesc$Kind* kind, $String* name, $ClassDesc* declaringClass, $ClassDesc* varType) {
	$init($ConstantDescs);
	$DynamicConstantDesc::init$($nc(kind)->bootstrapMethod, name, $ConstantDescs::CD_VarHandle, $(kind->toBSMArgs(declaringClass, varType)));
	$set(this, kind, kind);
	$set(this, declaringClass, declaringClass);
	$set(this, varType$, varType);
}

VarHandle$VarHandleDesc* VarHandle$VarHandleDesc::ofField($ClassDesc* declaringClass, $String* name, $ClassDesc* fieldType) {
	$init(VarHandle$VarHandleDesc);
	$Objects::requireNonNull(declaringClass);
	$Objects::requireNonNull(name);
	$Objects::requireNonNull(fieldType);
	$init($VarHandle$VarHandleDesc$Kind);
	return $new(VarHandle$VarHandleDesc, $VarHandle$VarHandleDesc$Kind::FIELD, name, declaringClass, fieldType);
}

VarHandle$VarHandleDesc* VarHandle$VarHandleDesc::ofStaticField($ClassDesc* declaringClass, $String* name, $ClassDesc* fieldType) {
	$init(VarHandle$VarHandleDesc);
	$Objects::requireNonNull(declaringClass);
	$Objects::requireNonNull(name);
	$Objects::requireNonNull(fieldType);
	$init($VarHandle$VarHandleDesc$Kind);
	return $new(VarHandle$VarHandleDesc, $VarHandle$VarHandleDesc$Kind::STATIC_FIELD, name, declaringClass, fieldType);
}

VarHandle$VarHandleDesc* VarHandle$VarHandleDesc::ofArray($ClassDesc* arrayClass) {
	$init(VarHandle$VarHandleDesc);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(arrayClass);
	if (!arrayClass->isArray()) {
		$throwNew($IllegalArgumentException, $$str({"Array class argument not an array: "_s, arrayClass}));
	}
	$init($VarHandle$VarHandleDesc$Kind);
	$init($ConstantDescs);
	return $new(VarHandle$VarHandleDesc, $VarHandle$VarHandleDesc$Kind::ARRAY, $ConstantDescs::DEFAULT_NAME, arrayClass, $($cast($ClassDesc, arrayClass->componentType())));
}

$ClassDesc* VarHandle$VarHandleDesc::varType() {
	return this->varType$;
}

$Object* VarHandle$VarHandleDesc::resolveConstantDesc($MethodHandles$Lookup* lookup) {
	$useLocalCurrentObjectStackCache();
	$init($VarHandle$2);

	$var($VarHandle, var$0, nullptr)
	switch ($nc($VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$VarHandleDesc$Kind)->get((this->kind)->ordinal())) {
	case 1:
		{
			$Class* var$1 = $cast($Class, $nc(this->declaringClass)->resolveConstantDesc(lookup));
			$var($String, var$2, constantName());
			$assign(var$0, $nc(lookup)->findVarHandle(var$1, var$2, $cast($Class, $($nc(this->varType$)->resolveConstantDesc(lookup)))));
			break;
		}
	case 2:
		{
			$Class* var$3 = $cast($Class, $nc(this->declaringClass)->resolveConstantDesc(lookup));
			$var($String, var$4, constantName());
			$assign(var$0, $nc(lookup)->findStaticVarHandle(var$3, var$4, $cast($Class, $($nc(this->varType$)->resolveConstantDesc(lookup)))));
			break;
		}
	case 3:
		{
			$assign(var$0, $MethodHandles::arrayElementVarHandle($cast($Class, $($nc(this->declaringClass)->resolveConstantDesc(lookup)))));
			break;
		}
	default:
		{
			$throwNew($InternalError, "Cannot reach here"_s);
		}
	}
	return $of(var$0);
}

$String* VarHandle$VarHandleDesc::toString() {
	$useLocalCurrentObjectStackCache();
	$init($VarHandle$2);

	$var($String, var$0, nullptr)
	switch ($nc($VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$VarHandleDesc$Kind)->get((this->kind)->ordinal())) {
	case 1:
		{}
	case 2:
		{
			$init($VarHandle$VarHandleDesc$Kind);
			$assign(var$0, $String::format("VarHandleDesc[%s%s.%s:%s]"_s, $$new($ObjectArray, {
				(this->kind == $VarHandle$VarHandleDesc$Kind::STATIC_FIELD) ? $of("static "_s) : $of(""_s),
				$($of($nc(this->declaringClass)->displayName())),
				$($of(constantName())),
				$($of($nc(this->varType$)->displayName()))
			})));
			break;
		}
	case 3:
		{
			$assign(var$0, $String::format("VarHandleDesc[%s[]]"_s, $$new($ObjectArray, {$($of($nc(this->declaringClass)->displayName()))})));
			break;
		}
	default:
		{
			$throwNew($InternalError, "Cannot reach here"_s);
		}
	}
	return var$0;
}

VarHandle$VarHandleDesc::VarHandle$VarHandleDesc() {
}

$Class* VarHandle$VarHandleDesc::load$($String* name, bool initialize) {
	$loadClass(VarHandle$VarHandleDesc, name, initialize, &_VarHandle$VarHandleDesc_ClassInfo_, allocate$VarHandle$VarHandleDesc);
	return class$;
}

$Class* VarHandle$VarHandleDesc::class$ = nullptr;

		} // invoke
	} // lang
} // java