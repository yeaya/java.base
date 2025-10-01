#ifndef _jdk_internal_jrtfs_JrtDirectoryStream_h_
#define _jdk_internal_jrtfs_JrtDirectoryStream_h_
//$ class jdk.internal.jrtfs.JrtDirectoryStream
//$ extends java.nio.file.DirectoryStream

#include <java/nio/file/DirectoryStream.h>

namespace java {
	namespace nio {
		namespace file {
			class DirectoryStream$Filter;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace jdk {
	namespace internal {
		namespace jrtfs {
			class JrtPath;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtDirectoryStream : public ::java::nio::file::DirectoryStream {
	$class(JrtDirectoryStream, $NO_CLASS_INIT, ::java::nio::file::DirectoryStream)
public:
	JrtDirectoryStream();
	void init$(::jdk::internal::jrtfs::JrtPath* dir, ::java::nio::file::DirectoryStream$Filter* filter);
	virtual void close() override;
	virtual ::java::util::Iterator* iterator() override;
	::jdk::internal::jrtfs::JrtPath* dir = nullptr;
	::java::nio::file::DirectoryStream$Filter* filter = nullptr;
	bool isClosed = false;
	::java::util::Iterator* itr = nullptr;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_JrtDirectoryStream_h_