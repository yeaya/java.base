#ifndef _jdk_internal_org_objectweb_asm$_ClassTooLargeException_h_
#define _jdk_internal_org_objectweb_asm$_ClassTooLargeException_h_
//$ class jdk.internal.org.objectweb.asm.ClassTooLargeException
//$ extends java.lang.IndexOutOfBoundsException

#include <java/lang/IndexOutOfBoundsException.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class $import ClassTooLargeException : public ::java::lang::IndexOutOfBoundsException {
	$class(ClassTooLargeException, $NO_CLASS_INIT, ::java::lang::IndexOutOfBoundsException)
public:
	ClassTooLargeException();
	void init$($String* className, int32_t constantPoolCount);
	$String* getClassName();
	int32_t getConstantPoolCount();
	static const int64_t serialVersionUID = (int64_t)0x023AF9FECF3BF67D;
	$String* className = nullptr;
	int32_t constantPoolCount = 0;
	ClassTooLargeException(const ClassTooLargeException& e);
	ClassTooLargeException wrapper$();
	virtual void throwWrapper$() override;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_ClassTooLargeException_h_