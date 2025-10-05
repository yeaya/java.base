#ifndef _java_lang_invoke_BoundMethodHandle$Species_L_h_
#define _java_lang_invoke_BoundMethodHandle$Species_L_h_
//$ class java.lang.invoke.BoundMethodHandle$Species_L
//$ extends java.lang.invoke.BoundMethodHandle

#include <java/lang/invoke/BoundMethodHandle.h>

#pragma push_macro("BMH_SPECIES")
#undef BMH_SPECIES

namespace java {
	namespace lang {
		namespace invoke {
			class BoundMethodHandle$SpeciesData;
			class LambdaForm;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class BoundMethodHandle$Species_L : public ::java::lang::invoke::BoundMethodHandle {
	$class(BoundMethodHandle$Species_L, $NO_CLASS_INIT, ::java::lang::invoke::BoundMethodHandle)
public:
	BoundMethodHandle$Species_L();
	void init$(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf, Object$* argL0);
	virtual ::java::lang::invoke::BoundMethodHandle* copyWith(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf) override;
	virtual ::java::lang::invoke::BoundMethodHandle* copyWithExtendD(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf, double narg) override;
	virtual ::java::lang::invoke::BoundMethodHandle* copyWithExtendF(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf, float narg) override;
	virtual ::java::lang::invoke::BoundMethodHandle* copyWithExtendI(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf, int32_t narg) override;
	virtual ::java::lang::invoke::BoundMethodHandle* copyWithExtendJ(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf, int64_t narg) override;
	virtual ::java::lang::invoke::BoundMethodHandle* copyWithExtendL(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf, Object$* narg) override;
	virtual $Object* internalValues() override;
	static ::java::lang::invoke::BoundMethodHandle* make(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf, Object$* argL0);
	virtual ::java::lang::invoke::BoundMethodHandle$SpeciesData* speciesData() override;
	$Object* argL0 = nullptr;
	static ::java::lang::invoke::BoundMethodHandle$SpeciesData* BMH_SPECIES;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("BMH_SPECIES")

#endif // _java_lang_invoke_BoundMethodHandle$Species_L_h_