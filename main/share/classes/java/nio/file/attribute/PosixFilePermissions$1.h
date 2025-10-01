#ifndef _java_nio_file_attribute_PosixFilePermissions$1_h_
#define _java_nio_file_attribute_PosixFilePermissions$1_h_
//$ class java.nio.file.attribute.PosixFilePermissions$1
//$ extends java.nio.file.attribute.FileAttribute

#include <java/nio/file/attribute/FileAttribute.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class PosixFilePermissions$1 : public ::java::nio::file::attribute::FileAttribute {
	$class(PosixFilePermissions$1, $NO_CLASS_INIT, ::java::nio::file::attribute::FileAttribute)
public:
	PosixFilePermissions$1();
	void init$(::java::util::Set* val$value);
	virtual $String* name() override;
	virtual $Object* value() override;
	::java::util::Set* val$value = nullptr;
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_PosixFilePermissions$1_h_