#ifndef _java_lang_ProcessBuilder$Redirect$4_h_
#define _java_lang_ProcessBuilder$Redirect$4_h_
//$ class java.lang.ProcessBuilder$Redirect$4
//$ extends java.lang.ProcessBuilder$Redirect

#include <java/lang/ProcessBuilder$Redirect.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class ProcessBuilder$Redirect$Type;
	}
}

namespace java {
	namespace lang {

class ProcessBuilder$Redirect$4 : public ::java::lang::ProcessBuilder$Redirect {
	$class(ProcessBuilder$Redirect$4, $NO_CLASS_INIT, ::java::lang::ProcessBuilder$Redirect)
public:
	ProcessBuilder$Redirect$4();
	void init$(::java::io::File* val$file);
	virtual ::java::io::File* file() override;
	virtual $String* toString() override;
	virtual ::java::lang::ProcessBuilder$Redirect$Type* type() override;
	::java::io::File* val$file = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessBuilder$Redirect$4_h_