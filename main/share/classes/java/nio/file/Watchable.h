#ifndef _java_nio_file_Watchable_h_
#define _java_nio_file_Watchable_h_
//$ interface java.nio.file.Watchable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class WatchEvent$Kind;
			class WatchEvent$Modifier;
			class WatchKey;
			class WatchService;
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class $export Watchable : public ::java::lang::Object {
	$interface(Watchable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) {return nullptr;}
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events) {return nullptr;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_Watchable_h_