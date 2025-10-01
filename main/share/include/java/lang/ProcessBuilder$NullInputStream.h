#ifndef _java_lang_ProcessBuilder$NullInputStream_h_
#define _java_lang_ProcessBuilder$NullInputStream_h_
//$ class java.lang.ProcessBuilder$NullInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace lang {

class $import ProcessBuilder$NullInputStream : public ::java::io::InputStream {
	$class(ProcessBuilder$NullInputStream, 0, ::java::io::InputStream)
public:
	ProcessBuilder$NullInputStream();
	void init$();
	virtual int32_t available() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	static ::java::lang::ProcessBuilder$NullInputStream* INSTANCE;
};

	} // lang
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_lang_ProcessBuilder$NullInputStream_h_