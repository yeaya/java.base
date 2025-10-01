#ifndef _java_nio_file_attribute_PosixFileAttributes_h_
#define _java_nio_file_attribute_PosixFileAttributes_h_
//$ interface java.nio.file.attribute.PosixFileAttributes
//$ extends java.nio.file.attribute.BasicFileAttributes

#include <java/nio/file/attribute/BasicFileAttributes.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class GroupPrincipal;
				class UserPrincipal;
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $import PosixFileAttributes : public ::java::nio::file::attribute::BasicFileAttributes {
	$interface(PosixFileAttributes, $NO_CLASS_INIT, ::java::nio::file::attribute::BasicFileAttributes)
public:
	virtual ::java::nio::file::attribute::GroupPrincipal* group() {return nullptr;}
	virtual ::java::nio::file::attribute::UserPrincipal* owner() {return nullptr;}
	virtual ::java::util::Set* permissions() {return nullptr;}
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_PosixFileAttributes_h_