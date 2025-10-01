#ifndef _PassThroughFileSystem$2_h_
#define _PassThroughFileSystem$2_h_
//$ class PassThroughFileSystem$2
//$ extends java.nio.file.PathMatcher

#include <java/nio/file/PathMatcher.h>

class PassThroughFileSystem;
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class PassThroughFileSystem$2 : public ::java::nio::file::PathMatcher {
	$class(PassThroughFileSystem$2, $NO_CLASS_INIT, ::java::nio::file::PathMatcher)
public:
	PassThroughFileSystem$2();
	void init$(::PassThroughFileSystem* this$0, ::java::nio::file::PathMatcher* val$matcher);
	virtual bool matches(::java::nio::file::Path* path) override;
	::PassThroughFileSystem* this$0 = nullptr;
	::java::nio::file::PathMatcher* val$matcher = nullptr;
};

#endif // _PassThroughFileSystem$2_h_