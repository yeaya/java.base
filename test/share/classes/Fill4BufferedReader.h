#ifndef _Fill4BufferedReader_h_
#define _Fill4BufferedReader_h_
//$ class Fill4BufferedReader
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Fill4BufferedReader : public ::java::lang::Object {
	$class(Fill4BufferedReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Fill4BufferedReader();
	void init$();
	static void go(int32_t shortFall);
	static void main($StringArray* args);
};

#endif // _Fill4BufferedReader_h_