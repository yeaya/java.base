#ifndef _jdk_internal_loader_FileURLMapper_h_
#define _jdk_internal_loader_FileURLMapper_h_
//$ class jdk.internal.loader.FileURLMapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URL;
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $export FileURLMapper : public ::java::lang::Object {
	$class(FileURLMapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FileURLMapper();
	void init$(::java::net::URL* url);
	virtual bool exists();
	virtual $String* getPath();
	::java::net::URL* url = nullptr;
	$String* file = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_FileURLMapper_h_