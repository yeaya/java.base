#ifndef _java_lang_ProcessBuilder$Redirect$3_h_
#define _java_lang_ProcessBuilder$Redirect$3_h_
//$ class java.lang.ProcessBuilder$Redirect$3
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

class ProcessBuilder$Redirect$3 : public ::java::lang::ProcessBuilder$Redirect {
	$class(ProcessBuilder$Redirect$3, $NO_CLASS_INIT, ::java::lang::ProcessBuilder$Redirect)
public:
	ProcessBuilder$Redirect$3();
	void init$();
	virtual bool append() override;
	virtual ::java::io::File* file() override;
	virtual $String* toString() override;
	virtual ::java::lang::ProcessBuilder$Redirect$Type* type() override;
};

	} // lang
} // java

#endif // _java_lang_ProcessBuilder$Redirect$3_h_