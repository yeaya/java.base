#include <java/lang/constant/ReferenceClassDescImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantUtils.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantUtils = ::java::lang::constant::ConstantUtils;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace constant {

$FieldInfo _ReferenceClassDescImpl_FieldInfo_[] = {
	{"descriptor", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ReferenceClassDescImpl, descriptor)},
	{}
};

$MethodInfo _ReferenceClassDescImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ReferenceClassDescImpl::*)($String*)>(&ReferenceClassDescImpl::init$))},
	{"descriptorString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Class;", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Class<*>;", $PUBLIC, nullptr, "java.lang.ReflectiveOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ReferenceClassDescImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.constant.ReferenceClassDescImpl",
	"java.lang.Object",
	"java.lang.constant.ClassDesc",
	_ReferenceClassDescImpl_FieldInfo_,
	_ReferenceClassDescImpl_MethodInfo_
};

$Object* allocate$ReferenceClassDescImpl($Class* clazz) {
	return $of($alloc(ReferenceClassDescImpl));
}

void ReferenceClassDescImpl::init$($String* descriptor) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(descriptor);
	int32_t len = $ConstantUtils::skipOverFieldSignature(descriptor, 0, descriptor->length(), false);
	if (len == 0 || len == 1 || len != descriptor->length()) {
		$throwNew($IllegalArgumentException, $($String::format("not a valid reference type descriptor: %s"_s, $$new($ObjectArray, {$of(descriptor)}))));
	}
	$set(this, descriptor, descriptor);
}

$String* ReferenceClassDescImpl::descriptorString() {
	return this->descriptor;
}

$Object* ReferenceClassDescImpl::resolveConstantDesc($MethodHandles$Lookup* lookup) {
	$useLocalCurrentObjectStackCache();
	$var($ClassDesc, c, this);
	int32_t depth = $ConstantUtils::arrayDepth($(descriptorString()));
	for (int32_t i = 0; i < depth; ++i) {
		$assign(c, $cast($ClassDesc, $nc(c)->componentType()));
	}
	if ($nc(c)->isPrimitive()) {
		return $of($nc(lookup)->findClass($(descriptorString())));
	} else {
		$Class* clazz = $nc(lookup)->findClass($($ConstantUtils::internalToBinary($($ConstantUtils::dropFirstAndLastChar($(c->descriptorString()))))));
		for (int32_t i = 0; i < depth; ++i) {
			clazz = $cast($Class, $nc(clazz)->arrayType());
		}
		return $of(clazz);
	}
}

bool ReferenceClassDescImpl::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, o)) {
		return true;
	}
	bool var$0 = o == nullptr;
	if (!var$0) {
		var$0 = $of(this)->getClass() != $nc($of(o))->getClass();
	}
	if (var$0) {
		return false;
	}
	$var($ClassDesc, constant, $cast($ClassDesc, o));
	return $nc(this->descriptor)->equals($($nc(constant)->descriptorString()));
}

int32_t ReferenceClassDescImpl::hashCode() {
	return $nc(this->descriptor)->hashCode();
}

$String* ReferenceClassDescImpl::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("ClassDesc[%s]"_s, $$new($ObjectArray, {$($of(displayName()))}));
}

ReferenceClassDescImpl::ReferenceClassDescImpl() {
}

$Class* ReferenceClassDescImpl::load$($String* name, bool initialize) {
	$loadClass(ReferenceClassDescImpl, name, initialize, &_ReferenceClassDescImpl_ClassInfo_, allocate$ReferenceClassDescImpl);
	return class$;
}

$Class* ReferenceClassDescImpl::class$ = nullptr;

		} // constant
	} // lang
} // java