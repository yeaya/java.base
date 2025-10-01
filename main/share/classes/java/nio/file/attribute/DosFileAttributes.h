#ifndef _java_nio_file_attribute_DosFileAttributes_h_
#define _java_nio_file_attribute_DosFileAttributes_h_
//$ interface java.nio.file.attribute.DosFileAttributes
//$ extends java.nio.file.attribute.BasicFileAttributes

#include <java/nio/file/attribute/BasicFileAttributes.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $export DosFileAttributes : public ::java::nio::file::attribute::BasicFileAttributes {
	$interface(DosFileAttributes, $NO_CLASS_INIT, ::java::nio::file::attribute::BasicFileAttributes)
public:
	virtual bool isArchive() {return false;}
	virtual bool isHidden() {return false;}
	virtual bool isReadOnly() {return false;}
	virtual bool isSystem() {return false;}
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_DosFileAttributes_h_