#ifndef _sun_reflect_annotation_AnnotationType_h_
#define _sun_reflect_annotation_AnnotationType_h_
//$ class sun.reflect.annotation.AnnotationType
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace annotation {
			class RetentionPolicy;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class $import AnnotationType : public ::java::lang::Object {
	$class(AnnotationType, 0, ::java::lang::Object)
public:
	AnnotationType();
	void init$($Class* annotationClass);
	static ::sun::reflect::annotation::AnnotationType* getInstance($Class* annotationClass);
	static $Class* invocationHandlerReturnType($Class* type);
	virtual bool isInherited();
	virtual ::java::util::Map* memberDefaults();
	virtual ::java::util::Map* memberTypes();
	virtual ::java::util::Map* members();
	virtual ::java::lang::annotation::RetentionPolicy* retention();
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::java::util::Map* memberTypes$ = nullptr;
	::java::util::Map* memberDefaults$ = nullptr;
	::java::util::Map* members$ = nullptr;
	::java::lang::annotation::RetentionPolicy* retention$ = nullptr;
	bool inherited = false;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_AnnotationType_h_