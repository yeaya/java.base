#ifndef _java_lang_ProcessBuilder$RedirectPipeImpl_h_
#define _java_lang_ProcessBuilder$RedirectPipeImpl_h_
//$ class java.lang.ProcessBuilder$RedirectPipeImpl
//$ extends java.lang.ProcessBuilder$Redirect

#include <java/lang/ProcessBuilder$Redirect.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace lang {
		class ProcessBuilder$Redirect$Type;
	}
}

namespace java {
	namespace lang {

class $import ProcessBuilder$RedirectPipeImpl : public ::java::lang::ProcessBuilder$Redirect {
	$class(ProcessBuilder$RedirectPipeImpl, $NO_CLASS_INIT, ::java::lang::ProcessBuilder$Redirect)
public:
	ProcessBuilder$RedirectPipeImpl();
	void init$();
	virtual ::java::io::FileDescriptor* getFd();
	virtual $String* toString() override;
	virtual ::java::lang::ProcessBuilder$Redirect$Type* type() override;
	::java::io::FileDescriptor* fd = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessBuilder$RedirectPipeImpl_h_