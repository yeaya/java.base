#ifndef _sun_reflect_annotation_AnnotationInvocationHandler$1_h_
#define _sun_reflect_annotation_AnnotationInvocationHandler$1_h_
//$ class sun.reflect.annotation.AnnotationInvocationHandler$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace reflect {
		namespace annotation {
			class AnnotationInvocationHandler;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class AnnotationInvocationHandler$1 : public ::java::security::PrivilegedAction {
	$class(AnnotationInvocationHandler$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AnnotationInvocationHandler$1();
	void init$(::sun::reflect::annotation::AnnotationInvocationHandler* this$0);
	virtual $Object* run() override;
	::sun::reflect::annotation::AnnotationInvocationHandler* this$0 = nullptr;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_AnnotationInvocationHandler$1_h_