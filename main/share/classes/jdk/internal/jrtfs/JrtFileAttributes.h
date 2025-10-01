#ifndef _jdk_internal_jrtfs_JrtFileAttributes_h_
#define _jdk_internal_jrtfs_JrtFileAttributes_h_
//$ class jdk.internal.jrtfs.JrtFileAttributes
//$ extends java.nio.file.attribute.BasicFileAttributes

#include <java/nio/file/attribute/BasicFileAttributes.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileTime;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageReader$Node;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtFileAttributes : public ::java::nio::file::attribute::BasicFileAttributes {
	$class(JrtFileAttributes, $NO_CLASS_INIT, ::java::nio::file::attribute::BasicFileAttributes)
public:
	JrtFileAttributes();
	void init$(::jdk::internal::jimage::ImageReader$Node* node);
	int64_t compressedSize();
	virtual ::java::nio::file::attribute::FileTime* creationTime() override;
	$String* extension();
	virtual $Object* fileKey() override;
	virtual bool isDirectory() override;
	virtual bool isOther() override;
	virtual bool isRegularFile() override;
	virtual bool isSymbolicLink() override;
	virtual ::java::nio::file::attribute::FileTime* lastAccessTime() override;
	virtual ::java::nio::file::attribute::FileTime* lastModifiedTime() override;
	virtual int64_t size() override;
	virtual $String* toString() override;
	::jdk::internal::jimage::ImageReader$Node* node = nullptr;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_JrtFileAttributes_h_