#ifndef _java_nio_file_FileTreeWalker$Event_h_
#define _java_nio_file_FileTreeWalker$Event_h_
//$ class java.nio.file.FileTreeWalker$Event
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileTreeWalker$EventType;
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class FileTreeWalker$Event : public ::java::lang::Object {
	$class(FileTreeWalker$Event, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FileTreeWalker$Event();
	void init$(::java::nio::file::FileTreeWalker$EventType* type, ::java::nio::file::Path* file, ::java::nio::file::attribute::BasicFileAttributes* attrs, ::java::io::IOException* ioe);
	void init$(::java::nio::file::FileTreeWalker$EventType* type, ::java::nio::file::Path* file, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	void init$(::java::nio::file::FileTreeWalker$EventType* type, ::java::nio::file::Path* file, ::java::io::IOException* ioe);
	virtual ::java::nio::file::attribute::BasicFileAttributes* attributes();
	virtual ::java::nio::file::Path* file();
	virtual ::java::io::IOException* ioeException();
	virtual ::java::nio::file::FileTreeWalker$EventType* type();
	::java::nio::file::FileTreeWalker$EventType* type$ = nullptr;
	::java::nio::file::Path* file$ = nullptr;
	::java::nio::file::attribute::BasicFileAttributes* attrs = nullptr;
	::java::io::IOException* ioe = nullptr;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileTreeWalker$Event_h_