#ifndef _java_io_Bits_h_
#define _java_io_Bits_h_
//$ class java.io.Bits
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {

class Bits : public ::java::lang::Object {
	$class(Bits, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Bits();
	void init$();
	static bool getBoolean($bytes* b, int32_t off);
	static char16_t getChar($bytes* b, int32_t off);
	static double getDouble($bytes* b, int32_t off);
	static float getFloat($bytes* b, int32_t off);
	static int32_t getInt($bytes* b, int32_t off);
	static int64_t getLong($bytes* b, int32_t off);
	static int16_t getShort($bytes* b, int32_t off);
	static void putBoolean($bytes* b, int32_t off, bool val);
	static void putChar($bytes* b, int32_t off, char16_t val);
	static void putDouble($bytes* b, int32_t off, double val);
	static void putFloat($bytes* b, int32_t off, float val);
	static void putInt($bytes* b, int32_t off, int32_t val);
	static void putLong($bytes* b, int32_t off, int64_t val);
	static void putShort($bytes* b, int32_t off, int16_t val);
};

	} // io
} // java

#endif // _java_io_Bits_h_