#ifndef _java_nio_file_attribute_DosFileAttributeView_h_
#define _java_nio_file_attribute_DosFileAttributeView_h_
//$ interface java.nio.file.attribute.DosFileAttributeView
//$ extends java.nio.file.attribute.BasicFileAttributeView

#include <java/nio/file/attribute/BasicFileAttributeView.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $export DosFileAttributeView : public ::java::nio::file::attribute::BasicFileAttributeView {
	$interface(DosFileAttributeView, $NO_CLASS_INIT, ::java::nio::file::attribute::BasicFileAttributeView)
public:
	virtual $String* name() override {return nullptr;}
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() override {return nullptr;}
	virtual void setArchive(bool value) {}
	virtual void setHidden(bool value) {}
	virtual void setReadOnly(bool value) {}
	virtual void setSystem(bool value) {}
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_DosFileAttributeView_h_