#ifndef _PassThroughFileSystem$PassThroughProvider$1_h_
#define _PassThroughFileSystem$PassThroughProvider$1_h_
//$ class PassThroughFileSystem$PassThroughProvider$1
//$ extends java.nio.file.DirectoryStream

#include <java/nio/file/DirectoryStream.h>

class PassThroughFileSystem$PassThroughProvider;
namespace java {
	namespace util {
		class Iterator;
	}
}

class PassThroughFileSystem$PassThroughProvider$1 : public ::java::nio::file::DirectoryStream {
	$class(PassThroughFileSystem$PassThroughProvider$1, $NO_CLASS_INIT, ::java::nio::file::DirectoryStream)
public:
	PassThroughFileSystem$PassThroughProvider$1();
	void init$(::PassThroughFileSystem$PassThroughProvider* this$0, ::java::nio::file::DirectoryStream* val$stream);
	virtual void close() override;
	virtual ::java::util::Iterator* iterator() override;
	::PassThroughFileSystem$PassThroughProvider* this$0 = nullptr;
	::java::nio::file::DirectoryStream* val$stream = nullptr;
};

#endif // _PassThroughFileSystem$PassThroughProvider$1_h_