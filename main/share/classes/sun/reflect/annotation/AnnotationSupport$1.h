#ifndef _sun_reflect_annotation_AnnotationSupport$1_h_
#define _sun_reflect_annotation_AnnotationSupport$1_h_
//$ class sun.reflect.annotation.AnnotationSupport$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class AnnotationSupport$1 : public ::java::security::PrivilegedAction {
	$class(AnnotationSupport$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AnnotationSupport$1();
	void init$(::java::lang::reflect::Method* val$m);
	virtual $Object* run() override;
	::java::lang::reflect::Method* val$m = nullptr;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_AnnotationSupport$1_h_