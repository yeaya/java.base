#ifndef _LegacyChainedExceptionSerialization_h_
#define _LegacyChainedExceptionSerialization_h_
//$ class LegacyChainedExceptionSerialization
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CNFE_OLD_VERSION")
#undef CNFE_OLD_VERSION
#pragma push_macro("ITE1_OLD_VERSION")
#undef ITE1_OLD_VERSION
#pragma push_macro("UTE1_OLD_VERSION")
#undef UTE1_OLD_VERSION
#pragma push_macro("PAE_OLD_VERSION")
#undef PAE_OLD_VERSION
#pragma push_macro("ITE2_OLD_VERSION")
#undef ITE2_OLD_VERSION
#pragma push_macro("UTE2_OLD_VERSION")
#undef UTE2_OLD_VERSION
#pragma push_macro("SERIALIZED_DATA")
#undef SERIALIZED_DATA
#pragma push_macro("EIIE_OLD_VERSION")
#undef EIIE_OLD_VERSION

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

class $export LegacyChainedExceptionSerialization : public ::java::lang::Object {
	$class(LegacyChainedExceptionSerialization, 0, ::java::lang::Object)
public:
	LegacyChainedExceptionSerialization();
	void init$();
	static $Throwable* deserialize($String* ser);
	static void main($StringArray* args);
	static $Throwable* test($Throwable* e);
	static void testOverriddenGetCause();
	static void verify($Throwable* t, $Throwable* expected);
	static $Array<::java::lang::Throwable>* broken;
	static $String* EIIE_OLD_VERSION;
	static $String* CNFE_OLD_VERSION;
	static $String* ITE1_OLD_VERSION;
	static $String* ITE2_OLD_VERSION;
	static $String* UTE1_OLD_VERSION;
	static $String* UTE2_OLD_VERSION;
	static $String* PAE_OLD_VERSION;
	static ::java::util::Map* SERIALIZED_DATA;
};

#pragma pop_macro("CNFE_OLD_VERSION")
#pragma pop_macro("ITE1_OLD_VERSION")
#pragma pop_macro("UTE1_OLD_VERSION")
#pragma pop_macro("PAE_OLD_VERSION")
#pragma pop_macro("ITE2_OLD_VERSION")
#pragma pop_macro("UTE2_OLD_VERSION")
#pragma pop_macro("SERIALIZED_DATA")
#pragma pop_macro("EIIE_OLD_VERSION")

#endif // _LegacyChainedExceptionSerialization_h_