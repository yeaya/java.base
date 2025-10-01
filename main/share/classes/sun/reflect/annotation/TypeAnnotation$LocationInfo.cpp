#include <sun/reflect/annotation/TypeAnnotation$LocationInfo.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/annotation/AnnotationFormatError.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/ArrayList.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory.h>
#include <sun/reflect/annotation/TypeAnnotation$LocationInfo$Location.h>
#include <sun/reflect/annotation/TypeAnnotation.h>
#include <jcpp.h>

#undef EMPTY_TYPE_ANNOTATION_ARRAY
#undef BASE_LOCATION

using $TypeAnnotation$LocationInfo$LocationArray = $Array<::sun::reflect::annotation::TypeAnnotation$LocationInfo$Location>;
using $TypeAnnotationArray = $Array<::sun::reflect::annotation::TypeAnnotation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationFormatError = ::java::lang::annotation::AnnotationFormatError;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ArrayList = ::java::util::ArrayList;
using $AnnotatedTypeFactory = ::sun::reflect::annotation::AnnotatedTypeFactory;
using $TypeAnnotation = ::sun::reflect::annotation::TypeAnnotation;
using $TypeAnnotation$LocationInfo$Location = ::sun::reflect::annotation::TypeAnnotation$LocationInfo$Location;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _TypeAnnotation$LocationInfo_FieldInfo_[] = {
	{"depth", "I", nullptr, $PRIVATE | $FINAL, $field(TypeAnnotation$LocationInfo, depth)},
	{"locations", "[Lsun/reflect/annotation/TypeAnnotation$LocationInfo$Location;", nullptr, $PRIVATE | $FINAL, $field(TypeAnnotation$LocationInfo, locations)},
	{"BASE_LOCATION", "Lsun/reflect/annotation/TypeAnnotation$LocationInfo;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TypeAnnotation$LocationInfo, BASE_LOCATION)},
	{}
};

$MethodInfo _TypeAnnotation$LocationInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TypeAnnotation$LocationInfo::*)()>(&TypeAnnotation$LocationInfo::init$))},
	{"<init>", "(I[Lsun/reflect/annotation/TypeAnnotation$LocationInfo$Location;)V", nullptr, $PRIVATE, $method(static_cast<void(TypeAnnotation$LocationInfo::*)(int32_t,$TypeAnnotation$LocationInfo$LocationArray*)>(&TypeAnnotation$LocationInfo::init$))},
	{"filter", "([Lsun/reflect/annotation/TypeAnnotation;)[Lsun/reflect/annotation/TypeAnnotation;", nullptr, $PUBLIC, $method(static_cast<$TypeAnnotationArray*(TypeAnnotation$LocationInfo::*)($TypeAnnotationArray*)>(&TypeAnnotation$LocationInfo::filter))},
	{"isSameLocationInfo", "(Lsun/reflect/annotation/TypeAnnotation$LocationInfo;)Z", nullptr, 0, $method(static_cast<bool(TypeAnnotation$LocationInfo::*)(TypeAnnotation$LocationInfo*)>(&TypeAnnotation$LocationInfo::isSameLocationInfo))},
	{"parseLocationInfo", "(Ljava/nio/ByteBuffer;)Lsun/reflect/annotation/TypeAnnotation$LocationInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotation$LocationInfo*(*)($ByteBuffer*)>(&TypeAnnotation$LocationInfo::parseLocationInfo))},
	{"popLocation", "(B)Lsun/reflect/annotation/TypeAnnotation$LocationInfo;", nullptr, $PUBLIC, $method(static_cast<TypeAnnotation$LocationInfo*(TypeAnnotation$LocationInfo::*)(int8_t)>(&TypeAnnotation$LocationInfo::popLocation))},
	{"pushArray", "()Lsun/reflect/annotation/TypeAnnotation$LocationInfo;", nullptr, $PUBLIC, $method(static_cast<TypeAnnotation$LocationInfo*(TypeAnnotation$LocationInfo::*)()>(&TypeAnnotation$LocationInfo::pushArray))},
	{"pushInner", "()Lsun/reflect/annotation/TypeAnnotation$LocationInfo;", nullptr, $PUBLIC, $method(static_cast<TypeAnnotation$LocationInfo*(TypeAnnotation$LocationInfo::*)()>(&TypeAnnotation$LocationInfo::pushInner))},
	{"pushLocation", "(BS)Lsun/reflect/annotation/TypeAnnotation$LocationInfo;", nullptr, $PUBLIC, $method(static_cast<TypeAnnotation$LocationInfo*(TypeAnnotation$LocationInfo::*)(int8_t,int16_t)>(&TypeAnnotation$LocationInfo::pushLocation))},
	{"pushTypeArg", "(S)Lsun/reflect/annotation/TypeAnnotation$LocationInfo;", nullptr, $PUBLIC, $method(static_cast<TypeAnnotation$LocationInfo*(TypeAnnotation$LocationInfo::*)(int16_t)>(&TypeAnnotation$LocationInfo::pushTypeArg))},
	{"pushWildcard", "()Lsun/reflect/annotation/TypeAnnotation$LocationInfo;", nullptr, $PUBLIC, $method(static_cast<TypeAnnotation$LocationInfo*(TypeAnnotation$LocationInfo::*)()>(&TypeAnnotation$LocationInfo::pushWildcard))},
	{}
};

