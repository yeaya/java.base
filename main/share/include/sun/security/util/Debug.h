#ifndef _sun_security_util_Debug_h_
#define _sun_security_util_Debug_h_
//$ class sun.security.util.Debug
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import Debug : public ::java::lang::Object {
	$class(Debug, 0, ::java::lang::Object)
public:
	Debug();
	void init$();
	static void Help();
	static ::sun::security::util::Debug* getInstance($String* option);
	static ::sun::security::util::Debug* getInstance($String* option, $String* prefix);
	virtual ::java::io::PrintStream* getPrintStream();
	static bool isOn($String* option);
	static bool isVerbose();
	static $String* marshal($String* args);
	virtual void println($String* message);
	virtual void println(Object$* obj, $String* message);
	virtual void println();
	static void println($String* prefix, $String* message);
	static $String* toHexString(::java::math::BigInteger* b);
	using ::java::lang::Object::toString;
	static $String* toString($bytes* b);
	$String* prefix = nullptr;
	static $String* args;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_Debug_h_