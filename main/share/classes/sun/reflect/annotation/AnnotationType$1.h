#ifndef _sun_reflect_annotation_AnnotationType$1_h_
#define _sun_reflect_annotation_AnnotationType$1_h_
//$ class sun.reflect.annotation.AnnotationType$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace reflect {
		namespace annotation {
			class AnnotationType;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class AnnotationType$1 : public ::java::security::PrivilegedAction {
	$class(AnnotationType$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AnnotationType$1();
	void init$(::sun::reflect::annotation::AnnotationType* this$0, $Class* val$annotationClass);
	virtual $Object* run() override;
	::sun::reflect::annotation::AnnotationType* this$0 = nullptr;
	$Class* val$annotationClass = nullptr;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_AnnotationType$1_h_