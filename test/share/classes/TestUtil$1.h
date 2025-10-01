#ifndef _TestUtil$1_h_
#define _TestUtil$1_h_
//$ class TestUtil$1
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

class TestUtil$1 : public ::java::nio::file::FileVisitor {
	$class(TestUtil$1, $NO_CLASS_INIT, ::java::nio::file::FileVisitor)
public:
	TestUtil$1();
	void init$();
	virtual ::java::nio::file::FileVisitResult* postVisitDirectory(::java::nio::file::Path* dir, ::java::io::IOException* exc);
	virtual ::java::nio::file::FileVisitResult* postVisitDirectory(Object$* dir, ::java::io::IOException* exc) override;
	virtual ::java::nio::file::FileVisitResult* preVisitDirectory(::java::nio::file::Path* dir, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual ::java::nio::file::FileVisitResult* preVisitDirectory(Object$* dir, ::java::nio::file::attribute::BasicFileAttributes* attrs) override;
	virtual ::java::nio::file::FileVisitResult* visitFile(::java::nio::file::Path* file, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual ::java::nio::file::FileVisitResult* visitFile(Object$* file, ::java::nio::file::attribute::BasicFileAttributes* attrs) override;
	virtual ::java::nio::file::FileVisitResult* visitFileFailed(::java::nio::file::Path* file, ::java::io::IOException* exc);
	virtual ::java::nio::file::FileVisitResult* visitFileFailed(Object$* file, ::java::io::IOException* exc) override;
};

#endif // _TestUtil$1_h_