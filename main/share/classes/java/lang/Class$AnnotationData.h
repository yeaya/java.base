#ifndef _java_lang_Class$AnnotationData_h_
#define _java_lang_Class$AnnotationData_h_
//$ class java.lang.Class$AnnotationData
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace lang {

class Class$AnnotationData : public ::java::lang::Object {
	$class(Class$AnnotationData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Class$AnnotationData();
	void init$(::java::util::Map* annotations, ::java::util::Map* declaredAnnotations, int32_t redefinedCount);
	::java::util::Map* annotations = nullptr;
	::java::util::Map* declaredAnnotations = nullptr;
	int32_t redefinedCount = 0;
};

	} // lang
} // java

#endif // _java_lang_Class$AnnotationData_h_