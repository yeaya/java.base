#ifndef _sun_reflect_annotation_AnnotationSupport_h_
#define _sun_reflect_annotation_AnnotationSupport_h_
//$ class sun.reflect.annotation.AnnotationSupport
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LANG_ACCESS")
#undef LANG_ACCESS

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
			class AnnotationFormatError;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class $import AnnotationSupport : public ::java::lang::Object {
	$class(AnnotationSupport, 0, ::java::lang::Object)
public:
	AnnotationSupport();
	void init$();
	static void checkTypes($Array<::java::lang::annotation::Annotation>* annotations, ::java::lang::annotation::Annotation* container, $Class* annoClass);
	static bool containerBeforeContainee(::java::util::Map* annotations, $Class* annoClass);
	static $Array<::java::lang::annotation::Annotation>* getAssociatedAnnotations(::java::util::Map* declaredAnnotations, $Class* decl, $Class* annoClass);
	static $Array<::java::lang::annotation::Annotation>* getDirectlyAndIndirectlyPresent(::java::util::Map* annotations, $Class* annoClass);
	static $Array<::java::lang::annotation::Annotation>* getIndirectlyPresent(::java::util::Map* annotations, $Class* annoClass);
	static $Array<::java::lang::annotation::Annotation>* getValueArray(::java::lang::annotation::Annotation* container);
	static ::java::lang::annotation::AnnotationFormatError* invalidContainerException(::java::lang::annotation::Annotation* anno, $Throwable* cause);
	static ::jdk::internal::access::JavaLangAccess* LANG_ACCESS;
};

		} // annotation
	} // reflect
} // sun

#pragma pop_macro("LANG_ACCESS")

#endif // _sun_reflect_annotation_AnnotationSupport_h_