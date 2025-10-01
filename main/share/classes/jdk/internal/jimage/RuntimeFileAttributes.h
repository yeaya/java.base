#ifndef _jdk_internal_jimage_RuntimeFileAttributes_h_
#define _jdk_internal_jimage_RuntimeFileAttributes_h_
//$ class jdk.internal.jimage.RuntimeFileAttributes
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

class RuntimeFileAttributes : public ::java::nio::file::attribute::BasicFileAttributes {
	$class(RuntimeFileAttributes, $NO_CLASS_INIT, ::java::nio::file::attribute::BasicFileAttributes)
public:
	RuntimeFileAttributes();
	void init$();
	virtual ::java::nio::file::attribute::FileTime* creationTime() override;
	virtual $Object* fileKey() override;
	virtual bool isDirectory() override;
	virtual bool isOther() override;
	virtual bool isRegularFile() override;
	virtual bool isSymbolicLink() override;
	virtual ::java::nio::file::attribute::FileTime* lastAccessTime() override;
	virtual ::java::nio::file::attribute::FileTime* lastModifiedTime() override;
	virtual int64_t size() override;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_RuntimeFileAttributes_h_