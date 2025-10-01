#ifndef _java_nio_file_SecureDirectoryStream_h_
#define _java_nio_file_SecureDirectoryStream_h_
//$ interface java.nio.file.SecureDirectoryStream
//$ extends java.nio.file.DirectoryStream

#include <java/lang/Array.h>
#include <java/nio/file/DirectoryStream.h>

namespace java {
	namespace nio {
		namespace channels {
			class SeekableByteChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class LinkOption;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileAttribute;
				class FileAttributeView;
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace nio {
		namespace file {

class $import SecureDirectoryStream : public ::java::nio::file::DirectoryStream {
	$interface(SecureDirectoryStream, $NO_CLASS_INIT, ::java::nio::file::DirectoryStream)
public:
	virtual void deleteDirectory(Object$* path) {}
	virtual void deleteFile(Object$* path) {}
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView($Class* type) {return nullptr;}
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView(Object$* path, $Class* type, $Array<::java::nio::file::LinkOption>* options) {return nullptr;}
	virtual void move(Object$* srcpath, ::java::nio::file::SecureDirectoryStream* targetdir, Object$* targetpath) {}
	virtual ::java::nio::channels::SeekableByteChannel* newByteChannel(Object$* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs) {return nullptr;}
	virtual ::java::nio::file::SecureDirectoryStream* newDirectoryStream(Object$* path, $Array<::java::nio::file::LinkOption>* options) {return nullptr;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_SecureDirectoryStream_h_