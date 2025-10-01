#ifndef _java_nio_file_InvalidPathException_h_
#define _java_nio_file_InvalidPathException_h_
//$ class java.nio.file.InvalidPathException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace nio {
		namespace file {

class $import InvalidPathException : public ::java::lang::IllegalArgumentException {
	$class(InvalidPathException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	InvalidPathException();
	void init$($String* input, $String* reason, int32_t index);
	void init$($String* input, $String* reason);
	virtual int32_t getIndex();
	virtual $String* getInput();
	virtual $String* getMessage() override;
	virtual $String* getReason();
	static const int64_t serialVersionUID = (int64_t)0x3C72FC8164703219;
	$String* input = nullptr;
	int32_t index = 0;
	InvalidPathException(const InvalidPathException& e);
	InvalidPathException wrapper$();
	virtual void throwWrapper$() override;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_InvalidPathException_h_