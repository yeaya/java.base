#ifndef _java_util_jar_Attributes$Name_h_
#define _java_util_jar_Attributes$Name_h_
//$ class java.util.jar.Attributes$Name
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CLASS_PATH")
#undef CLASS_PATH
#pragma push_macro("CONTENT_TYPE")
#undef CONTENT_TYPE
#pragma push_macro("EXTENSION_INSTALLATION")
#undef EXTENSION_INSTALLATION
#pragma push_macro("EXTENSION_LIST")
#undef EXTENSION_LIST
#pragma push_macro("EXTENSION_NAME")
#undef EXTENSION_NAME
#pragma push_macro("IMPLEMENTATION_TITLE")
#undef IMPLEMENTATION_TITLE
#pragma push_macro("IMPLEMENTATION_URL")
#undef IMPLEMENTATION_URL
#pragma push_macro("IMPLEMENTATION_VENDOR")
#undef IMPLEMENTATION_VENDOR
#pragma push_macro("IMPLEMENTATION_VENDOR_ID")
#undef IMPLEMENTATION_VENDOR_ID
#pragma push_macro("IMPLEMENTATION_VERSION")
#undef IMPLEMENTATION_VERSION
#pragma push_macro("KNOWN_NAMES")
#undef KNOWN_NAMES
#pragma push_macro("MAIN_CLASS")
#undef MAIN_CLASS
#pragma push_macro("MANIFEST_VERSION")
#undef MANIFEST_VERSION
#pragma push_macro("MULTI_RELEASE")
#undef MULTI_RELEASE
#pragma push_macro("SEALED")
#undef SEALED
#pragma push_macro("SIGNATURE_VERSION")
#undef SIGNATURE_VERSION
#pragma push_macro("SPECIFICATION_TITLE")
#undef SPECIFICATION_TITLE
#pragma push_macro("SPECIFICATION_VENDOR")
#undef SPECIFICATION_VENDOR
#pragma push_macro("SPECIFICATION_VERSION")
#undef SPECIFICATION_VERSION

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace util {
		namespace jar {

class $import Attributes$Name : public ::java::lang::Object {
	$class(Attributes$Name, 0, ::java::lang::Object)
public:
	Attributes$Name();
	void init$($String* name);
	static void addName(::java::util::Map* names, ::java::util::jar::Attributes$Name* name);
	virtual bool equals(Object$* o) override;
	int32_t hash($String* name);
	virtual int32_t hashCode() override;
	static ::java::util::jar::Attributes$Name* of($String* name);
	virtual $String* toString() override;
	$String* name = nullptr;
	int32_t hashCode$ = 0;
	static ::java::util::Map* KNOWN_NAMES;
	static ::java::util::jar::Attributes$Name* MANIFEST_VERSION;
	static ::java::util::jar::Attributes$Name* SIGNATURE_VERSION;
	static ::java::util::jar::Attributes$Name* CONTENT_TYPE;
	static ::java::util::jar::Attributes$Name* CLASS_PATH;
	static ::java::util::jar::Attributes$Name* MAIN_CLASS;
	static ::java::util::jar::Attributes$Name* SEALED;
	static ::java::util::jar::Attributes$Name* EXTENSION_LIST;
	static ::java::util::jar::Attributes$Name* EXTENSION_NAME;
	static ::java::util::jar::Attributes$Name* EXTENSION_INSTALLATION;
	static ::java::util::jar::Attributes$Name* IMPLEMENTATION_TITLE;
	static ::java::util::jar::Attributes$Name* IMPLEMENTATION_VERSION;
	static ::java::util::jar::Attributes$Name* IMPLEMENTATION_VENDOR;
	static ::java::util::jar::Attributes$Name* IMPLEMENTATION_VENDOR_ID;
	static ::java::util::jar::Attributes$Name* IMPLEMENTATION_URL;
	static ::java::util::jar::Attributes$Name* SPECIFICATION_TITLE;
	static ::java::util::jar::Attributes$Name* SPECIFICATION_VERSION;
	static ::java::util::jar::Attributes$Name* SPECIFICATION_VENDOR;
	static ::java::util::jar::Attributes$Name* MULTI_RELEASE;
};

		} // jar
	} // util
} // java

#pragma pop_macro("CLASS_PATH")
#pragma pop_macro("CONTENT_TYPE")
#pragma pop_macro("EXTENSION_INSTALLATION")
#pragma pop_macro("EXTENSION_LIST")
#pragma pop_macro("EXTENSION_NAME")
#pragma pop_macro("IMPLEMENTATION_TITLE")
#pragma pop_macro("IMPLEMENTATION_URL")
#pragma pop_macro("IMPLEMENTATION_VENDOR")
#pragma pop_macro("IMPLEMENTATION_VENDOR_ID")
#pragma pop_macro("IMPLEMENTATION_VERSION")
#pragma pop_macro("KNOWN_NAMES")
#pragma pop_macro("MAIN_CLASS")
#pragma pop_macro("MANIFEST_VERSION")
#pragma pop_macro("MULTI_RELEASE")
#pragma pop_macro("SEALED")
#pragma pop_macro("SIGNATURE_VERSION")
#pragma pop_macro("SPECIFICATION_TITLE")
#pragma pop_macro("SPECIFICATION_VENDOR")
#pragma pop_macro("SPECIFICATION_VERSION")

#endif // _java_util_jar_Attributes$Name_h_