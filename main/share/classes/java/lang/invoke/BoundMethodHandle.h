#ifndef _java_lang_invoke_BoundMethodHandle_h_
#define _java_lang_invoke_BoundMethodHandle_h_
//$ class java.lang.invoke.BoundMethodHandle
//$ extends java.lang.invoke.MethodHandle

#include <java/lang/invoke/MethodHandle.h>

#pragma push_macro("SPECIALIZER")
#undef SPECIALIZER
#pragma push_macro("FORM_EXPRESSION_THRESHOLD")
#undef FORM_EXPRESSION_THRESHOLD
#pragma push_macro("FIELD_COUNT_THRESHOLD")
#undef FIELD_COUNT_THRESHOLD

namespace java {
	namespace lang {
		namespace invoke {
			class BoundMethodHandle$Specializer;
			class BoundMethodHandle$SpeciesData;
			class LambdaForm;
			class LambdaForm$BasicType;
			class LambdaFormEditor;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class BoundMethodHandle : public ::java::lang::invoke::MethodHandle {
	$class(BoundMethodHandle, 0, ::java::lang::invoke::MethodHandle)
public:
	BoundMethodHandle();
	virtual ::java::lang::invoke::BoundMethodHandle* copyWith(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf) override {return nullptr;}
	void init$(::java::lang::invoke::MethodType* type, ::java::lang::invoke::LambdaForm* form);
	$Object* arg(int32_t i);
	virtual ::java::lang::invoke::BoundMethodHandle* bindArgumentD(int32_t pos, double value);
	virtual ::java::lang::invoke::BoundMethodHandle* bindArgumentF(int32_t pos, float value);
	virtual ::java::lang::invoke::BoundMethodHandle* bindArgumentI(int32_t pos, int32_t value);
	virtual ::java::lang::invoke::BoundMethodHandle* bindArgumentJ(int32_t pos, int64_t value);
	virtual ::java::lang::invoke::BoundMethodHandle* bindArgumentL(int32_t pos, Object$* value) override;
	static ::java::lang::invoke::BoundMethodHandle* bindSingle(::java::lang::invoke::MethodType* type, ::java::lang::invoke::LambdaForm* form, ::java::lang::invoke::LambdaForm$BasicType* xtype, Object$* x);
	static ::java::lang::invoke::BoundMethodHandle* bindSingle(::java::lang::invoke::MethodType* type, ::java::lang::invoke::LambdaForm* form, Object$* x);
	virtual ::java::lang::invoke::BoundMethodHandle* copyWithExtendD(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf, double narg) {return nullptr;}
	virtual ::java::lang::invoke::BoundMethodHandle* copyWithExtendF(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf, float narg) {return nullptr;}
	virtual ::java::lang::invoke::BoundMethodHandle* copyWithExtendI(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf, int32_t narg) {return nullptr;}
	virtual ::java::lang::invoke::BoundMethodHandle* copyWithExtendJ(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf, int64_t narg) {return nullptr;}
	virtual ::java::lang::invoke::BoundMethodHandle* copyWithExtendL(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf, Object$* narg) {return nullptr;}
	virtual ::java::lang::invoke::LambdaFormEditor* editor();
	int32_t fieldCount();
	virtual $Object* internalProperties() override;
	virtual $Object* internalValues() override;
	static ::java::lang::invoke::BoundMethodHandle* makeReinvoker(::java::lang::invoke::MethodHandle* target);
	virtual ::java::lang::invoke::BoundMethodHandle* rebind() override;
	virtual ::java::lang::invoke::BoundMethodHandle$SpeciesData* speciesData() {return nullptr;}
	static ::java::lang::invoke::BoundMethodHandle$SpeciesData* speciesDataFor(::java::lang::invoke::LambdaForm* form);
	static ::java::lang::invoke::BoundMethodHandle$SpeciesData* speciesData_L();
	static ::java::lang::invoke::BoundMethodHandle$SpeciesData* speciesData_LL();
	static ::java::lang::invoke::BoundMethodHandle$SpeciesData* speciesData_LLL();
	static ::java::lang::invoke::BoundMethodHandle$SpeciesData* speciesData_LLLL();
	static ::java::lang::invoke::BoundMethodHandle$SpeciesData* speciesData_LLLLL();
	bool tooComplex();
	static bool $assertionsDisabled;
	static const int32_t FIELD_COUNT_THRESHOLD = 12;
	static const int32_t FORM_EXPRESSION_THRESHOLD = 24;
	static ::java::lang::invoke::BoundMethodHandle$Specializer* SPECIALIZER;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("SPECIALIZER")
#pragma pop_macro("FORM_EXPRESSION_THRESHOLD")
#pragma pop_macro("FIELD_COUNT_THRESHOLD")

#endif // _java_lang_invoke_BoundMethodHandle_h_