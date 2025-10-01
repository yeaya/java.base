#ifndef _java_nio_file_attribute_AttributeView_h_
#define _java_nio_file_attribute_AttributeView_h_
//$ interface java.nio.file.attribute.AttributeView
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $import AttributeView : public ::java::lang::Object {
	$interface(AttributeView, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* name() {return nullptr;}
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_AttributeView_h_