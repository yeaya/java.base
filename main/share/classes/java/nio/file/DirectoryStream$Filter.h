#ifndef _java_nio_file_DirectoryStream$Filter_h_
#define _java_nio_file_DirectoryStream$Filter_h_
//$ interface java.nio.file.DirectoryStream$Filter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {

class $export DirectoryStream$Filter : public ::java::lang::Object {
	$interface(DirectoryStream$Filter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool accept(Object$* entry) {return false;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_DirectoryStream$Filter_h_