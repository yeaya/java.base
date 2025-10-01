#ifndef _sun_reflect_annotation_TypeAnnotation$LocationInfo_h_
#define _sun_reflect_annotation_TypeAnnotation$LocationInfo_h_
//$ class sun.reflect.annotation.TypeAnnotation$LocationInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BASE_LOCATION")
#undef BASE_LOCATION

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace reflect {
		namespace annotation {
			class TypeAnnotation;
			class TypeAnnotation$LocationInfo$Location;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class $import TypeAnnotation$LocationInfo : public ::java::lang::Object {
	$class(TypeAnnotation$LocationInfo, 0, ::java::lang::Object)
public:
	TypeAnnotation$LocationInfo();
	void init$();
	void init$(int32_t depth, $Array<::sun::reflect::annotation::TypeAnnotation$LocationInfo$Location>* locations);
	$Array<::sun::reflect::annotation::TypeAnnotation>* filter($Array<::sun::reflect::annotation::TypeAnnotation>* ta);
	bool isSameLocationInfo(::sun::reflect::annotation::TypeAnnotation$LocationInfo* other);
	static ::sun::reflect::annotation::TypeAnnotation$LocationInfo* parseLocationInfo(::java::nio::ByteBuffer* buf);
	::sun::reflect::annotation::TypeAnnotation$LocationInfo* popLocation(int8_t tag);
	::sun::reflect::annotation::TypeAnnotation$LocationInfo* pushArray();
	::sun::reflect::annotation::TypeAnnotation$LocationInfo* pushInner();
	::sun::reflect::annotation::TypeAnnotation$LocationInfo* pushLocation(int8_t tag, int16_t index);
	::sun::reflect::annotation::TypeAnnotation$LocationInfo* pushTypeArg(int16_t index);
	::sun::reflect::annotation::TypeAnnotation$LocationInfo* pushWildcard();
	int32_t depth = 0;
	$Array<::sun::reflect::annotation::TypeAnnotation$LocationInfo$Location>* locations = nullptr;
	static ::sun::reflect::annotation::TypeAnnotation$LocationInfo* BASE_LOCATION;
};

		} // annotation
	} // reflect
} // sun

#pragma pop_macro("BASE_LOCATION")

#endif // _sun_reflect_annotation_TypeAnnotation$LocationInfo_h_