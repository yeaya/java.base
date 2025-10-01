#ifndef _Foo4ExternalizableBlockData_h_
#define _Foo4ExternalizableBlockData_h_
//$ class Foo4ExternalizableBlockData
//$ extends java.io.Externalizable

#include <java/io/Externalizable.h>

namespace java {
	namespace io {
		class ObjectInput;
		class ObjectOutput;
	}
}

class Foo4ExternalizableBlockData : public ::java::io::Externalizable {
	$class(Foo4ExternalizableBlockData, $NO_CLASS_INIT, ::java::io::Externalizable)
public:
	Foo4ExternalizableBlockData();
	void init$();
	void init$(int32_t x, int32_t y, Object$* obj);
	virtual bool equals(Object$* other) override;
	virtual void readExternal(::java::io::ObjectInput* in) override;
	virtual void writeExternal(::java::io::ObjectOutput* out) override;
	static const int64_t serialVersionUID = (int64_t)47806;
	int32_t x = 0;
	int32_t y = 0;
	$Object* obj = nullptr;
};

#endif // _Foo4ExternalizableBlockData_h_