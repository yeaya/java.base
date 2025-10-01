#ifndef _repeatingAnnotations_InheritedAssociatedAnnotations_h_
#define _repeatingAnnotations_InheritedAssociatedAnnotations_h_
//$ class repeatingAnnotations.InheritedAssociatedAnnotations
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedElement;
		}
	}
}

namespace repeatingAnnotations {

class $export InheritedAssociatedAnnotations : public ::java::lang::Object {
	$class(InheritedAssociatedAnnotations, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InheritedAssociatedAnnotations();
	void init$();
	static void checkAssociated(::java::lang::reflect::AnnotatedElement* ae);
	static void main($StringArray* args);
};

} // repeatingAnnotations

#endif // _repeatingAnnotations_InheritedAssociatedAnnotations_h_