#ifndef _java_nio_file_FileVisitor_h_
#define _java_nio_file_FileVisitor_h_
//$ interface java.nio.file.FileVisitor
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
			class FileVisitResult;
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

class $import FileVisitor : public ::java::lang::Object {
	$interface(FileVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::nio::file::FileVisitResult* postVisitDirectory(Object$* dir, ::java::io::IOException* exc) {return nullptr;}
	virtual ::java::nio::file::FileVisitResult* preVisitDirectory(Object$* dir, ::java::nio::file::attribute::BasicFileAttributes* attrs) {return nullptr;}
	virtual ::java::nio::file::FileVisitResult* visitFile(Object$* file, ::java::nio::file::attribute::BasicFileAttributes* attrs) {return nullptr;}
	virtual ::java::nio::file::FileVisitResult* visitFileFailed(Object$* file, ::java::io::IOException* exc) {return nullptr;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileVisitor_h_