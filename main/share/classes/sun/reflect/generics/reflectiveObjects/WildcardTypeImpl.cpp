#include <sun/reflect/generics/reflectiveObjects/WildcardTypeImpl.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/WildcardType.h>
#include <java/util/Arrays.h>
#include <java/util/StringJoiner.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/reflectiveObjects/LazyReflectiveObjectGenerator.h>
#include <sun/reflect/generics/tree/FieldTypeSignature.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $FieldTypeSignatureArray = $Array<::sun::reflect::generics::tree::FieldTypeSignature>;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $WildcardType = ::java::lang::reflect::WildcardType;
using $Arrays = ::java::util::Arrays;
using $StringJoiner = ::java::util::StringJoiner;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $LazyReflectiveObjectGenerator = ::sun::reflect::generics::reflectiveObjects::LazyReflectiveObjectGenerator;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace reflectiveObjects {

$FieldInfo _WildcardTypeImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WildcardTypeImpl, $assertionsDisabled)},
	{"upperBounds", "[Ljava/lang/Object;", nullptr, $PRIVATE | $VOLATILE, $field(WildcardTypeImpl, upperBounds)},
	{"lowerBounds", "[Ljava/lang/Object;", nullptr, $PRIVATE | $VOLATILE, $field(WildcardTypeImpl, lowerBounds)},
	{}
};

$MethodInfo _WildcardTypeImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "([Lsun/reflect/generics/tree/FieldTypeSignature;[Lsun/reflect/generics/tree/FieldTypeSignature;Lsun/reflect/generics/factory/GenericsFactory;)V", nullptr, $PRIVATE, $method(static_cast<void(WildcardTypeImpl::*)($FieldTypeSignatureArray*,$FieldTypeSignatureArray*,$GenericsFactory*)>(&WildcardTypeImpl::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getLowerBounds", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"getUpperBounds", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"make", "([Lsun/reflect/generics/tree/FieldTypeSignature;[Lsun/reflect/generics/tree/FieldTypeSignature;Lsun/reflect/generics/factory/GenericsFactory;)Lsun/reflect/generics/reflectiveObjects/WildcardTypeImpl;", nullptr, $PUBLIC | $STATIC, $method(static_cast<WildcardTypeImpl*(*)($FieldTypeSignatureArray*,$FieldTypeSignatureArray*,$GenericsFactory*)>(&WildcardTypeImpl::make))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WildcardTypeImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.reflectiveObjects.WildcardTypeImpl",
	"sun.reflect.generics.reflectiveObjects.LazyReflectiveObjectGenerator",
	"java.lang.reflect.WildcardType",
	_WildcardTypeImpl_FieldInfo_,
	_WildcardTypeImpl_MethodInfo_
};

$Object* allocate$WildcardTypeImpl($Class* clazz) {
	return $of($alloc(WildcardTypeImpl));
}

$Object* WildcardTypeImpl::clone() {
	 return this->$LazyReflectiveObjectGenerator::clone();
}

void WildcardTypeImpl::finalize() {
	this->$LazyReflectiveObjectGenerator::finalize();
}

bool WildcardTypeImpl::$assertionsDisabled = false;

void WildcardTypeImpl::init$($FieldTypeSignatureArray* ubs, $FieldTypeSignatureArray* lbs, $GenericsFactory* f) {
	$LazyReflectiveObjectGenerator::init$(f);
	$set(this, upperBounds, ubs);
	$set(this, lowerBounds, lbs);
}

WildcardTypeImpl* WildcardTypeImpl::make($FieldTypeSignatureArray* ubs, $FieldTypeSignatureArray* lbs, $GenericsFactory* f) {
	$init(WildcardTypeImpl);
	return $new(WildcardTypeImpl, ubs, lbs, f);
}

$TypeArray* WildcardTypeImpl::getUpperBounds() {
	$var($ObjectArray, value, this->upperBounds);
	if ($instanceOf($FieldTypeSignatureArray, value)) {
		$assign(value, reifyBounds($fcast($FieldTypeSignatureArray, value)));
		$set(this, upperBounds, value);
	}
	return $cast($TypeArray, $nc(value)->clone());
}

$TypeArray* WildcardTypeImpl::getLowerBounds() {
	$var($ObjectArray, value, this->lowerBounds);
	if ($instanceOf($FieldTypeSignatureArray, value)) {
		$assign(value, reifyBounds($fcast($FieldTypeSignatureArray, value)));
		$set(this, lowerBounds, value);
	}
	return $cast($TypeArray, $nc(value)->clone());
}

$String* WildcardTypeImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($TypeArray, lowerBounds, getLowerBounds());
	$var($TypeArray, bounds, lowerBounds);
	$var($StringBuilder, sb, $new($StringBuilder));
	if ($nc(lowerBounds)->length > 0) {
		sb->append("? super "_s);
	} else {
		$var($TypeArray, upperBounds, getUpperBounds());
		if ($nc(upperBounds)->length > 0 && !$nc($of(upperBounds->get(0)))->equals($Object::class$)) {
			$assign(bounds, upperBounds);
			sb->append("? extends "_s);
		} else {
			return "?"_s;
		}
	}
	if (!WildcardTypeImpl::$assertionsDisabled && !($nc(bounds)->length > 0)) {
		$throwNew($AssertionError);
	}
	$var($StringJoiner, sj, $new($StringJoiner, " & "_s));
	{
		$var($TypeArray, arr$, bounds);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Type, bound, arr$->get(i$));
			{
				sj->add($($nc(bound)->getTypeName()));
			}
		}
	}
	sb->append($(sj->toString()));
	return sb->toString();
}

bool WildcardTypeImpl::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($WildcardType, o)) {
		$var($WildcardType, that, $cast($WildcardType, o));
		$var($ObjectArray, var$1, this->getLowerBounds());
		bool var$0 = $Arrays::equals(var$1, $($nc(that)->getLowerBounds()));
		if (var$0) {
			$var($ObjectArray, var$2, this->getUpperBounds());
			var$0 = $Arrays::equals(var$2, $($nc(that)->getUpperBounds()));
		}
		return var$0;
	} else {
		return false;
	}
}

int32_t WildcardTypeImpl::hashCode() {
	$useLocalCurrentObjectStackCache();
	$var($TypeArray, lowerBounds, getLowerBounds());
	$var($TypeArray, upperBounds, getUpperBounds());
	int32_t var$0 = $Arrays::hashCode(lowerBounds);
	return var$0 ^ $Arrays::hashCode(upperBounds);
}

void clinit$WildcardTypeImpl($Class* class$) {
	WildcardTypeImpl::$assertionsDisabled = !WildcardTypeImpl::class$->desiredAssertionStatus();
}

WildcardTypeImpl::WildcardTypeImpl() {
}

$Class* WildcardTypeImpl::load$($String* name, bool initialize) {
	$loadClass(WildcardTypeImpl, name, initialize, &_WildcardTypeImpl_ClassInfo_, clinit$WildcardTypeImpl, allocate$WildcardTypeImpl);
	return class$;
}

$Class* WildcardTypeImpl::class$ = nullptr;

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun