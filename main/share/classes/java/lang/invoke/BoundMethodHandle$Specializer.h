#ifndef _java_lang_invoke_BoundMethodHandle$Specializer_h_
#define _java_lang_invoke_BoundMethodHandle$Specializer_h_
//$ class java.lang.invoke.BoundMethodHandle$Specializer
//$ extends java.lang.invoke.ClassSpecializer

#include <java/lang/invoke/ClassSpecializer.h>

#pragma push_macro("SPECIES_DATA_ACCESSOR")
#undef SPECIES_DATA_ACCESSOR
#pragma push_macro("TN_COPY_NO_EXTEND")
#undef TN_COPY_NO_EXTEND
#pragma push_macro("BMH_TRANSFORMS")
#undef BMH_TRANSFORMS

namespace java {
	namespace lang {
		namespace invoke {
			class BoundMethodHandle$SpeciesData;
			class ClassSpecializer$Factory;
			class ClassSpecializer$SpeciesData;
			class MemberName;
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

class BoundMethodHandle$Specializer : public ::java::lang::invoke::ClassSpecializer {
	$class(BoundMethodHandle$Specializer, 0, ::java::lang::invoke::ClassSpecializer)
public:
	BoundMethodHandle$Specializer();
	void init$();
	virtual ::java::lang::invoke::ClassSpecializer$Factory* makeFactory() override;
	::java::lang::invoke::BoundMethodHandle$SpeciesData* newSpeciesData($String* key);
	virtual ::java::lang::invoke::ClassSpecializer$SpeciesData* newSpeciesData(Object$* key) override;
	virtual $Object* topSpeciesKey() override;
	static bool $assertionsDisabled;
	static ::java::lang::invoke::MemberName* SPECIES_DATA_ACCESSOR;
	static ::java::util::List* BMH_TRANSFORMS;
	static int32_t TN_COPY_NO_EXTEND;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("SPECIES_DATA_ACCESSOR")
#pragma pop_macro("TN_COPY_NO_EXTEND")
#pragma pop_macro("BMH_TRANSFORMS")

#endif // _java_lang_invoke_BoundMethodHandle$Specializer_h_