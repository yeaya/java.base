#ifndef _java_lang_invoke_BoundMethodHandle$SpeciesData_h_
#define _java_lang_invoke_BoundMethodHandle$SpeciesData_h_
//$ class java.lang.invoke.BoundMethodHandle$SpeciesData
//$ extends java.lang.invoke.ClassSpecializer$SpeciesData

#include <java/lang/Array.h>
#include <java/lang/invoke/ClassSpecializer$SpeciesData.h>

namespace java {
	namespace lang {
		namespace invoke {
			class BoundMethodHandle$Specializer;
			class MemberName;
			class MethodHandle;
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

class BoundMethodHandle$SpeciesData : public ::java::lang::invoke::ClassSpecializer$SpeciesData {
	$class(BoundMethodHandle$SpeciesData, 0, ::java::lang::invoke::ClassSpecializer$SpeciesData)
public:
	BoundMethodHandle$SpeciesData();
	void init$(::java::lang::invoke::BoundMethodHandle$Specializer* outer, $String* key);
	virtual $String* deriveClassName() override;
	::java::util::List* deriveFieldTypes($String* key);
	virtual ::java::util::List* deriveFieldTypes(Object$* key) override;
	virtual ::java::lang::invoke::MethodHandle* deriveTransformHelper(::java::lang::invoke::MemberName* transform, int32_t whichtm) override;
	virtual ::java::util::List* deriveTransformHelperArguments(::java::lang::invoke::MemberName* transform, int32_t whichtm, ::java::util::List* args, ::java::util::List* fields) override;
	virtual $String* deriveTypeString() override;
	::java::lang::invoke::BoundMethodHandle$SpeciesData* extendWith(int8_t typeNum);
	bool verifyTHAargs(::java::lang::invoke::MemberName* transform, int32_t whichtm, ::java::util::List* args, ::java::util::List* fields);
	static bool $assertionsDisabled;
	$Array<::java::lang::invoke::BoundMethodHandle$SpeciesData>* extensions = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_BoundMethodHandle$SpeciesData_h_