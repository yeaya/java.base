#ifndef _java_io_ObjectStreamClass$MemberSignature_h_
#define _java_io_ObjectStreamClass$MemberSignature_h_
//$ class java.io.ObjectStreamClass$MemberSignature
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Field;
			class Member;
			class Method;
		}
	}
}

namespace java {
	namespace io {

class ObjectStreamClass$MemberSignature : public ::java::lang::Object {
	$class(ObjectStreamClass$MemberSignature, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectStreamClass$MemberSignature();
	void init$(::java::lang::reflect::Field* field);
	void init$(::java::lang::reflect::Constructor* cons);
	void init$(::java::lang::reflect::Method* meth);
	::java::lang::reflect::Member* member = nullptr;
	$String* name = nullptr;
	$String* signature = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$MemberSignature_h_