#include <java/lang/constant/DirectMethodHandleDescImpl.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/ConstantUtils.h>
#include <java/lang/constant/DirectMethodHandleDesc$Kind.h>
#include <java/lang/constant/DirectMethodHandleDescImpl$1.h>
#include <java/lang/constant/MethodTypeDesc.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/TypeDescriptor$OfMethod.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef CONSTRUCTOR
#undef TYPE

using $ClassDescArray = $Array<::java::lang::constant::ClassDesc>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $ConstantUtils = ::java::lang::constant::ConstantUtils;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DirectMethodHandleDesc$Kind = ::java::lang::constant::DirectMethodHandleDesc$Kind;
using $DirectMethodHandleDescImpl$1 = ::java::lang::constant::DirectMethodHandleDescImpl$1;
using $MethodTypeDesc = ::java::lang::constant::MethodTypeDesc;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace constant {

$FieldInfo _DirectMethodHandleDescImpl_FieldInfo_[] = {
	{"kind", "Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PRIVATE | $FINAL, $field(DirectMethodHandleDescImpl, kind$)},
	{"owner", "Ljava/lang/constant/ClassDesc;", nullptr, $PRIVATE | $FINAL, $field(DirectMethodHandleDescImpl, owner$)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DirectMethodHandleDescImpl, name)},
	{"invocationType", "Ljava/lang/constant/MethodTypeDesc;", nullptr, $PRIVATE | $FINAL, $field(DirectMethodHandleDescImpl, invocationType$)},
	{}
};

$MethodInfo _DirectMethodHandleDescImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/constant/DirectMethodHandleDesc$Kind;Ljava/lang/constant/ClassDesc;Ljava/lang/String;Ljava/lang/constant/MethodTypeDesc;)V", nullptr, 0, $method(static_cast<void(DirectMethodHandleDescImpl::*)($DirectMethodHandleDesc$Kind*,$ClassDesc*,$String*,$MethodTypeDesc*)>(&DirectMethodHandleDescImpl::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"invocationType", "()Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC},
	{"isOwnerInterface", "()Z", nullptr, $PUBLIC},
	{"kind", "()Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC},
	{"lookupDescriptor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"methodName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"owner", "()Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC},
	{"refKind", "()I", nullptr, $PUBLIC},
	{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC, nullptr, "java.lang.ReflectiveOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validateConstructor", "(Ljava/lang/constant/MethodTypeDesc;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MethodTypeDesc*)>(&DirectMethodHandleDescImpl::validateConstructor))},
	{"validateFieldType", "(Ljava/lang/constant/MethodTypeDesc;ZZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MethodTypeDesc*,bool,bool)>(&DirectMethodHandleDescImpl::validateFieldType))},
	{}
};

$InnerClassInfo _DirectMethodHandleDescImpl_InnerClassesInfo_[] = {
	{"java.lang.constant.DirectMethodHandleDescImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DirectMethodHandleDescImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.constant.DirectMethodHandleDescImpl",
	"java.lang.Object",
	"java.lang.constant.DirectMethodHandleDesc",
	_DirectMethodHandleDescImpl_FieldInfo_,
	_DirectMethodHandleDescImpl_MethodInfo_,
	nullptr,
	nullptr,
	_DirectMethodHandleDescImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.constant.DirectMethodHandleDescImpl$1"
};

$Object* allocate$DirectMethodHandleDescImpl($Class* clazz) {
	return $of($alloc(DirectMethodHandleDescImpl));
}

void DirectMethodHandleDescImpl::init$($DirectMethodHandleDesc$Kind* kind, $ClassDesc* owner, $String* name$renamed, $MethodTypeDesc* type) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	$init($DirectMethodHandleDesc$Kind);
	if (kind == $DirectMethodHandleDesc$Kind::CONSTRUCTOR) {
		$assign(name, "<init>"_s);
	}
	$Objects::requireNonNull(kind);
	$ConstantUtils::validateClassOrInterface($cast($ClassDesc, $Objects::requireNonNull(owner)));
	$ConstantUtils::validateMemberName($cast($String, $Objects::requireNonNull(name)), true);
	$Objects::requireNonNull(type);
	$init($DirectMethodHandleDescImpl$1);
	switch ($nc($DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->get((kind)->ordinal())) {
	case 1:
		{
			validateConstructor(type);
			break;
		}
	case 2:
		{
			validateFieldType(type, false, true);
			break;
		}
	case 3:
		{
			validateFieldType(type, true, true);
			break;
		}
	case 4:
		{
			validateFieldType(type, false, false);
			break;
		}
	case 5:
		{
			validateFieldType(type, true, false);
			break;
		}
	}
	$set(this, kind$, kind);
	$set(this, owner$, owner);
	$set(this, name, name);
	if (kind->isVirtualMethod()) {
		$set(this, invocationType$, type->insertParameterTypes(0, $$new($ClassDescArray, {owner})));
	} else {
		if (kind == $DirectMethodHandleDesc$Kind::CONSTRUCTOR) {
			$set(this, invocationType$, type->changeReturnType(owner));
		} else {
			$set(this, invocationType$, type);
		}
	}
}

void DirectMethodHandleDescImpl::validateFieldType($MethodTypeDesc* type, bool isSetter, bool isVirtual) {
	$init(DirectMethodHandleDescImpl);
	$useLocalCurrentObjectStackCache();
	bool isVoid = $nc($($nc($($cast($ClassDesc, $nc(type)->returnType())))->descriptorString()))->equals("V"_s);
	int32_t expectedParams = (isSetter ? 1 : 0) + (isVirtual ? 1 : 0);
	bool var$0 = isVoid != isSetter || type->parameterCount() != expectedParams;
	if (var$0 || (isVirtual && $nc($($cast($ClassDesc, type->parameterType(0))))->isPrimitive())) {
		$var($String, expectedType, $String::format("(%s%s)%s"_s, $$new($ObjectArray, {
			(isVirtual ? $of("R"_s) : $of(""_s)),
			(isSetter ? $of("T"_s) : $of(""_s)),
			(isSetter ? $of("V"_s) : $of("T"_s))
		})));
		$throwNew($IllegalArgumentException, $($String::format("Expected type of %s for getter, found %s"_s, $$new($ObjectArray, {
			$of(expectedType),
			$of(type)
		}))));
	}
}

void DirectMethodHandleDescImpl::validateConstructor($MethodTypeDesc* type) {
	$init(DirectMethodHandleDescImpl);
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc($($cast($ClassDesc, $nc(type)->returnType())))->descriptorString()))->equals("V"_s)) {
		$throwNew($IllegalArgumentException, $($String::format("Expected type of (T*)V for constructor, found %s"_s, $$new($ObjectArray, {$of(type)}))));
	}
}

$DirectMethodHandleDesc$Kind* DirectMethodHandleDescImpl::kind() {
	return this->kind$;
}

int32_t DirectMethodHandleDescImpl::refKind() {
	return this->kind$->refKind;
}

bool DirectMethodHandleDescImpl::isOwnerInterface() {
	return this->kind$->isInterface;
}

$ClassDesc* DirectMethodHandleDescImpl::owner() {
	return this->owner$;
}

$String* DirectMethodHandleDescImpl::methodName() {
	return this->name;
}

$MethodTypeDesc* DirectMethodHandleDescImpl::invocationType() {
	return this->invocationType$;
}

$String* DirectMethodHandleDescImpl::lookupDescriptor() {
	$useLocalCurrentObjectStackCache();
	$init($DirectMethodHandleDescImpl$1);

	$var($String, var$0, nullptr)
	switch ($nc($DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->get((this->kind$)->ordinal())) {
	case 6:
		{}
	case 7:
		{}
	case 8:
		{}
	case 9:
		{
			$assign(var$0, $nc($($cast($MethodTypeDesc, $nc(this->invocationType$)->dropParameterTypes(0, 1))))->descriptorString());
			break;
		}
	case 10:
		{}
	case 11:
		{
			$assign(var$0, $nc(this->invocationType$)->descriptorString());
			break;
		}
	case 1:
		{
			$init($ConstantDescs);
			$assign(var$0, $nc($($nc(this->invocationType$)->changeReturnType($ConstantDescs::CD_void)))->descriptorString());
			break;
		}
	case 2:
		{}
	case 4:
		{
			$assign(var$0, $nc($($cast($ClassDesc, $nc(this->invocationType$)->returnType())))->descriptorString());
			break;
		}
	case 3:
		{
			$assign(var$0, $nc($($cast($ClassDesc, $nc(this->invocationType$)->parameterType(1))))->descriptorString());
			break;
		}
	case 5:
		{
			$assign(var$0, $nc($($cast($ClassDesc, $nc(this->invocationType$)->parameterType(0))))->descriptorString());
			break;
		}
	default:
		{
			$throwNew($IllegalStateException, $(this->kind$->toString()));
		}
	}
	return var$0;
}

$Object* DirectMethodHandleDescImpl::resolveConstantDesc($MethodHandles$Lookup* lookup) {
	$useLocalCurrentObjectStackCache();
	$Class* resolvedOwner = $cast($Class, $nc(this->owner$)->resolveConstantDesc(lookup));
	$var($MethodType, invocationType, $cast($MethodType, $nc($(this->invocationType()))->resolveConstantDesc(lookup)));
	$init($DirectMethodHandleDescImpl$1);

	$var($MethodHandle, var$0, nullptr)
	switch ($nc($DirectMethodHandleDescImpl$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->get((this->kind$)->ordinal())) {
	case 10:
		{}
	case 11:
		{
			$assign(var$0, $nc(lookup)->findStatic(resolvedOwner, this->name, invocationType));
			break;
		}
	case 6:
		{}
	case 8:
		{
			$assign(var$0, $nc(lookup)->findVirtual(resolvedOwner, this->name, $($cast($MethodType, $nc(invocationType)->dropParameterTypes(0, 1)))));
			break;
		}
	case 7:
		{}
	case 9:
		{
			$Class* var$1 = resolvedOwner;
			$var($String, var$2, this->name);
			$var($MethodType, var$3, $cast($MethodType, $nc(invocationType)->dropParameterTypes(0, 1)));
			$assign(var$0, $nc(lookup)->findSpecial(var$1, var$2, var$3, lookup->lookupClass()));
			break;
		}
	case 1:
		{
			$init($Void);
			$assign(var$0, $nc(lookup)->findConstructor(resolvedOwner, $($nc(invocationType)->changeReturnType($Void::TYPE))));
			break;
		}
	case 2:
		{
			$assign(var$0, $nc(lookup)->findGetter(resolvedOwner, this->name, $($cast($Class, $nc(invocationType)->returnType()))));
			break;
		}
	case 4:
		{
			$assign(var$0, $nc(lookup)->findStaticGetter(resolvedOwner, this->name, $($cast($Class, $nc(invocationType)->returnType()))));
			break;
		}
	case 3:
		{
			$assign(var$0, $nc(lookup)->findSetter(resolvedOwner, this->name, $($cast($Class, $nc(invocationType)->parameterType(1)))));
			break;
		}
	case 5:
		{
			$assign(var$0, $nc(lookup)->findStaticSetter(resolvedOwner, this->name, $($cast($Class, $nc(invocationType)->parameterType(0)))));
			break;
		}
	default:
		{
			$throwNew($IllegalStateException, $(this->kind$->name()));
		}
	}
	return $of(var$0);
}

bool DirectMethodHandleDescImpl::equals(Object$* o) {
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
	$var(DirectMethodHandleDescImpl, desc, $cast(DirectMethodHandleDescImpl, o));
	bool var$2 = this->kind$ == $nc(desc)->kind$ && $Objects::equals(this->owner$, desc->owner$);
	bool var$1 = var$2 && $Objects::equals(this->name, desc->name);
	return var$1 && $Objects::equals(this->invocationType$, desc->invocationType$);
}

int32_t DirectMethodHandleDescImpl::hashCode() {
	return $Objects::hash($$new($ObjectArray, {
		$of(this->kind$),
		$of(this->owner$),
		$of(this->name),
		$of(this->invocationType$)
	}));
}

$String* DirectMethodHandleDescImpl::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("MethodHandleDesc[%s/%s::%s%s]"_s, $$new($ObjectArray, {
		$of(this->kind$),
		$($of($nc(this->owner$)->displayName())),
		$of(this->name),
		$($of($nc(this->invocationType$)->displayDescriptor()))
	}));
}

DirectMethodHandleDescImpl::DirectMethodHandleDescImpl() {
}

$Class* DirectMethodHandleDescImpl::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandleDescImpl, name, initialize, &_DirectMethodHandleDescImpl_ClassInfo_, allocate$DirectMethodHandleDescImpl);
	return class$;
}

$Class* DirectMethodHandleDescImpl::class$ = nullptr;

		} // constant
	} // lang
} // java