$InnerClassInfo _TypeAnnotation$LocationInfo_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.TypeAnnotation$LocationInfo", "sun.reflect.annotation.TypeAnnotation", "LocationInfo", $PUBLIC | $STATIC | $FINAL},
	{"sun.reflect.annotation.TypeAnnotation$LocationInfo$Location", "sun.reflect.annotation.TypeAnnotation$LocationInfo", "Location", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _TypeAnnotation$LocationInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.reflect.annotation.TypeAnnotation$LocationInfo",
	"java.lang.Object",
	nullptr,
	_TypeAnnotation$LocationInfo_FieldInfo_,
	_TypeAnnotation$LocationInfo_MethodInfo_,
	nullptr,
	nullptr,
	_TypeAnnotation$LocationInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.annotation.TypeAnnotation"
};

$Object* allocate$TypeAnnotation$LocationInfo($Class* clazz) {
	return $of($alloc(TypeAnnotation$LocationInfo));
}

TypeAnnotation$LocationInfo* TypeAnnotation$LocationInfo::BASE_LOCATION = nullptr;

void TypeAnnotation$LocationInfo::init$() {
	TypeAnnotation$LocationInfo::init$(0, $$new($TypeAnnotation$LocationInfo$LocationArray, 0));
}

void TypeAnnotation$LocationInfo::init$(int32_t depth, $TypeAnnotation$LocationInfo$LocationArray* locations) {
	this->depth = depth;
	$set(this, locations, locations);
}

TypeAnnotation$LocationInfo* TypeAnnotation$LocationInfo::parseLocationInfo($ByteBuffer* buf) {
	$init(TypeAnnotation$LocationInfo);
	int32_t depth = (int32_t)($nc(buf)->get() & (uint32_t)255);
	if (depth == 0) {
		return TypeAnnotation$LocationInfo::BASE_LOCATION;
	}
	$var($TypeAnnotation$LocationInfo$LocationArray, locations, $new($TypeAnnotation$LocationInfo$LocationArray, depth));
	for (int32_t i = 0; i < depth; ++i) {
		int8_t tag = buf->get();
		int16_t index = (int16_t)((int32_t)(buf->get() & (uint32_t)255));
		if (!(tag == 0 || (tag == 1) | (tag == 2) || tag == 3)) {
			$throwNew($AnnotationFormatError, "Bad Location encoding in Type Annotation"_s);
		}
		if (tag != 3 && index != 0) {
			$throwNew($AnnotationFormatError, "Bad Location encoding in Type Annotation"_s);
		}
		locations->set(i, $$new($TypeAnnotation$LocationInfo$Location, tag, index));
	}
	return $new(TypeAnnotation$LocationInfo, depth, locations);
}

