#ifndef _java_nio_file_StandardWatchEventKinds_h_
#define _java_nio_file_StandardWatchEventKinds_h_
//$ class java.nio.file.StandardWatchEventKinds
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("OVERFLOW")
#undef OVERFLOW
#pragma push_macro("ENTRY_CREATE")
#undef ENTRY_CREATE
#pragma push_macro("ENTRY_MODIFY")
#undef ENTRY_MODIFY
#pragma push_macro("ENTRY_DELETE")
#undef ENTRY_DELETE

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

class $export StandardWatchEventKinds : public ::java::lang::Object {
	$class(StandardWatchEventKinds, 0, ::java::lang::Object)
public:
	StandardWatchEventKinds();
	void init$();
	static ::java::nio::file::WatchEvent$Kind* OVERFLOW;
	static ::java::nio::file::WatchEvent$Kind* ENTRY_CREATE;
	static ::java::nio::file::WatchEvent$Kind* ENTRY_DELETE;
	static ::java::nio::file::WatchEvent$Kind* ENTRY_MODIFY;
};

		} // file
	} // nio
} // java

#pragma pop_macro("OVERFLOW")
#pragma pop_macro("ENTRY_CREATE")
#pragma pop_macro("ENTRY_MODIFY")
#pragma pop_macro("ENTRY_DELETE")

#endif // _java_nio_file_StandardWatchEventKinds_h_