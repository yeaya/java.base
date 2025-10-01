#ifndef _java_io_ObjectInputFilter$Status_h_
#define _java_io_ObjectInputFilter$Status_h_
//$ class java.io.ObjectInputFilter$Status
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ALLOWED")
#undef ALLOWED
#pragma push_macro("UNDECIDED")
#undef UNDECIDED
#pragma push_macro("REJECTED")
#undef REJECTED

namespace java {
	namespace io {

class $export ObjectInputFilter$Status : public ::java::lang::Enum {
	$class(ObjectInputFilter$Status, 0, ::java::lang::Enum)
public:
	ObjectInputFilter$Status();
	static $Array<::java::io::ObjectInputFilter$Status>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::io::ObjectInputFilter$Status* valueOf($String* name);
	static $Array<::java::io::ObjectInputFilter$Status>* values();
	static ::java::io::ObjectInputFilter$Status* UNDECIDED;
	static ::java::io::ObjectInputFilter$Status* ALLOWED;
	static ::java::io::ObjectInputFilter$Status* REJECTED;
	static $Array<::java::io::ObjectInputFilter$Status>* $VALUES;
};

	} // io
} // java

#pragma pop_macro("ALLOWED")
#pragma pop_macro("UNDECIDED")
#pragma pop_macro("REJECTED")

#endif // _java_io_ObjectInputFilter$Status_h_