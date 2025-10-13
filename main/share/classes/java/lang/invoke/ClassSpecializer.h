#ifndef _java_lang_invoke_ClassSpecializer_h_
#define _java_lang_invoke_ClassSpecializer_h_
//$ class java.lang.invoke.ClassSpecializer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CREATE_RESERVATION")
#undef CREATE_RESERVATION
#pragma push_macro("E_THROWABLE")
#undef E_THROWABLE
#pragma push_macro("MH")
#undef MH
#pragma push_macro("MH_SIG")
#undef MH_SIG
#pragma push_macro("STABLE")
#undef STABLE
#pragma push_macro("STABLE_SIG")
#undef STABLE_SIG

namespace java {
	namespace lang {
		class RuntimeException;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class ClassSpecializer$Factory;
			class ClassSpecializer$SpeciesData;
			class MemberName;
			class MethodType;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Field;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class ClassSpecializer : public ::java::lang::Object {
	$class(ClassSpecializer, 0, ::java::lang::Object)
public:
	ClassSpecializer();
	void init$($Class* topClass, $Class* keyType, $Class* metaType, ::java::lang::invoke::MethodType* baseConstructorType, ::java::lang::invoke::MemberName* sdAccessor, $String* sdFieldName, ::java::util::List* transformMethods);
	virtual ::java::lang::invoke::MethodType* baseConstructorType();
	static $String* classBCName($Class* cls);
	static $String* classBCName($String* str);
	static $String* className($Class* cls);
	static $String* classSig($Class* cls);
	static $String* classSig($String* bcName);
	::java::lang::invoke::ClassSpecializer$Factory* factory();
	::java::lang::invoke::ClassSpecializer$SpeciesData* findSpecies(Object$* key);
	$Class* keyType();
	virtual ::java::lang::invoke::ClassSpecializer$Factory* makeFactory();
	$Class* metaType();
	static $String* methodSig(::java::lang::invoke::MethodType* mt);
	static ::java::lang::RuntimeException* newIAE($String* message, $Throwable* cause);
	virtual ::java::lang::invoke::ClassSpecializer$SpeciesData* newSpeciesData(Object$* key) {return nullptr;}
	static ::java::lang::reflect::Constructor* reflectConstructor($Class* defc, $ClassArray* ptypes);
	static ::java::lang::reflect::Field* reflectField($Class* defc, $String* name);
	$Class* topClass();
	::java::lang::invoke::ClassSpecializer$SpeciesData* topSpecies();
	virtual $Object* topSpeciesKey();
	::java::util::List* transformMethods();
	static bool $assertionsDisabled;
	$Class* topClass$ = nullptr;
	$Class* keyType$ = nullptr;
	$Class* metaType$ = nullptr;
	::java::lang::invoke::MemberName* sdAccessor = nullptr;
	$String* sdFieldName = nullptr;
	::java::util::List* transformMethods$ = nullptr;
	::java::lang::invoke::MethodType* baseConstructorType$ = nullptr;
	::java::lang::invoke::ClassSpecializer$SpeciesData* topSpecies$ = nullptr;
	::java::util::concurrent::ConcurrentHashMap* cache = nullptr;
	::java::lang::invoke::ClassSpecializer$Factory* factory$ = nullptr;
	bool topClassIsSuper = false;
	static ::java::util::function::Function* CREATE_RESERVATION;
	static $String* MH;
	static $String* MH_SIG;
	static $String* STABLE;
	static $String* STABLE_SIG;
	static $StringArray* E_THROWABLE;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("CREATE_RESERVATION")
#pragma pop_macro("E_THROWABLE")
#pragma pop_macro("MH")
#pragma pop_macro("MH_SIG")
#pragma pop_macro("STABLE")
#pragma pop_macro("STABLE_SIG")

#endif // _java_lang_invoke_ClassSpecializer_h_