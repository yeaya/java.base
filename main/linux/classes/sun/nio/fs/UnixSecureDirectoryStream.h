#ifndef _sun_nio_fs_UnixSecureDirectoryStream_h_
#define _sun_nio_fs_UnixSecureDirectoryStream_h_
//$ class sun.nio.fs.UnixSecureDirectoryStream
//$ extends java.nio.file.SecureDirectoryStream

#include <java/lang/Array.h>
#include <java/nio/file/SecureDirectoryStream.h>

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
			class DirectoryStream$Filter;
			class LinkOption;
			class Path;
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
		class Iterator;
		class Set;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class UnixDirectoryStream;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixSecureDirectoryStream : public ::java::nio::file::SecureDirectoryStream {
	$class(UnixSecureDirectoryStream, $NO_CLASS_INIT, ::java::nio::file::SecureDirectoryStream)
public:
	UnixSecureDirectoryStream();
	void init$(::sun::nio::fs::UnixPath* dir, int64_t dp, int32_t dfd, ::java::nio::file::DirectoryStream$Filter* filter);
	virtual void close() override;
	virtual void deleteDirectory(::java::nio::file::Path* dir);
	virtual void deleteDirectory(Object$* dir) override;
	virtual void deleteFile(::java::nio::file::Path* file);
	virtual void deleteFile(Object$* file) override;
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView($Class* type) override;
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView(::java::nio::file::Path* obj, $Class* type, $Array<::java::nio::file::LinkOption>* options);
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView(Object$* obj, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	::java::nio::file::attribute::FileAttributeView* getFileAttributeViewImpl(::sun::nio::fs::UnixPath* file, $Class* type, bool followLinks);
	::sun::nio::fs::UnixPath* getName(::java::nio::file::Path* obj);
	void implDelete(::java::nio::file::Path* obj, bool haveFlags, int32_t flags);
	virtual ::java::util::Iterator* iterator() override;
	virtual void move(::java::nio::file::Path* fromObj, ::java::nio::file::SecureDirectoryStream* dir, ::java::nio::file::Path* toObj);
	virtual void move(Object$* fromObj, ::java::nio::file::SecureDirectoryStream* dir, Object$* toObj) override;
	virtual ::java::nio::channels::SeekableByteChannel* newByteChannel(::java::nio::file::Path* obj, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	virtual ::java::nio::channels::SeekableByteChannel* newByteChannel(Object$* obj, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual ::java::nio::file::SecureDirectoryStream* newDirectoryStream(::java::nio::file::Path* obj, $Array<::java::nio::file::LinkOption>* options);
	virtual ::java::nio::file::SecureDirectoryStream* newDirectoryStream(Object$* obj, $Array<::java::nio::file::LinkOption>* options) override;
	::sun::nio::fs::UnixDirectoryStream* ds = nullptr;
	int32_t dfd = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixSecureDirectoryStream_h_