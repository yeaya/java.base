#ifndef _sun_reflect_annotation_TypeAnnotation$LocationInfo$Location_h_
#define _sun_reflect_annotation_TypeAnnotation$LocationInfo$Location_h_
//$ class sun.reflect.annotation.TypeAnnotation$LocationInfo$Location
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace reflect {
		namespace annotation {

class $export TypeAnnotation$LocationInfo$Location : public ::java::lang::Object {
	$class(TypeAnnotation$LocationInfo$Location, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypeAnnotation$LocationInfo$Location();
	void init$(int8_t tag, int16_t index);
	bool isSameLocation(::sun::reflect::annotation::TypeAnnotation$LocationInfo$Location* other);
	int8_t tag = 0;
	int16_t index = 0;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_TypeAnnotation$LocationInfo$Location_h_