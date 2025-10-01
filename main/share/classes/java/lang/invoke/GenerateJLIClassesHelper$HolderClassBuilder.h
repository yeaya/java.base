#ifndef _java_lang_invoke_GenerateJLIClassesHelper$HolderClassBuilder_h_
#define _java_lang_invoke_GenerateJLIClassesHelper$HolderClassBuilder_h_
//$ class java.lang.invoke.GenerateJLIClassesHelper$HolderClassBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class TreeSet;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class GenerateJLIClassesHelper$HolderClassBuilder : public ::java::lang::Object {
	$class(GenerateJLIClassesHelper$HolderClassBuilder, 0, ::java::lang::Object)
public:
	GenerateJLIClassesHelper$HolderClassBuilder();
	void init$();
	virtual ::java::lang::invoke::GenerateJLIClassesHelper$HolderClassBuilder* addCallSiteType($String* csType);
	void addDMHMethodType($String* dmh, $String* methodType);
	virtual ::java::lang::invoke::GenerateJLIClassesHelper$HolderClassBuilder* addInvokerType($String* methodType);
	virtual ::java::lang::invoke::GenerateJLIClassesHelper$HolderClassBuilder* addSpeciesType($String* type);
	static ::java::lang::invoke::MethodType* asMethodType($String* basicSignatureString);
	virtual ::java::util::Map* build();
	static $String* expandSignature($String* signature);
	static void lambda$build$0(::java::util::Map* result, $String* types);
	static void requireBasicType(char16_t c);
	static $Class* simpleType(char16_t c);
	static void validateMethodType($String* type);
	static bool $assertionsDisabled;
	::java::util::TreeSet* speciesTypes = nullptr;
	::java::util::TreeSet* invokerTypes = nullptr;
	::java::util::TreeSet* callSiteTypes = nullptr;
	::java::util::Map* dmhMethods = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_GenerateJLIClassesHelper$HolderClassBuilder_h_