#ifndef _WinCommand_h_
#define _WinCommand_h_
//$ class WinCommand
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export WinCommand : public ::java::lang::Object {
	$class(WinCommand, 0, ::java::lang::Object)
public:
	WinCommand();
	void init$();
	static void checkCD($StringArray* filespecs);
	static void checkDir($String* dirname);
	static void fail($String* msg);
	static void main($StringArray* args);
	static $String* outputOf($StringArray* args);
	static void writeFile($String* filename, $String* contents);
	static int32_t failed;
};

#endif // _WinCommand_h_