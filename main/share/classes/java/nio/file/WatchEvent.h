#ifndef _java_nio_file_WatchEvent_h_
#define _java_nio_file_WatchEvent_h_
//$ interface java.nio.file.WatchEvent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			class WatchEvent$Kind;
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class $export WatchEvent : public ::java::lang::Object {
	$interface(WatchEvent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* context() {return nullptr;}
	virtual int32_t count() {return 0;}
	virtual ::java::nio::file::WatchEvent$Kind* kind() {return nullptr;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_WatchEvent_h_