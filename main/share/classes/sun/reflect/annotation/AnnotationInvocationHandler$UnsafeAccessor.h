#ifndef _sun_reflect_annotation_AnnotationInvocationHandler$UnsafeAccessor_h_
#define _sun_reflect_annotation_AnnotationInvocationHandler$UnsafeAccessor_h_
//$ class sun.reflect.annotation.AnnotationInvocationHandler$UnsafeAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
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

class AnnotationInvocationHandler$UnsafeAccessor : public ::java::lang::Object {
	$class(AnnotationInvocationHandler$UnsafeAccessor, 0, ::java::lang::Object)
public:
	AnnotationInvocationHandler$UnsafeAccessor();
	void init$();
	static void setMemberValues(::sun::reflect::annotation::AnnotationInvocationHandler* o, ::java::util::Map* memberValues);
	static void setType(::sun::reflect::annotation::AnnotationInvocationHandler* o, $Class* type);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int64_t typeOffset;
	static int64_t memberValuesOffset;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_AnnotationInvocationHandler$UnsafeAccessor_h_