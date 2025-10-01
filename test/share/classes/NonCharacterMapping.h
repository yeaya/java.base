#ifndef _NonCharacterMapping_h_
#define _NonCharacterMapping_h_
//$ class NonCharacterMapping
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ENGLISH")
#undef ENGLISH
#pragma push_macro("TURKISH")
#undef TURKISH

namespace java {
	namespace util {
		class Locale;
	}
}

class $export NonCharacterMapping : public ::java::lang::Object {
	$class(NonCharacterMapping, 0, ::java::lang::Object)
public:
	NonCharacterMapping();
	void init$();
	static void main($StringArray* args);
	static ::java::util::Locale* ENGLISH;
	static ::java::util::Locale* TURKISH;
};

#pragma pop_macro("ENGLISH")
#pragma pop_macro("TURKISH")

#endif // _NonCharacterMapping_h_