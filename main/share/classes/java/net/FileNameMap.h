#ifndef _java_net_FileNameMap_h_
#define _java_net_FileNameMap_h_
//$ interface java.net.FileNameMap
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {

class $export FileNameMap : public ::java::lang::Object {
	$interface(FileNameMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getContentTypeFor($String* fileName) {return nullptr;}
};

	} // net
} // java

#endif // _java_net_FileNameMap_h_