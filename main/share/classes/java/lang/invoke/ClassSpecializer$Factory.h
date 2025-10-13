#ifndef _java_lang_invoke_ClassSpecializer$Factory_h_
#define _java_lang_invoke_ClassSpecializer$Factory_h_
//$ class java.lang.invoke.ClassSpecializer$Factory
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ACC_PPP")
#undef ACC_PPP
#pragma push_macro("SPECIES_DATA")
#undef SPECIES_DATA
#pragma push_macro("SPECIES_DATA_MODS")
#undef SPECIES_DATA_MODS
#pragma push_macro("SPECIES_DATA_NAME")
#undef SPECIES_DATA_NAME
#pragma push_macro("SPECIES_DATA_SIG")
#undef SPECIES_DATA_SIG
#pragma push_macro("TRANSFORM_MODS")
#undef TRANSFORM_MODS
#pragma push_macro("TRANSFORM_NAMES")
#undef TRANSFORM_NAMES
#pragma push_macro("TRANSFORM_TYPES")
#undef TRANSFORM_TYPES

namespace java {
	namespace lang {
		namespace invoke {
			class ClassSpecializer;
			class ClassSpecializer$SpeciesData;
			class MethodHandle;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class MethodVisitor;
				}
			}
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class ClassSpecializer$Factory : public ::java::lang::Object {
	$class(ClassSpecializer$Factory, 0, ::java::lang::Object)
public:
	ClassSpecializer$Factory();
	void init$(::java::lang::invoke::ClassSpecializer* this$0);
	virtual $String* chooseFieldName($Class* type, int32_t index);
	void emitIntConstant(int32_t con, ::jdk::internal::org::objectweb::asm$::MethodVisitor* mv);
	::java::util::List* findFactories($Class* speciesCode, ::java::util::List* types);
	virtual ::java::lang::invoke::MethodHandle* findFactory($Class* speciesCode, ::java::util::List* types);
	::java::lang::invoke::MethodHandle* findGetter($Class* speciesCode, ::java::util::List* types, int32_t index);
	::java::util::List* findGetters($Class* speciesCode, ::java::util::List* types);
	virtual $Class* generateConcreteSpeciesCode($String* className, ::java::lang::invoke::ClassSpecializer$SpeciesData* speciesData);
	virtual $bytes* generateConcreteSpeciesCodeFile($String* className0, ::java::lang::invoke::ClassSpecializer$SpeciesData* speciesData);
	virtual void linkCodeToSpeciesData($Class* speciesCode, ::java::lang::invoke::ClassSpecializer$SpeciesData* speciesData, bool salvage);
	virtual void linkSpeciesDataToCode(::java::lang::invoke::ClassSpecializer$SpeciesData* speciesData, $Class* speciesCode);
	virtual ::java::lang::invoke::ClassSpecializer$SpeciesData* loadSpecies(::java::lang::invoke::ClassSpecializer$SpeciesData* speciesData);
	virtual ::java::lang::invoke::ClassSpecializer$SpeciesData* loadSpeciesDataFromCode($Class* speciesCode);
	virtual ::java::util::List* makeNominalGetters(::java::util::List* types, ::java::util::List* getters);
	::java::lang::invoke::ClassSpecializer$SpeciesData* readSpeciesDataFromCode($Class* speciesCode);
	::java::lang::reflect::Field* reflectSDField($Class* speciesCode);
	int32_t typeLoadOp(char16_t t);
	::java::lang::invoke::ClassSpecializer* this$0 = nullptr;
	static bool $assertionsDisabled;
	$String* SPECIES_DATA = nullptr;
	$String* SPECIES_DATA_SIG = nullptr;
	$String* SPECIES_DATA_NAME = nullptr;
	int32_t SPECIES_DATA_MODS = 0;
	::java::util::List* TRANSFORM_NAMES = nullptr;
	::java::util::List* TRANSFORM_TYPES = nullptr;
	::java::util::List* TRANSFORM_MODS = nullptr;
	static const int32_t ACC_PPP = 7; // 1 | 2 | 4
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("ACC_PPP")
#pragma pop_macro("SPECIES_DATA")
#pragma pop_macro("SPECIES_DATA_MODS")
#pragma pop_macro("SPECIES_DATA_NAME")
#pragma pop_macro("SPECIES_DATA_SIG")
#pragma pop_macro("TRANSFORM_MODS")
#pragma pop_macro("TRANSFORM_NAMES")
#pragma pop_macro("TRANSFORM_TYPES")

#endif // _java_lang_invoke_ClassSpecializer$Factory_h_