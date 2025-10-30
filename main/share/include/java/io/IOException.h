#ifndef _java_io_IOException_h_
#define _java_io_IOException_h_
//$ class java.io.IOException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace io {

class $import IOException : public ::java::lang::Exception {
	$class(IOException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	IOException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x6C8073646525F0AB;
	IOException(const IOException& e);
	virtual void throw$() override;
	inline IOException* operator ->() {
		return (IOException*)throwing$;
	}
};

	} // io
} // java

#endif // _java_io_IOException_h_