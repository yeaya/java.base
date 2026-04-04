#include <sun/reflect/generics/reflectiveObjects/ParameterizedTypeImpl.h>
#include <java/lang/CharSequence.h>
#include <java/lang/reflect/MalformedParameterizedTypeException.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <java/util/StringJoiner.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedParameterizedTypeException = ::java::lang::reflect::MalformedParameterizedTypeException;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $StringJoiner = ::java::util::StringJoiner;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace reflectiveObjects {

void ParameterizedTypeImpl::init$($Class* rawType, $TypeArray* actualTypeArguments, $Type* ownerType) {
	$beforeCallerSensitive();
	$set(this, actualTypeArguments, actualTypeArguments);
	$set(this, rawType, rawType);
	$set(this, ownerType, (ownerType != nullptr) ? ownerType : $cast($Type, $nc(rawType)->getDeclaringClass()));
	validateConstructorArguments();
}

void ParameterizedTypeImpl::validateConstructorArguments() {
	$useLocalObjectStack();
	$var($TypeVariableArray, formals, $nc(this->rawType)->getTypeParameters());
	if ($nc(formals)->length != $nc(this->actualTypeArguments)->length) {
		$throwNew($MalformedParameterizedTypeException, $($String::format("Mismatch of count of formal and actual type arguments in constructor of %s: %d formal argument(s) %d actual argument(s)"_s, $$new($ObjectArray, {
			$(this->rawType->getName()),
			$($Integer::valueOf(formals->length)),
			$($Integer::valueOf(this->actualTypeArguments->length))
		}))));
	}
	for (int32_t i = 0; i < this->actualTypeArguments->length; ++i) {
	}
}

ParameterizedTypeImpl* ParameterizedTypeImpl::make($Class* rawType, $TypeArray* actualTypeArguments, $Type* ownerType) {
	$init(ParameterizedTypeImpl);
	return $new(ParameterizedTypeImpl, rawType, actualTypeArguments, ownerType);
}

$TypeArray* ParameterizedTypeImpl::getActualTypeArguments() {
	return $cast($TypeArray, $nc(this->actualTypeArguments)->clone());
}

$Type* ParameterizedTypeImpl::getRawType() {
	return this->rawType;
}

$Type* ParameterizedTypeImpl::getOwnerType() {
	return this->ownerType;
}

bool ParameterizedTypeImpl::equals(Object$* o) {
	$useLocalObjectStack();
	if ($instanceOf($ParameterizedType, o)) {
		$var($ParameterizedType, that, $cast($ParameterizedType, o));
		if ($equals(this, that)) {
			return true;
		}
		$var($Type, thatOwner, that->getOwnerType());
		$var($Type, thatRawType, that->getRawType());
		;
		bool var$1 = $Objects::equals(this->ownerType, thatOwner);
		bool var$0 = var$1 && $Objects::equals(this->rawType, thatRawType);
		return var$0 && $Arrays::equals(this->actualTypeArguments, $(that->getActualTypeArguments()));
	} else {
		return false;
	}
}

int32_t ParameterizedTypeImpl::hashCode() {
	int32_t var$1 = $Arrays::hashCode(this->actualTypeArguments);
	int32_t var$0 = var$1 ^ $Objects::hashCode(this->ownerType);
	return var$0 ^ $Objects::hashCode(this->rawType);
}

$String* ParameterizedTypeImpl::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	if (this->ownerType != nullptr) {
		sb->append($(this->ownerType->getTypeName()));
		sb->append("$"_s);
		if ($instanceOf(ParameterizedTypeImpl, this->ownerType)) {
			sb->append($($$nc($nc(this->rawType)->getName())->replace($$str({$($nc($cast(ParameterizedTypeImpl, this->ownerType)->rawType)->getName()), "$"_s}), ""_s)));
		} else {
			sb->append($($nc(this->rawType)->getSimpleName()));
		}
	} else {
		sb->append($($nc(this->rawType)->getName()));
	}
	if (this->actualTypeArguments != nullptr) {
		$var($StringJoiner, sj, $new($StringJoiner, ", "_s, "<"_s, ">"_s));
		sj->setEmptyValue(""_s);
		{
			$var($TypeArray, arr$, this->actualTypeArguments);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Type, t, arr$->get(i$));
				{
					sj->add($($nc(t)->getTypeName()));
				}
			}
		}
		sb->append($(sj->toString()));
	}
	return sb->toString();
}

ParameterizedTypeImpl::ParameterizedTypeImpl() {
}

$Class* ParameterizedTypeImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"actualTypeArguments", "[Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $FINAL, $field(ParameterizedTypeImpl, actualTypeArguments)},
		{"rawType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(ParameterizedTypeImpl, rawType)},
		{"ownerType", "Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $FINAL, $field(ParameterizedTypeImpl, ownerType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;[Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;)V", "(Ljava/lang/Class<*>;[Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;)V", $PRIVATE, $method(ParameterizedTypeImpl, init$, void, $Class*, $TypeArray*, $Type*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ParameterizedTypeImpl, equals, bool, Object$*)},
		{"getActualTypeArguments", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC, $virtualMethod(ParameterizedTypeImpl, getActualTypeArguments, $TypeArray*)},
		{"getOwnerType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC, $virtualMethod(ParameterizedTypeImpl, getOwnerType, $Type*)},
		{"getRawType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ParameterizedTypeImpl, getRawType, $Type*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ParameterizedTypeImpl, hashCode, int32_t)},
		{"make", "(Ljava/lang/Class;[Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;)Lsun/reflect/generics/reflectiveObjects/ParameterizedTypeImpl;", "(Ljava/lang/Class<*>;[Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;)Lsun/reflect/generics/reflectiveObjects/ParameterizedTypeImpl;", $PUBLIC | $STATIC, $staticMethod(ParameterizedTypeImpl, make, ParameterizedTypeImpl*, $Class*, $TypeArray*, $Type*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParameterizedTypeImpl, toString, $String*)},
		{"validateConstructorArguments", "()V", nullptr, $PRIVATE, $method(ParameterizedTypeImpl, validateConstructorArguments, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.reflectiveObjects.ParameterizedTypeImpl",
		"java.lang.Object",
		"java.lang.reflect.ParameterizedType",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ParameterizedTypeImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedTypeImpl);
	});
	return class$;
}

$Class* ParameterizedTypeImpl::class$ = nullptr;

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun