#ifndef _UnixCommands_h_
#define _UnixCommands_h_
//$ class UnixCommands
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Map;
	}
}

class $export UnixCommands : public ::java::lang::Object {
	$class(UnixCommands, 0, ::java::lang::Object)
public:
	UnixCommands();
	void init$();
	static $String* cat();
	static $String* echo();
	static void ensureCommandsAvailable($StringArray* commands);
	static $String* findCommand($String* name);
	static $String* findCommand0($String* name);
	static $String* kill();
	static $String* sh();
	static $String* sleep();
	static $String* tee();
	static bool isUnix;
	static bool isLinux;
	static $StringArray* paths;
	static ::java::util::Map* nameToCommand;
};

#endif // _UnixCommands_h_