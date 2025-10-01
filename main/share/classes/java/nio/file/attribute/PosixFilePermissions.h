#ifndef _java_nio_file_attribute_PosixFilePermissions_h_
#define _java_nio_file_attribute_PosixFilePermissions_h_
//$ class java.nio.file.attribute.PosixFilePermissions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileAttribute;
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

class $export PosixFilePermissions : public ::java::lang::Object {
	$class(PosixFilePermissions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PosixFilePermissions();
	void init$();
	static ::java::nio::file::attribute::FileAttribute* asFileAttribute(::java::util::Set* perms);
	static ::java::util::Set* fromString($String* perms);
	static bool isR(char16_t c);
	static bool isSet(char16_t c, char16_t setValue);
	static bool isW(char16_t c);
	static bool isX(char16_t c);
	using ::java::lang::Object::toString;
	static $String* toString(::java::util::Set* perms);
	static void writeBits(::java::lang::StringBuilder* sb, bool r, bool w, bool x);
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_PosixFilePermissions_h_