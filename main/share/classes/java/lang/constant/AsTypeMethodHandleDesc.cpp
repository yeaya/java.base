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
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
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

$FieldInfo _AsTypeMethodHandleDesc_FieldInfo_[] = {
	{"underlying", "Ljava/lang/constant/MethodHandleDesc;", nullptr, $PRIVATE | $FINAL, $field(AsTypeMethodHandleDesc, underlying)},
	{"type", "Ljava/lang/constant/MethodTypeDesc;", nullptr, $PRIVATE | $FINAL, $field(AsTypeMethodHandleDesc, type)},
	{}
};

$MethodInfo _AsTypeMethodHandleDesc_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/constant/MethodHandleDesc;Ljava/lang/constant/MethodTypeDesc;)V", nullptr, 0, $method(static_cast<void(AsTypeMethodHandleDesc::*)($MethodHandleDesc*,$MethodTypeDesc*)>(&AsTypeMethodHandleDesc::init$))},
	{"invocationType", "()Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC},
	{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC, nullptr, "java.lang.ReflectiveOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AsTypeMethodHandleDesc_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.constant.AsTypeMethodHandleDesc",
	"java.lang.constant.DynamicConstantDesc",
	"java.lang.constant.MethodHandleDesc",
	_AsTypeMethodHandleDesc_FieldInfo_,
	_AsTypeMethodHandleDesc_MethodInfo_,
	"Ljava/lang/constant/DynamicConstantDesc<Ljava/lang/invoke/MethodHandle;>;Ljava/lang/constant/MethodHandleDesc;"
};

$Object* allocate$AsTypeMethodHandleDesc($Class* clazz) {
	return $of($alloc(AsTypeMethodHandleDesc));
}

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
		static_cast<$ConstantDesc*>($ConstantDescs::MHD_METHODHANDLE_ASTYPE),
		static_cast<$ConstantDesc*>(underlying),
		static_cast<$ConstantDesc*>(type)
	}));
	$set(this, underlying, $cast($MethodHandleDesc, $Objects::requireNonNull(underlying)));
	$set(this, type, $cast($MethodTypeDesc, $Objects::requireNonNull(type)));
}

$MethodTypeDesc* AsTypeMethodHandleDesc::invocationType() {
	return this->type;
}

$Object* AsTypeMethodHandleDesc::resolveConstantDesc($MethodHandles$Lookup* lookup) {
	$useLocalCurrentObjectStackCache();
	$var($MethodHandle, handle, $cast($MethodHandle, $nc(this->underlying)->resolveConstantDesc(lookup)));
	$var($MethodType, methodType, $cast($MethodType, $nc(this->type)->resolveConstantDesc(lookup)));
	return $of($nc(handle)->asType(methodType));
}

$String* AsTypeMethodHandleDesc::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s.asType%s"_s, $$new($ObjectArray, {
		$($of($nc($of(this->underlying))->toString())),
		$($of($nc(this->type)->displayDescriptor()))
	}));
}

AsTypeMethodHandleDesc::AsTypeMethodHandleDesc() {
}

$Class* AsTypeMethodHandleDesc::load$($String* name, bool initialize) {
	$loadClass(AsTypeMethodHandleDesc, name, initialize, &_AsTypeMethodHandleDesc_ClassInfo_, allocate$AsTypeMethodHandleDesc);
	return class$;
}

$Class* AsTypeMethodHandleDesc::class$ = nullptr;

		} // constant
	} // lang
} // java