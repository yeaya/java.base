#ifndef _TestObjectStreamClass$TestObjectInputStream_h_
#define _TestObjectStreamClass$TestObjectInputStream_h_
//$ class TestObjectStreamClass$TestObjectInputStream
//$ extends java.io.ObjectInputStream

#include <java/io/ObjectInputStream.h>

namespace java {
	namespace io {
		class InputStream;
		class ObjectStreamClass;
	}
}

class $export TestObjectStreamClass$TestObjectInputStream : public ::java::io::ObjectInputStream {
	$class(TestObjectStreamClass$TestObjectInputStream, $NO_CLASS_INIT, ::java::io::ObjectInputStream)
public:
	TestObjectStreamClass$TestObjectInputStream();
	void init$(::java::io::InputStream* in);
	virtual ::java::io::ObjectStreamClass* getDescriptor();
	using ::java::io::ObjectInputStream::read;
	virtual ::java::io::ObjectStreamClass* readClassDescriptor() override;
	::java::io::ObjectStreamClass* objectStreamClass = nullptr;
};

#endif // _TestObjectStreamClass$TestObjectInputStream_h_