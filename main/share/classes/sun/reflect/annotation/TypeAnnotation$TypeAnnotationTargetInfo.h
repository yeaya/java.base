#ifndef _sun_reflect_annotation_TypeAnnotation$TypeAnnotationTargetInfo_h_
#define _sun_reflect_annotation_TypeAnnotation$TypeAnnotationTargetInfo_h_
//$ class sun.reflect.annotation.TypeAnnotation$TypeAnnotationTargetInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("UNUSED_INDEX")
#undef UNUSED_INDEX

namespace sun {
	namespace reflect {
		namespace annotation {
			class TypeAnnotation$TypeAnnotationTarget;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class $export TypeAnnotation$TypeAnnotationTargetInfo : public ::java::lang::Object {
	$class(TypeAnnotation$TypeAnnotationTargetInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypeAnnotation$TypeAnnotationTargetInfo();
	void init$(::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* target);
	void init$(::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* target, int32_t count);
	void init$(::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* target, int32_t count, int32_t secondaryIndex);
	int32_t getCount();
	int32_t getSecondaryIndex();
	::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* getTarget();
	virtual $String* toString() override;
	::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* target = nullptr;
	int32_t count = 0;
	int32_t secondaryIndex = 0;
	static const int32_t UNUSED_INDEX = (-2);
};

		} // annotation
	} // reflect
} // sun

#pragma pop_macro("UNUSED_INDEX")

#endif // _sun_reflect_annotation_TypeAnnotation$TypeAnnotationTargetInfo_h_