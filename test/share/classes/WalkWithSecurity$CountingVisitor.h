#ifndef _WalkWithSecurity$CountingVisitor_h_
#define _WalkWithSecurity$CountingVisitor_h_
//$ class WalkWithSecurity$CountingVisitor
//$ extends java.nio.file.SimpleFileVisitor

#include <java/nio/file/SimpleFileVisitor.h>

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

class $export WalkWithSecurity$CountingVisitor : public ::java::nio::file::SimpleFileVisitor {
	$class(WalkWithSecurity$CountingVisitor, $NO_CLASS_INIT, ::java::nio::file::SimpleFileVisitor)
public:
	WalkWithSecurity$CountingVisitor();
	void init$();
	virtual int32_t count();
	virtual ::java::nio::file::FileVisitResult* preVisitDirectory(::java::nio::file::Path* dir, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual ::java::nio::file::FileVisitResult* preVisitDirectory(Object$* dir, ::java::nio::file::attribute::BasicFileAttributes* attrs) override;
	virtual ::java::nio::file::FileVisitResult* visitFile(::java::nio::file::Path* file, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual ::java::nio::file::FileVisitResult* visitFile(Object$* file, ::java::nio::file::attribute::BasicFileAttributes* attrs) override;
	int32_t count$ = 0;
};

#endif // _WalkWithSecurity$CountingVisitor_h_