#ifndef _java_io_Externalizable_h_
#define _java_io_Externalizable_h_
//$ interface java.io.Externalizable
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace io {
		class ObjectInput;
		class ObjectOutput;
	}
}

namespace java {
	namespace io {

class $export Externalizable : public ::java::io::Serializable {
	$interface(Externalizable, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	virtual void readExternal(::java::io::ObjectInput* in) {}
	virtual void writeExternal(::java::io::ObjectOutput* out) {}
};

	} // io
} // java

#endif // _java_io_Externalizable_h_