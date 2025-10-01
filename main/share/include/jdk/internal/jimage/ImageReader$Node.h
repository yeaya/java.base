#ifndef _jdk_internal_jimage_ImageReader$Node_h_
#define _jdk_internal_jimage_ImageReader$Node_h_
//$ class jdk.internal.jimage.ImageReader$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PACKAGES_DIR")
#undef PACKAGES_DIR
#pragma push_macro("ROOT_DIR")
#undef ROOT_DIR
#pragma push_macro("MODULES_DIR")
#undef MODULES_DIR

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
				class FileTime;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageLocation;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $import ImageReader$Node : public ::java::lang::Object {
	$class(ImageReader$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageReader$Node();
	void init$($String* name, ::java::nio::file::attribute::BasicFileAttributes* fileAttrs);
	virtual int64_t compressedSize();
	virtual int64_t contentOffset();
	::java::nio::file::attribute::FileTime* creationTime();
	virtual bool equals(Object$* other) override;
	virtual $String* extension();
	virtual ::java::util::List* getChildren();
	::java::nio::file::attribute::BasicFileAttributes* getFileAttributes();
	virtual ::jdk::internal::jimage::ImageLocation* getLocation();
	$String* getName();
	$String* getNameString();
	virtual int32_t hashCode() override;
	virtual bool isCompleted();
	virtual bool isDirectory();
	virtual bool isLink();
	bool isModulesDir();
	bool isPackagesDir();
	virtual bool isResource();
	bool isRootDir();
	::java::nio::file::attribute::FileTime* lastAccessTime();
	::java::nio::file::attribute::FileTime* lastModifiedTime();
	::jdk::internal::jimage::ImageReader$Node* resolveLink();
	virtual ::jdk::internal::jimage::ImageReader$Node* resolveLink(bool recursive);
	virtual void setCompleted(bool completed);
	void setIsModulesDir();
	void setIsPackagesDir();
	void setIsRootDir();
	virtual int64_t size();
	virtual $String* toString() override;
	static const int32_t ROOT_DIR = 1;
	static const int32_t PACKAGES_DIR = 2;
	static const int32_t MODULES_DIR = 4;
	int32_t flags = 0;
	$String* name = nullptr;
	::java::nio::file::attribute::BasicFileAttributes* fileAttrs = nullptr;
	bool completed = false;
};

		} // jimage
	} // internal
} // jdk

#pragma pop_macro("PACKAGES_DIR")
#pragma pop_macro("ROOT_DIR")
#pragma pop_macro("MODULES_DIR")

#endif // _jdk_internal_jimage_ImageReader$Node_h_