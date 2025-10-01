#ifndef _jdk_internal_org_objectweb_asm$_commons_SerialVersionUIDAdder$Item_h_
#define _jdk_internal_org_objectweb_asm$_commons_SerialVersionUIDAdder$Item_h_
//$ class jdk.internal.org.objectweb.asm.commons.SerialVersionUIDAdder$Item
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

class SerialVersionUIDAdder$Item : public ::java::lang::Comparable {
	$class(SerialVersionUIDAdder$Item, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	SerialVersionUIDAdder$Item();
	void init$($String* name, int32_t access, $String* descriptor);
	int32_t compareTo(::jdk::internal::org::objectweb::asm$::commons::SerialVersionUIDAdder$Item* item);
	virtual int32_t compareTo(Object$* item) override;
	virtual bool equals(Object$* other) override;
	virtual int32_t hashCode() override;
	$String* name = nullptr;
	int32_t access = 0;
	$String* descriptor = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_SerialVersionUIDAdder$Item_h_