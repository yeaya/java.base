#ifndef _java_lang_reflect_Modifier_h_
#define _java_lang_reflect_Modifier_h_
//$ class java.lang.reflect.Modifier
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ABSTRACT")
#undef ABSTRACT
#pragma push_macro("ACCESS_MODIFIERS")
#undef ACCESS_MODIFIERS
#pragma push_macro("ANNOTATION")
#undef ANNOTATION
#pragma push_macro("BRIDGE")
#undef BRIDGE
#pragma push_macro("CLASS_MODIFIERS")
#undef CLASS_MODIFIERS
#pragma push_macro("CONSTRUCTOR_MODIFIERS")
#undef CONSTRUCTOR_MODIFIERS
#pragma push_macro("ENUM")
#undef ENUM
#pragma push_macro("FIELD_MODIFIERS")
#undef FIELD_MODIFIERS
#pragma push_macro("FINAL")
#undef FINAL
#pragma push_macro("INTERFACE")
#undef INTERFACE
#pragma push_macro("INTERFACE_MODIFIERS")
#undef INTERFACE_MODIFIERS
#pragma push_macro("MANDATED")
#undef MANDATED
#pragma push_macro("METHOD_MODIFIERS")
#undef METHOD_MODIFIERS
#pragma push_macro("NATIVE")
#undef NATIVE
#pragma push_macro("PARAMETER_MODIFIERS")
#undef PARAMETER_MODIFIERS
#pragma push_macro("PRIVATE")
#undef PRIVATE
#pragma push_macro("PROTECTED")
#undef PROTECTED
#pragma push_macro("PUBLIC")
#undef PUBLIC
#pragma push_macro("STATIC")
#undef STATIC
#pragma push_macro("STRICT")
#undef STRICT
#pragma push_macro("SYNCHRONIZED")
#undef SYNCHRONIZED
#pragma push_macro("SYNTHETIC")
#undef SYNTHETIC
#pragma push_macro("TRANSIENT")
#undef TRANSIENT
#pragma push_macro("VARARGS")
#undef VARARGS
#pragma push_macro("VOLATILE")
#undef VOLATILE

namespace java {
	namespace lang {
		namespace reflect {

class $import Modifier : public ::java::lang::Object {
	$class(Modifier, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	Modifier();
	void init$();
	static int32_t classModifiers();
	static int32_t constructorModifiers();
	static int32_t fieldModifiers();
	static int32_t interfaceModifiers();
	static bool isAbstract(int32_t mod);
	static bool isFinal(int32_t mod);
	static bool isInterface(int32_t mod);
	static bool isMandated(int32_t mod);
	static bool isNative(int32_t mod);
	static bool isPrivate(int32_t mod);
	static bool isProtected(int32_t mod);
	static bool isPublic(int32_t mod);
	static bool isStatic(int32_t mod);
	static bool isStrict(int32_t mod);
	static bool isSynchronized(int32_t mod);
	static bool isSynthetic(int32_t mod);
	static bool isTransient(int32_t mod);
	static bool isVolatile(int32_t mod);
	static int32_t methodModifiers();
	static int32_t parameterModifiers();
	using ::java::lang::Object::toString;
	static $String* toString(int32_t mod);
	static const int32_t PUBLIC = 1;
	static const int32_t PRIVATE = 2;
	static const int32_t PROTECTED = 4;
	static const int32_t STATIC = 8;
	static const int32_t FINAL = 16;
	static const int32_t SYNCHRONIZED = 32;
	static const int32_t VOLATILE = 64;
	static const int32_t TRANSIENT = 128;
	static const int32_t NATIVE = 256;
	static const int32_t INTERFACE = 512;
	static const int32_t ABSTRACT = 1024;
	static const int32_t STRICT = 2048;
	static const int32_t BRIDGE = 64;
	static const int32_t VARARGS = 128;
	static const int32_t SYNTHETIC = 4096;
	static const int32_t ANNOTATION = 8192;
	static const int32_t ENUM = 16384;
	static const int32_t MANDATED = 32768;
	static const int32_t CLASS_MODIFIERS = 3103; // Modifier.PUBLIC | Modifier.PROTECTED | Modifier.PRIVATE | Modifier.ABSTRACT | Modifier.STATIC | Modifier.FINAL | Modifier.STRICT
	static const int32_t INTERFACE_MODIFIERS = 3087; // Modifier.PUBLIC | Modifier.PROTECTED | Modifier.PRIVATE | Modifier.ABSTRACT | Modifier.STATIC | Modifier.STRICT
	static const int32_t CONSTRUCTOR_MODIFIERS = 7; // Modifier.PUBLIC | Modifier.PROTECTED | Modifier.PRIVATE
	static const int32_t METHOD_MODIFIERS = 3391; // Modifier.PUBLIC | Modifier.PROTECTED | Modifier.PRIVATE | Modifier.ABSTRACT | Modifier.STATIC | Modifier.FINAL | Modifier.SYNCHRONIZED | Modifier.NATIVE | Modifier.STRICT
	static const int32_t FIELD_MODIFIERS = 223; // Modifier.PUBLIC | Modifier.PROTECTED | Modifier.PRIVATE | Modifier.STATIC | Modifier.FINAL | Modifier.TRANSIENT | Modifier.VOLATILE
	static const int32_t PARAMETER_MODIFIERS = 16; // Modifier.FINAL
	static const int32_t ACCESS_MODIFIERS = 7; // Modifier.PUBLIC | Modifier.PROTECTED | Modifier.PRIVATE
};

		} // reflect
	} // lang
} // java

#pragma pop_macro("ABSTRACT")
#pragma pop_macro("ACCESS_MODIFIERS")
#pragma pop_macro("ANNOTATION")
#pragma pop_macro("BRIDGE")
#pragma pop_macro("CLASS_MODIFIERS")
#pragma pop_macro("CONSTRUCTOR_MODIFIERS")
#pragma pop_macro("ENUM")
#pragma pop_macro("FIELD_MODIFIERS")
#pragma pop_macro("FINAL")
#pragma pop_macro("INTERFACE")
#pragma pop_macro("INTERFACE_MODIFIERS")
#pragma pop_macro("MANDATED")
#pragma pop_macro("METHOD_MODIFIERS")
#pragma pop_macro("NATIVE")
#pragma pop_macro("PARAMETER_MODIFIERS")
#pragma pop_macro("PRIVATE")
#pragma pop_macro("PROTECTED")
#pragma pop_macro("PUBLIC")
#pragma pop_macro("STATIC")
#pragma pop_macro("STRICT")
#pragma pop_macro("SYNCHRONIZED")
#pragma pop_macro("SYNTHETIC")
#pragma pop_macro("TRANSIENT")
#pragma pop_macro("VARARGS")
#pragma pop_macro("VOLATILE")

#endif // _java_lang_reflect_Modifier_h_