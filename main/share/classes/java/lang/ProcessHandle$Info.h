#ifndef _java_lang_ProcessHandle$Info_h_
#define _java_lang_ProcessHandle$Info_h_
//$ interface java.lang.ProcessHandle$Info
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace lang {

class $export ProcessHandle$Info : public ::java::lang::Object {
	$interface(ProcessHandle$Info, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Optional* arguments() {return nullptr;}
	virtual ::java::util::Optional* command() {return nullptr;}
	virtual ::java::util::Optional* commandLine() {return nullptr;}
	virtual ::java::util::Optional* startInstant() {return nullptr;}
	virtual ::java::util::Optional* totalCpuDuration() {return nullptr;}
	virtual ::java::util::Optional* user() {return nullptr;}
};

	} // lang
} // java

#endif // _java_lang_ProcessHandle$Info_h_