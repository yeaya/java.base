#ifndef _DefinesWriteObject_h_
#define _DefinesWriteObject_h_
//$ class DefinesWriteObject
//$ extends java.io.Externalizable

#include <java/io/Externalizable.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectInput;
		class ObjectOutput;
		class ObjectOutputStream;
	}
}

class $export DefinesWriteObject : public ::java::io::Externalizable {
	$class(DefinesWriteObject, $NO_CLASS_INIT, ::java::io::Externalizable)
public:
	DefinesWriteObject();
	void init$();
	void init$(int32_t i, Object$* o);
	static void main($StringArray* args);
	virtual void readExternal(::java::io::ObjectInput* in) override;
	virtual void writeExternal(::java::io::ObjectOutput* out) override;
	void writeObject(::java::io::ObjectOutputStream* out);
	int32_t intData = 0;
	$Object* objData = nullptr;
};

#endif // _DefinesWriteObject_h_