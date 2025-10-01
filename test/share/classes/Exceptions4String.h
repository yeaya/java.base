#ifndef _Exceptions4String_h_
#define _Exceptions4String_h_
//$ class Exceptions4String
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}

class $export Exceptions4String : public ::java::lang::Object {
	$class(Exceptions4String, 0, ::java::lang::Object)
public:
	Exceptions4String();
	void init$();
	static void byteArray();
	static void byteArrayCharset();
	static void byteArrayCharset0($String* s, $Class* ex, $bytes* b, Object$* cs);
	static void byteArrayCharsetName();
	static void byteArrayHi();
	static void byteArrayHiOffCount();
	static void byteArrayOffLength();
	static void byteArrayOffLengthCharset();
	static void byteArrayOffLengthCharset0($String* s, $Class* ex, $bytes* b, int32_t off, int32_t len, Object$* cs);
	static void byteArrayOffLengthCharsetName();
	static void charArray();
	static void charArrayOffCount();
	static void compareTo();
	static void compareToIgnoreCase();
	static void concat();
	static void contentEquals();
	static void copyValueOf();
	static void endsWith();
	static void fail($Class* ex, $String* s);
	static void getBytes();
	static void getChars();
	static void indexOf();
	static void lastIndexOf();
	static void main($StringArray* args);
	static void matches();
	static void noArgs();
	static void pass($String* s);
	static void regionMatches();
	static void replaceAll();
	static void replaceFirst();
	static void split();
	static void startsWith();
	static void string();
	static void stringBuffer();
	static void toLowerCase();
	static void toUpperCase();
	static void tryCatch($String* s, $Class* ex, ::java::lang::Runnable* thunk);
	static void valueOf();
	static $bytes* b;
	static $chars* c;
	static bool ok;
};

#endif // _Exceptions4String_h_