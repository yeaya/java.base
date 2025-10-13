#ifndef _java_security_KeyRep$Type_h_
#define _java_security_KeyRep$Type_h_
//$ class java.security.KeyRep$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("PRIVATE")
#undef PRIVATE
#pragma push_macro("PUBLIC")
#undef PUBLIC
#pragma push_macro("SECRET")
#undef SECRET

namespace java {
	namespace security {

class $export KeyRep$Type : public ::java::lang::Enum {
	$class(KeyRep$Type, 0, ::java::lang::Enum)
public:
	KeyRep$Type();
	static $Array<::java::security::KeyRep$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::security::KeyRep$Type* valueOf($String* name);
	static $Array<::java::security::KeyRep$Type>* values();
	static ::java::security::KeyRep$Type* SECRET;
	static ::java::security::KeyRep$Type* PUBLIC;
	static ::java::security::KeyRep$Type* PRIVATE;
	static $Array<::java::security::KeyRep$Type>* $VALUES;
};

	} // security
} // java

#pragma pop_macro("PRIVATE")
#pragma pop_macro("PUBLIC")
#pragma pop_macro("SECRET")

#endif // _java_security_KeyRep$Type_h_