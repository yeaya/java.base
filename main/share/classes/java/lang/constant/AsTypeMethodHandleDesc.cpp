#include <java/lang/constant/AsTypeMethodHandleDesc.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/lang/constant/MethodHandleDesc.h>
#include <java/lang/constant/MethodTypeDesc.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef BSM_INVOKE
#undef DEFAULT_NAME
#undef MHD_METHODHANDLE_ASTYPE

using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $MethodHandleDesc = ::java::lang::constant::MethodHandleDesc;
using $MethodTypeDesc = ::java::lang::constant::MethodTypeDesc;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace constant {

bool AsTypeMethodHandleDesc::equals(Object$* o) {
	 return this->$DynamicConstantDesc::equals(o);
}

int32_t AsTypeMethodHandleDesc::hashCode() {
	 return this->$DynamicConstantDesc::hashCode();
}

$Object* AsTypeMethodHandleDesc::clone() {
	 return this->$DynamicConstantDesc::clone();
}

void AsTypeMethodHandleDesc::finalize() {
	this->$DynamicConstantDesc::finalize();
}

void AsTypeMethodHandleDesc::init$($MethodHandleDesc* underlying, $MethodTypeDesc* type) {
	$init($ConstantDescs);
	$DynamicConstantDesc::init$($ConstantDescs::BSM_INVOKE, $ConstantDescs::DEFAULT_NAME, $ConstantDescs::CD_MethodHandle, $$new($ConstantDescArray, {
		$ConstantDescs::MHD_METHODHANDLE_ASTYPE,
		underlying,
		type
	}));
	$set(this, underlying, $cast($MethodHandleDesc, $Objects::requireNonNull(underlying)));
	$set(this, type, $cast($MethodTypeDesc, $Objects::requireNonNull(type)));
}

$MethodTypeDesc* AsTypeMethodHandleDesc::invocationType() {
	return this->type;
}

$Object* AsTypeMethodHandleDesc::resolveConstantDesc($MethodHandles$Lookup* lookup) {
	$useLocalObjectStack();
	$var($MethodHandle, handle, $cast($MethodHandle, $nc(this->underlying)->resolveConstantDesc(lookup)));
	$var($MethodType, methodType, $cast($MethodType, $nc(this->type)->resolveConstantDesc(lookup)));
	return $nc(handle)->asType(methodType);
}

$String* AsTypeMethodHandleDesc::toString() {
	$useLocalObjectStack();
	return $String::format("%s.asType%s"_s, $$new($ObjectArray, {
		$($nc(this->underlying)->toString()),
		$($nc(this->type)->displayDescriptor())
	}));
}

AsTypeMethodHandleDesc::AsTypeMethodHandleDesc() {
}

$Class* AsTypeMethodHandleDesc::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"underlying", "Ljava/lang/constant/MethodHandleDesc;", nullptr, $PRIVATE | $FINAL, $field(AsTypeMethodHandleDesc, underlying)},
		{"type", "Ljava/lang/constant/MethodTypeDesc;", nullptr, $PRIVATE | $FINAL, $field(AsTypeMethodHandleDesc, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
		{"<init>", "(Ljava/lang/constant/MethodHandleDesc;Ljava/lang/constant/MethodTypeDesc;)V", nullptr, 0, $method(AsTypeMethodHandleDesc, init$, void, $MethodHandleDesc*, $MethodTypeDesc*)},
		{"invocationType", "()Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC, $virtualMethod(AsTypeMethodHandleDesc, invocationType, $MethodTypeDesc*)},
		{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC, $virtualMethod(AsTypeMethodHandleDesc, resolveConstantDesc, $Object*, $MethodHandles$Lookup*), "java.lang.ReflectiveOperationException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AsTypeMethodHandleDesc, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.constant.AsTypeMethodHandleDesc",
		"java.lang.constant.DynamicConstantDesc",
		"java.lang.constant.MethodHandleDesc",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/constant/DynamicConstantDesc<Ljava/lang/invoke/MethodHandle;>;Ljava/lang/constant/MethodHandleDesc;"
	};
	$loadClass(AsTypeMethodHandleDesc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AsTypeMethodHandleDesc));
	});
	return class$;
}

$Class* AsTypeMethodHandleDesc::class$ = nullptr;

		} // constant
	} // lang
} // java