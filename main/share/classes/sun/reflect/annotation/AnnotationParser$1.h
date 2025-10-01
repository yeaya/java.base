#ifndef _sun_reflect_annotation_AnnotationParser$1_h_
#define _sun_reflect_annotation_AnnotationParser$1_h_
//$ class sun.reflect.annotation.AnnotationParser$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class AnnotationParser$1 : public ::java::security::PrivilegedAction {
	$class(AnnotationParser$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AnnotationParser$1();
	void init$($Class* val$type, ::java::util::Map* val$memberValues);
	virtual $Object* run() override;
	::java::util::Map* val$memberValues = nullptr;
	$Class* val$type = nullptr;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_AnnotationParser$1_h_