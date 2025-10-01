#ifndef _java_lang_Package$VersionInfo_h_
#define _java_lang_Package$VersionInfo_h_
//$ class java.lang.Package$VersionInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NULL_VERSION_INFO")
#undef NULL_VERSION_INFO

namespace java {
	namespace net {
		class URL;
	}
}

namespace java {
	namespace lang {

class $export Package$VersionInfo : public ::java::lang::Object {
	$class(Package$VersionInfo, 0, ::java::lang::Object)
public:
	Package$VersionInfo();
	void init$($String* spectitle, $String* specversion, $String* specvendor, $String* impltitle, $String* implversion, $String* implvendor, ::java::net::URL* sealbase);
	static ::java::lang::Package$VersionInfo* getInstance($String* spectitle, $String* specversion, $String* specvendor, $String* impltitle, $String* implversion, $String* implvendor, ::java::net::URL* sealbase);
	static ::java::lang::Package$VersionInfo* NULL_VERSION_INFO;
	$String* specTitle = nullptr;
	$String* specVersion = nullptr;
	$String* specVendor = nullptr;
	$String* implTitle = nullptr;
	$String* implVersion = nullptr;
	$String* implVendor = nullptr;
	::java::net::URL* sealBase = nullptr;
};

	} // lang
} // java

#pragma pop_macro("NULL_VERSION_INFO")

#endif // _java_lang_Package$VersionInfo_h_