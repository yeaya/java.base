#ifndef _java_nio_file_attribute_BasicFileAttributes_h_
#define _java_nio_file_attribute_BasicFileAttributes_h_
//$ interface java.nio.file.attribute.BasicFileAttributes
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileTime;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $export BasicFileAttributes : public ::java::lang::Object {
	$interface(BasicFileAttributes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::nio::file::attribute::FileTime* creationTime() {return nullptr;}
	virtual $Object* fileKey() {return nullptr;}
	virtual bool isDirectory() {return false;}
	virtual bool isOther() {return false;}
	virtual bool isRegularFile() {return false;}
	virtual bool isSymbolicLink() {return false;}
	virtual ::java::nio::file::attribute::FileTime* lastAccessTime() {return nullptr;}
	virtual ::java::nio::file::attribute::FileTime* lastModifiedTime() {return nullptr;}
	virtual int64_t size() {return 0;}
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_BasicFileAttributes_h_