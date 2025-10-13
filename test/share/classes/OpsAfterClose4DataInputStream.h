#ifndef _OpsAfterClose4DataInputStream_h_
#define _OpsAfterClose4DataInputStream_h_
//$ class OpsAfterClose4DataInputStream
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("AVAILABLE")
#undef AVAILABLE
#pragma push_macro("CLOSE")
#undef CLOSE
#pragma push_macro("MARK")
#undef MARK
#pragma push_macro("MARK_SUPPORTED")
#undef MARK_SUPPORTED
#pragma push_macro("READ")
#undef READ
#pragma push_macro("READ_BUF")
#undef READ_BUF
#pragma push_macro("READ_BUF_OFF")
#undef READ_BUF_OFF
#pragma push_macro("READ_BYTE")
#undef READ_BYTE
#pragma push_macro("READ_CHAR")
#undef READ_CHAR
#pragma push_macro("READ_DOUBLE")
#undef READ_DOUBLE
#pragma push_macro("READ_FLOAT")
#undef READ_FLOAT
#pragma push_macro("READ_FULLY")
#undef READ_FULLY
#pragma push_macro("READ_FULLY_BUF")
#undef READ_FULLY_BUF
#pragma push_macro("READ_INT")
#undef READ_INT
#pragma push_macro("READ_LONG")
#undef READ_LONG
#pragma push_macro("READ_SHORT")
#undef READ_SHORT
#pragma push_macro("READ_UTF")
#undef READ_UTF
#pragma push_macro("RESET")
#undef RESET
#pragma push_macro("SKIP")
#undef SKIP
#pragma push_macro("SKIP_BYTES")
#undef SKIP_BYTES

namespace java {
	namespace io {
		class DataInputStream;
	}
}

class $export OpsAfterClose4DataInputStream : public ::java::lang::Enum {
	$class(OpsAfterClose4DataInputStream, 0, ::java::lang::Enum)
public:
	OpsAfterClose4DataInputStream();
	static $Array<OpsAfterClose4DataInputStream>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::DataInputStream* is) {return false;}
	static void main($StringArray* args);
	static bool testDataInputStream(::java::io::DataInputStream* is);
	static ::OpsAfterClose4DataInputStream* valueOf($String* name);
	static $Array<OpsAfterClose4DataInputStream>* values();
	static ::OpsAfterClose4DataInputStream* READ;
	static ::OpsAfterClose4DataInputStream* READ_BUF;
	static ::OpsAfterClose4DataInputStream* READ_BUF_OFF;
	static ::OpsAfterClose4DataInputStream* AVAILABLE;
	static ::OpsAfterClose4DataInputStream* SKIP;
	static ::OpsAfterClose4DataInputStream* MARK;
	static ::OpsAfterClose4DataInputStream* RESET;
	static ::OpsAfterClose4DataInputStream* MARK_SUPPORTED;
	static ::OpsAfterClose4DataInputStream* CLOSE;
	static ::OpsAfterClose4DataInputStream* READ_BYTE;
	static ::OpsAfterClose4DataInputStream* READ_CHAR;
	static ::OpsAfterClose4DataInputStream* READ_DOUBLE;
	static ::OpsAfterClose4DataInputStream* READ_FLOAT;
	static ::OpsAfterClose4DataInputStream* READ_INT;
	static ::OpsAfterClose4DataInputStream* READ_LONG;
	static ::OpsAfterClose4DataInputStream* READ_SHORT;
	static ::OpsAfterClose4DataInputStream* READ_UnsignedByte;
	static ::OpsAfterClose4DataInputStream* READ_UnsignedShort;
	static ::OpsAfterClose4DataInputStream* READ_UTF;
	static ::OpsAfterClose4DataInputStream* SKIP_BYTES;
	static ::OpsAfterClose4DataInputStream* READ_FULLY;
	static ::OpsAfterClose4DataInputStream* READ_FULLY_BUF;
	static $Array<OpsAfterClose4DataInputStream>* $VALUES;
};

#pragma pop_macro("AVAILABLE")
#pragma pop_macro("CLOSE")
#pragma pop_macro("MARK")
#pragma pop_macro("MARK_SUPPORTED")
#pragma pop_macro("READ")
#pragma pop_macro("READ_BUF")
#pragma pop_macro("READ_BUF_OFF")
#pragma pop_macro("READ_BYTE")
#pragma pop_macro("READ_CHAR")
#pragma pop_macro("READ_DOUBLE")
#pragma pop_macro("READ_FLOAT")
#pragma pop_macro("READ_FULLY")
#pragma pop_macro("READ_FULLY_BUF")
#pragma pop_macro("READ_INT")
#pragma pop_macro("READ_LONG")
#pragma pop_macro("READ_SHORT")
#pragma pop_macro("READ_UTF")
#pragma pop_macro("RESET")
#pragma pop_macro("SKIP")
#pragma pop_macro("SKIP_BYTES")

#endif // _OpsAfterClose4DataInputStream_h_