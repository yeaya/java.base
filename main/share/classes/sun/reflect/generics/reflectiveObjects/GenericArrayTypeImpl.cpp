#include <sun/reflect/generics/reflectiveObjects/GenericArrayTypeImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $Type = ::java::lang::reflect::Type;
using $Objects = ::java::util::Objects;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace reflectiveObjects {

$FieldInfo _GenericArrayTypeImpl_FieldInfo_[] = {
	{"genericComponentType", "Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $FINAL, $field(GenericArrayTypeImpl, genericComponentType)},
	{}
};

$MethodInfo _GenericArrayTypeImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Type;)V", nullptr, $PRIVATE, $method(static_cast<void(GenericArrayTypeImpl::*)($Type*)>(&GenericArrayTypeImpl::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getGenericComponentType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"make", "(Ljava/lang/reflect/Type;)Lsun/reflect/generics/reflectiveObjects/GenericArrayTypeImpl;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GenericArrayTypeImpl*(*)($Type*)>(&GenericArrayTypeImpl::make))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GenericArrayTypeImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.reflectiveObjects.GenericArrayTypeImpl",
	"java.lang.Object",
	"java.lang.reflect.GenericArrayType",
	_GenericArrayTypeImpl_FieldInfo_,
	_GenericArrayTypeImpl_MethodInfo_
};

$Object* allocate$GenericArrayTypeImpl($Class* clazz) {
	return $of($alloc(GenericArrayTypeImpl));
}

void GenericArrayTypeImpl::init$($Type* ct) {
	$set(this, genericComponentType, ct);
}

GenericArrayTypeImpl* GenericArrayTypeImpl::make($Type* ct) {
	$init(GenericArrayTypeImpl);
	return $new(GenericArrayTypeImpl, ct);
}

$Type* GenericArrayTypeImpl::getGenericComponentType() {
	return this->genericComponentType;
}

$String* GenericArrayTypeImpl::toString() {
	return $str({$($nc($(getGenericComponentType()))->getTypeName()), "[]"_s});
}

bool GenericArrayTypeImpl::equals(Object$* o) {
	if ($instanceOf($GenericArrayType, o)) {
		$var($GenericArrayType, that, $cast($GenericArrayType, o));
		return $Objects::equals(this->genericComponentType, $($nc(that)->getGenericComponentType()));
	} else {
		return false;
	}
}

int32_t GenericArrayTypeImpl::hashCode() {
	return $Objects::hashCode(this->genericComponentType);
}

GenericArrayTypeImpl::GenericArrayTypeImpl() {
}

$Class* GenericArrayTypeImpl::load$($String* name, bool initialize) {
	$loadClass(GenericArrayTypeImpl, name, initialize, &_GenericArrayTypeImpl_ClassInfo_, allocate$GenericArrayTypeImpl);
	return class$;
}

$Class* GenericArrayTypeImpl::class$ = nullptr;

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun