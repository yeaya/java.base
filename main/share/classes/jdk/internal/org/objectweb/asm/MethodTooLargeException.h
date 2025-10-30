#ifndef _jdk_internal_org_objectweb_asm$_MethodTooLargeException_h_
#define _jdk_internal_org_objectweb_asm$_MethodTooLargeException_h_
//$ class jdk.internal.org.objectweb.asm.MethodTooLargeException
//$ extends java.lang.IndexOutOfBoundsException

#include <java/lang/IndexOutOfBoundsException.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class $export MethodTooLargeException : public ::java::lang::IndexOutOfBoundsException {
	$class(MethodTooLargeException, $NO_CLASS_INIT, ::java::lang::IndexOutOfBoundsException)
public:
	MethodTooLargeException();
	void init$($String* className, $String* methodName, $String* descriptor, int32_t codeSize);
	$String* getClassName();
	int32_t getCodeSize();
	$String* getDescriptor();
	$String* getMethodName();
	static const int64_t serialVersionUID = (int64_t)0x5E78AC6C04EF3F4A;
	$String* className = nullptr;
	$String* methodName = nullptr;
	$String* descriptor = nullptr;
	int32_t codeSize = 0;
	MethodTooLargeException(const MethodTooLargeException& e);
	virtual void throw$() override;
	inline MethodTooLargeException* operator ->() {
		return (MethodTooLargeException*)throwing$;
	}
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_MethodTooLargeException_h_