#ifndef _ToURL_h_
#define _ToURL_h_
//$ class ToURL
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ToURL : public ::java::lang::Object {
	$class(ToURL, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ToURL();
	void init$();
	static void go($String* fn);
	static void main($StringArray* args);
};

#endif // _ToURL_h_