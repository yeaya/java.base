#ifndef _java_lang_invoke_GenerateJLIClassesHelper_h_
#define _java_lang_invoke_GenerateJLIClassesHelper_h_
//$ class java.lang.invoke.GenerateJLIClassesHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INVOKERS_HOLDER_CLASS_NAME")
#undef INVOKERS_HOLDER_CLASS_NAME
#pragma push_macro("DELEGATING_HOLDER")
#undef DELEGATING_HOLDER
#pragma push_macro("DIRECT_HOLDER")
#undef DIRECT_HOLDER
#pragma push_macro("DMH_METHOD_TYPE_MAP")
#undef DMH_METHOD_TYPE_MAP
#pragma push_macro("BMH_SPECIES_PREFIX")
#undef BMH_SPECIES_PREFIX
#pragma push_macro("BASIC_FORMS_HOLDER")
#undef BASIC_FORMS_HOLDER
#pragma push_macro("INVOKERS_HOLDER")
#undef INVOKERS_HOLDER

namespace java {
	namespace lang {
		namespace invoke {
			class GenerateJLIClassesHelper$HolderClassBuilder;
			class LambdaForm;
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Map$Entry;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class GenerateJLIClassesHelper : public ::java::lang::Object {
	$class(GenerateJLIClassesHelper, 0, ::java::lang::Object)
public:
	GenerateJLIClassesHelper();
	void init$();
	static $bytes* generateBasicFormsClassBytes($String* className);
	static $bytes* generateCodeBytesForLFs($String* className, $StringArray* names, $Array<::java::lang::invoke::LambdaForm>* forms);
	static ::java::util::Map$Entry* generateConcreteBMHClassBytes($String* types);
	static $bytes* generateDelegatingMethodHandleHolderClassBytes($String* className, $Array<::java::lang::invoke::MethodType>* methodTypes);
	static $bytes* generateDirectMethodHandleHolderClassBytes($String* className, $Array<::java::lang::invoke::MethodType>* methodTypes, $ints* types);
	static ::java::util::Map* generateHolderClasses(::java::util::stream::Stream* traces);
	static $bytes* generateInvokersHolderClassBytes($String* className, $Array<::java::lang::invoke::MethodType>* invokerMethodTypes, $Array<::java::lang::invoke::MethodType>* callSiteMethodTypes);
	static $StringArray* lambda$generateHolderClasses$0($String* line);
	static void lambda$generateHolderClasses$1(::java::lang::invoke::GenerateJLIClassesHelper$HolderClassBuilder* builder, $StringArray* parts);
	static ::java::lang::invoke::LambdaForm* makeDelegateFor(::java::lang::invoke::MethodType* type);
	static ::java::lang::invoke::LambdaForm* makeReinvokerFor(::java::lang::invoke::MethodType* type);
	static bool $assertionsDisabled;
	static ::java::util::Map* DMH_METHOD_TYPE_MAP;
	static $String* DIRECT_HOLDER;
	static $String* DELEGATING_HOLDER;
	static $String* BASIC_FORMS_HOLDER;
	static $String* INVOKERS_HOLDER;
	static $String* INVOKERS_HOLDER_CLASS_NAME;
	static $String* BMH_SPECIES_PREFIX;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("INVOKERS_HOLDER_CLASS_NAME")
#pragma pop_macro("DELEGATING_HOLDER")
#pragma pop_macro("DIRECT_HOLDER")
#pragma pop_macro("DMH_METHOD_TYPE_MAP")
#pragma pop_macro("BMH_SPECIES_PREFIX")
#pragma pop_macro("BASIC_FORMS_HOLDER")
#pragma pop_macro("INVOKERS_HOLDER")

#endif // _java_lang_invoke_GenerateJLIClassesHelper_h_