TypeAnnotation$LocationInfo* TypeAnnotation$LocationInfo::pushArray() {
	return pushLocation((int8_t)0, (int16_t)0);
}

TypeAnnotation$LocationInfo* TypeAnnotation$LocationInfo::pushInner() {
	return pushLocation((int8_t)1, (int16_t)0);
}

TypeAnnotation$LocationInfo* TypeAnnotation$LocationInfo::pushWildcard() {
	return pushLocation((int8_t)2, (int16_t)0);
}

TypeAnnotation$LocationInfo* TypeAnnotation$LocationInfo::pushTypeArg(int16_t index) {
	return pushLocation((int8_t)3, index);
}

TypeAnnotation$LocationInfo* TypeAnnotation$LocationInfo::pushLocation(int8_t tag, int16_t index) {
	int32_t newDepth = this->depth + 1;
	$var($TypeAnnotation$LocationInfo$LocationArray, res, $new($TypeAnnotation$LocationInfo$LocationArray, newDepth));
	$System::arraycopy(this->locations, 0, res, 0, this->depth);
	res->set(newDepth - 1, $$new($TypeAnnotation$LocationInfo$Location, tag, (int16_t)((int32_t)(index & (uint32_t)255))));
	return $new(TypeAnnotation$LocationInfo, newDepth, res);
}

TypeAnnotation$LocationInfo* TypeAnnotation$LocationInfo::popLocation(int8_t tag) {
	if (this->depth == 0 || $nc($nc(this->locations)->get(this->depth - 1))->tag != tag) {
		return nullptr;
	}
	$var($TypeAnnotation$LocationInfo$LocationArray, res, $new($TypeAnnotation$LocationInfo$LocationArray, this->depth - 1));
	$System::arraycopy(this->locations, 0, res, 0, this->depth - 1);
	return $new(TypeAnnotation$LocationInfo, this->depth - 1, res);
}

$TypeAnnotationArray* TypeAnnotation$LocationInfo::filter($TypeAnnotationArray* ta) {
	$var($ArrayList, l, $new($ArrayList, $nc(ta)->length));
	{
		$var($TypeAnnotationArray, arr$, ta);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TypeAnnotation, t, arr$->get(i$));
			{
				if (isSameLocationInfo($($nc(t)->getLocationInfo()))) {
					l->add(t);
				}
			}
		}
	}
	$init($AnnotatedTypeFactory);
	return $fcast($TypeAnnotationArray, l->toArray($AnnotatedTypeFactory::EMPTY_TYPE_ANNOTATION_ARRAY));
}

bool TypeAnnotation$LocationInfo::isSameLocationInfo(TypeAnnotation$LocationInfo* other) {
	if (this->depth != $nc(other)->depth) {
		return false;
	}
	for (int32_t i = 0; i < this->depth; ++i) {
		if (!$nc($nc(this->locations)->get(i))->isSameLocation($nc($nc(other)->locations)->get(i))) {
			return false;
		}
	}
	return true;
}

void clinit$TypeAnnotation$LocationInfo($Class* class$) {
	$assignStatic(TypeAnnotation$LocationInfo::BASE_LOCATION, $new(TypeAnnotation$LocationInfo));
}

TypeAnnotation$LocationInfo::TypeAnnotation$LocationInfo() {
}

$Class* TypeAnnotation$LocationInfo::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotation$LocationInfo, name, initialize, &_TypeAnnotation$LocationInfo_ClassInfo_, clinit$TypeAnnotation$LocationInfo, allocate$TypeAnnotation$LocationInfo);
	return class$;
}

$Class* TypeAnnotation$LocationInfo::class$ = nullptr;

		} // annotation
	} // reflect
} // sun