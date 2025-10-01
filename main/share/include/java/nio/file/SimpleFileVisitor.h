#ifndef _java_nio_file_SimpleFileVisitor_h_
#define _java_nio_file_SimpleFileVisitor_h_
//$ class java.nio.file.SimpleFileVisitor
//$ extends java.nio.file.FileVisitor

#include <java/nio/file/FileVisitor.h>

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

class $import SimpleFileVisitor : public ::java::nio::file::FileVisitor {
	$class(SimpleFileVisitor, $NO_CLASS_INIT, ::java::nio::file::FileVisitor)
public:
	SimpleFileVisitor();
	void init$();
	virtual ::java::nio::file::FileVisitResult* postVisitDirectory(Object$* dir, ::java::io::IOException* exc) override;
	virtual ::java::nio::file::FileVisitResult* preVisitDirectory(Object$* dir, ::java::nio::file::attribute::BasicFileAttributes* attrs) override;
	virtual ::java::nio::file::FileVisitResult* visitFile(Object$* file, ::java::nio::file::attribute::BasicFileAttributes* attrs) override;
	virtual ::java::nio::file::FileVisitResult* visitFileFailed(Object$* file, ::java::io::IOException* exc) override;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_SimpleFileVisitor_h_