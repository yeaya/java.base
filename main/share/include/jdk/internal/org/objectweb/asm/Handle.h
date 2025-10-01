#ifndef _jdk_internal_org_objectweb_asm$_Handle_h_
#define _jdk_internal_org_objectweb_asm$_Handle_h_
//$ class jdk.internal.org.objectweb.asm.Handle
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class $import Handle : public ::java::lang::Object {
	$class(Handle, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Handle();
	void init$(int32_t tag, $String* owner, $String* name, $String* descriptor);
	void init$(int32_t tag, $String* owner, $String* name, $String* descriptor, bool isInterface);
	virtual bool equals(Object$* object) override;
	$String* getDesc();
	$String* getName();
	$String* getOwner();
	int32_t getTag();
	virtual int32_t hashCode() override;
	bool isInterface();
	virtual $String* toString() override;
	int32_t tag = 0;
	$String* owner = nullptr;
	$String* name = nullptr;
	$String* descriptor = nullptr;
	bool isInterface$ = false;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_Handle_h_