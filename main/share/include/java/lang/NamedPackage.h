#ifndef _java_lang_NamedPackage_h_
#define _java_lang_NamedPackage_h_
//$ class java.lang.NamedPackage
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Module;
		class Package;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}

namespace java {
	namespace lang {

class $import NamedPackage : public ::java::lang::Object {
	$class(NamedPackage, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NamedPackage();
	void init$($String* pn, ::java::lang::Module* module);
	virtual ::java::net::URI* location();
	virtual ::java::lang::Module* module();
	virtual $String* packageName();
	static ::java::lang::Package* toPackage($String* name, ::java::lang::Module* module);
	$String* name = nullptr;
	::java::lang::Module* module$ = nullptr;
};

	} // lang
} // java

#endif // _java_lang_NamedPackage_h_