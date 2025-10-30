#include <sun/reflect/annotation/TypeAnnotation$LocationInfo$Location.h>

#include <sun/reflect/annotation/TypeAnnotation$LocationInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation$LocationInfo = ::sun::reflect::annotation::TypeAnnotation$LocationInfo;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _TypeAnnotation$LocationInfo$Location_FieldInfo_[] = {
	{"tag", "B", nullptr, $PUBLIC | $FINAL, $field(TypeAnnotation$LocationInfo$Location, tag)},
	{"index", "S", nullptr, $PUBLIC | $FINAL, $field(TypeAnnotation$LocationInfo$Location, index)},
	{}
};

$MethodInfo _TypeAnnotation$LocationInfo$Location_MethodInfo_[] = {
	{"<init>", "(BS)V", nullptr, $PUBLIC, $method(static_cast<void(TypeAnnotation$LocationInfo$Location::*)(int8_t,int16_t)>(&TypeAnnotation$LocationInfo$Location::init$))},
	{"isSameLocation", "(Lsun/reflect/annotation/TypeAnnotation$LocationInfo$Location;)Z", nullptr, 0, $method(static_cast<bool(TypeAnnotation$LocationInfo$Location::*)(TypeAnnotation$LocationInfo$Location*)>(&TypeAnnotation$LocationInfo$Location::isSameLocation))},
	{}
};

$InnerClassInfo _TypeAnnotation$LocationInfo$Location_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.TypeAnnotation$LocationInfo", "sun.reflect.annotation.TypeAnnotation", "LocationInfo", $PUBLIC | $STATIC | $FINAL},
	{"sun.reflect.annotation.TypeAnnotation$LocationInfo$Location", "sun.reflect.annotation.TypeAnnotation$LocationInfo", "Location", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _TypeAnnotation$LocationInfo$Location_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.reflect.annotation.TypeAnnotation$LocationInfo$Location",
	"java.lang.Object",
	nullptr,
	_TypeAnnotation$LocationInfo$Location_FieldInfo_,
	_TypeAnnotation$LocationInfo$Location_MethodInfo_,
	nullptr,
	nullptr,
	_TypeAnnotation$LocationInfo$Location_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.annotation.TypeAnnotation"
};

$Object* allocate$TypeAnnotation$LocationInfo$Location($Class* clazz) {
	return $of($alloc(TypeAnnotation$LocationInfo$Location));
}

bool TypeAnnotation$LocationInfo$Location::isSameLocation(TypeAnnotation$LocationInfo$Location* other) {
	return this->tag == $nc(other)->tag && this->index == other->index;
}

void TypeAnnotation$LocationInfo$Location::init$(int8_t tag, int16_t index) {
	this->tag = tag;
	this->index = index;
}

TypeAnnotation$LocationInfo$Location::TypeAnnotation$LocationInfo$Location() {
}

$Class* TypeAnnotation$LocationInfo$Location::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotation$LocationInfo$Location, name, initialize, &_TypeAnnotation$LocationInfo$Location_ClassInfo_, allocate$TypeAnnotation$LocationInfo$Location);
	return class$;
}

$Class* TypeAnnotation$LocationInfo$Location::class$ = nullptr;

		} // annotation
	} // reflect
} // sun