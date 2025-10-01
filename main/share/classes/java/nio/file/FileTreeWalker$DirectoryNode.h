#ifndef _java_nio_file_FileTreeWalker$DirectoryNode_h_
#define _java_nio_file_FileTreeWalker$DirectoryNode_h_
//$ class java.nio.file.FileTreeWalker$DirectoryNode
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			class DirectoryStream;
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace nio {
		namespace file {

class FileTreeWalker$DirectoryNode : public ::java::lang::Object {
	$class(FileTreeWalker$DirectoryNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FileTreeWalker$DirectoryNode();
	void init$(::java::nio::file::Path* dir, Object$* key, ::java::nio::file::DirectoryStream* stream);
	virtual ::java::nio::file::Path* directory();
	virtual ::java::util::Iterator* iterator();
	virtual $Object* key();
	virtual void skip();
	virtual bool skipped();
	virtual ::java::nio::file::DirectoryStream* stream();
	::java::nio::file::Path* dir = nullptr;
	$Object* key$ = nullptr;
	::java::nio::file::DirectoryStream* stream$ = nullptr;
	::java::util::Iterator* iterator$ = nullptr;
	bool skipped$ = false;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileTreeWalker$DirectoryNode_h_