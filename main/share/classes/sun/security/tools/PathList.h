#ifndef _sun_security_tools_PathList_h_
#define _sun_security_tools_PathList_h_
//$ class sun.security.tools.PathList
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}

namespace sun {
	namespace security {
		namespace tools {

class $export PathList : public ::java::lang::Object {
	$class(PathList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PathList();
	void init$();
	static $String* appendPath($String* pathTo, $String* pathFrom);
	static ::java::net::URL* fileToURL(::java::io::File* file);
	static $Array<::java::net::URL>* pathToURLs($String* path);
};

		} // tools
	} // security
} // sun

#endif // _sun_security_tools_PathList_h_