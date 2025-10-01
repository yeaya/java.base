#ifndef _java_lang_ProcessBuilder$NullOutputStream_h_
#define _java_lang_ProcessBuilder$NullOutputStream_h_
//$ class java.lang.ProcessBuilder$NullOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace lang {

class $export ProcessBuilder$NullOutputStream : public ::java::io::OutputStream {
	$class(ProcessBuilder$NullOutputStream, 0, ::java::io::OutputStream)
public:
	ProcessBuilder$NullOutputStream();
	void init$();
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
	static ::java::lang::ProcessBuilder$NullOutputStream* INSTANCE;
};

	} // lang
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_lang_ProcessBuilder$NullOutputStream_h_