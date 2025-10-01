#ifndef _OpsAfterClose4FileOutputStream_h_
#define _OpsAfterClose4FileOutputStream_h_
//$ class OpsAfterClose4FileOutputStream
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("WRITE_BUF")
#undef WRITE_BUF
#pragma push_macro("GET_FD")
#undef GET_FD
#pragma push_macro("CLOSE")
#undef CLOSE
#pragma push_macro("WRITE_BUF_OFF")
#undef WRITE_BUF_OFF
#pragma push_macro("GET_CHANNEL")
#undef GET_CHANNEL
#pragma push_macro("WRITE")
#undef WRITE

namespace java {
	namespace io {
		class FileOutputStream;
	}
}

class $export OpsAfterClose4FileOutputStream : public ::java::lang::Enum {
	$class(OpsAfterClose4FileOutputStream, 0, ::java::lang::Enum)
public:
	OpsAfterClose4FileOutputStream();
	static $Array<OpsAfterClose4FileOutputStream>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::FileOutputStream* r) {return false;}
	static void main($StringArray* args);
	static bool testFileOutputStream(::java::io::FileOutputStream* r);
	static ::OpsAfterClose4FileOutputStream* valueOf($String* name);
	static $Array<OpsAfterClose4FileOutputStream>* values();
	static ::OpsAfterClose4FileOutputStream* WRITE;
	static ::OpsAfterClose4FileOutputStream* WRITE_BUF;
	static ::OpsAfterClose4FileOutputStream* WRITE_BUF_OFF;
	static ::OpsAfterClose4FileOutputStream* GET_CHANNEL;
	static ::OpsAfterClose4FileOutputStream* GET_FD;
	static ::OpsAfterClose4FileOutputStream* CLOSE;
	static $Array<OpsAfterClose4FileOutputStream>* $VALUES;
};

#pragma pop_macro("WRITE_BUF")
#pragma pop_macro("GET_FD")
#pragma pop_macro("CLOSE")
#pragma pop_macro("WRITE_BUF_OFF")
#pragma pop_macro("GET_CHANNEL")
#pragma pop_macro("WRITE")

#endif // _OpsAfterClose4FileOutputStream_h_