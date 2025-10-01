#ifndef _OpsAfterClose_h_
#define _OpsAfterClose_h_
//$ class OpsAfterClose
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("READ")
#undef READ
#pragma push_macro("READY")
#undef READY
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
		class PushbackReader;
		class Reader;
	}
}

class $export OpsAfterClose : public ::java::lang::Enum {
	$class(OpsAfterClose, 0, ::java::lang::Enum)
public:
	OpsAfterClose();
	static $Array<OpsAfterClose>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::Reader* r) {return false;}
	static void main($StringArray* args);
	static bool testPushbackReader(::java::io::PushbackReader* pr);
	static bool testReader(::java::io::Reader* r);
	static ::OpsAfterClose* valueOf($String* name);
	static $Array<OpsAfterClose>* values();
	static ::OpsAfterClose* READ;
	static ::OpsAfterClose* READ_BUF;
	static ::OpsAfterClose* READY;
	static ::OpsAfterClose* MARK;
	static ::OpsAfterClose* SKIP;
	static ::OpsAfterClose* RESET;
	static ::OpsAfterClose* CLOSE;
	static $Array<OpsAfterClose>* $VALUES;
};

#pragma pop_macro("READ")
#pragma pop_macro("READY")
#pragma pop_macro("READ_BUF")
#pragma pop_macro("SKIP")
#pragma pop_macro("RESET")
#pragma pop_macro("CLOSE")
#pragma pop_macro("MARK")

#endif // _OpsAfterClose_h_