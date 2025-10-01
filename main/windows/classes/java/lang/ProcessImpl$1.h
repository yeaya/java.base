#ifndef _java_lang_ProcessImpl$1_h_
#define _java_lang_ProcessImpl$1_h_
//$ class java.lang.ProcessImpl$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}

namespace java {
	namespace lang {

class ProcessImpl$1 : public ::java::security::PrivilegedAction {
	$class(ProcessImpl$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ProcessImpl$1();
	void init$(::java::io::FileDescriptor* val$fd);
	virtual $Object* run() override;
	::java::io::FileDescriptor* val$fd = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessImpl$1_h_