#ifndef _java_nio_file_WatchEvent$Modifier_h_
#define _java_nio_file_WatchEvent$Modifier_h_
//$ interface java.nio.file.WatchEvent$Modifier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {

class $export WatchEvent$Modifier : public ::java::lang::Object {
	$interface(WatchEvent$Modifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* name() {return nullptr;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_WatchEvent$Modifier_h_