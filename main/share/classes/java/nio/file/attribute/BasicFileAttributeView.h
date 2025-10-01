#ifndef _java_nio_file_attribute_BasicFileAttributeView_h_
#define _java_nio_file_attribute_BasicFileAttributeView_h_
//$ interface java.nio.file.attribute.BasicFileAttributeView
//$ extends java.nio.file.attribute.FileAttributeView

#include <java/nio/file/attribute/FileAttributeView.h>

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
	namespace nio {
		namespace file {
			namespace attribute {

class $export BasicFileAttributeView : public ::java::nio::file::attribute::FileAttributeView {
	$interface(BasicFileAttributeView, $NO_CLASS_INIT, ::java::nio::file::attribute::FileAttributeView)
public:
	virtual $String* name() override {return nullptr;}
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() {return nullptr;}
	virtual void setTimes(::java::nio::file::attribute::FileTime* lastModifiedTime, ::java::nio::file::attribute::FileTime* lastAccessTime, ::java::nio::file::attribute::FileTime* createTime) {}
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_BasicFileAttributeView_h_