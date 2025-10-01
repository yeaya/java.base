#ifndef _sun_reflect_annotation_AnnotationParser_h_
#define _sun_reflect_annotation_AnnotationParser_h_
//$ class sun.reflect.annotation.AnnotationParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_ANNOTATIONS_ARRAY")
#undef EMPTY_ANNOTATIONS_ARRAY
#pragma push_macro("EMPTY_ANNOTATION_ARRAY")
#undef EMPTY_ANNOTATION_ARRAY

namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Type;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ConstantPool;
		}
	}
}
namespace sun {
	namespace reflect {
		namespace annotation {
			class ExceptionProxy;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class $export AnnotationParser : public ::java::lang::Object {
	$class(AnnotationParser, 0, ::java::lang::Object)
public:
	AnnotationParser();
	void init$();
	static ::java::lang::annotation::Annotation* annotationForMap($Class* type, ::java::util::Map* memberValues);
	static bool contains($ObjectArray* array, Object$* element);
	static ::sun::reflect::annotation::ExceptionProxy* exceptionProxy(int32_t tag);
	static $Array<::java::lang::annotation::Annotation>* getEmptyAnnotationArray();
	static $Object* lambda$parseAnnotationArray$2(::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static $Object* lambda$parseClassArray$0(::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static $Object* lambda$parseEnumArray$1($Class* enumType, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static ::java::lang::annotation::Annotation* parseAnnotation(::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container, bool exceptionOnMissingAnnotationClass);
	static ::java::lang::annotation::Annotation* parseAnnotation2(::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container, bool exceptionOnMissingAnnotationClass, $ClassArray* selectAnnotationClasses);
	static $Object* parseAnnotationArray(int32_t length, $Class* annotationType, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static ::java::util::Map* parseAnnotations($bytes* rawAnnotations, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static ::java::util::Map* parseAnnotations2($bytes* rawAnnotations, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container, $ClassArray* selectAnnotationClasses);
	static $Object* parseArray($Class* arrayType, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static $Object* parseArrayElements($ObjectArray* result, ::java::nio::ByteBuffer* buf, int32_t expectedTag, ::java::util::function::Supplier* parseElement);
	static $Object* parseBooleanArray(int32_t length, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool);
	static $Object* parseByteArray(int32_t length, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool);
	static $Object* parseCharArray(int32_t length, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool);
	static $Object* parseClassArray(int32_t length, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static $Object* parseClassValue(::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static $Object* parseConst(int32_t tag, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool);
	static $Object* parseDoubleArray(int32_t length, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool);
	static $Object* parseEnumArray(int32_t length, $Class* enumType, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static $Object* parseEnumValue($Class* enumType, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static $Object* parseFloatArray(int32_t length, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool);
	static $Object* parseIntArray(int32_t length, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool);
	static $Object* parseLongArray(int32_t length, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool);
	static $Object* parseMemberValue($Class* memberType, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static $Array<::java::lang::annotation::Annotation, 2>* parseParameterAnnotations($bytes* rawAnnotations, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static $Array<::java::lang::annotation::Annotation, 2>* parseParameterAnnotations2($bytes* rawAnnotations, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container);
	static ::java::util::Map* parseSelectAnnotations($bytes* rawAnnotations, ::jdk::internal::reflect::ConstantPool* constPool, $Class* container, $ClassArray* selectAnnotationClasses);
	static $Object* parseShortArray(int32_t length, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool);
	static $Class* parseSig($String* sig, $Class* container);
	static $Object* parseStringArray(int32_t length, ::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* constPool);
	static $Object* parseUnknownArray(int32_t length, ::java::nio::ByteBuffer* buf);
	static void skipAnnotation(::java::nio::ByteBuffer* buf, bool complete);
	static void skipArray(::java::nio::ByteBuffer* buf);
	static void skipMemberValue(::java::nio::ByteBuffer* buf);
	static void skipMemberValue(int32_t tag, ::java::nio::ByteBuffer* buf);
	static $Array<::java::lang::annotation::Annotation>* toArray(::java::util::Map* annotations);
	static $Class* toClass(::java::lang::reflect::Type* o);
	static $Array<::java::lang::annotation::Annotation>* EMPTY_ANNOTATIONS_ARRAY;
	static $Array<::java::lang::annotation::Annotation>* EMPTY_ANNOTATION_ARRAY;
};

		} // annotation
	} // reflect
} // sun

#pragma pop_macro("EMPTY_ANNOTATIONS_ARRAY")
#pragma pop_macro("EMPTY_ANNOTATION_ARRAY")

#endif // _sun_reflect_annotation_AnnotationParser_h_