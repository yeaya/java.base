#ifndef _java_nio_file_WatchEvent$Kind_h_
#define _java_nio_file_WatchEvent$Kind_h_
//$ interface java.nio.file.WatchEvent$Kind
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {

class $import WatchEvent$Kind : public ::java::lang::Object {
	$interface(WatchEvent$Kind, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* name() {return nullptr;}
	virtual $Class* type() {return nullptr;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_WatchEvent$Kind_h_