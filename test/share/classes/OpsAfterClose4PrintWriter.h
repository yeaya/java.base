#ifndef _OpsAfterClose4PrintWriter_h_
#define _OpsAfterClose4PrintWriter_h_
//$ class OpsAfterClose4PrintWriter
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("WRITE_BUF")
#undef WRITE_BUF
#pragma push_macro("WRITE_BUF_OFF")
#undef WRITE_BUF_OFF
#pragma push_macro("WRITE_INT")
#undef WRITE_INT
#pragma push_macro("WRITE_STR")
#undef WRITE_STR
#pragma push_macro("WRITE_STR_OFF")
#undef WRITE_STR_OFF

namespace java {
	namespace io {
		class PrintWriter;
	}
}

class $export OpsAfterClose4PrintWriter : public ::java::lang::Enum {
	$class(OpsAfterClose4PrintWriter, 0, ::java::lang::Enum)
public:
	OpsAfterClose4PrintWriter();
	static $Array<OpsAfterClose4PrintWriter>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::PrintWriter* w) {return false;}
	static void main($StringArray* args);
	static ::OpsAfterClose4PrintWriter* valueOf($String* name);
	static $Array<OpsAfterClose4PrintWriter>* values();
	static ::OpsAfterClose4PrintWriter* WRITE_BUF;
	static ::OpsAfterClose4PrintWriter* WRITE_BUF_OFF;
	static ::OpsAfterClose4PrintWriter* WRITE_INT;
	static ::OpsAfterClose4PrintWriter* WRITE_STR;
	static ::OpsAfterClose4PrintWriter* WRITE_STR_OFF;
	static $Array<OpsAfterClose4PrintWriter>* $VALUES;
};

#pragma pop_macro("WRITE_BUF")
#pragma pop_macro("WRITE_BUF_OFF")
#pragma pop_macro("WRITE_INT")
#pragma pop_macro("WRITE_STR")
#pragma pop_macro("WRITE_STR_OFF")

#endif // _OpsAfterClose4PrintWriter_h_