#ifndef _DummyFieldHolder_h_
#define _DummyFieldHolder_h_
//$ class DummyFieldHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Integer;
		class Long;
	}
}

class DummyFieldHolder : public ::java::lang::Object {
	$class(DummyFieldHolder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DummyFieldHolder();
	void init$(int8_t unused1, $Array<::java::lang::Long>* unused2);
	static ::java::lang::Integer* staticField;
	$String* instanceField = nullptr;
	int8_t instanceByteField = 0;
};

#endif // _DummyFieldHolder_h_