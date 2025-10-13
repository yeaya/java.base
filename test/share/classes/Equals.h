#ifndef _Equals_h_
#define _Equals_h_
//$ class Equals
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FILE_URL1A")
#undef FILE_URL1A
#pragma push_macro("FILE_URL1B")
#undef FILE_URL1B
#pragma push_macro("HTTP_URL1A")
#undef HTTP_URL1A
#pragma push_macro("HTTP_URL1B")
#undef HTTP_URL1B

class $export Equals : public ::java::lang::Object {
	$class(Equals, 0, ::java::lang::Object)
public:
	Equals();
	void init$();
	static void anchors();
	static int32_t compareJarURLS($String* urlStr1, $String* urlStr2, $String* entry1, $String* entry2, bool expectEqual);
	static void jarURLs();
	static void main($StringArray* args);
	static $String* HTTP_URL1A;
	static $String* HTTP_URL1B;
	static $String* FILE_URL1A;
	static $String* FILE_URL1B;
};

#pragma pop_macro("FILE_URL1A")
#pragma pop_macro("FILE_URL1B")
#pragma pop_macro("HTTP_URL1A")
#pragma pop_macro("HTTP_URL1B")

#endif // _Equals_h_