#ifndef _CreateNewFile_h_
#define _CreateNewFile_h_
//$ class CreateNewFile
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export CreateNewFile : public ::java::lang::Object {
	$class(CreateNewFile, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CreateNewFile();
	void init$();
	static void main($StringArray* args);
	static void testCreateExistingDir();
};

#endif // _CreateNewFile_h_