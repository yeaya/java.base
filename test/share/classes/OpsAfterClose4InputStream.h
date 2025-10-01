#ifndef _OpsAfterClose4InputStream_h_
#define _OpsAfterClose4InputStream_h_
//$ class OpsAfterClose4InputStream
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("READ")
#undef READ
#pragma push_macro("AVAILABLE")
#undef AVAILABLE
#pragma push_macro("MARK_SUPPORTED")
#undef MARK_SUPPORTED
#pragma push_macro("READ_BUF_OFF")
#undef READ_BUF_OFF
#pragma push_macro("READ_BUF")
#undef READ_BUF
#pragma push_macro("SKIP")
#undef SKIP
#pragma push_macro("RESET")
#undef RESET
#pragma push_macro("CLOSE")
#undef CLOSE
#pragma push_macro("MARK")
#undef MARK

namespace java {
	namespace io {
		class FileInputStream;
		class InputStream;
		class PushbackInputStream;
	}
}

class $export OpsAfterClose4InputStream : public ::java::lang::Enum {
	$class(OpsAfterClose4InputStream, 0, ::java::lang::Enum)
public:
	OpsAfterClose4InputStream();
	static $Array<OpsAfterClose4InputStream>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::InputStream* is) {return false;}
	static void main($StringArray* args);
	static bool testFileInputStream(::java::io::FileInputStream* fis);
	static bool testInputStream(::java::io::InputStream* is);
	static bool testPushbackInputStream(::java::io::PushbackInputStream* pis);
	static ::OpsAfterClose4InputStream* valueOf($String* name);
	static $Array<OpsAfterClose4InputStream>* values();
	static ::OpsAfterClose4InputStream* READ;
	static ::OpsAfterClose4InputStream* READ_BUF;
	static ::OpsAfterClose4InputStream* READ_BUF_OFF;
	static ::OpsAfterClose4InputStream* AVAILABLE;
	static ::OpsAfterClose4InputStream* SKIP;
	static ::OpsAfterClose4InputStream* MARK;
	static ::OpsAfterClose4InputStream* RESET;
	static ::OpsAfterClose4InputStream* MARK_SUPPORTED;
	static ::OpsAfterClose4InputStream* CLOSE;
	static $Array<OpsAfterClose4InputStream>* $VALUES;
};

#pragma pop_macro("READ")
#pragma pop_macro("AVAILABLE")
#pragma pop_macro("MARK_SUPPORTED")
#pragma pop_macro("READ_BUF_OFF")
#pragma pop_macro("READ_BUF")
#pragma pop_macro("SKIP")
#pragma pop_macro("RESET")
#pragma pop_macro("CLOSE")
#pragma pop_macro("MARK")

#endif // _OpsAfterClose4InputStream_h_