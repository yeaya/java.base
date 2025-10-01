#ifndef _ExceedMaxDim4Array_h_
#define _ExceedMaxDim4Array_h_
//$ class ExceedMaxDim4Array
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ExceedMaxDim4Array : public ::java::lang::Object {
	$class(ExceedMaxDim4Array, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExceedMaxDim4Array();
	void init$();
	static $Object* getArrayOf256Dimensions();
	static void main($StringArray* args);
	static void newInstanceMulti();
	static void newInstanceOne();
	static void zeroDimension();
};

#endif // _ExceedMaxDim4Array_h_