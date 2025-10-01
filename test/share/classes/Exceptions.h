#ifndef _Exceptions_h_
#define _Exceptions_h_
//$ class Exceptions
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

class $export Exceptions : public ::java::lang::Object {
	$class(Exceptions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Exceptions();
	void init$();
	static $Object* deserialize($bytes* bytes);
	static void hackCause($Throwable* t, $Throwable* cause);
	static void main($StringArray* args);
	static $bytes* serialize(Object$* o);
	static void testDirectoryIteratorException();
	static void testFileSystemException();
	static void testFileSystemException($String* thisFile, $String* otherFile, $String* reason);
};

#endif // _Exceptions_h_