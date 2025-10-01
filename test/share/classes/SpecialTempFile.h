#ifndef _SpecialTempFile_h_
#define _SpecialTempFile_h_
//$ class SpecialTempFile
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export SpecialTempFile : public ::java::lang::Object {
	$class(SpecialTempFile, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SpecialTempFile();
	void init$();
	static void main($StringArray* args);
	static void test($String* name, $StringArray* prefix, $StringArray* suffix, bool exceptionExpected);
};

#endif // _SpecialTempFile_h_