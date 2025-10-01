#ifndef _java_nio_file_attribute_FileAttribute_h_
#define _java_nio_file_attribute_FileAttribute_h_
//$ interface java.nio.file.attribute.FileAttribute
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $import FileAttribute : public ::java::lang::Object {
	$interface(FileAttribute, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* name() {return nullptr;}
	virtual $Object* value() {return nullptr;}
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_FileAttribute_h_