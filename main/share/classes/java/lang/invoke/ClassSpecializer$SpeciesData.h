#ifndef _java_lang_invoke_ClassSpecializer$SpeciesData_h_
#define _java_lang_invoke_ClassSpecializer$SpeciesData_h_
//$ class java.lang.invoke.ClassSpecializer$SpeciesData
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class ClassSpecializer;
			class LambdaForm$NamedFunction;
			class MemberName;
			class MethodHandle;
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class ClassSpecializer$SpeciesData : public ::java::lang::Object {
	$class(ClassSpecializer$SpeciesData, 0, ::java::lang::Object)
public:
	ClassSpecializer$SpeciesData();
	void init$(::java::lang::invoke::ClassSpecializer* this$0, Object$* key);
	virtual $String* deriveClassName();
	virtual ::java::util::List* deriveFieldTypes(Object$* key) {return nullptr;}
	virtual $Class* deriveSuperClass();
	virtual ::java::lang::invoke::MethodHandle* deriveTransformHelper(::java::lang::invoke::MemberName* transform, int32_t whichtm) {return nullptr;}
	virtual ::java::util::List* deriveTransformHelperArguments(::java::lang::invoke::MemberName* transform, int32_t whichtm, ::java::util::List* args, ::java::util::List* fields) {return nullptr;}
	virtual $String* deriveTypeString();
	virtual bool equals(Object$* obj) override;
	virtual ::java::lang::invoke::MethodHandle* factory();
	int32_t fieldCount();
	::java::util::List* fieldTypes();
	virtual ::java::lang::invoke::MethodHandle* getter(int32_t i);
	virtual ::java::lang::invoke::LambdaForm$NamedFunction* getterFunction(int32_t i);
	virtual ::java::util::List* getterFunctions();
	virtual ::java::util::List* getters();
	virtual int32_t hashCode() override;
	bool isResolved();
	$Object* key();
	virtual ::java::lang::invoke::ClassSpecializer* outer();
	$Class* speciesCode();
	virtual $String* toString() override;
	virtual ::java::lang::invoke::MethodHandle* transformHelper(int32_t whichtm);
	::java::lang::invoke::MethodType* transformHelperType(int32_t whichtm);
	::java::lang::invoke::ClassSpecializer* this$0 = nullptr;
	static bool $assertionsDisabled;
	$Object* key$ = nullptr;
	::java::util::List* fieldTypes$ = nullptr;
	$Class* speciesCode$ = nullptr;
	::java::util::List* factories = nullptr;
	::java::util::List* getters$ = nullptr;
	::java::util::List* nominalGetters = nullptr;
	$Array<::java::lang::invoke::MethodHandle>* transformHelpers = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_ClassSpecializer$SpeciesData_h_