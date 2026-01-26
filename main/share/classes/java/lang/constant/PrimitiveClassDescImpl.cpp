#include <java/lang/constant/PrimitiveClassDescImpl.h>

#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/util/Objects.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef BSM_PRIMITIVE_CLASS

using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Objects = ::java::util::Objects;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace constant {

$FieldInfo _PrimitiveClassDescImpl_FieldInfo_[] = {
	{"descriptor", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PrimitiveClassDescImpl, descriptor)},
	{}
};

$MethodInfo _PrimitiveClassDescImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(PrimitiveClassDescImpl, init$, void, $String*)},
	{"descriptorString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PrimitiveClassDescImpl, descriptorString, $String*)},
	{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Class;", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(PrimitiveClassDescImpl, resolveConstantDesc, $Object*, $MethodHandles$Lookup*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PrimitiveClassDescImpl, toString, $String*)},
	{}
};

$ClassInfo _PrimitiveClassDescImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.constant.PrimitiveClassDescImpl",
	"java.lang.constant.DynamicConstantDesc",
	"java.lang.constant.ClassDesc",
	_PrimitiveClassDescImpl_FieldInfo_,
	_PrimitiveClassDescImpl_MethodInfo_,
	"Ljava/lang/constant/DynamicConstantDesc<Ljava/lang/Class<*>;>;Ljava/lang/constant/ClassDesc;"
};

$Object* allocate$PrimitiveClassDescImpl($Class* clazz) {
	return $of($alloc(PrimitiveClassDescImpl));
}

bool PrimitiveClassDescImpl::equals(Object$* o) {
	 return this->$DynamicConstantDesc::equals(o);
}

int32_t PrimitiveClassDescImpl::hashCode() {
	 return this->$DynamicConstantDesc::hashCode();
}

$Object* PrimitiveClassDescImpl::clone() {
	 return this->$DynamicConstantDesc::clone();
}

void PrimitiveClassDescImpl::finalize() {
	this->$DynamicConstantDesc::finalize();
}

void PrimitiveClassDescImpl::init$($String* descriptor) {
	$useLocalCurrentObjectStackCache();
	$init($ConstantDescs);
	$DynamicConstantDesc::init$($ConstantDescs::BSM_PRIMITIVE_CLASS, $cast($String, $Objects::requireNonNull(descriptor)), $ConstantDescs::CD_Class, $$new($ConstantDescArray, 0));
	bool var$0 = $nc(descriptor)->length() != 1;
	if (var$0 || "VIJCSBFDZ"_s->indexOf((int32_t)$nc(descriptor)->charAt(0)) < 0) {
		$throwNew($IllegalArgumentException, $($String::format("not a valid primitive type descriptor: %s"_s, $$new($ObjectArray, {$of(descriptor)}))));
	}
	$set(this, descriptor, descriptor);
}

$String* PrimitiveClassDescImpl::descriptorString() {
	return this->descriptor;
}

$Object* PrimitiveClassDescImpl::resolveConstantDesc($MethodHandles$Lookup* lookup) {
	$useLocalCurrentObjectStackCache();
	return $of($nc($($Wrapper::forBasicType($nc($(descriptorString()))->charAt(0))))->primitiveType());
}

$String* PrimitiveClassDescImpl::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("PrimitiveClassDesc[%s]"_s, $$new($ObjectArray, {$($of(displayName()))}));
}

PrimitiveClassDescImpl::PrimitiveClassDescImpl() {
}

$Class* PrimitiveClassDescImpl::load$($String* name, bool initialize) {
	$loadClass(PrimitiveClassDescImpl, name, initialize, &_PrimitiveClassDescImpl_ClassInfo_, allocate$PrimitiveClassDescImpl);
	return class$;
}

$Class* PrimitiveClassDescImpl::class$ = nullptr;

		} // constant
	} // lang
} // java