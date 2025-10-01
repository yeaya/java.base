#ifndef _java_nio_charset_CodingErrorAction_h_
#define _java_nio_charset_CodingErrorAction_h_
//$ class java.nio.charset.CodingErrorAction
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("REPORT")
#undef REPORT
#pragma push_macro("IGNORE")
#undef IGNORE
#pragma push_macro("REPLACE")
#undef REPLACE

namespace java {
	namespace nio {
		namespace charset {

class $export CodingErrorAction : public ::java::lang::Object {
	$class(CodingErrorAction, $PRELOAD, ::java::lang::Object)
public:
	CodingErrorAction();
	void init$($String* name);
	virtual $String* toString() override;
	$String* name = nullptr;
	static ::java::nio::charset::CodingErrorAction* IGNORE;
	static ::java::nio::charset::CodingErrorAction* REPLACE;
	static ::java::nio::charset::CodingErrorAction* REPORT;
};

		} // charset
	} // nio
} // java

#pragma pop_macro("REPORT")
#pragma pop_macro("IGNORE")
#pragma pop_macro("REPLACE")

#endif // _java_nio_charset_CodingErrorAction_h_