#ifndef _LingerOnClose_h_
#define _LingerOnClose_h_
//$ class LingerOnClose
//$ extends java.lang.Object

#include <java/lang/Array.h>

class LingerOnClose$TestMode;

class $export LingerOnClose : public ::java::lang::Object {
	$class(LingerOnClose, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LingerOnClose();
	void init$();
	static void main($StringArray* args);
	static void test(::LingerOnClose$TestMode* mode, int32_t interval);
};

#endif // _LingerOnClose_h_