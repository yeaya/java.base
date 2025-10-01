#ifndef _java_lang_Class$Atomic_h_
#define _java_lang_Class$Atomic_h_
//$ class java.lang.Class$Atomic
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Class$AnnotationData;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
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
			class AnnotationType;
		}
	}
}

namespace java {
	namespace lang {

class Class$Atomic : public ::java::lang::Object {
	$class(Class$Atomic, 0, ::java::lang::Object)
public:
	Class$Atomic();
	void init$();
	static bool casAnnotationData($Class* clazz, ::java::lang::Class$AnnotationData* oldData, ::java::lang::Class$AnnotationData* newData);
	static bool casAnnotationType($Class* clazz, ::sun::reflect::annotation::AnnotationType* oldType, ::sun::reflect::annotation::AnnotationType* newType);
	static bool casReflectionData($Class* clazz, ::java::lang::ref::SoftReference* oldData, ::java::lang::ref::SoftReference* newData);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int64_t reflectionDataOffset;
	static int64_t annotationTypeOffset;
	static int64_t annotationDataOffset;
};

	} // lang
} // java

#endif // _java_lang_Class$Atomic_h_