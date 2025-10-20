#include <java/lang/constant/ClassDesc.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/ConstantUtils.h>
#include <java/lang/constant/PrimitiveClassDescImpl.h>
#include <java/lang/constant/ReferenceClassDescImpl.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef MAX_ARRAY_TYPE_DESC_DIMENSIONS

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $ConstantUtils = ::java::lang::constant::ConstantUtils;
using $PrimitiveClassDescImpl = ::java::lang::constant::PrimitiveClassDescImpl;
using $ReferenceClassDescImpl = ::java::lang::constant::ReferenceClassDescImpl;
using $TypeDescriptor$OfField = ::java::lang::invoke::TypeDescriptor$OfField;
using $Objects = ::java::util::Objects;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace constant {

$MethodInfo _ClassDesc_MethodInfo_[] = {
	{"arrayType", "()Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC},
	{"arrayType", "(I)Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"componentType", "()Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC},
	{"descriptorString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"displayName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isArray", "()Z", nullptr, $PUBLIC},
	{"isClassOrInterface", "()Z", nullptr, $PUBLIC},
	{"isPrimitive", "()Z", nullptr, $PUBLIC},
	{"nested", "(Ljava/lang/String;)Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC},
	{"nested", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $TRANSIENT},
	{"of", "(Ljava/lang/String;)Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClassDesc*(*)($String*)>(&ClassDesc::of))},
	{"of", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClassDesc*(*)($String*,$String*)>(&ClassDesc::of))},
	{"ofDescriptor", "(Ljava/lang/String;)Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClassDesc*(*)($String*)>(&ClassDesc::ofDescriptor))},
	{"packageName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClassDesc_InnerClassesInfo_[] = {
	{"java.lang.invoke.TypeDescriptor$OfField", "java.lang.invoke.TypeDescriptor", "OfField", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ClassDesc_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.constant.ClassDesc",
	nullptr,
	"java.lang.constant.ConstantDesc,java.lang.invoke.TypeDescriptor$OfField",
	nullptr,
	_ClassDesc_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/constant/ConstantDesc;Ljava/lang/invoke/TypeDescriptor$OfField<Ljava/lang/constant/ClassDesc;>;",
	nullptr,
	_ClassDesc_InnerClassesInfo_
};

$Object* allocate$ClassDesc($Class* clazz) {
	return $of($alloc(ClassDesc));
}

bool ClassDesc::equals(Object$* o) {
	 return this->$ConstantDesc::equals(o);
}

int32_t ClassDesc::hashCode() {
	 return this->$ConstantDesc::hashCode();
}

$Object* ClassDesc::clone() {
	 return this->$ConstantDesc::clone();
}

$String* ClassDesc::toString() {
	 return this->$ConstantDesc::toString();
}

void ClassDesc::finalize() {
	this->$ConstantDesc::finalize();
}

ClassDesc* ClassDesc::of($String* name) {
	$init(ClassDesc);
	$useLocalCurrentObjectStackCache();
	$ConstantUtils::validateBinaryClassName($cast($String, $Objects::requireNonNull(name)));
	return ClassDesc::ofDescriptor($$str({"L"_s, $($ConstantUtils::binaryToInternal(name)), ";"_s}));
}

ClassDesc* ClassDesc::of($String* packageName, $String* className) {
	$init(ClassDesc);
	$useLocalCurrentObjectStackCache();
	$ConstantUtils::validateBinaryClassName($cast($String, $Objects::requireNonNull(packageName)));
	if ($nc(packageName)->isEmpty()) {
		return of(className);
	}
	$ConstantUtils::validateMemberName($cast($String, $Objects::requireNonNull(className)), false);
	$var($String, var$2, $$str({"L"_s, $($ConstantUtils::binaryToInternal(packageName))}));
	$var($String, var$1, $$concat(var$2, ($nc(packageName)->length() > 0 ? "/"_s : ""_s)));
	$var($String, var$0, $$concat(var$1, className));
	return ofDescriptor($$concat(var$0, ";"));
}

ClassDesc* ClassDesc::ofDescriptor($String* descriptor) {
	$init(ClassDesc);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(descriptor);
	if (descriptor->isEmpty()) {
		$throwNew($IllegalArgumentException, $$str({"not a valid reference type descriptor: "_s, descriptor}));
	}
	int32_t depth = $ConstantUtils::arrayDepth(descriptor);
	if (depth > $ConstantUtils::MAX_ARRAY_TYPE_DESC_DIMENSIONS) {
		$throwNew($IllegalArgumentException, $$str({"Cannot create an array type descriptor with more than "_s, $$str($ConstantUtils::MAX_ARRAY_TYPE_DESC_DIMENSIONS), " dimensions"_s}));
	}
	return (descriptor->length() == 1) ? static_cast<ClassDesc*>($new($PrimitiveClassDescImpl, descriptor)) : static_cast<ClassDesc*>($new($ReferenceClassDescImpl, descriptor));
}

$TypeDescriptor$OfField* ClassDesc::arrayType() {
	$useLocalCurrentObjectStackCache();
	int32_t depth = $ConstantUtils::arrayDepth($(descriptorString()));
	if (depth >= $ConstantUtils::MAX_ARRAY_TYPE_DESC_DIMENSIONS) {
		$throwNew($IllegalStateException, $$str({"Cannot create an array type descriptor with more than "_s, $$str($ConstantUtils::MAX_ARRAY_TYPE_DESC_DIMENSIONS), " dimensions"_s}));
	}
	return arrayType(1);
}

ClassDesc* ClassDesc::arrayType(int32_t rank) {
	$useLocalCurrentObjectStackCache();
	int32_t currentDepth = $ConstantUtils::arrayDepth($(descriptorString()));
	if (rank <= 0 || currentDepth + rank > $ConstantUtils::MAX_ARRAY_TYPE_DESC_DIMENSIONS) {
		$throwNew($IllegalArgumentException, $$str({"rank: "_s, $$str(currentDepth), $$str(rank)}));
	}
	$var($String, var$0, $("["_s->repeat(rank)));
	return ClassDesc::ofDescriptor($$concat(var$0, $(descriptorString())));
}

ClassDesc* ClassDesc::nested($String* nestedName) {
	$useLocalCurrentObjectStackCache();
	$ConstantUtils::validateMemberName(nestedName, false);
	if (!isClassOrInterface()) {
		$throwNew($IllegalStateException, "Outer class is not a class or interface type"_s);
	}
	return ClassDesc::ofDescriptor($$str({$($ConstantUtils::dropLastChar($(descriptorString()))), "$"_s, nestedName, ";"_s}));
}

ClassDesc* ClassDesc::nested($String* firstNestedName, $StringArray* moreNestedNames) {
	$useLocalCurrentObjectStackCache();
	if (!isClassOrInterface()) {
		$throwNew($IllegalStateException, "Outer class is not a class or interface type"_s);
	}
	$ConstantUtils::validateMemberName(firstNestedName, false);
	$Objects::requireNonNull(moreNestedNames);
	{
		$var($StringArray, arr$, moreNestedNames);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, addNestedNames, arr$->get(i$));
			{
				$ConstantUtils::validateMemberName(addNestedNames, false);
			}
		}
	}
	return moreNestedNames->length == 0 ? nested(firstNestedName) : nested($$str({firstNestedName, $cast($String, $($nc($($Stream::of(moreNestedNames)))->collect($($Collectors::joining("$"_s, "$"_s, ""_s)))))}));
}

bool ClassDesc::isArray() {
	return $nc($(descriptorString()))->startsWith("["_s);
}

bool ClassDesc::isPrimitive() {
	return $nc($(descriptorString()))->length() == 1;
}

bool ClassDesc::isClassOrInterface() {
	return $nc($(descriptorString()))->startsWith("L"_s);
}

$TypeDescriptor$OfField* ClassDesc::componentType() {
	$useLocalCurrentObjectStackCache();
	return (isArray() ? ClassDesc::ofDescriptor($($nc($(descriptorString()))->substring(1))) : (ClassDesc*)nullptr);
}

$String* ClassDesc::packageName() {
	$useLocalCurrentObjectStackCache();
	if (!isClassOrInterface()) {
		return ""_s;
	}
	$var($String, className, $ConstantUtils::internalToBinary($($ConstantUtils::dropFirstAndLastChar($(descriptorString())))));
	int32_t index = $nc(className)->lastIndexOf((int32_t)u'.');
	return (index == -1) ? ""_s : className->substring(0, index);
}

$String* ClassDesc::displayName() {
	$useLocalCurrentObjectStackCache();
	if (isPrimitive()) {
		return $nc($($Wrapper::forBasicType($nc($(descriptorString()))->charAt(0))))->primitiveSimpleName();
	} else if (isClassOrInterface()) {
		int32_t var$0 = $Math::max(1, $nc($(descriptorString()))->lastIndexOf((int32_t)u'/') + 1);
		return $nc($(descriptorString()))->substring(var$0, $nc($(descriptorString()))->length() - 1);
	} else if (isArray()) {
		int32_t depth = $ConstantUtils::arrayDepth($(descriptorString()));
		$var(ClassDesc, c, this);
		for (int32_t i = 0; i < depth; ++i) {
			$assign(c, $cast(ClassDesc, $nc(c)->componentType()));
		}
		$var($String, var$1, $($nc(c)->displayName()));
		return $concat(var$1, $("[]"_s->repeat(depth)));
	} else {
		$throwNew($IllegalStateException, $(descriptorString()));
	}
}

$Class* ClassDesc::load$($String* name, bool initialize) {
	$loadClass(ClassDesc, name, initialize, &_ClassDesc_ClassInfo_, allocate$ClassDesc);
	return class$;
}

$Class* ClassDesc::class$ = nullptr;

		} // constant
	} // lang
} // java