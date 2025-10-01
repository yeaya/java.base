#ifndef _Fill4BufferedInputStream_h_
#define _Fill4BufferedInputStream_h_
//$ class Fill4BufferedInputStream
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Fill4BufferedInputStream : public ::java::lang::Object {
	$class(Fill4BufferedInputStream, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Fill4BufferedInputStream();
	void init$();
	static void go(int32_t shortFall);
	static void main($StringArray* args);
};

#endif // _Fill4BufferedInputStream_h_