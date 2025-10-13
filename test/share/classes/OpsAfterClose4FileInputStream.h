#ifndef _OpsAfterClose4FileInputStream_h_
#define _OpsAfterClose4FileInputStream_h_
//$ class OpsAfterClose4FileInputStream
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLOSE")
#undef CLOSE
#pragma push_macro("GET_CHANNEL")
#undef GET_CHANNEL
#pragma push_macro("GET_FD")
#undef GET_FD
#pragma push_macro("READ")
#undef READ
#pragma push_macro("READ_BUF")
#undef READ_BUF
#pragma push_macro("READ_BUF_OFF")
#undef READ_BUF_OFF
#pragma push_macro("SKIP")
#undef SKIP

namespace java {
	namespace io {
		class FileInputStream;
	}
}

class $export OpsAfterClose4FileInputStream : public ::java::lang::Enum {
	$class(OpsAfterClose4FileInputStream, 0, ::java::lang::Enum)
public:
	OpsAfterClose4FileInputStream();
	static $Array<OpsAfterClose4FileInputStream>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::FileInputStream* r) {return false;}
	static void main($StringArray* args);
	static bool testFileInputStream(::java::io::FileInputStream* r);
	static ::OpsAfterClose4FileInputStream* valueOf($String* name);
	static $Array<OpsAfterClose4FileInputStream>* values();
	static ::OpsAfterClose4FileInputStream* READ;
	static ::OpsAfterClose4FileInputStream* READ_BUF;
	static ::OpsAfterClose4FileInputStream* READ_BUF_OFF;
	static ::OpsAfterClose4FileInputStream* GET_CHANNEL;
	static ::OpsAfterClose4FileInputStream* GET_FD;
	static ::OpsAfterClose4FileInputStream* SKIP;
	static ::OpsAfterClose4FileInputStream* CLOSE;
	static $Array<OpsAfterClose4FileInputStream>* $VALUES;
};

#pragma pop_macro("CLOSE")
#pragma pop_macro("GET_CHANNEL")
#pragma pop_macro("GET_FD")
#pragma pop_macro("READ")
#pragma pop_macro("READ_BUF")
#pragma pop_macro("READ_BUF_OFF")
#pragma pop_macro("SKIP")

#endif // _OpsAfterClose4FileInputStream_h_