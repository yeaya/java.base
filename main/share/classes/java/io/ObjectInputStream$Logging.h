#ifndef _java_io_ObjectInputStream$Logging_h_
#define _java_io_ObjectInputStream$Logging_h_
//$ class java.io.ObjectInputStream$Logging
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class System$Logger;
	}
}

namespace java {
	namespace io {

class ObjectInputStream$Logging : public ::java::lang::Object {
	$class(ObjectInputStream$Logging, 0, ::java::lang::Object)
public:
	ObjectInputStream$Logging();
	void init$();
	static ::java::lang::System$Logger* filterLogger;
};

	} // io
} // java

#endif // _java_io_ObjectInputStream$Logging_h_